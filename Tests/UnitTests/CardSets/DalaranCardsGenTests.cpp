// Copyright (c) 2019 Chris Ohk, Youngjoong Kim, SeungHyun Jeon

// We are making my contributions/submissions to this project solely in our
// personal capacity and are not conveying any rights to any intellectual
// property of any third parties.

#include <Utils/CardSetUtils.hpp>
#include <Utils/TestUtils.hpp>

#include <Rosetta/Actions/Draw.hpp>
#include <Rosetta/Cards/Cards.hpp>
#include <Rosetta/Zones/DeckZone.hpp>
#include <Rosetta/Zones/FieldZone.hpp>
#include <Rosetta/Zones/HandZone.hpp>
#include <Rosetta/Zones/SecretZone.hpp>

using namespace RosettaStone;
using namespace PlayerTasks;
using namespace SimpleTasks;

// ------------------------------------------ SPELL - DRUID
// [DAL_351] Blessing of the Ancients - COST:3
// - Set: Dalaran, Rarity: Common
// --------------------------------------------------------
// Text: <b>Twinspell</b> Give your minions +1/+1.
// --------------------------------------------------------
// GameTag:
// - TWINSPELL_COPY = 54128
// - TWINSPELL = 1
// --------------------------------------------------------
// PlayReq:
// - REQ_MINION_TARGET = 0
// --------------------------------------------------------
TEST(DruidDalaranTest, DAL_351_BlessingOfTheAncients)
{
    GameConfig config;
    config.player1Class = CardClass::DRUID;
    config.player2Class = CardClass::WARRIOR;
    config.startPlayer = PlayerType::PLAYER1;
    config.doFillDecks = false;
    config.autoRun = false;

    Game game(config);
    game.Start();
    game.ProcessUntil(Step::MAIN_START);

    Player* curPlayer = game.GetCurrentPlayer();
    Player* opPlayer = game.GetOpponentPlayer();
    curPlayer->SetTotalMana(10);
    curPlayer->SetUsedMana(0);
    opPlayer->SetTotalMana(10);
    opPlayer->SetUsedMana(0);

    auto& curHand = *(curPlayer->GetHandZone());
    auto& curField = *(curPlayer->GetFieldZone());

    const auto card1 =
        Generic::DrawCard(curPlayer, Cards::FindCardByID("DAL_351"));
    const auto card2 =
        Generic::DrawCard(curPlayer, Cards::FindCardByName("Wisp"));
    const auto card3 =
        Generic::DrawCard(curPlayer, Cards::FindCardByName("Wisp"));
    const auto card4 =
        Generic::DrawCard(curPlayer, Cards::FindCardByName("Wisp"));

    game.Process(curPlayer, PlayCardTask::Minion(card2));
    game.Process(curPlayer, PlayCardTask::Minion(card3));
    game.Process(curPlayer, PlayCardTask::Minion(card4));
    EXPECT_EQ(curField[0]->GetAttack(), 1);
    EXPECT_EQ(curField[0]->GetHealth(), 1);
    EXPECT_EQ(curField[1]->GetAttack(), 1);
    EXPECT_EQ(curField[1]->GetHealth(), 1);
    EXPECT_EQ(curField[2]->GetAttack(), 1);
    EXPECT_EQ(curField[2]->GetHealth(), 1);

    game.Process(curPlayer, PlayCardTask::Spell(card1));
    EXPECT_EQ(curHand.GetCount(), 1);
    EXPECT_EQ(curHand[0]->card->id, "DAL_351ts");
    EXPECT_EQ(curField[0]->GetAttack(), 2);
    EXPECT_EQ(curField[0]->GetHealth(), 2);
    EXPECT_EQ(curField[1]->GetAttack(), 2);
    EXPECT_EQ(curField[1]->GetHealth(), 2);
    EXPECT_EQ(curField[2]->GetAttack(), 2);
    EXPECT_EQ(curField[2]->GetHealth(), 2);

    game.Process(curPlayer, PlayCardTask::Spell(curHand[0]));
    EXPECT_EQ(curHand.GetCount(), 0);
    EXPECT_EQ(curField[0]->GetAttack(), 3);
    EXPECT_EQ(curField[0]->GetHealth(), 3);
    EXPECT_EQ(curField[1]->GetAttack(), 3);
    EXPECT_EQ(curField[1]->GetHealth(), 3);
    EXPECT_EQ(curField[2]->GetAttack(), 3);
    EXPECT_EQ(curField[2]->GetHealth(), 3);
}

