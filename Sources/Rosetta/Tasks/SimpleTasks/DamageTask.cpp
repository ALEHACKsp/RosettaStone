// This code is based on Sabberstone project.
// Copyright (c) 2017-2019 SabberStone Team, darkfriend77 & rnilva
// RosettaStone is hearthstone simulator using C++ with reinforcement learning.
// Copyright (c) 2019 Chris Ohk, Youngjoong Kim, SeungHyun Jeon

#include <Rosetta/Actions/Generic.hpp>
#include <Rosetta/Tasks/SimpleTasks/DamageTask.hpp>
#include <Rosetta/Tasks/SimpleTasks/DestroyTask.hpp>
#include <Rosetta/Tasks/SimpleTasks/IncludeTask.hpp>

#include <effolkronium/random.hpp>

using Random = effolkronium::random_static;

namespace RosettaStone::SimpleTasks
{
DamageTask::DamageTask(EntityType entityType, std::size_t damage,
                       bool isSpellDamage)
    : ITask(entityType), m_damage(damage), m_isSpellDamage(isSpellDamage)
{
    // Do nothing
}

DamageTask::DamageTask(EntityType entityType, std::size_t damage,
                       std::size_t randomDamage, bool isSpellDamage)
    : ITask(entityType),
      m_damage(damage),
      m_randomDamage(randomDamage),
      m_isSpellDamage(isSpellDamage)
{
    // Do nothing
}

TaskStatus DamageTask::Impl(Player* player)
{
    auto playables =
        IncludeTask::GetEntities(m_entityType, player, m_source, m_target);

    for (auto& playable : playables)
    {
        const auto source = dynamic_cast<Playable*>(m_source);
        const auto character = dynamic_cast<Character*>(playable);

        std::size_t randomDamage = 0;
        if (m_randomDamage > 0)
        {
            randomDamage = Random::get<std::size_t>(0, m_randomDamage);
        }

        const std::size_t damage = m_damage + randomDamage;

        Generic::TakeDamageToCharacter(
            source, character, static_cast<int>(damage), m_isSpellDamage);
    }

    return TaskStatus::COMPLETE;
}

ITask* DamageTask::CloneImpl()
{
    return new DamageTask(m_entityType, m_damage, m_randomDamage,
                          m_isSpellDamage);
}
}  // namespace RosettaStone::SimpleTasks
