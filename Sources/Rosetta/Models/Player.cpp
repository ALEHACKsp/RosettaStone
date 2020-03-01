// Copyright (c) 2019 Chris Ohk, Youngjoong Kim, SeungHyun Jeon

// We are making my contributions/submissions to this project solely in our
// personal capacity and are not conveying any rights to any intellectual
// property of any third parties.

#include <Rosetta/Cards/Cards.hpp>
#include <Rosetta/Commons/Utils.hpp>
#include <Rosetta/Models/HeroPower.hpp>
#include <Rosetta/Models/Player.hpp>
#include <Rosetta/Zones/DeckZone.hpp>
#include <Rosetta/Zones/FieldZone.hpp>
#include <Rosetta/Zones/GraveyardZone.hpp>
#include <Rosetta/Zones/HandZone.hpp>
#include <Rosetta/Zones/SecretZone.hpp>
#include <Rosetta/Zones/SetasideZone.hpp>

namespace RosettaStone
{
Player::Player() : playerID(USER_INVALID)
{
    m_deckZone = std::make_unique<DeckZone>(this);
    m_fieldZone = std::make_unique<FieldZone>(this);
    m_graveyardZone = std::make_unique<GraveyardZone>(this);
    m_handZone = std::make_unique<HandZone>(this);
    m_secretZone = std::make_unique<SecretZone>(this);
    m_setasideZone = std::make_unique<SetasideZone>(this);
}

Player::~Player()
{
    // TODO: This code will refactor.
    if (m_hero)
    {
        delete m_hero->heroPower;
    }
    delete m_hero;
}

void Player::RefCopy(const Player& rhs)
{
    if (this == &rhs)
    {
        return;
    }

    delete m_hero;

    nickname = rhs.nickname;
    playerType = rhs.playerType;
    playerID = rhs.playerID;

    playState = rhs.playState;
    mulliganState = rhs.mulliganState;
    choice = rhs.choice;

    m_hero = rhs.m_hero;
    opponent = rhs.opponent;

    m_deckZone->RefCopy(rhs.m_deckZone.get());
    m_fieldZone->RefCopy(rhs.m_fieldZone.get());
    m_graveyardZone->RefCopy(rhs.m_graveyardZone.get());
    m_handZone->RefCopy(rhs.m_handZone.get());
    m_secretZone->RefCopy(rhs.m_secretZone.get());
    m_setasideZone->RefCopy(rhs.m_setasideZone.get());

    m_gameTags = rhs.m_gameTags;
    currentSpellPower = rhs.currentSpellPower;
}

FieldZone* Player::GetFieldZone() const
{
    return m_fieldZone.get();
}

DeckZone* Player::GetDeckZone() const
{
    return m_deckZone.get();
}

GraveyardZone* Player::GetGraveyardZone() const
{
    return m_graveyardZone.get();
}

HandZone* Player::GetHandZone() const
{
    return m_handZone.get();
}

SecretZone* Player::GetSecretZone() const
{
    return m_secretZone.get();
}

SetasideZone* Player::GetSetasideZone() const
{
    return m_setasideZone.get();
}

Hero* Player::GetHero() const
{
    return m_hero;
}

void Player::SetHero(Hero* hero)
{
    m_hero = hero;
}

HeroPower& Player::GetHeroPower() const
{
    return *m_hero->heroPower;
}

Weapon& Player::GetWeapon() const
{
    return *m_hero->weapon;
}

int Player::GetGameTag(GameTag tag) const
{
    if (m_gameTags.find(tag) == m_gameTags.end())
    {
        return 0;
    }

    return m_gameTags.at(tag);
}

void Player::SetGameTag(GameTag tag, int value)
{
    m_gameTags.insert_or_assign(tag, value);
}

int Player::GetTimeOut()
{
    return GetGameTag(GameTag::TIMEOUT) +
           playerAuraEffects.GetValue(GameTag::TIMEOUT);
}

void Player::SetTimeOut(int value)
{
    SetGameTag(GameTag::TIMEOUT, value);
}

bool Player::IsHealingDoesDamage()
{
    return playerAuraEffects.GetValue(GameTag::HEALING_DOES_DAMAGE) > 0;
}

int Player::GetTotalMana() const
{
    return GetGameTag(GameTag::RESOURCES);
}

void Player::SetTotalMana(int amount)
{
    SetGameTag(GameTag::RESOURCES, amount);
}

int Player::GetUsedMana() const
{
    return GetGameTag(GameTag::RESOURCES_USED);
}

void Player::SetUsedMana(int amount)
{
    SetGameTag(GameTag::RESOURCES_USED, amount);
}

int Player::GetTemporaryMana() const
{
    return GetGameTag(GameTag::TEMP_RESOURCES);
}

void Player::SetTemporaryMana(int amount)
{
    SetGameTag(GameTag::TEMP_RESOURCES, amount);
}

int Player::GetOverloadOwed() const
{
    return GetGameTag(GameTag::OVERLOAD_OWED);
}

void Player::SetOverloadOwed(int amount)
{
    SetGameTag(GameTag::OVERLOAD_OWED, amount);
}

int Player::GetOverloadLocked() const
{
    return GetGameTag(GameTag::OVERLOAD_LOCKED);
}

void Player::SetOverloadLocked(int amount)
{
    SetGameTag(GameTag::OVERLOAD_LOCKED, amount);
}

int Player::GetRemainingMana() const
{
    return GetTotalMana() + GetTemporaryMana() -
           (GetUsedMana() + GetOverloadLocked());
}

bool Player::IsComboActive() const
{
    return GetGameTag(GameTag::COMBO_ACTIVE) == 1;
}

void Player::SetComboActive(bool isActive)
{
    SetGameTag(GameTag::COMBO_ACTIVE, isActive ? 1 : 0);
}

int Player::GetNumCardsPlayedThisTurn() const
{
    return GetGameTag(GameTag::NUM_CARDS_PLAYED_THIS_TURN);
}

void Player::SetNumCardsPlayedThisTurn(int value)
{
    SetGameTag(GameTag::NUM_CARDS_PLAYED_THIS_TURN, value);
}

int Player::GetNumMinionsPlayedThisTurn() const
{
    return GetGameTag(GameTag::NUM_MINIONS_PLAYED_THIS_TURN);
}

void Player::SetNumMinionsPlayedThisTurn(int value)
{
    SetGameTag(GameTag::NUM_MINIONS_PLAYED_THIS_TURN, value);
}

int Player::GetNumFriendlyMinionsDiedThisTurn() const
{
    return GetGameTag(GameTag::NUM_FRIENDLY_MINIONS_THAT_DIED_THIS_TURN);
}

void Player::SetNumFriendlyMinionsDiedThisTurn(int value)
{
    SetGameTag(GameTag::NUM_FRIENDLY_MINIONS_THAT_DIED_THIS_TURN, value);
}

void Player::UpgradeGalakrond()
{
    // If the player has already turned into Galakrond, return false.
    if (galakrond->GetZoneType() == ZoneType::PLAY)
    {
        return;
    }

    const auto cardID = galakrond->card->id;

    // If Galakrond have already upgraded to the final stage, return false.
    if (EndsWith(cardID, "t3"))
    {
        return;
    }

    // NOTE: The length of level 1 card IDs is 7.
    // For example, "DRG_600".
    if (cardID.size() == 7)
    {
        galakrond->card = Cards::FindCardByID(cardID + "t2");
    }
    else if (EndsWith(cardID, "t2"))
    {
        galakrond->card = Cards::FindCardByID(cardID.substr(0, 7) + "t3");
    }
}

int Player::GetInvoke() const
{
    return GetGameTag(GameTag::INVOKE_COUNTER);
}

void Player::IncreaseInvoke()
{
    const int val = GetGameTag(GameTag::INVOKE_COUNTER);
    SetGameTag(GameTag::INVOKE_COUNTER, val + 1);
}

void Player::AddHeroAndPower(Card* heroCard, Card* powerCard)
{
    Weapon* weapon = nullptr;
    AuraEffects* auraEffects = nullptr;

    if (m_hero != nullptr)
    {
        m_setasideZone->MoveTo(m_hero, m_setasideZone->GetCount());
        m_setasideZone->MoveTo(m_hero->heroPower, m_setasideZone->GetCount());

        if (m_hero->weapon != nullptr)
        {
            weapon = m_hero->weapon;
        }

        auraEffects = m_hero->auraEffects;
    }

    m_hero = dynamic_cast<Hero*>(GetFromCard(this, heroCard));
    m_hero->SetZoneType(ZoneType::PLAY);

    m_hero->heroPower = dynamic_cast<HeroPower*>(GetFromCard(this, powerCard));

    m_hero->weapon = weapon;
    m_hero->auraEffects = auraEffects;
}
}  // namespace RosettaStone
