// This code is based on Sabberstone project.
// Copyright (c) 2017-2018 SabberStone Team, darkfriend77 & rnilva
// Hearthstone++ is hearthstone simulator using C++ with reinforcement learning.
// Copyright (c) 2018 Chris Ohk, Youngjoong Kim, SeungHyun Jeon

#include <hspp/Actions/PlayCard.hpp>
#include <hspp/Tasks/PlayerTasks/PlayCardTask.hpp>

namespace Hearthstonepp::PlayerTasks
{
PlayCardTask::PlayCardTask(Entity* source, Entity* target, int fieldPos)
    : ITask(source, target), m_fieldPos(fieldPos)
{
    // Do nothing
}

TaskID PlayCardTask::GetTaskID() const
{
    return TaskID::PLAY_CARD;
}

TaskStatus PlayCardTask::Impl(Player& player)
{
    auto target = dynamic_cast<Character*>(m_target);
    Generic::PlayCard(player, m_source, target, m_fieldPos);

    return TaskStatus::COMPLETE;
}
}  // namespace Hearthstonepp::PlayerTasks