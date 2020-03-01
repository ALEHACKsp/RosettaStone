// Copyright (c) 2019 Chris Ohk, Youngjoong Kim, SeungHyun Jeon

// We are making my contributions/submissions to this project solely in our
// personal capacity and are not conveying any rights to any intellectual
// property of any third parties.

#include <Rosetta/Games/Game.hpp>
#include <Rosetta/Models/Player.hpp>
#include <Rosetta/Zones/FieldZone.hpp>
#include <Rosetta/Zones/SetasideZone.hpp>

namespace RosettaStone
{
FieldZone::FieldZone(Player* player)
    : PositioningZone(ZoneType::PLAY, MAX_FIELD_SIZE)
{
    m_game = player->game;
    m_player = player;
}

void FieldZone::RefCopy(FieldZone* rhs) const
{
    for (int i = 0; i < m_count; ++i)
    {
        delete m_entities[i];
    }

    for (int i = 0; i < rhs->m_count; ++i)
    {
        m_entities[i] = rhs->m_entities[i];
    }
}

std::vector<Minion*> FieldZone::GetAll()
{
    return PositioningZone::GetAll();
}

std::vector<Minion*> FieldZone::GetAll() const
{
    return PositioningZone::GetAll();
}

void FieldZone::Add(Playable* entity, int zonePos)
{
    const auto minion = dynamic_cast<Minion*>(entity);

    PositioningZone::Add(minion, zonePos);

    if (minion->player == minion->game->GetCurrentPlayer())
    {
        if (!minion->HasCharge())
        {
            if (minion->IsRush())
            {
                minion->SetAttackableByRush(true);
                minion->game->rushMinions.emplace_back(minion->id);
            }
            else
            {
                minion->SetExhausted(true);
            }
        }
    }

    minion->orderOfPlay = minion->game->GetNextOOP();

    ActivateAura(minion);

    for (int i = static_cast<int>(adjacentAuras.size()) - 1; i >= 0; --i)
    {
        adjacentAuras[i]->SetIsFieldChanged(true);
    }
}

Playable* FieldZone::Remove(Playable* entity)
{
    const auto minion = dynamic_cast<Minion*>(entity);

    RemoveAura(minion);

    for (int i = static_cast<int>(adjacentAuras.size()) - 1; i >= 0; --i)
    {
        adjacentAuras[i]->SetIsFieldChanged(true);
    }

    return PositioningZone::Remove(minion);
}

void FieldZone::Replace(Minion* oldEntity, Minion* newEntity)
{
    const int pos = oldEntity->GetZonePosition();

    // Remove old entity
    RemoveAura(oldEntity);
    for (auto& aura : auras)
    {
        aura->NotifyEntityRemoved(oldEntity);
    }
    oldEntity->SetZonePosition(0);
    oldEntity->player->GetSetasideZone()->Add(oldEntity);

    // Add new entity
    newEntity->orderOfPlay = newEntity->game->GetNextOOP();
    m_entities[pos] = dynamic_cast<Minion*>(newEntity);
    newEntity->SetZonePosition(pos);
    newEntity->SetZoneType(m_type);
    newEntity->zone = this;
    ActivateAura(newEntity);
    for (auto& aura : auras)
    {
        aura->NotifyEntityAdded(newEntity);
    }
    for (auto& aura : adjacentAuras)
    {
        aura->SetIsFieldChanged(true);
    }

    if (!newEntity->HasCharge())
    {
        if (newEntity->IsRush())
        {
            newEntity->SetAttackableByRush(true);
            newEntity->game->rushMinions.emplace_back(newEntity->id);
        }
        else
        {
            newEntity->SetExhausted(true);
        }
    }
}

int FieldZone::FindIndex(Minion* minion) const
{
    for (std::size_t idx = 0; idx < MAX_FIELD_SIZE; ++idx)
    {
        if (m_entities[idx] == minion)
        {
            return idx;
        }
    }

    return -1;
}

void FieldZone::ActivateAura(Minion* entity)
{
    if (entity->card->power.GetTrigger())
    {
        entity->card->power.GetTrigger()->Activate(entity);
    }

    if (entity->card->power.GetAura())
    {
        entity->card->power.GetAura()->Activate(entity);
    }

    const int spellPower = entity->GetGameTag(GameTag::SPELLPOWER);
    if (spellPower > 0)
    {
        entity->player->currentSpellPower += spellPower;
    }
}

void FieldZone::RemoveAura(Minion* entity)
{
    if (entity->ongoingEffect != nullptr)
    {
        entity->ongoingEffect->Remove();
    }

    const int spellPower = entity->GetGameTag(GameTag::SPELLPOWER);
    if (entity->player->currentSpellPower > 0 && spellPower > 0)
    {
        entity->player->currentSpellPower -= spellPower;
    }
}
}  // namespace RosettaStone
