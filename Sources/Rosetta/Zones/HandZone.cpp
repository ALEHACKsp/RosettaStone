// Copyright (c) 2019 Chris Ohk, Youngjoong Kim, SeungHyun Jeon

// We are making my contributions/submissions to this project solely in our
// personal capacity and are not conveying any rights to any intellectual
// property of any third parties.

#include <Rosetta/Auras/SummoningPortalAura.hpp>
#include <Rosetta/Commons/Constants.hpp>
#include <Rosetta/Games/Game.hpp>
#include <Rosetta/Models/Enchantment.hpp>
#include <Rosetta/Zones/HandZone.hpp>

namespace RosettaStone
{
HandZone::HandZone(Player* player)
    : PositioningZone(ZoneType::HAND, MAX_HAND_SIZE)
{
    m_game = player->game;
    m_player = player;
}

void HandZone::Add(Playable* entity, int zonePos)
{
    PositioningZone::Add(entity, zonePos);

    if (const auto aura = entity->card->power.GetAura(); aura)
    {
        if (auto effect = dynamic_cast<AdaptiveCostEffect*>(aura); effect)
        {
            effect->Activate(entity);
        }
    }

    if (auto trigger = entity->card->power.GetTrigger(); trigger)
    {
        trigger->Activate(entity, TriggerActivation::HAND);
    }

    for (auto& iAura : entity->game->auras)
    {
        if (auto aura = dynamic_cast<Aura*>(iAura);
            aura && aura->GetType() == AuraType::HAND)
        {
            aura->Apply(entity);
        }
    }
}

Playable* HandZone::Remove(Playable* entity)
{
    entity->ResetCost();

    for (auto* enchant : entity->appliedEnchantments)
    {
        if (enchant->activatedTrigger != nullptr)
        {
            enchant->activatedTrigger->Remove();
        }
    }

    return PositioningZone::Remove(entity);
}

int HandZone::FindIndex(Entity* entity) const
{
    for (std::size_t idx = 0; idx < MAX_HAND_SIZE; ++idx)
    {
        if (m_entities[idx] == entity)
        {
            return idx;
        }
    }

    return -1;
}
}  // namespace RosettaStone
