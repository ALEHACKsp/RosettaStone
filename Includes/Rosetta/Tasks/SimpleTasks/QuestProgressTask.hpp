// This code is based on Sabberstone project.
// Copyright (c) 2017-2019 SabberStone Team, darkfriend77 & rnilva
// RosettaStone is hearthstone simulator using C++ with reinforcement learning.
// Copyright (c) 2019 Chris Ohk, Youngjoong Kim, SeungHyun Jeon

#ifndef ROSETTASTONE_QUEST_PROGRESS_TASK_HPP
#define ROSETTASTONE_QUEST_PROGRESS_TASK_HPP

#include <Rosetta/Tasks/ITask.hpp>

namespace RosettaStone::SimpleTasks
{
//!
//! \brief QuestProgressTask class.
//!
//! This class represents the task for processing quest progress.
//!
class QuestProgressTask : public ITask
{
 public:
    //! Constructs task with given \p questRewardID.
    //! \param questRewardID The card ID that is a reward of the quest.
    explicit QuestProgressTask(const std::string& questRewardID);

    //! Constructs task with given \p rewardTasks.
    //! \param rewardTasks A list of tasks to run that is a reward of the quest.
    explicit QuestProgressTask(std::vector<std::shared_ptr<ITask>> rewardTasks);

    //! Constructs task with given \p questRewardID and \p rewardTasks.
    //! \param questRewardID The card ID that is a reward of the quest.
    //! \param rewardTasks A list of tasks to run that is a reward of the quest.
    explicit QuestProgressTask(const std::string& questRewardID,
                               std::vector<std::shared_ptr<ITask>> rewardTasks);

 private:
    //! Processes task logic internally and returns meta data.
    //! \param player The player to run task.
    //! \return The result of task processing.
    TaskStatus Impl(Player* player) override;

    //! Internal method of Clone().
    //! \return The cloned task.
    std::unique_ptr<ITask> CloneImpl() override;

    Card* m_card = nullptr;
    std::vector<std::shared_ptr<ITask>> m_tasks;
};
}  // namespace RosettaStone::SimpleTasks

#endif  // ROSETTASTONE_QUEST_PROGRESS_TASK_HPP