// ----------------------------------------- MINION - DRUID
// [DAL_355] Lifeweaver - COST:3 [ATK:2/HP:5]
// - Set: Dalaran, Rarity: Rare
// --------------------------------------------------------
// Text: Whenever you restore Health,
//       add a random Druid spell to your hand.
// --------------------------------------------------------
TEST(DruidDalaranTest, DAL_355_Lifeweaver)
{
    GameConfig config;
    config.player1Class = CardClass::DRUID;
    config.player2Class = CardClass::PRIEST;
    config.startPlayer = PlayerType::PLAYER1;
    config.doFillDecks = true;
    config.autoRun = false;

    Game game(config);
    game.Start();
    game.ProcessUntil(Step::MAIN_START);

    Player* curPlayer = game.GetCurrentPlayer();
    Player* opPlayer = game.GetOpponentPlayer();
    curPlayer->SetTotalMana(10);
    curPlayer->SetUsedMana(0);
    opPlayer->SetTotalMana(10);
    opPlayer->SetUsedMana(0);
    curPlayer->GetHero()->SetDamage(10);

	auto& curField = *(curPlayer->GetFieldZone());

    const auto card1 = Generic::DrawCard(
        curPlayer, Cards::FindCardByName("Lifeweaver"));
    const auto card2 =
        Generic::DrawCard(curPlayer, Cards::FindCardByName("Healing Touch"));

	game.Process(curPlayer, PlayCardTask::Minion(card1));
    game.Process(curPlayer,
                 PlayCardTask::SpellTarget(card2, curPlayer->GetHero()));
    EXPECT_EQ(curPlayer->GetHero()->GetHealth(), 28);
    EXPECT_EQ(curPlayer->GetHandZone()->GetCount(), 4);
}  

// ------------------------------------------ MINION - MAGE
// [DAL_163] Messenger Raven - COST:3 [ATK:3/HP:2]
// - Race: Beast, Faction: Neutral, Set: Dalaran, Rarity: Common
// --------------------------------------------------------
// Text: <b>Battlecry:</b> <b>Discover</b> a Mage minion.
// --------------------------------------------------------
// GameTag:
// - BATTLECRY = 1
// --------------------------------------------------------
// RefTag:
// - DISCOVER = 1
// --------------------------------------------------------
TEST(MageDalaranTest, DAL_163_MessengerRaven)
{
    GameConfig config;
    config.player1Class = CardClass::MAGE;
    config.player2Class = CardClass::WARRIOR;
    config.startPlayer = PlayerType::PLAYER1;
    config.doFillDecks = false;
    config.autoRun = false;

    Game game(config);
    game.Start();
    game.ProcessUntil(Step::MAIN_START);

    Player* curPlayer = game.GetCurrentPlayer();
    Player* opPlayer = game.GetOpponentPlayer();
    curPlayer->SetTotalMana(10);
    curPlayer->SetUsedMana(0);
    opPlayer->SetTotalMana(10);
    opPlayer->SetUsedMana(0);

    const auto card1 =
        Generic::DrawCard(curPlayer, Cards::FindCardByName("Messenger Raven"));

    game.Process(curPlayer, PlayCardTask::Minion(card1));
    EXPECT_EQ(curPlayer->choice.has_value(), true);

    auto cards = TestUtils::GetChoiceCards(game);
    for (auto& card : cards)
    {
        EXPECT_EQ(card->GetCardType(), CardType::MINION);
        EXPECT_EQ(card->GetCardClass(), CardClass::MAGE);
    }
}

// ---------------------------------------- MINION - SHAMAN
// [DAL_047] Walking Fountain - COST:8 [ATK:4/HP:8]
// - Race: Elemental, Set: Dalaran, Rarity: Common
// --------------------------------------------------------
// Text: <b>Lifesteal</b>, <b>Rush</b>, <b>Windfury</b>
// --------------------------------------------------------
// GameTag:
// - WINDFURY = 1
// - LIFESTEAL = 1
// - RUSH = 1
// --------------------------------------------------------
TEST(ShamanDalaranTest, DAL_047_WalkingFountain)
{
    // Do nothing
}

