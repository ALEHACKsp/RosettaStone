// This code is based on Sabberstone project.
// Copyright (c) 2017-2019 SabberStone Team, darkfriend77 & rnilva
// RosettaStone is hearthstone simulator using C++ with reinforcement learning.
// Copyright (c) 2019 Chris Ohk, Youngjoong Kim, SeungHyun Jeon

#include <Rosetta/Auras/SummoningPortalAura.hpp>
#include <Rosetta/Games/Game.hpp>
#include <Rosetta/Models/Playable.hpp>
#include <Rosetta/Models/Player.hpp>
#include <Rosetta/Zones/HandZone.hpp>

namespace RosettaStone
{
SummoningPortalAura::SummoningPortalAura()
    : Aura(AuraType::HAND, std::vector<IEffect*>{})
{
    // Do nothing
}

void SummoningPortalAura::Activate(Playable* owner, bool cloning)
{
    auto instance = new SummoningPortalAura(*this, *owner);
    owner->ongoingEffect = instance;
    owner->player->GetHandZone()->auras.emplace_back(instance);
    owner->game->auras.emplace_back(instance);

    if (!cloning)
    {
        instance->m_auraUpdateInstQueue.Push(
            AuraUpdateInstruction(AuraInstruction::ADD_ALL), 1);
    }
}

void SummoningPortalAura::Update()
{
    bool isAddAllProcessed = false;

    while (m_auraUpdateInstQueue.GetCount() > 0)
    {
        AuraUpdateInstruction inst = m_auraUpdateInstQueue.Pop();

        switch (inst.instruction)
        {
            case AuraInstruction::ADD:
            {
                if (isAddAllProcessed)
                {
                    break;
                }

                Apply(inst.source);
                m_appliedEntities.emplace_back(inst.source);
            }
            break;
            case AuraInstruction::ADD_ALL:
            {
                isAddAllProcessed = true;
                AddAll();
            }
            break;
            case AuraInstruction::REMOVE:
            {
                const auto iter =
                    std::find(m_appliedEntities.begin(),
                              m_appliedEntities.end(), inst.source);

                if (iter != m_appliedEntities.end())
                {
                    m_appliedEntities.erase(iter);
                }
                else
                {
                    break;
                }

                Disapply(inst.source);
            }
            break;
            case AuraInstruction::REMOVE_ALL:
            {
                RemoveAll();
            }
            break;
            default:
                throw std::invalid_argument(
                    "SummoningPortalAura::Update() - Invalid aura "
                    "instruction!");
        }
    }
}

void SummoningPortalAura::Clone(Playable* clone)
{
    Activate(clone, true);
}

void SummoningPortalAura::Apply(Playable* playable)
{
    CalculateCost(playable);
}

void SummoningPortalAura::Disapply(Playable* playable)
{
    CalculateCost(playable);
}

SummoningPortalAura::SummoningPortalAura(SummoningPortalAura& prototype,
                                         Playable& owner)
    : Aura(prototype, owner)
{
    // Do nothing
}

void SummoningPortalAura::AddAll()
{
    for (auto& playable : m_owner->player->GetHandZone()->GetAll())
    {
        Apply(playable);
        m_appliedEntities.emplace_back(playable);
    }
}

void SummoningPortalAura::RemoveAll()
{
    EraseIf(m_owner->game->auras, [this](IAura* aura) { return aura == this; });

    for (auto& entity : m_appliedEntities)
    {
        Disapply(entity);
    }
}

void SummoningPortalAura::CalculateCost(Playable* playable) const
{
    std::size_t numSPAura = 0;

    for (auto& aura : m_owner->game->auras)
    {
        if (dynamic_cast<SummoningPortalAura*>(aura))
        {
            ++numSPAura;
        }
    }

    auto minion = dynamic_cast<Minion*>(playable);
    if (minion == nullptr)
    {
        return;
    }

    const int cardValue = minion->card->GetCost();
    int cost = cardValue;

    for (std::size_t i = 0; i < numSPAura; ++i)
    {
        cost = cost > 2 ? cost - 2 : 1;
    }

    minion->SetCost(cost);

    if (auto costManager = playable->costManager; costManager)
    {
        costManager->QueueUpdate();
    }
}
}  // namespace RosettaStone
