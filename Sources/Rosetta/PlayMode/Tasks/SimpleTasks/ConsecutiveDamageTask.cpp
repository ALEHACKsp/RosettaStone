// This code is based on Sabberstone project.
// Copyright (c) 2017-2019 SabberStone Team, darkfriend77 & rnilva
// RosettaStone is hearthstone simulator using C++ with reinforcement learning.
// Copyright (c) 2019 Chris Ohk, Youngjoong Kim, SeungHyun Jeon

#include <Rosetta/PlayMode/Actions/Generic.hpp>
#include <Rosetta/PlayMode/Games/Game.hpp>
#include <Rosetta/PlayMode/Tasks/SimpleTasks/ConsecutiveDamageTask.hpp>
#include <Rosetta/PlayMode/Tasks/SimpleTasks/DestroyTask.hpp>
#include <Rosetta/PlayMode/Tasks/SimpleTasks/IncludeTask.hpp>

#include <effolkronium/random.hpp>

#include <utility>

using Random = effolkronium::random_static;

namespace RosettaStone::PlayMode::SimpleTasks
{
ConsecutiveDamageTask::ConsecutiveDamageTask(EntityType entityType,
                                             std::vector<int> damages,
                                             bool isSpellDamage)
    : ITask(entityType),
      m_damages(std::move(damages)),
      m_isSpellDamage(isSpellDamage)
{
    // Do nothing
}

TaskStatus ConsecutiveDamageTask::Impl(Player* player)
{
    for (auto& damage : m_damages)
    {
        const int spellPower = m_source->player->GetCurrentSpellPower();
        auto playables =
            IncludeTask::GetEntities(m_entityType, player, m_source, m_target);

        for (auto& playable : playables)
        {
            const auto source = dynamic_cast<Playable*>(m_source);
            const auto character = dynamic_cast<Character*>(playable);

            if (m_isSpellDamage)
            {
                damage += spellPower;
            }

            Generic::TakeDamageToCharacter(source, character, damage,
                                           m_isSpellDamage);
        }

        player->game->ProcessDestroyAndUpdateAura();
    }

    return TaskStatus::COMPLETE;
}

std::unique_ptr<ITask> ConsecutiveDamageTask::CloneImpl()
{
    return std::make_unique<ConsecutiveDamageTask>(m_entityType, m_damages,
                                                   m_isSpellDamage);
}
}  // namespace RosettaStone::PlayMode::SimpleTasks