// --------------------------------------- MINION - NEUTRAL
// [DAL_078] Traveling Healer - COST:4 [ATK:3/HP:2]
// - Set: Dalaran, Rarity: Common
// --------------------------------------------------------
// Text: <b>Divine Shield</b> <b>Battlecry:</b> Restore 3 Health.
// --------------------------------------------------------
// GameTag:
// - DIVINE_SHIELD = 1
// - BATTLECRY = 1
// --------------------------------------------------------
// PlayReq:
// - REQ_TARGET_IF_AVAILABLE = 0
// --------------------------------------------------------
TEST(NeutralDalaranTest, DAL_078_TravellingHealer)
{
    GameConfig config;
    config.player1Class = CardClass::PALADIN;
    config.player2Class = CardClass::WARRIOR;
    config.startPlayer = PlayerType::PLAYER1;
    config.doFillDecks = true;
    config.autoRun = false;

    Game game(config);
    game.Start();
    game.ProcessUntil(Step::MAIN_START);

    Player* curPlayer = game.GetCurrentPlayer();
    Player* opPlayer = game.GetOpponentPlayer();
    curPlayer->SetTotalMana(10);
    curPlayer->SetUsedMana(0);
    opPlayer->SetTotalMana(10);
    opPlayer->SetUsedMana(0);
    curPlayer->GetHero()->SetDamage(3);

    auto& curField = *(curPlayer->GetFieldZone());
    auto opHero = opPlayer->GetHero();

    const auto card1 =
        Generic::DrawCard(curPlayer, Cards::FindCardByName("Traveling Healer"));
    const auto card2 =
        Generic::DrawCard(opPlayer, Cards::FindCardByName("Fiery War Axe"));

    game.Process(curPlayer,
                 PlayCardTask::MinionTarget(card1, curPlayer->GetHero()));
    EXPECT_EQ(curPlayer->GetHero()->GetHealth(), 30);

    game.Process(curPlayer, EndTurnTask());
    game.ProcessUntil(Step::MAIN_START);

    EXPECT_EQ(curField[0]->HasDivineShield(), true);

    game.Process(opPlayer, PlayCardTask::Weapon(card2));
    game.Process(opPlayer, AttackTask(opHero, curField[0]));

    EXPECT_EQ(curField[0]->HasDivineShield(), false);
}

// --------------------------------------- MINION - NEUTRAL
// [DAL_085] Dalaran Crusader - COST:5 [ATK:5/HP:4]
// - Set: Dalaran, Rarity: Common
// --------------------------------------------------------
// Text: <b>Divine Shield</b>
// --------------------------------------------------------
// GameTag:
// - DIVINE_SHIELD = 1
// --------------------------------------------------------
TEST(NeutralDalaranTest, DAL_085_DalaranCrusader)
{
    // Do nothing
}

// --------------------------------------- MINION - NEUTRAL
// [DAL_090] Hench-Clan Sneak - COST:3 [ATK:3/HP:3]
// - Set: Dalaran, Rarity: Common
// --------------------------------------------------------
// Text: <b>Stealth</b>
// --------------------------------------------------------
// GameTag:
// - STEALTH = 1
// --------------------------------------------------------
TEST(NeutralDalaranTest, DAL_090_HenchClanSneak)
{
    // Do nothing
}

// --------------------------------------- MINION - NEUTRAL
// [DAL_092] Arcane Servant - COST:2 [ATK:2/HP:3]
// - Race: Elemental, Set: Dalaran, Rarity: Common
// --------------------------------------------------------
TEST(NeutralDalaranTest, DAL_092_ArcaneServant)
{
    // Do nothing
}

// --------------------------------------- MINION - NEUTRAL
// [DAL_748] Mana Reservoir - COST:2 [ATK:0/HP:6]
// - Race: Elemental, Set: Dalaran, Rarity: Common
// --------------------------------------------------------
// Text: <b>Spell Damage +1</b>
// --------------------------------------------------------
// GameTag:
// - SPELLPOWER = 1
// --------------------------------------------------------
TEST(NeutralDalaranTest, DAL_748_ManaReservoir)
{
    // Do nothing
}

// --------------------------------------- MINION - NEUTRAL
// [DAL_760] Burly Shovelfist - COST:9 [ATK:9/HP:9]
// - Set: Dalaran, Rarity: Common
// --------------------------------------------------------
// Text: <b>Rush</b>
// --------------------------------------------------------
// GameTag:
// - RUSH = 1
// --------------------------------------------------------
TEST(NeutralDalaranTest, DAL_760_BurlyShovelfist)
{
    // Do nothing
}