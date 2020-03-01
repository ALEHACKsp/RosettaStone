// Copyright (c) 2019 Chris Ohk, Youngjoong Kim, SeungHyun Jeon

// We are making my contributions/submissions to this project solely in our
// personal capacity and are not conveying any rights to any intellectual
// property of any third parties.

#include <Utils/TestUtils.hpp>
#include "doctest_proxy.hpp"

#include <Rosetta/Games/Game.hpp>
#include <Rosetta/Models/Enchantment.hpp>
#include <Rosetta/Models/Minion.hpp>
#include <Rosetta/Models/Player.hpp>
#include <Rosetta/Zones/FieldZone.hpp>
#include <Rosetta/Zones/GraveyardZone.hpp>

namespace TestUtils
{
Card GenerateMinionCard(std::string&& id, int attack, int health)
{
    Card card;
    card.gameTags[GameTag::CARDTYPE] = static_cast<int>(CardType::MINION);

    card.id = std::move(id);
    card.gameTags[GameTag::ATK] = attack;
    card.gameTags[GameTag::DAMAGE] = 0;
    card.gameTags[GameTag::HEALTH] = health;
    card.gameTags[GameTag::COST] = 0;

    return card;
}

Card GenerateWeaponCard(std::string&& id, int attack, int durability)
{
    Card card;
    card.gameTags[GameTag::CARDTYPE] = static_cast<int>(CardType::WEAPON);

    card.id = std::move(id);
    card.gameTags[GameTag::ATK] = attack;
    card.gameTags[GameTag::DURABILITY] = durability;

    return card;
}

Card GenerateEnchantmentCard(std::string&& id)
{
    Card card;
    card.gameTags[GameTag::CARDTYPE] = static_cast<int>(CardType::ENCHANTMENT);

    card.id = std::move(id);

    return card;
}

void PlayMinionCard(Player* player, Card* card)
{
    FieldZone& fieldZone = *(player->GetFieldZone());
    const std::map<GameTag, int> tags;

    const auto minion = new Minion(player, card, tags);
    player->game->entityList.emplace(minion->id, minion);

    fieldZone.Add(minion);
    fieldZone[minion->GetZonePosition()]->player = player;
}

void PlayWeaponCard(Player* player, Card* card)
{
    const std::map<GameTag, int> tags;

    const auto weapon = new Weapon(player, card, tags);
    player->game->entityList.emplace(weapon->id, weapon);

    player->GetHero()->AddWeapon(*weapon);
}

void PlayEnchantmentCard(Player* player, Card* card, Entity* target)
{
    GraveyardZone& graveyardZone = *(player->GetGraveyardZone());
    const std::map<GameTag, int> tags;

    const auto enchantment = new Enchantment(player, card, tags, target, -1);
    player->game->entityList.emplace(enchantment->id, enchantment);

    graveyardZone.Add(enchantment);
}

void ExpectCardEqual(const Card& card1, const Card& card2)
{
    CHECK_EQ(card1.id, card2.id);
    CHECK_EQ(card1.name, card2.name);
    CHECK_EQ(card1.text, card2.text);
    CHECK_EQ(card1.GetCardClass(), card2.GetCardClass());
    CHECK_EQ(card1.GetCardSet(), card2.GetCardSet());
    CHECK_EQ(card1.GetCardType(), card2.GetCardType());
    CHECK_EQ(card1.GetFaction(), card2.GetFaction());
    CHECK_EQ(card1.GetRace(), card2.GetRace());
    CHECK_EQ(card1.GetRarity(), card2.GetRarity());
    CHECK_EQ(card1.gameTags.at(GameTag::COLLECTIBLE),
              card2.gameTags.at(GameTag::COLLECTIBLE));
    CHECK_EQ(card1.gameTags.at(GameTag::COST),
              card2.gameTags.at(GameTag::COST));
    CHECK_EQ(card1.gameTags.at(GameTag::ATK), card2.gameTags.at(GameTag::ATK));
    CHECK_EQ(card1.gameTags.at(GameTag::HEALTH),
              card2.gameTags.at(GameTag::HEALTH));
    CHECK_EQ(card1.gameTags.at(GameTag::DURABILITY),
              card2.gameTags.at(GameTag::DURABILITY));
    CHECK_EQ(card1.gameTags, card2.gameTags);
    CHECK_EQ(card1.playRequirements, card2.playRequirements);
    CHECK_EQ(card1.entourages, card2.entourages);
    CHECK_EQ(card1.maxAllowedInDeck, card2.maxAllowedInDeck);
}

std::vector<Card*> GetChoiceCards(Game& game)
{
    if (!game.GetCurrentPlayer()->choice.has_value())
    {
        throw std::logic_error("There is no active choices.");
    }

    std::vector<std::size_t> choices = game.GetCurrentPlayer()->choice->choices;

    std::vector<Card*> result;
    result.reserve(choices.size());

    for (std::size_t choice : choices)
    {
        result.emplace_back(game.entityList[choice]->card);
    }

    return result;
}
}  // namespace TestUtils
