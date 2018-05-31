/*************************************************************************
> File Name: Enums.h
> Project Name: Hearthstone++
> Author: Chan-Ho Chris Ohk
> Purpose: Enumerations for card data.
> Created Time: 2017/08/11
> Copyright (c) 2017, Chan-Ho Chris Ohk
*************************************************************************/
#ifndef HEARTHSTONEPP_ENUMS_H
#define HEARTHSTONEPP_ENUMS_H

#ifdef _MSC_VER
#define HEARTHSTONEPP_EXPAND_LARGE_ENUMS
#else  // _MSC_VER
#undef BETTER_ENUMS_MACRO_FILE
#define BETTER_ENUMS_MACRO_FILE "../../Includes/Enums/EnumMacros.h"
#endif  // _MSC_VER

#include <better-enums/enum.h>

namespace Hearthstonepp
{
    BETTER_ENUM(BlockType, int, ATTACK = 1, JOUST = 2, POWER = 3, SCRIPT = 4,
                TRIGGER = 5, DEATHS = 6, PLAY = 7, FATIGUE = 8, RITUAL = 9,
                REVEAL_CARD = 10, ACTION = 99)

    BETTER_ENUM(BattleNetGameType, int, UNKNOWN = 0, FRIENDS = 1,
                RANKED_STANDARD = 2, ARENA = 3, VS_AI = 4, TUTORIAL = 5, ASYNC = 6,
                CASUAL_STANDARD_NEWBIE = 9, CASUAL_STANDARD_NORMAL = 10, TEST1 = 11,
                TEST2 = 12, TEST3 = 13, TAVERNBRAWL_PVP = 16,
                TAVERNBRAWL_1P_VERSUS_AI = 17, TAVERNBRAWL_2P_COOP = 18,
                RANKED_WILD = 30, CASUAL_WILD = 31, FSG_BRAWL_VS_FRIEND = 40,
                FSG_BRAWL_PVP = 41, FSG_BRAWL_1P_VERSUS_AI = 42,
                FSG_BRAWL_2P_COOP = 43)

    BETTER_ENUM(BattleNetRegion, int, UNINITIALIZED = -1, UNKNOWN = 0, US = 1,
                EU = 2, KR = 3, TW = 4, CN = 5, LIVE_VERIFICATION = 40,
                PTR_LOC = 41)

    BETTER_ENUM(Booster, int, INVALID = 0, CLASSIC = 1, GOBLINS_VS_GNOMES = 9,
                THE_GRAND_TOURNAMENT = 10, OLD_GODS = 11, FIRST_PURCHASE = 17,
                SIGNUP_INCENTIVE = 18, MEAN_STREETS = 19, UNGORO = 20,
                FROZEN_THRONE = 21, GOLDEN_CLASSIC_PACK = 23,
                KOBOLDS_AND_CATACOMBS = 30)

    BETTER_ENUM(BrawlType, int, UNKNOWN = 0, TAVERN_BRAWL = 1,
                FIRESIDE_GATHERING = 2, COUNT = 3)

    BETTER_ENUM(CardClass, int, INVALID = 0, DEATHKNIGHT = 1, DRUID = 2, HUNTER = 3,
                MAGE = 4, PALADIN = 5, PRIEST = 6, ROGUE = 7, SHAMAN = 8,
                WARLOCK = 9, WARRIOR = 10, DREAM = 11, NEUTRAL = 12)

    BETTER_ENUM(CardSet, int, INVALID = 0, TEST_TEMPORARY = 1, CORE = 2,
                EXPERT1 = 3, HOF = 4, MISSIONS = 5, DEMO = 6, NONE = 7, CHEAT = 8,
                BLANK = 9, DEBUG_SP = 10, PROMO = 11, NAXX = 12, GVG = 13, BRM = 14,
                TGT = 15, CREDITS = 16, HERO_SKINS = 17, TB = 18, SLUSH = 19,
                LOE = 20, OG = 21, OG_RESERVE = 22, KARA = 23, KARA_RESERVE = 24,
                GANGS = 25, GANGS_RESERVE = 26, UNGORO = 27, ICECROWN = 1001,
                LOOTAPALOOZA = 1004, GILNEAS = 1125)

    BETTER_ENUM(CardType, int, INVALID = 0, GAME = 1, PLAYER = 2, HERO = 3,
                MINION = 4, SPELL = 5, ENCHANTMENT = 6, WEAPON = 7, ITEM = 8,
                TOKEN = 9, HERO_POWER = 10)

    BETTER_ENUM(ChoiceType, int, INVALID = 0, MULLIGAN = 1, GENERAL = 2)

    BETTER_ENUM(DeckType, int, CLIENT_ONLY_DECK = -1, UNKNOWN_DECK_TYPE = 0,
                NORMAL_DECK = 1, AI_DECK = 2, DRAFT_DECK = 4, PRECON_DECK = 5,
                TAVERN_BRAWL_DECK = 6, FSG_BRAWL_DECK = 7, HIDDEN_DECK = 1000)

    BETTER_ENUM(DungeonRewardOption, int, INVALID = 0, LOOT = 1, TREASURE = 2)

    BETTER_ENUM(EnchantmentVisual, int, INVALID = 0, POSITIVE = 1, NEGATIVE = 2,
                NEUTRAL = 3)

    BETTER_ENUM(Faction, int, INVALID = 0, HORDE = 1, ALLIANCE = 2, NEUTRAL = 3)

    BETTER_ENUM(FormatType, int, UNKNOWN = 0, WILD = 1, STANDARD = 2)

#ifndef HEARTHSTONEPP_EXPAND_LARGE_ENUMS
    BETTER_ENUM(GameTag, int, INVALID = 0, IGNORE_DAMAGE = 1, TAG_SCRIPT_DATA_NUM_1 = 2,
        TAG_SCRIPT_DATA_NUM_2 = 3, TAG_SCRIPT_DATA_ENT_1 = 4,
        TAG_SCRIPT_DATA_ENT_2 = 5, MISSION_EVENT = 6, TIMEOUT = 7, TURN_START = 8,
        TURN_TIMER_SLUSH = 9, PREMIUM = 12, GOLD_REWARD_STATE = 13, PLAYSTATE = 17,
        LAST_AFFECTED_BY = 18, STEP = 19, TURN = 20, FATIGUE = 22,
        CURRENT_PLAYER = 23, FIRST_PLAYER = 24, RESOURCES_USED = 25, RESOURCES = 26,
        HERO_ENTITY = 27, MAXHANDSIZE = 28, STARTHANDSIZE = 29, PLAYER_ID = 30,
        TEAM_ID = 31, TRIGGER_VISUAL = 32, RECENTLY_ARRIVED = 33, PROTECTED = 34,
        PROTECTING = 35, DEFENDING = 36, PROPOSED_DEFENDER = 37, ATTACKING = 38,
        PROPOSED_ATTACKER = 39, ATTACHED = 40, EXHAUSTED = 43, DAMAGE = 44,
        HEALTH = 45, ATK = 47, COST = 48, ZONE = 49, CONTROLLER = 50, OWNER = 51,
        DEFINITION = 52, ENTITY_ID = 53, HISTORY_PROXY = 54, COPY_DEATHRATTLE = 55,
        COPY_DEATHRATTLE_INDEX = 56, ELITE = 114, MAXRESOURCES = 176,
        CARD_SET = 183, CARDTEXT = 184, CARDNAME = 185, CARD_ID = 186,
        DURABILITY = 187, SILENCED = 188, WINDFURY = 189, TAUNT = 190,
        STEALTH = 191, SPELLPOWER = 192, DIVINE_SHIELD = 194, CHARGE = 197,
        NEXT_STEP = 198, CLASS = 199, CARDRACE = 200, FACTION = 201, CARDTYPE = 202,
        RARITY = 203, STATE = 204, SUMMONED = 205, FREEZE = 208, ENRAGED = 212,
        OVERLOAD = 215, LOYALTY = 216, DEATHRATTLE = 217, BATTLECRY = 218,
        SECRET = 219, COMBO = 220, CANT_HEAL = 221, CANT_DAMAGE = 222,
        CANT_SET_ASIDE = 223, CANT_REMOVE_FROM_GAME = 224, CANT_READY = 225,
        CANT_EXHAUST = 226, CANT_ATTACK = 227, CANT_TARGET = 228,
        CANT_DESTROY = 229, CANT_DISCARD = 230, CANT_PLAY = 231, CANT_DRAW = 232,
        INCOMING_HEALING_MULTIPLIER = 233, INCOMING_HEALING_ADJUSTMENT = 234,
        INCOMING_HEALING_CAP = 235, INCOMING_DAMAGE_MULTIPLIER = 236,
        INCOMING_DAMAGE_ADJUSTMENT = 237, INCOMING_DAMAGE_CAP = 238,
        CANT_BE_HEALED = 239, IMMUNE = 240, CANT_BE_SET_ASIDE = 241,
        CANT_BE_REMOVED_FROM_GAME = 242, CANT_BE_READIED = 243,
        CANT_BE_EXHAUSTED = 244, CANT_BE_ATTACKED = 245, CANT_BE_TARGETED = 246,
        CANT_BE_DESTROYED = 247, AttackVisualType = 251, CardTextInPlay = 252,
        CANT_BE_SUMMONING_SICK = 253, FROZEN = 260, JUST_PLAYED = 261,
        LINKED_ENTITY = 262, ZONE_POSITION = 263, CANT_BE_FROZEN = 264,
        COMBO_ACTIVE = 266, CARD_TARGET = 267, DevState = 268,
        NUM_CARDS_PLAYED_THIS_TURN = 269, CANT_BE_TARGETED_BY_OPPONENTS = 270,
        NUM_TURNS_IN_PLAY = 271, NUM_TURNS_LEFT = 272, OUTGOING_DAMAGE_CAP = 273,
        OUTGOING_DAMAGE_ADJUSTMENT = 274, OUTGOING_DAMAGE_MULTIPLIER = 275,
        OUTGOING_HEALING_CAP = 276, OUTGOING_HEALING_ADJUSTMENT = 277,
        OUTGOING_HEALING_MULTIPLIER = 278, INCOMING_ABILITY_DAMAGE_ADJUSTMENT = 279,
        INCOMING_COMBAT_DAMAGE_ADJUSTMENT = 280,
        OUTGOING_ABILITY_DAMAGE_ADJUSTMENT = 281,
        OUTGOING_COMBAT_DAMAGE_ADJUSTMENT = 282,
        OUTGOING_ABILITY_DAMAGE_MULTIPLIER = 283, OUTGOING_ABILITY_DAMAGE_CAP = 284,
        INCOMING_ABILITY_DAMAGE_MULTIPLIER = 285, INCOMING_ABILITY_DAMAGE_CAP = 286,
        OUTGOING_COMBAT_DAMAGE_MULTIPLIER = 287, OUTGOING_COMBAT_DAMAGE_CAP = 288,
        INCOMING_COMBAT_DAMAGE_MULTIPLIER = 289, INCOMING_COMBAT_DAMAGE_CAP = 290,
        CURRENT_SPELLPOWER = 291, ARMOR = 292, MORPH = 293, IS_MORPHED = 294,
        TEMP_RESOURCES = 295, OVERLOAD_OWED = 296, NUM_ATTACKS_THIS_TURN = 297,
        NEXT_ALLY_BUFF = 302, MAGNET = 303, FIRST_CARD_PLAYED_THIS_TURN = 304,
        MULLIGAN_STATE = 305, TAUNT_READY = 306, STEALTH_READY = 307,
        CHARGE_READY = 308, CANT_BE_TARGETED_BY_SPELLS = 311,
        SHOULDEXITCOMBAT = 312, CREATOR = 313, CANT_BE_SILENCED = 314,
        PARENT_CARD = 316, NUM_MINIONS_PLAYED_THIS_TURN = 317, PREDAMAGE = 318,
        COLLECTIBLE = 321, TARGETING_ARROW_TEXT = 325, DATABASE_ID = 327,
        ENCHANTMENT_BIRTH_VISUAL = 330, ENCHANTMENT_IDLE_VISUAL = 331,
        CANT_BE_TARGETED_BY_HERO_POWERS = 332, WEAPON = 334,
        InvisibleDeathrattle = 335, HEALTH_MINIMUM = 337,
        TAG_ONE_TURN_EFFECT = 338, SILENCE = 339, COUNTER = 340, ARTISTNAME = 342,
        LocalizationNotes = 344, ZONES_REVEALED = 348, ImmuneToSpellpower = 349,
        ADJACENT_BUFF = 350, FLAVORTEXT = 351, FORCED_PLAY = 352,
        LOW_HEALTH_THRESHOLD = 353, IGNORE_DAMAGE_OFF = 354, GrantCharge = 355,
        SPELLPOWER_DOUBLE = 356, HEALING_DOUBLE = 357,
        NUM_OPTIONS_PLAYED_THIS_TURN = 358, NUM_OPTIONS = 359,
        TO_BE_DESTROYED = 360, HealTarget = 361, AURA = 362, POISONOUS = 363,
        HOW_TO_EARN = 364, HOW_TO_EARN_GOLDEN = 365, HERO_POWER_DOUBLE = 366,
        AI_MUST_PLAY = 367, NUM_MINIONS_PLAYER_KILLED_THIS_TURN = 368,
        NUM_MINIONS_KILLED_THIS_TURN = 369, AFFECTED_BY_SPELL_POWER = 370,
        EXTRA_DEATHRATTLES = 371, START_WITH_1_HEALTH = 372,
        IMMUNE_WHILE_ATTACKING = 373, MULTIPLY_HERO_DAMAGE = 374,
        MULTIPLY_BUFF_VALUE = 375, CUSTOM_KEYWORD_EFFECT = 376, TOPDECK = 377,
        CANT_BE_TARGETED_BY_BATTLECRIES = 379, HERO_POWER = 380,
        DEATHRATTLE_RETURN_ZONE = 382, STEADY_SHOT_CAN_TARGET = 383,
        DISPLAYED_CREATOR = 385, POWERED_UP = 386, SPARE_PART = 388,
        FORGETFUL = 389, CAN_SUMMON_MAXPLUSONE_MINION = 390, OBFUSCATED = 391,
        BURNING = 392, OVERLOAD_LOCKED = 393,
        NUM_TIMES_HERO_POWER_USED_THIS_GAME = 394,
        CURRENT_HEROPOWER_DAMAGE_BONUS = 395, HEROPOWER_DAMAGE = 396,
        LAST_CARD_PLAYED = 397, NUM_FRIENDLY_MINIONS_THAT_DIED_THIS_TURN = 398,
        NUM_CARDS_DRAWN_THIS_TURN = 399, AI_ONE_SHOT_KILL = 400, EVIL_GLOW = 401,
        HIDE_STATS = 402, INSPIRE = 403, RECEIVES_DOUBLE_SPELLDAMAGE_BONUS = 404,
        HEROPOWER_ADDITIONAL_ACTIVATIONS = 405,
        HEROPOWER_ACTIVATIONS_THIS_TURN = 406, REVEALED = 410,
        NUM_FRIENDLY_MINIONS_THAT_DIED_THIS_GAME = 412, CANNOT_ATTACK_HEROES = 413,
        LOCK_AND_LOAD = 414, DISCOVER = 415, SHADOWFORM = 416,
        NUM_FRIENDLY_MINIONS_THAT_ATTACKED_THIS_TURN = 417,
        NUM_RESOURCES_SPENT_THIS_GAME = 418, CHOOSE_BOTH = 419,
        ELECTRIC_CHARGE_LEVEL = 420, HEAVILY_ARMORED = 421, DONT_SHOW_IMMUNE = 422,
        RITUAL = 424, PREHEALING = 425, APPEAR_FUNCTIONALLY_DEAD = 426,
        OVERLOAD_THIS_GAME = 427, SPELLS_COST_HEALTH = 431,
        HISTORY_PROXY_NO_BIG_CARD = 432, PROXY_CTHUN = 434,
        TRANSFORMED_FROM_CARD = 435, CTHUN = 436, CAST_RANDOM_SPELLS = 437,
        SHIFTING = 438, JADE_GOLEM = 441, EMBRACE_THE_SHADOW = 442,
        CHOOSE_ONE = 443, EXTRA_ATTACKS_THIS_TURN = 444, SEEN_CTHUN = 445,
        MINION_TYPE_REFERENCE = 447, UNTOUCHABLE = 448, RED_MANA_CRYSTALS = 449,
        SCORE_LABELID_1 = 450, SCORE_VALUE_1 = 451, SCORE_LABELID_2 = 452,
        SCORE_VALUE_2 = 453, SCORE_LABELID_3 = 454, SCORE_VALUE_3 = 455,
        CANT_BE_FATIGUED = 456, AUTOATTACK = 457, ARMS_DEALING = 458,
        PENDING_EVOLUTIONS = 461, QUEST = 462, TAG_LAST_KNOWN_COST_IN_HAND = 466,
        DEFINING_ENCHANTMENT = 469, FINISH_ATTACK_SPELL_ON_DAMAGE = 470,
        MODULAR_ENTITY_PART_1 = 471, MODULAR_ENTITY_PART_2 = 472,
        MODIFY_DEFINITION_ATTACK = 473, MODIFY_DEFINITION_HEALTH = 474,
        MODIFY_DEFINITION_COST = 475, MULTIPLE_CLASSES = 476,
        ALL_TARGETS_RANDOM = 477, MULTI_CLASS_GROUP = 480, CARD_COSTS_HEALTH = 481,
        GRIMY_GOONS = 482, JADE_LOTUS = 483, KABAL = 484,
        ADDITIONAL_PLAY_REQS_1 = 515, ADDITIONAL_PLAY_REQS_2 = 516,
        ELEMENTAL_POWERED_UP = 532, QUEST_PROGRESS = 534,
        QUEST_PROGRESS_TOTAL = 535, QUEST_CONTRIBUTOR = 541, ADAPT = 546,
        IS_CURRENT_TURN_AN_EXTRA_TURN = 547, EXTRA_TURNS_TAKEN_THIS_GAME = 548,
        SHIFTING_MINION = 549, SHIFTING_WEAPON = 550, DEATH_KNIGHT = 554,
        BOSS = 556, TREASURE = 557, TREASURE_DEFINTIONAL_ATTACK = 558,
        TREASURE_DEFINTIONAL_COST = 559, TREASURE_DEFINTIONAL_HEALTH = 560,
        ACTS_LIKE_A_SPELL = 561, STAMPEDE = 564, EMPOWERED_TREASURE = 646,
        ONE_SIDED_GHOSTLY = 648, CURRENT_NEGATIVE_SPELLPOWER = 651,
        IS_VAMPIRE = 680, CORRUPTED = 681, HIDE_HEALTH = 682, HIDE_ATTACK = 683,
        HIDE_COST = 684, LIFESTEAL = 685, OVERRIDE_EMOTE_0 = 740,
        OVERRIDE_EMOTE_1 = 741, OVERRIDE_EMOTE_2 = 742, OVERRIDE_EMOTE_3 = 743,
        OVERRIDE_EMOTE_4 = 744, OVERRIDE_EMOTE_5 = 745, SCORE_FOOTERID = 751,
        RECRUIT = 763, LOOT_CARD_1 = 764, LOOT_CARD_2 = 765, LOOT_CARD_3 = 766,
        HERO_POWER_DISABLED = 777, VALEERASHADOW = 779, OVERRIDECARDNAME = 781,
        OVERRIDECARDTEXTBUILDER = 782, DUNGEON_PASSIVE_BUFF = 783, GHOSTLY = 785,
        DISGUISED_TWIN = 788, SECRET_DEATHRATTLE = 789, RUSH = 791,
        REVEAL_CHOICES = 792, HIDDEN_CHOICE = 813, ZOMBEAST = 823,
        HERO_EMOTE_SILENCED = 832, MINION_IN_HAND_BUFF = 845, ECHO = 846,
        IGNORE_HIDE_STATS_FOR_BIG_CARD = 857, REAL_TIME_TRANSFORM = 859,
        WAIT_FOR_PLAYER_RECONNECT_PERIOD = 860, PHASED_RESTART = 888,
        HEALTH_DISPLAY = 917, ENABLE_HEALTH_DISPLAY = 920, VOODOO_LINK = 921,
        ATTACKABLE_BY_RUSH = 930, SHIFTING_SPELL = 936,
        USE_ALTERNATE_CARD_TEXT = 955, SUPPRESS_DEATH_SOUND = 959,
        ECHOING_OOZE_SPELL = 963, COLLECTIONMANAGER_FILTER_MANA_EVEN = 956,
        COLLECTIONMANAGER_FILTER_MANA_ODD = 957,
        ZOMBEAST_DEBUG_CURRENT_BEAST_DATABASE_ID = 964,
        ZOMBEAST_DEBUG_CURRENT_ITERATION = 965, ZOMBEAST_DEBUG_MAX_ITERATIONS = 966,
        START_OF_GAME = 968, ENCHANTMENT_INVISIBLE = 976, HEADCRACK_COMBO = 298,
        RESTORE_TO_DAMAGE = 326, CONTROLLER_CHANGED_THIS_TURN = 333,
        EXTRA_BATTLECRY = 411, NUM_SPELLS_PLAYED_THIS_TURN = 430,
        NUM_CARDS_TO_DRAW = 467, MOAT_LURKER_MINION = 468,
        TAG_LAST_KNOWN_ATK_IN_HAND = 479, EXTRA_END_TURN_EFFECT = 755,
        AMOUNT_HERO_HEALED_THIS_TURN = 821, KEEP_ENCHANTMENTS = 851,
        NUM_SPELLS_PLAYED_THIS_GAME = 1001, NUM_SECRETS_PLAYED_THIS_GAME = 1002,
        NUM_WEAPONS_PLAYED_THIS_GAME = 1003, LAST_CARD_DRAWN = 1004,
        LAST_CARD_DISCARDED = 1005, NUM_ELEMENTAL_PLAYED_THIS_TURN = 1006,
        NUM_ELEMENTAL_PLAYED_LAST_TURN = 1007, NUM_MURLOCS_PLAYED_THIS_GAME = 1008,
        TAG_LAST_KNOWN_POSITION_ON_BOARD = 1009)
#else
    namespace better_enums_data_GameTag { }
    class GameTag
    {
    private:
        typedef ::better_enums::optional<GameTag> _optional;
        typedef ::better_enums::optional<std::size_t> _optional_index;

    public:
        typedef int _integral;
        enum _enumerated : int
        {
            INVALID = 0,
            IGNORE_DAMAGE = 1,
            TAG_SCRIPT_DATA_NUM_1 = 2,
            TAG_SCRIPT_DATA_NUM_2 = 3,
            TAG_SCRIPT_DATA_ENT_1 = 4,
            TAG_SCRIPT_DATA_ENT_2 = 5,
            MISSION_EVENT = 6,
            TIMEOUT = 7,
            TURN_START = 8,
            TURN_TIMER_SLUSH = 9,
            PREMIUM = 12,
            GOLD_REWARD_STATE = 13,
            PLAYSTATE = 17,
            LAST_AFFECTED_BY = 18,
            STEP = 19,
            TURN = 20,
            FATIGUE = 22,
            CURRENT_PLAYER = 23,
            FIRST_PLAYER = 24,
            RESOURCES_USED = 25,
            RESOURCES = 26,
            HERO_ENTITY = 27,
            MAXHANDSIZE = 28,
            STARTHANDSIZE = 29,
            PLAYER_ID = 30,
            TEAM_ID = 31,
            TRIGGER_VISUAL = 32,
            RECENTLY_ARRIVED = 33,
            PROTECTED = 34,
            PROTECTING = 35,
            DEFENDING = 36,
            PROPOSED_DEFENDER = 37,
            ATTACKING = 38,
            PROPOSED_ATTACKER = 39,
            ATTACHED = 40,
            EXHAUSTED = 43,
            DAMAGE = 44,
            HEALTH = 45,
            ATK = 47,
            COST = 48,
            ZONE = 49,
            CONTROLLER = 50,
            OWNER = 51,
            DEFINITION = 52,
            ENTITY_ID = 53,
            HISTORY_PROXY = 54,
            COPY_DEATHRATTLE = 55,
            COPY_DEATHRATTLE_INDEX = 56,
            ELITE = 114,
            MAXRESOURCES = 176,
            CARD_SET = 183,
            CARDTEXT = 184,
            CARDNAME = 185,
            CARD_ID = 186,
            DURABILITY = 187,
            SILENCED = 188,
            WINDFURY = 189,
            TAUNT = 190,
            STEALTH = 191,
            SPELLPOWER = 192,
            DIVINE_SHIELD = 194,
            CHARGE = 197,
            NEXT_STEP = 198,
            CLASS = 199,
            CARDRACE = 200,
            FACTION = 201,
            CARDTYPE = 202,
            RARITY = 203,
            STATE = 204,
            SUMMONED = 205,
            FREEZE = 208,
            ENRAGED = 212,
            OVERLOAD = 215,
            LOYALTY = 216,
            DEATHRATTLE = 217,
            BATTLECRY = 218,
            SECRET = 219,
            COMBO = 220,
            CANT_HEAL = 221,
            CANT_DAMAGE = 222,
            CANT_SET_ASIDE = 223,
            CANT_REMOVE_FROM_GAME = 224,
            CANT_READY = 225,
            CANT_EXHAUST = 226,
            CANT_ATTACK = 227,
            CANT_TARGET = 228,
            CANT_DESTROY = 229,
            CANT_DISCARD = 230,
            CANT_PLAY = 231,
            CANT_DRAW = 232,
            INCOMING_HEALING_MULTIPLIER = 233,
            INCOMING_HEALING_ADJUSTMENT = 234,
            INCOMING_HEALING_CAP = 235,
            INCOMING_DAMAGE_MULTIPLIER = 236,
            INCOMING_DAMAGE_ADJUSTMENT = 237,
            INCOMING_DAMAGE_CAP = 238,
            CANT_BE_HEALED = 239,
            IMMUNE = 240,
            CANT_BE_SET_ASIDE = 241,
            CANT_BE_REMOVED_FROM_GAME = 242,
            CANT_BE_READIED = 243,
            CANT_BE_EXHAUSTED = 244,
            CANT_BE_ATTACKED = 245,
            CANT_BE_TARGETED = 246,
            CANT_BE_DESTROYED = 247,
            AttackVisualType = 251,
            CardTextInPlay = 252,
            CANT_BE_SUMMONING_SICK = 253,
            FROZEN = 260,
            JUST_PLAYED = 261,
            LINKED_ENTITY = 262,
            ZONE_POSITION = 263,
            CANT_BE_FROZEN = 264,
            COMBO_ACTIVE = 266,
            CARD_TARGET = 267,
            DevState = 268,
            NUM_CARDS_PLAYED_THIS_TURN = 269,
            CANT_BE_TARGETED_BY_OPPONENTS = 270,
            NUM_TURNS_IN_PLAY = 271,
            NUM_TURNS_LEFT = 272,
            OUTGOING_DAMAGE_CAP = 273,
            OUTGOING_DAMAGE_ADJUSTMENT = 274,
            OUTGOING_DAMAGE_MULTIPLIER = 275,
            OUTGOING_HEALING_CAP = 276,
            OUTGOING_HEALING_ADJUSTMENT = 277,
            OUTGOING_HEALING_MULTIPLIER = 278,
            INCOMING_ABILITY_DAMAGE_ADJUSTMENT = 279,
            INCOMING_COMBAT_DAMAGE_ADJUSTMENT = 280,
            OUTGOING_ABILITY_DAMAGE_ADJUSTMENT = 281,
            OUTGOING_COMBAT_DAMAGE_ADJUSTMENT = 282,
            OUTGOING_ABILITY_DAMAGE_MULTIPLIER = 283,
            OUTGOING_ABILITY_DAMAGE_CAP = 284,
            INCOMING_ABILITY_DAMAGE_MULTIPLIER = 285,
            INCOMING_ABILITY_DAMAGE_CAP = 286,
            OUTGOING_COMBAT_DAMAGE_MULTIPLIER = 287,
            OUTGOING_COMBAT_DAMAGE_CAP = 288,
            INCOMING_COMBAT_DAMAGE_MULTIPLIER = 289,
            INCOMING_COMBAT_DAMAGE_CAP = 290,
            CURRENT_SPELLPOWER = 291,
            ARMOR = 292,
            MORPH = 293,
            IS_MORPHED = 294,
            TEMP_RESOURCES = 295,
            OVERLOAD_OWED = 296,
            NUM_ATTACKS_THIS_TURN = 297,
            NEXT_ALLY_BUFF = 302,
            MAGNET = 303,
            FIRST_CARD_PLAYED_THIS_TURN = 304,
            MULLIGAN_STATE = 305,
            TAUNT_READY = 306,
            STEALTH_READY = 307,
            CHARGE_READY = 308,
            CANT_BE_TARGETED_BY_SPELLS = 311,
            SHOULDEXITCOMBAT = 312,
            CREATOR = 313,
            CANT_BE_SILENCED = 314,
            PARENT_CARD = 316,
            NUM_MINIONS_PLAYED_THIS_TURN = 317,
            PREDAMAGE = 318,
            COLLECTIBLE = 321,
            TARGETING_ARROW_TEXT = 325,
            DATABASE_ID = 327,
            ENCHANTMENT_BIRTH_VISUAL = 330,
            ENCHANTMENT_IDLE_VISUAL = 331,
            CANT_BE_TARGETED_BY_HERO_POWERS = 332,
            WEAPON = 334,
            InvisibleDeathrattle = 335,
            HEALTH_MINIMUM = 337,
            TAG_ONE_TURN_EFFECT = 338,
            SILENCE = 339,
            COUNTER = 340,
            ARTISTNAME = 342,
            LocalizationNotes = 344,
            ZONES_REVEALED = 348,
            ImmuneToSpellpower = 349,
            ADJACENT_BUFF = 350,
            FLAVORTEXT = 351,
            FORCED_PLAY = 352,
            LOW_HEALTH_THRESHOLD = 353,
            IGNORE_DAMAGE_OFF = 354,
            GrantCharge = 355,
            SPELLPOWER_DOUBLE = 356,
            HEALING_DOUBLE = 357,
            NUM_OPTIONS_PLAYED_THIS_TURN = 358,
            NUM_OPTIONS = 359,
            TO_BE_DESTROYED = 360,
            HealTarget = 361,
            AURA = 362,
            POISONOUS = 363,
            HOW_TO_EARN = 364,
            HOW_TO_EARN_GOLDEN = 365,
            HERO_POWER_DOUBLE = 366,
            AI_MUST_PLAY = 367,
            NUM_MINIONS_PLAYER_KILLED_THIS_TURN = 368,
            NUM_MINIONS_KILLED_THIS_TURN = 369,
            AFFECTED_BY_SPELL_POWER = 370,
            EXTRA_DEATHRATTLES = 371,
            START_WITH_1_HEALTH = 372,
            IMMUNE_WHILE_ATTACKING = 373,
            MULTIPLY_HERO_DAMAGE = 374,
            MULTIPLY_BUFF_VALUE = 375,
            CUSTOM_KEYWORD_EFFECT = 376,
            TOPDECK = 377,
            CANT_BE_TARGETED_BY_BATTLECRIES = 379,
            HERO_POWER = 380,
            DEATHRATTLE_RETURN_ZONE = 382,
            STEADY_SHOT_CAN_TARGET = 383,
            DISPLAYED_CREATOR = 385,
            POWERED_UP = 386,
            SPARE_PART = 388,
            FORGETFUL = 389,
            CAN_SUMMON_MAXPLUSONE_MINION = 390,
            OBFUSCATED = 391,
            BURNING = 392,
            OVERLOAD_LOCKED = 393,
            NUM_TIMES_HERO_POWER_USED_THIS_GAME = 394,
            CURRENT_HEROPOWER_DAMAGE_BONUS = 395,
            HEROPOWER_DAMAGE = 396,
            LAST_CARD_PLAYED = 397,
            NUM_FRIENDLY_MINIONS_THAT_DIED_THIS_TURN = 398,
            NUM_CARDS_DRAWN_THIS_TURN = 399,
            AI_ONE_SHOT_KILL = 400,
            EVIL_GLOW = 401,
            HIDE_STATS = 402,
            INSPIRE = 403,
            RECEIVES_DOUBLE_SPELLDAMAGE_BONUS = 404,
            HEROPOWER_ADDITIONAL_ACTIVATIONS = 405,
            HEROPOWER_ACTIVATIONS_THIS_TURN = 406,
            REVEALED = 410,
            NUM_FRIENDLY_MINIONS_THAT_DIED_THIS_GAME = 412,
            CANNOT_ATTACK_HEROES = 413,
            LOCK_AND_LOAD = 414,
            DISCOVER = 415,
            SHADOWFORM = 416,
            NUM_FRIENDLY_MINIONS_THAT_ATTACKED_THIS_TURN = 417,
            NUM_RESOURCES_SPENT_THIS_GAME = 418,
            CHOOSE_BOTH = 419,
            ELECTRIC_CHARGE_LEVEL = 420,
            HEAVILY_ARMORED = 421,
            DONT_SHOW_IMMUNE = 422,
            RITUAL = 424,
            PREHEALING = 425,
            APPEAR_FUNCTIONALLY_DEAD = 426,
            OVERLOAD_THIS_GAME = 427,
            SPELLS_COST_HEALTH = 431,
            HISTORY_PROXY_NO_BIG_CARD = 432,
            PROXY_CTHUN = 434,
            TRANSFORMED_FROM_CARD = 435,
            CTHUN = 436,
            CAST_RANDOM_SPELLS = 437,
            SHIFTING = 438,
            JADE_GOLEM = 441,
            EMBRACE_THE_SHADOW = 442,
            CHOOSE_ONE = 443,
            EXTRA_ATTACKS_THIS_TURN = 444,
            SEEN_CTHUN = 445,
            MINION_TYPE_REFERENCE = 447,
            UNTOUCHABLE = 448,
            RED_MANA_CRYSTALS = 449,
            SCORE_LABELID_1 = 450,
            SCORE_VALUE_1 = 451,
            SCORE_LABELID_2 = 452,
            SCORE_VALUE_2 = 453,
            SCORE_LABELID_3 = 454,
            SCORE_VALUE_3 = 455,
            CANT_BE_FATIGUED = 456,
            AUTOATTACK = 457,
            ARMS_DEALING = 458,
            PENDING_EVOLUTIONS = 461,
            QUEST = 462,
            TAG_LAST_KNOWN_COST_IN_HAND = 466,
            DEFINING_ENCHANTMENT = 469,
            FINISH_ATTACK_SPELL_ON_DAMAGE = 470,
            MODULAR_ENTITY_PART_1 = 471,
            MODULAR_ENTITY_PART_2 = 472,
            MODIFY_DEFINITION_ATTACK = 473,
            MODIFY_DEFINITION_HEALTH = 474,
            MODIFY_DEFINITION_COST = 475,
            MULTIPLE_CLASSES = 476,
            ALL_TARGETS_RANDOM = 477,
            MULTI_CLASS_GROUP = 480,
            CARD_COSTS_HEALTH = 481,
            GRIMY_GOONS = 482,
            JADE_LOTUS = 483,
            KABAL = 484,
            ADDITIONAL_PLAY_REQS_1 = 515,
            ADDITIONAL_PLAY_REQS_2 = 516,
            ELEMENTAL_POWERED_UP = 532,
            QUEST_PROGRESS = 534,
            QUEST_PROGRESS_TOTAL = 535,
            QUEST_CONTRIBUTOR = 541,
            ADAPT = 546,
            IS_CURRENT_TURN_AN_EXTRA_TURN = 547,
            EXTRA_TURNS_TAKEN_THIS_GAME = 548,
            SHIFTING_MINION = 549,
            SHIFTING_WEAPON = 550,
            DEATH_KNIGHT = 554,
            BOSS = 556,
            TREASURE = 557,
            TREASURE_DEFINTIONAL_ATTACK = 558,
            TREASURE_DEFINTIONAL_COST = 559,
            TREASURE_DEFINTIONAL_HEALTH = 560,
            ACTS_LIKE_A_SPELL = 561,
            STAMPEDE = 564,
            EMPOWERED_TREASURE = 646,
            ONE_SIDED_GHOSTLY = 648,
            CURRENT_NEGATIVE_SPELLPOWER = 651,
            IS_VAMPIRE = 680,
            CORRUPTED = 681,
            HIDE_HEALTH = 682,
            HIDE_ATTACK = 683,
            HIDE_COST = 684,
            LIFESTEAL = 685,
            OVERRIDE_EMOTE_0 = 740,
            OVERRIDE_EMOTE_1 = 741,
            OVERRIDE_EMOTE_2 = 742,
            OVERRIDE_EMOTE_3 = 743,
            OVERRIDE_EMOTE_4 = 744,
            OVERRIDE_EMOTE_5 = 745,
            SCORE_FOOTERID = 751,
            RECRUIT = 763,
            LOOT_CARD_1 = 764,
            LOOT_CARD_2 = 765,
            LOOT_CARD_3 = 766,
            HERO_POWER_DISABLED = 777,
            VALEERASHADOW = 779,
            OVERRIDECARDNAME = 781,
            OVERRIDECARDTEXTBUILDER = 782,
            DUNGEON_PASSIVE_BUFF = 783,
            GHOSTLY = 785,
            DISGUISED_TWIN = 788,
            SECRET_DEATHRATTLE = 789,
            RUSH = 791,
            REVEAL_CHOICES = 792,
            HIDDEN_CHOICE = 813,
            ZOMBEAST = 823,
            HERO_EMOTE_SILENCED = 832,
            MINION_IN_HAND_BUFF = 845,
            ECHO = 846,
            IGNORE_HIDE_STATS_FOR_BIG_CARD = 857,
            REAL_TIME_TRANSFORM = 859,
            WAIT_FOR_PLAYER_RECONNECT_PERIOD = 860,
            PHASED_RESTART = 888,
            HEALTH_DISPLAY = 917,
            ENABLE_HEALTH_DISPLAY = 920,
            VOODOO_LINK = 921,
            ATTACKABLE_BY_RUSH = 930,
            SHIFTING_SPELL = 936,
            USE_ALTERNATE_CARD_TEXT = 955,
            SUPPRESS_DEATH_SOUND = 959,
            ECHOING_OOZE_SPELL = 963,
            COLLECTIONMANAGER_FILTER_MANA_EVEN = 956,
            COLLECTIONMANAGER_FILTER_MANA_ODD = 957,
            ZOMBEAST_DEBUG_CURRENT_BEAST_DATABASE_ID = 964,
            ZOMBEAST_DEBUG_CURRENT_ITERATION = 965,
            ZOMBEAST_DEBUG_MAX_ITERATIONS = 966,
            START_OF_GAME = 968,
            ENCHANTMENT_INVISIBLE = 976,

            // More or less guessed gametags
            HEADCRACK_COMBO = 298,
            RESTORE_TO_DAMAGE = 326,
            CONTROLLER_CHANGED_THIS_TURN = 333,
            EXTRA_BATTLECRY = 411,
            NUM_SPELLS_PLAYED_THIS_TURN = 430,
            NUM_CARDS_TO_DRAW = 467,
            MOAT_LURKER_MINION = 468,
            TAG_LAST_KNOWN_ATK_IN_HAND = 479,
            EXTRA_END_TURN_EFFECT = 755,
            AMOUNT_HERO_HEALED_THIS_TURN = 821,
            KEEP_ENCHANTMENTS = 851,
            NUM_SPELLS_PLAYED_THIS_GAME = 1001,
            NUM_SECRETS_PLAYED_THIS_GAME = 1002,
            NUM_WEAPONS_PLAYED_THIS_GAME = 1003,
            LAST_CARD_DRAWN = 1004,
            LAST_CARD_DISCARDED = 1005,
            NUM_ELEMENTAL_PLAYED_THIS_TURN = 1006,
            NUM_ELEMENTAL_PLAYED_LAST_TURN = 1007,
            NUM_MURLOCS_PLAYED_THIS_GAME = 1008,
            TAG_LAST_KNOWN_POSITION_ON_BOARD = 1009,
        };

        constexpr GameTag(_enumerated value) : _value(value)
        {
            // Do nothing
        }
        constexpr operator _enumerated() const
        {
            return _enumerated(_value);
        }
        constexpr _integral _to_integral() const;
        constexpr static GameTag _from_integral(_integral value);
        constexpr static GameTag _from_integral_unchecked(_integral value);
        constexpr static _optional _from_integral_nothrow(_integral value);
        const char* _to_string() const;
        constexpr static GameTag _from_string(const char* name);
        constexpr static _optional _from_string_nothrow(const char* name);
        constexpr static GameTag _from_string_nocase(const char* name);
        constexpr static _optional _from_string_nocase_nothrow(const char* name);
        constexpr static bool _is_valid(_integral value);
        constexpr static bool _is_valid(const char* name);
        constexpr static bool _is_valid_nocase(const char* name);
        typedef ::better_enums::_Iterable<GameTag> _value_iterable;
        typedef ::better_enums::_Iterable<const char*> _name_iterable;
        typedef _value_iterable::iterator _value_iterator;
        typedef _name_iterable::iterator _name_iterator;
        constexpr static const std::size_t _size_constant = 377;
        constexpr static std::size_t _size()
        {
            return _size_constant;
        }
        constexpr static const char* _name();
        constexpr static _value_iterable _values();
        static _name_iterable _names();
        _integral _value;

    private:
        GameTag() : _value(0)
        {
            // Do nothing
        }

    private:
        explicit constexpr GameTag(const _integral &value) : _value(value)
        {
            // Do nothing
        }
        static int initialize();
        constexpr static _optional_index _from_value_loop(_integral value, std::size_t index = 0);
        constexpr static _optional_index _from_string_loop(const char* name, std::size_t index = 0);
        constexpr static _optional_index _from_string_nocase_loop(const char* name, std::size_t index = 0);
        friend struct ::better_enums::_initialize_at_program_start<GameTag>;
    };

    namespace better_enums_data_GameTag
    {
        static ::better_enums::_initialize_at_program_start<GameTag> _force_initialization;
        enum _PutNamesInThisScopeAlso
        {
            INVALID = 0,
            IGNORE_DAMAGE = 1,
            TAG_SCRIPT_DATA_NUM_1 = 2,
            TAG_SCRIPT_DATA_NUM_2 = 3,
            TAG_SCRIPT_DATA_ENT_1 = 4,
            TAG_SCRIPT_DATA_ENT_2 = 5,
            MISSION_EVENT = 6,
            TIMEOUT = 7,
            TURN_START = 8,
            TURN_TIMER_SLUSH = 9,
            PREMIUM = 12,
            GOLD_REWARD_STATE = 13,
            PLAYSTATE = 17,
            LAST_AFFECTED_BY = 18,
            STEP = 19,
            TURN = 20,
            FATIGUE = 22,
            CURRENT_PLAYER = 23,
            FIRST_PLAYER = 24,
            RESOURCES_USED = 25,
            RESOURCES = 26,
            HERO_ENTITY = 27,
            MAXHANDSIZE = 28,
            STARTHANDSIZE = 29,
            PLAYER_ID = 30,
            TEAM_ID = 31,
            TRIGGER_VISUAL = 32,
            RECENTLY_ARRIVED = 33,
            PROTECTED = 34,
            PROTECTING = 35,
            DEFENDING = 36,
            PROPOSED_DEFENDER = 37,
            ATTACKING = 38,
            PROPOSED_ATTACKER = 39,
            ATTACHED = 40,
            EXHAUSTED = 43,
            DAMAGE = 44,
            HEALTH = 45,
            ATK = 47,
            COST = 48,
            ZONE = 49,
            CONTROLLER = 50,
            OWNER = 51,
            DEFINITION = 52,
            ENTITY_ID = 53,
            HISTORY_PROXY = 54,
            COPY_DEATHRATTLE = 55,
            COPY_DEATHRATTLE_INDEX = 56,
            ELITE = 114,
            MAXRESOURCES = 176,
            CARD_SET = 183,
            CARDTEXT = 184,
            CARDNAME = 185,
            CARD_ID = 186,
            DURABILITY = 187,
            SILENCED = 188,
            WINDFURY = 189,
            TAUNT = 190,
            STEALTH = 191,
            SPELLPOWER = 192,
            DIVINE_SHIELD = 194,
            CHARGE = 197,
            NEXT_STEP = 198,
            CLASS = 199,
            CARDRACE = 200,
            FACTION = 201,
            CARDTYPE = 202,
            RARITY = 203,
            STATE = 204,
            SUMMONED = 205,
            FREEZE = 208,
            ENRAGED = 212,
            OVERLOAD = 215,
            LOYALTY = 216,
            DEATHRATTLE = 217,
            BATTLECRY = 218,
            SECRET = 219,
            COMBO = 220,
            CANT_HEAL = 221,
            CANT_DAMAGE = 222,
            CANT_SET_ASIDE = 223,
            CANT_REMOVE_FROM_GAME = 224,
            CANT_READY = 225,
            CANT_EXHAUST = 226,
            CANT_ATTACK = 227,
            CANT_TARGET = 228,
            CANT_DESTROY = 229,
            CANT_DISCARD = 230,
            CANT_PLAY = 231,
            CANT_DRAW = 232,
            INCOMING_HEALING_MULTIPLIER = 233,
            INCOMING_HEALING_ADJUSTMENT = 234,
            INCOMING_HEALING_CAP = 235,
            INCOMING_DAMAGE_MULTIPLIER = 236,
            INCOMING_DAMAGE_ADJUSTMENT = 237,
            INCOMING_DAMAGE_CAP = 238,
            CANT_BE_HEALED = 239,
            IMMUNE = 240,
            CANT_BE_SET_ASIDE = 241,
            CANT_BE_REMOVED_FROM_GAME = 242,
            CANT_BE_READIED = 243,
            CANT_BE_EXHAUSTED = 244,
            CANT_BE_ATTACKED = 245,
            CANT_BE_TARGETED = 246,
            CANT_BE_DESTROYED = 247,
            AttackVisualType = 251,
            CardTextInPlay = 252,
            CANT_BE_SUMMONING_SICK = 253,
            FROZEN = 260,
            JUST_PLAYED = 261,
            LINKED_ENTITY = 262,
            ZONE_POSITION = 263,
            CANT_BE_FROZEN = 264,
            COMBO_ACTIVE = 266,
            CARD_TARGET = 267,
            DevState = 268,
            NUM_CARDS_PLAYED_THIS_TURN = 269,
            CANT_BE_TARGETED_BY_OPPONENTS = 270,
            NUM_TURNS_IN_PLAY = 271,
            NUM_TURNS_LEFT = 272,
            OUTGOING_DAMAGE_CAP = 273,
            OUTGOING_DAMAGE_ADJUSTMENT = 274,
            OUTGOING_DAMAGE_MULTIPLIER = 275,
            OUTGOING_HEALING_CAP = 276,
            OUTGOING_HEALING_ADJUSTMENT = 277,
            OUTGOING_HEALING_MULTIPLIER = 278,
            INCOMING_ABILITY_DAMAGE_ADJUSTMENT = 279,
            INCOMING_COMBAT_DAMAGE_ADJUSTMENT = 280,
            OUTGOING_ABILITY_DAMAGE_ADJUSTMENT = 281,
            OUTGOING_COMBAT_DAMAGE_ADJUSTMENT = 282,
            OUTGOING_ABILITY_DAMAGE_MULTIPLIER = 283,
            OUTGOING_ABILITY_DAMAGE_CAP = 284,
            INCOMING_ABILITY_DAMAGE_MULTIPLIER = 285,
            INCOMING_ABILITY_DAMAGE_CAP = 286,
            OUTGOING_COMBAT_DAMAGE_MULTIPLIER = 287,
            OUTGOING_COMBAT_DAMAGE_CAP = 288,
            INCOMING_COMBAT_DAMAGE_MULTIPLIER = 289,
            INCOMING_COMBAT_DAMAGE_CAP = 290,
            CURRENT_SPELLPOWER = 291,
            ARMOR = 292,
            MORPH = 293,
            IS_MORPHED = 294,
            TEMP_RESOURCES = 295,
            OVERLOAD_OWED = 296,
            NUM_ATTACKS_THIS_TURN = 297,
            NEXT_ALLY_BUFF = 302,
            MAGNET = 303,
            FIRST_CARD_PLAYED_THIS_TURN = 304,
            MULLIGAN_STATE = 305,
            TAUNT_READY = 306,
            STEALTH_READY = 307,
            CHARGE_READY = 308,
            CANT_BE_TARGETED_BY_SPELLS = 311,
            SHOULDEXITCOMBAT = 312,
            CREATOR = 313,
            CANT_BE_SILENCED = 314,
            PARENT_CARD = 316,
            NUM_MINIONS_PLAYED_THIS_TURN = 317,
            PREDAMAGE = 318,
            COLLECTIBLE = 321,
            TARGETING_ARROW_TEXT = 325,
            DATABASE_ID = 327,
            ENCHANTMENT_BIRTH_VISUAL = 330,
            ENCHANTMENT_IDLE_VISUAL = 331,
            CANT_BE_TARGETED_BY_HERO_POWERS = 332,
            WEAPON = 334,
            InvisibleDeathrattle = 335,
            HEALTH_MINIMUM = 337,
            TAG_ONE_TURN_EFFECT = 338,
            SILENCE = 339,
            COUNTER = 340,
            ARTISTNAME = 342,
            LocalizationNotes = 344,
            ZONES_REVEALED = 348,
            ImmuneToSpellpower = 349,
            ADJACENT_BUFF = 350,
            FLAVORTEXT = 351,
            FORCED_PLAY = 352,
            LOW_HEALTH_THRESHOLD = 353,
            IGNORE_DAMAGE_OFF = 354,
            GrantCharge = 355,
            SPELLPOWER_DOUBLE = 356,
            HEALING_DOUBLE = 357,
            NUM_OPTIONS_PLAYED_THIS_TURN = 358,
            NUM_OPTIONS = 359,
            TO_BE_DESTROYED = 360,
            HealTarget = 361,
            AURA = 362,
            POISONOUS = 363,
            HOW_TO_EARN = 364,
            HOW_TO_EARN_GOLDEN = 365,
            HERO_POWER_DOUBLE = 366,
            AI_MUST_PLAY = 367,
            NUM_MINIONS_PLAYER_KILLED_THIS_TURN = 368,
            NUM_MINIONS_KILLED_THIS_TURN = 369,
            AFFECTED_BY_SPELL_POWER = 370,
            EXTRA_DEATHRATTLES = 371,
            START_WITH_1_HEALTH = 372,
            IMMUNE_WHILE_ATTACKING = 373,
            MULTIPLY_HERO_DAMAGE = 374,
            MULTIPLY_BUFF_VALUE = 375,
            CUSTOM_KEYWORD_EFFECT = 376,
            TOPDECK = 377,
            CANT_BE_TARGETED_BY_BATTLECRIES = 379,
            HERO_POWER = 380,
            DEATHRATTLE_RETURN_ZONE = 382,
            STEADY_SHOT_CAN_TARGET = 383,
            DISPLAYED_CREATOR = 385,
            POWERED_UP = 386,
            SPARE_PART = 388,
            FORGETFUL = 389,
            CAN_SUMMON_MAXPLUSONE_MINION = 390,
            OBFUSCATED = 391,
            BURNING = 392,
            OVERLOAD_LOCKED = 393,
            NUM_TIMES_HERO_POWER_USED_THIS_GAME = 394,
            CURRENT_HEROPOWER_DAMAGE_BONUS = 395,
            HEROPOWER_DAMAGE = 396,
            LAST_CARD_PLAYED = 397,
            NUM_FRIENDLY_MINIONS_THAT_DIED_THIS_TURN = 398,
            NUM_CARDS_DRAWN_THIS_TURN = 399,
            AI_ONE_SHOT_KILL = 400,
            EVIL_GLOW = 401,
            HIDE_STATS = 402,
            INSPIRE = 403,
            RECEIVES_DOUBLE_SPELLDAMAGE_BONUS = 404,
            HEROPOWER_ADDITIONAL_ACTIVATIONS = 405,
            HEROPOWER_ACTIVATIONS_THIS_TURN = 406,
            REVEALED = 410,
            NUM_FRIENDLY_MINIONS_THAT_DIED_THIS_GAME = 412,
            CANNOT_ATTACK_HEROES = 413,
            LOCK_AND_LOAD = 414,
            DISCOVER = 415,
            SHADOWFORM = 416,
            NUM_FRIENDLY_MINIONS_THAT_ATTACKED_THIS_TURN = 417,
            NUM_RESOURCES_SPENT_THIS_GAME = 418,
            CHOOSE_BOTH = 419,
            ELECTRIC_CHARGE_LEVEL = 420,
            HEAVILY_ARMORED = 421,
            DONT_SHOW_IMMUNE = 422,
            RITUAL = 424,
            PREHEALING = 425,
            APPEAR_FUNCTIONALLY_DEAD = 426,
            OVERLOAD_THIS_GAME = 427,
            SPELLS_COST_HEALTH = 431,
            HISTORY_PROXY_NO_BIG_CARD = 432,
            PROXY_CTHUN = 434,
            TRANSFORMED_FROM_CARD = 435,
            CTHUN = 436,
            CAST_RANDOM_SPELLS = 437,
            SHIFTING = 438,
            JADE_GOLEM = 441,
            EMBRACE_THE_SHADOW = 442,
            CHOOSE_ONE = 443,
            EXTRA_ATTACKS_THIS_TURN = 444,
            SEEN_CTHUN = 445,
            MINION_TYPE_REFERENCE = 447,
            UNTOUCHABLE = 448,
            RED_MANA_CRYSTALS = 449,
            SCORE_LABELID_1 = 450,
            SCORE_VALUE_1 = 451,
            SCORE_LABELID_2 = 452,
            SCORE_VALUE_2 = 453,
            SCORE_LABELID_3 = 454,
            SCORE_VALUE_3 = 455,
            CANT_BE_FATIGUED = 456,
            AUTOATTACK = 457,
            ARMS_DEALING = 458,
            PENDING_EVOLUTIONS = 461,
            QUEST = 462,
            TAG_LAST_KNOWN_COST_IN_HAND = 466,
            DEFINING_ENCHANTMENT = 469,
            FINISH_ATTACK_SPELL_ON_DAMAGE = 470,
            MODULAR_ENTITY_PART_1 = 471,
            MODULAR_ENTITY_PART_2 = 472,
            MODIFY_DEFINITION_ATTACK = 473,
            MODIFY_DEFINITION_HEALTH = 474,
            MODIFY_DEFINITION_COST = 475,
            MULTIPLE_CLASSES = 476,
            ALL_TARGETS_RANDOM = 477,
            MULTI_CLASS_GROUP = 480,
            CARD_COSTS_HEALTH = 481,
            GRIMY_GOONS = 482,
            JADE_LOTUS = 483,
            KABAL = 484,
            ADDITIONAL_PLAY_REQS_1 = 515,
            ADDITIONAL_PLAY_REQS_2 = 516,
            ELEMENTAL_POWERED_UP = 532,
            QUEST_PROGRESS = 534,
            QUEST_PROGRESS_TOTAL = 535,
            QUEST_CONTRIBUTOR = 541,
            ADAPT = 546,
            IS_CURRENT_TURN_AN_EXTRA_TURN = 547,
            EXTRA_TURNS_TAKEN_THIS_GAME = 548,
            SHIFTING_MINION = 549,
            SHIFTING_WEAPON = 550,
            DEATH_KNIGHT = 554,
            BOSS = 556,
            TREASURE = 557,
            TREASURE_DEFINTIONAL_ATTACK = 558,
            TREASURE_DEFINTIONAL_COST = 559,
            TREASURE_DEFINTIONAL_HEALTH = 560,
            ACTS_LIKE_A_SPELL = 561,
            STAMPEDE = 564,
            EMPOWERED_TREASURE = 646,
            ONE_SIDED_GHOSTLY = 648,
            CURRENT_NEGATIVE_SPELLPOWER = 651,
            IS_VAMPIRE = 680,
            CORRUPTED = 681,
            HIDE_HEALTH = 682,
            HIDE_ATTACK = 683,
            HIDE_COST = 684,
            LIFESTEAL = 685,
            OVERRIDE_EMOTE_0 = 740,
            OVERRIDE_EMOTE_1 = 741,
            OVERRIDE_EMOTE_2 = 742,
            OVERRIDE_EMOTE_3 = 743,
            OVERRIDE_EMOTE_4 = 744,
            OVERRIDE_EMOTE_5 = 745,
            SCORE_FOOTERID = 751,
            RECRUIT = 763,
            LOOT_CARD_1 = 764,
            LOOT_CARD_2 = 765,
            LOOT_CARD_3 = 766,
            HERO_POWER_DISABLED = 777,
            VALEERASHADOW = 779,
            OVERRIDECARDNAME = 781,
            OVERRIDECARDTEXTBUILDER = 782,
            DUNGEON_PASSIVE_BUFF = 783,
            GHOSTLY = 785,
            DISGUISED_TWIN = 788,
            SECRET_DEATHRATTLE = 789,
            RUSH = 791,
            REVEAL_CHOICES = 792,
            HIDDEN_CHOICE = 813,
            ZOMBEAST = 823,
            HERO_EMOTE_SILENCED = 832,
            MINION_IN_HAND_BUFF = 845,
            ECHO = 846,
            IGNORE_HIDE_STATS_FOR_BIG_CARD = 857,
            REAL_TIME_TRANSFORM = 859,
            WAIT_FOR_PLAYER_RECONNECT_PERIOD = 860,
            PHASED_RESTART = 888,
            HEALTH_DISPLAY = 917,
            ENABLE_HEALTH_DISPLAY = 920,
            VOODOO_LINK = 921,
            ATTACKABLE_BY_RUSH = 930,
            SHIFTING_SPELL = 936,
            USE_ALTERNATE_CARD_TEXT = 955,
            SUPPRESS_DEATH_SOUND = 959,
            ECHOING_OOZE_SPELL = 963,
            COLLECTIONMANAGER_FILTER_MANA_EVEN = 956,
            COLLECTIONMANAGER_FILTER_MANA_ODD = 957,
            ZOMBEAST_DEBUG_CURRENT_BEAST_DATABASE_ID = 964,
            ZOMBEAST_DEBUG_CURRENT_ITERATION = 965,
            ZOMBEAST_DEBUG_MAX_ITERATIONS = 966,
            START_OF_GAME = 968,
            ENCHANTMENT_INVISIBLE = 976,

            // More or less guessed gametags
            HEADCRACK_COMBO = 298,
            RESTORE_TO_DAMAGE = 326,
            CONTROLLER_CHANGED_THIS_TURN = 333,
            EXTRA_BATTLECRY = 411,
            NUM_SPELLS_PLAYED_THIS_TURN = 430,
            NUM_CARDS_TO_DRAW = 467,
            MOAT_LURKER_MINION = 468,
            TAG_LAST_KNOWN_ATK_IN_HAND = 479,
            EXTRA_END_TURN_EFFECT = 755,
            AMOUNT_HERO_HEALED_THIS_TURN = 821,
            KEEP_ENCHANTMENTS = 851,
            NUM_SPELLS_PLAYED_THIS_GAME = 1001,
            NUM_SECRETS_PLAYED_THIS_GAME = 1002,
            NUM_WEAPONS_PLAYED_THIS_GAME = 1003,
            LAST_CARD_DRAWN = 1004,
            LAST_CARD_DISCARDED = 1005,
            NUM_ELEMENTAL_PLAYED_THIS_TURN = 1006,
            NUM_ELEMENTAL_PLAYED_LAST_TURN = 1007,
            NUM_MURLOCS_PLAYED_THIS_GAME = 1008,
            TAG_LAST_KNOWN_POSITION_ON_BOARD = 1009,
        };
        constexpr const GameTag _value_array[] =
        {
            ((::better_enums::_eat_assign<GameTag>)GameTag::INVALID = 0),
            ((::better_enums::_eat_assign<GameTag>)GameTag::IGNORE_DAMAGE = 1),
            ((::better_enums::_eat_assign<GameTag>)GameTag::TAG_SCRIPT_DATA_NUM_1 = 2),
            ((::better_enums::_eat_assign<GameTag>)GameTag::TAG_SCRIPT_DATA_NUM_2 = 3),
            ((::better_enums::_eat_assign<GameTag>)GameTag::TAG_SCRIPT_DATA_ENT_1 = 4),
            ((::better_enums::_eat_assign<GameTag>)GameTag::TAG_SCRIPT_DATA_ENT_2 = 5),
            ((::better_enums::_eat_assign<GameTag>)GameTag::MISSION_EVENT = 6),
            ((::better_enums::_eat_assign<GameTag>)GameTag::TIMEOUT = 7),
            ((::better_enums::_eat_assign<GameTag>)GameTag::TURN_START = 8),
            ((::better_enums::_eat_assign<GameTag>)GameTag::TURN_TIMER_SLUSH = 9),
            ((::better_enums::_eat_assign<GameTag>)GameTag::PREMIUM = 12),
            ((::better_enums::_eat_assign<GameTag>)GameTag::GOLD_REWARD_STATE = 13),
            ((::better_enums::_eat_assign<GameTag>)GameTag::PLAYSTATE = 17),
            ((::better_enums::_eat_assign<GameTag>)GameTag::LAST_AFFECTED_BY = 18),
            ((::better_enums::_eat_assign<GameTag>)GameTag::STEP = 19),
            ((::better_enums::_eat_assign<GameTag>)GameTag::TURN = 20),
            ((::better_enums::_eat_assign<GameTag>)GameTag::FATIGUE = 22),
            ((::better_enums::_eat_assign<GameTag>)GameTag::CURRENT_PLAYER = 23),
            ((::better_enums::_eat_assign<GameTag>)GameTag::FIRST_PLAYER = 24),
            ((::better_enums::_eat_assign<GameTag>)GameTag::RESOURCES_USED = 25),
            ((::better_enums::_eat_assign<GameTag>)GameTag::RESOURCES = 26),
            ((::better_enums::_eat_assign<GameTag>)GameTag::HERO_ENTITY = 27),
            ((::better_enums::_eat_assign<GameTag>)GameTag::MAXHANDSIZE = 28),
            ((::better_enums::_eat_assign<GameTag>)GameTag::STARTHANDSIZE = 29),
            ((::better_enums::_eat_assign<GameTag>)GameTag::PLAYER_ID = 30),
            ((::better_enums::_eat_assign<GameTag>)GameTag::TEAM_ID = 31),
            ((::better_enums::_eat_assign<GameTag>)GameTag::TRIGGER_VISUAL = 32),
            ((::better_enums::_eat_assign<GameTag>)GameTag::RECENTLY_ARRIVED = 33),
            ((::better_enums::_eat_assign<GameTag>)GameTag::PROTECTED = 34),
            ((::better_enums::_eat_assign<GameTag>)GameTag::PROTECTING = 35),
            ((::better_enums::_eat_assign<GameTag>)GameTag::DEFENDING = 36),
            ((::better_enums::_eat_assign<GameTag>)GameTag::PROPOSED_DEFENDER = 37),
            ((::better_enums::_eat_assign<GameTag>)GameTag::ATTACKING = 38),
            ((::better_enums::_eat_assign<GameTag>)GameTag::PROPOSED_ATTACKER = 39),
            ((::better_enums::_eat_assign<GameTag>)GameTag::ATTACHED = 40),
            ((::better_enums::_eat_assign<GameTag>)GameTag::EXHAUSTED = 43),
            ((::better_enums::_eat_assign<GameTag>)GameTag::DAMAGE = 44),
            ((::better_enums::_eat_assign<GameTag>)GameTag::HEALTH = 45),
            ((::better_enums::_eat_assign<GameTag>)GameTag::ATK = 47),
            ((::better_enums::_eat_assign<GameTag>)GameTag::COST = 48),
            ((::better_enums::_eat_assign<GameTag>)GameTag::ZONE = 49),
            ((::better_enums::_eat_assign<GameTag>)GameTag::CONTROLLER = 50),
            ((::better_enums::_eat_assign<GameTag>)GameTag::OWNER = 51),
            ((::better_enums::_eat_assign<GameTag>)GameTag::DEFINITION = 52),
            ((::better_enums::_eat_assign<GameTag>)GameTag::ENTITY_ID = 53),
            ((::better_enums::_eat_assign<GameTag>)GameTag::HISTORY_PROXY = 54),
            ((::better_enums::_eat_assign<GameTag>)GameTag::COPY_DEATHRATTLE = 55),
            ((::better_enums::_eat_assign<GameTag>)GameTag::COPY_DEATHRATTLE_INDEX = 56),
            ((::better_enums::_eat_assign<GameTag>)GameTag::ELITE = 114),
            ((::better_enums::_eat_assign<GameTag>)GameTag::MAXRESOURCES = 176),
            ((::better_enums::_eat_assign<GameTag>)GameTag::CARD_SET = 183),
            ((::better_enums::_eat_assign<GameTag>)GameTag::CARDTEXT = 184),
            ((::better_enums::_eat_assign<GameTag>)GameTag::CARDNAME = 185),
            ((::better_enums::_eat_assign<GameTag>)GameTag::CARD_ID = 186),
            ((::better_enums::_eat_assign<GameTag>)GameTag::DURABILITY = 187),
            ((::better_enums::_eat_assign<GameTag>)GameTag::SILENCED = 188),
            ((::better_enums::_eat_assign<GameTag>)GameTag::WINDFURY = 189),
            ((::better_enums::_eat_assign<GameTag>)GameTag::TAUNT = 190),
            ((::better_enums::_eat_assign<GameTag>)GameTag::STEALTH = 191),
            ((::better_enums::_eat_assign<GameTag>)GameTag::SPELLPOWER = 192),
            ((::better_enums::_eat_assign<GameTag>)GameTag::DIVINE_SHIELD = 194),
            ((::better_enums::_eat_assign<GameTag>)GameTag::CHARGE = 197),
            ((::better_enums::_eat_assign<GameTag>)GameTag::NEXT_STEP = 198),
            ((::better_enums::_eat_assign<GameTag>)GameTag::CLASS = 199),
            ((::better_enums::_eat_assign<GameTag>)GameTag::CARDRACE = 200),
            ((::better_enums::_eat_assign<GameTag>)GameTag::FACTION = 201),
            ((::better_enums::_eat_assign<GameTag>)GameTag::CARDTYPE = 202),
            ((::better_enums::_eat_assign<GameTag>)GameTag::RARITY = 203),
            ((::better_enums::_eat_assign<GameTag>)GameTag::STATE = 204),
            ((::better_enums::_eat_assign<GameTag>)GameTag::SUMMONED = 205),
            ((::better_enums::_eat_assign<GameTag>)GameTag::FREEZE = 208),
            ((::better_enums::_eat_assign<GameTag>)GameTag::ENRAGED = 212),
            ((::better_enums::_eat_assign<GameTag>)GameTag::OVERLOAD = 215),
            ((::better_enums::_eat_assign<GameTag>)GameTag::LOYALTY = 216),
            ((::better_enums::_eat_assign<GameTag>)GameTag::DEATHRATTLE = 217),
            ((::better_enums::_eat_assign<GameTag>)GameTag::BATTLECRY = 218),
            ((::better_enums::_eat_assign<GameTag>)GameTag::SECRET = 219),
            ((::better_enums::_eat_assign<GameTag>)GameTag::COMBO = 220),
            ((::better_enums::_eat_assign<GameTag>)GameTag::CANT_HEAL = 221),
            ((::better_enums::_eat_assign<GameTag>)GameTag::CANT_DAMAGE = 222),
            ((::better_enums::_eat_assign<GameTag>)GameTag::CANT_SET_ASIDE = 223),
            ((::better_enums::_eat_assign<GameTag>)GameTag::CANT_REMOVE_FROM_GAME = 224),
            ((::better_enums::_eat_assign<GameTag>)GameTag::CANT_READY = 225),
            ((::better_enums::_eat_assign<GameTag>)GameTag::CANT_EXHAUST = 226),
            ((::better_enums::_eat_assign<GameTag>)GameTag::CANT_ATTACK = 227),
            ((::better_enums::_eat_assign<GameTag>)GameTag::CANT_TARGET = 228),
            ((::better_enums::_eat_assign<GameTag>)GameTag::CANT_DESTROY = 229),
            ((::better_enums::_eat_assign<GameTag>)GameTag::CANT_DISCARD = 230),
            ((::better_enums::_eat_assign<GameTag>)GameTag::CANT_PLAY = 231),
            ((::better_enums::_eat_assign<GameTag>)GameTag::CANT_DRAW = 232),
            ((::better_enums::_eat_assign<GameTag>)GameTag::INCOMING_HEALING_MULTIPLIER = 233),
            ((::better_enums::_eat_assign<GameTag>)GameTag::INCOMING_HEALING_ADJUSTMENT = 234),
            ((::better_enums::_eat_assign<GameTag>)GameTag::INCOMING_HEALING_CAP = 235),
            ((::better_enums::_eat_assign<GameTag>)GameTag::INCOMING_DAMAGE_MULTIPLIER = 236),
            ((::better_enums::_eat_assign<GameTag>)GameTag::INCOMING_DAMAGE_ADJUSTMENT = 237),
            ((::better_enums::_eat_assign<GameTag>)GameTag::INCOMING_DAMAGE_CAP = 238),
            ((::better_enums::_eat_assign<GameTag>)GameTag::CANT_BE_HEALED = 239),
            ((::better_enums::_eat_assign<GameTag>)GameTag::IMMUNE = 240),
            ((::better_enums::_eat_assign<GameTag>)GameTag::CANT_BE_SET_ASIDE = 241),
            ((::better_enums::_eat_assign<GameTag>)GameTag::CANT_BE_REMOVED_FROM_GAME = 242),
            ((::better_enums::_eat_assign<GameTag>)GameTag::CANT_BE_READIED = 243),
            ((::better_enums::_eat_assign<GameTag>)GameTag::CANT_BE_EXHAUSTED = 244),
            ((::better_enums::_eat_assign<GameTag>)GameTag::CANT_BE_ATTACKED = 245),
            ((::better_enums::_eat_assign<GameTag>)GameTag::CANT_BE_TARGETED = 246),
            ((::better_enums::_eat_assign<GameTag>)GameTag::CANT_BE_DESTROYED = 247),
            ((::better_enums::_eat_assign<GameTag>)GameTag::AttackVisualType = 251),
            ((::better_enums::_eat_assign<GameTag>)GameTag::CardTextInPlay = 252),
            ((::better_enums::_eat_assign<GameTag>)GameTag::CANT_BE_SUMMONING_SICK = 253),
            ((::better_enums::_eat_assign<GameTag>)GameTag::FROZEN = 260),
            ((::better_enums::_eat_assign<GameTag>)GameTag::JUST_PLAYED = 261),
            ((::better_enums::_eat_assign<GameTag>)GameTag::LINKED_ENTITY = 262),
            ((::better_enums::_eat_assign<GameTag>)GameTag::ZONE_POSITION = 263),
            ((::better_enums::_eat_assign<GameTag>)GameTag::CANT_BE_FROZEN = 264),
            ((::better_enums::_eat_assign<GameTag>)GameTag::COMBO_ACTIVE = 266),
            ((::better_enums::_eat_assign<GameTag>)GameTag::CARD_TARGET = 267),
            ((::better_enums::_eat_assign<GameTag>)GameTag::DevState = 268),
            ((::better_enums::_eat_assign<GameTag>)GameTag::NUM_CARDS_PLAYED_THIS_TURN = 269),
            ((::better_enums::_eat_assign<GameTag>)GameTag::CANT_BE_TARGETED_BY_OPPONENTS = 270),
            ((::better_enums::_eat_assign<GameTag>)GameTag::NUM_TURNS_IN_PLAY = 271),
            ((::better_enums::_eat_assign<GameTag>)GameTag::NUM_TURNS_LEFT = 272),
            ((::better_enums::_eat_assign<GameTag>)GameTag::OUTGOING_DAMAGE_CAP = 273),
            ((::better_enums::_eat_assign<GameTag>)GameTag::OUTGOING_DAMAGE_ADJUSTMENT = 274),
            ((::better_enums::_eat_assign<GameTag>)GameTag::OUTGOING_DAMAGE_MULTIPLIER = 275),
            ((::better_enums::_eat_assign<GameTag>)GameTag::OUTGOING_HEALING_CAP = 276),
            ((::better_enums::_eat_assign<GameTag>)GameTag::OUTGOING_HEALING_ADJUSTMENT = 277),
            ((::better_enums::_eat_assign<GameTag>)GameTag::OUTGOING_HEALING_MULTIPLIER = 278),
            ((::better_enums::_eat_assign<GameTag>)GameTag::INCOMING_ABILITY_DAMAGE_ADJUSTMENT = 279),
            ((::better_enums::_eat_assign<GameTag>)GameTag::INCOMING_COMBAT_DAMAGE_ADJUSTMENT = 280),
            ((::better_enums::_eat_assign<GameTag>)GameTag::OUTGOING_ABILITY_DAMAGE_ADJUSTMENT = 281),
            ((::better_enums::_eat_assign<GameTag>)GameTag::OUTGOING_COMBAT_DAMAGE_ADJUSTMENT = 282),
            ((::better_enums::_eat_assign<GameTag>)GameTag::OUTGOING_ABILITY_DAMAGE_MULTIPLIER = 283),
            ((::better_enums::_eat_assign<GameTag>)GameTag::OUTGOING_ABILITY_DAMAGE_CAP = 284),
            ((::better_enums::_eat_assign<GameTag>)GameTag::INCOMING_ABILITY_DAMAGE_MULTIPLIER = 285),
            ((::better_enums::_eat_assign<GameTag>)GameTag::INCOMING_ABILITY_DAMAGE_CAP = 286),
            ((::better_enums::_eat_assign<GameTag>)GameTag::OUTGOING_COMBAT_DAMAGE_MULTIPLIER = 287),
            ((::better_enums::_eat_assign<GameTag>)GameTag::OUTGOING_COMBAT_DAMAGE_CAP = 288),
            ((::better_enums::_eat_assign<GameTag>)GameTag::INCOMING_COMBAT_DAMAGE_MULTIPLIER = 289),
            ((::better_enums::_eat_assign<GameTag>)GameTag::INCOMING_COMBAT_DAMAGE_CAP = 290),
            ((::better_enums::_eat_assign<GameTag>)GameTag::CURRENT_SPELLPOWER = 291),
            ((::better_enums::_eat_assign<GameTag>)GameTag::ARMOR = 292),
            ((::better_enums::_eat_assign<GameTag>)GameTag::MORPH = 293),
            ((::better_enums::_eat_assign<GameTag>)GameTag::IS_MORPHED = 294),
            ((::better_enums::_eat_assign<GameTag>)GameTag::TEMP_RESOURCES = 295),
            ((::better_enums::_eat_assign<GameTag>)GameTag::OVERLOAD_OWED = 296),
            ((::better_enums::_eat_assign<GameTag>)GameTag::NUM_ATTACKS_THIS_TURN = 297),
            ((::better_enums::_eat_assign<GameTag>)GameTag::NEXT_ALLY_BUFF = 302),
            ((::better_enums::_eat_assign<GameTag>)GameTag::MAGNET = 303),
            ((::better_enums::_eat_assign<GameTag>)GameTag::FIRST_CARD_PLAYED_THIS_TURN = 304),
            ((::better_enums::_eat_assign<GameTag>)GameTag::MULLIGAN_STATE = 305),
            ((::better_enums::_eat_assign<GameTag>)GameTag::TAUNT_READY = 306),
            ((::better_enums::_eat_assign<GameTag>)GameTag::STEALTH_READY = 307),
            ((::better_enums::_eat_assign<GameTag>)GameTag::CHARGE_READY = 308),
            ((::better_enums::_eat_assign<GameTag>)GameTag::CANT_BE_TARGETED_BY_SPELLS = 311),
            ((::better_enums::_eat_assign<GameTag>)GameTag::SHOULDEXITCOMBAT = 312),
            ((::better_enums::_eat_assign<GameTag>)GameTag::CREATOR = 313),
            ((::better_enums::_eat_assign<GameTag>)GameTag::CANT_BE_SILENCED = 314),
            ((::better_enums::_eat_assign<GameTag>)GameTag::PARENT_CARD = 316),
            ((::better_enums::_eat_assign<GameTag>)GameTag::NUM_MINIONS_PLAYED_THIS_TURN = 317),
            ((::better_enums::_eat_assign<GameTag>)GameTag::PREDAMAGE = 318),
            ((::better_enums::_eat_assign<GameTag>)GameTag::COLLECTIBLE = 321),
            ((::better_enums::_eat_assign<GameTag>)GameTag::TARGETING_ARROW_TEXT = 325),
            ((::better_enums::_eat_assign<GameTag>)GameTag::DATABASE_ID = 327),
            ((::better_enums::_eat_assign<GameTag>)GameTag::ENCHANTMENT_BIRTH_VISUAL = 330),
            ((::better_enums::_eat_assign<GameTag>)GameTag::ENCHANTMENT_IDLE_VISUAL = 331),
            ((::better_enums::_eat_assign<GameTag>)GameTag::CANT_BE_TARGETED_BY_HERO_POWERS = 332),
            ((::better_enums::_eat_assign<GameTag>)GameTag::WEAPON = 334),
            ((::better_enums::_eat_assign<GameTag>)GameTag::InvisibleDeathrattle = 335),
            ((::better_enums::_eat_assign<GameTag>)GameTag::HEALTH_MINIMUM = 337),
            ((::better_enums::_eat_assign<GameTag>)GameTag::TAG_ONE_TURN_EFFECT = 338),
            ((::better_enums::_eat_assign<GameTag>)GameTag::SILENCE = 339),
            ((::better_enums::_eat_assign<GameTag>)GameTag::COUNTER = 340),
            ((::better_enums::_eat_assign<GameTag>)GameTag::ARTISTNAME = 342),
            ((::better_enums::_eat_assign<GameTag>)GameTag::LocalizationNotes = 344),
            ((::better_enums::_eat_assign<GameTag>)GameTag::ZONES_REVEALED = 348),
            ((::better_enums::_eat_assign<GameTag>)GameTag::ImmuneToSpellpower = 349),
            ((::better_enums::_eat_assign<GameTag>)GameTag::ADJACENT_BUFF = 350),
            ((::better_enums::_eat_assign<GameTag>)GameTag::FLAVORTEXT = 351),
            ((::better_enums::_eat_assign<GameTag>)GameTag::FORCED_PLAY = 352),
            ((::better_enums::_eat_assign<GameTag>)GameTag::LOW_HEALTH_THRESHOLD = 353),
            ((::better_enums::_eat_assign<GameTag>)GameTag::IGNORE_DAMAGE_OFF = 354),
            ((::better_enums::_eat_assign<GameTag>)GameTag::GrantCharge = 355),
            ((::better_enums::_eat_assign<GameTag>)GameTag::SPELLPOWER_DOUBLE = 356),
            ((::better_enums::_eat_assign<GameTag>)GameTag::HEALING_DOUBLE = 357),
            ((::better_enums::_eat_assign<GameTag>)GameTag::NUM_OPTIONS_PLAYED_THIS_TURN = 358),
            ((::better_enums::_eat_assign<GameTag>)GameTag::NUM_OPTIONS = 359),
            ((::better_enums::_eat_assign<GameTag>)GameTag::TO_BE_DESTROYED = 360),
            ((::better_enums::_eat_assign<GameTag>)GameTag::HealTarget = 361),
            ((::better_enums::_eat_assign<GameTag>)GameTag::AURA = 362),
            ((::better_enums::_eat_assign<GameTag>)GameTag::POISONOUS = 363),
            ((::better_enums::_eat_assign<GameTag>)GameTag::HOW_TO_EARN = 364),
            ((::better_enums::_eat_assign<GameTag>)GameTag::HOW_TO_EARN_GOLDEN = 365),
            ((::better_enums::_eat_assign<GameTag>)GameTag::HERO_POWER_DOUBLE = 366),
            ((::better_enums::_eat_assign<GameTag>)GameTag::AI_MUST_PLAY = 367),
            ((::better_enums::_eat_assign<GameTag>)GameTag::NUM_MINIONS_PLAYER_KILLED_THIS_TURN = 368),
            ((::better_enums::_eat_assign<GameTag>)GameTag::NUM_MINIONS_KILLED_THIS_TURN = 369),
            ((::better_enums::_eat_assign<GameTag>)GameTag::AFFECTED_BY_SPELL_POWER = 370),
            ((::better_enums::_eat_assign<GameTag>)GameTag::EXTRA_DEATHRATTLES = 371),
            ((::better_enums::_eat_assign<GameTag>)GameTag::START_WITH_1_HEALTH = 372),
            ((::better_enums::_eat_assign<GameTag>)GameTag::IMMUNE_WHILE_ATTACKING = 373),
            ((::better_enums::_eat_assign<GameTag>)GameTag::MULTIPLY_HERO_DAMAGE = 374),
            ((::better_enums::_eat_assign<GameTag>)GameTag::MULTIPLY_BUFF_VALUE = 375),
            ((::better_enums::_eat_assign<GameTag>)GameTag::CUSTOM_KEYWORD_EFFECT = 376),
            ((::better_enums::_eat_assign<GameTag>)GameTag::TOPDECK = 377),
            ((::better_enums::_eat_assign<GameTag>)GameTag::CANT_BE_TARGETED_BY_BATTLECRIES = 379),
            ((::better_enums::_eat_assign<GameTag>)GameTag::HERO_POWER = 380),
            ((::better_enums::_eat_assign<GameTag>)GameTag::DEATHRATTLE_RETURN_ZONE = 382),
            ((::better_enums::_eat_assign<GameTag>)GameTag::STEADY_SHOT_CAN_TARGET = 383),
            ((::better_enums::_eat_assign<GameTag>)GameTag::DISPLAYED_CREATOR = 385),
            ((::better_enums::_eat_assign<GameTag>)GameTag::POWERED_UP = 386),
            ((::better_enums::_eat_assign<GameTag>)GameTag::SPARE_PART = 388),
            ((::better_enums::_eat_assign<GameTag>)GameTag::FORGETFUL = 389),
            ((::better_enums::_eat_assign<GameTag>)GameTag::CAN_SUMMON_MAXPLUSONE_MINION = 390),
            ((::better_enums::_eat_assign<GameTag>)GameTag::OBFUSCATED = 391),
            ((::better_enums::_eat_assign<GameTag>)GameTag::BURNING = 392),
            ((::better_enums::_eat_assign<GameTag>)GameTag::OVERLOAD_LOCKED = 393),
            ((::better_enums::_eat_assign<GameTag>)GameTag::NUM_TIMES_HERO_POWER_USED_THIS_GAME = 394),
            ((::better_enums::_eat_assign<GameTag>)GameTag::CURRENT_HEROPOWER_DAMAGE_BONUS = 395),
            ((::better_enums::_eat_assign<GameTag>)GameTag::HEROPOWER_DAMAGE = 396),
            ((::better_enums::_eat_assign<GameTag>)GameTag::LAST_CARD_PLAYED = 397),
            ((::better_enums::_eat_assign<GameTag>)GameTag::NUM_FRIENDLY_MINIONS_THAT_DIED_THIS_TURN = 398),
            ((::better_enums::_eat_assign<GameTag>)GameTag::NUM_CARDS_DRAWN_THIS_TURN = 399),
            ((::better_enums::_eat_assign<GameTag>)GameTag::AI_ONE_SHOT_KILL = 400),
            ((::better_enums::_eat_assign<GameTag>)GameTag::EVIL_GLOW = 401),
            ((::better_enums::_eat_assign<GameTag>)GameTag::HIDE_STATS = 402),
            ((::better_enums::_eat_assign<GameTag>)GameTag::INSPIRE = 403),
            ((::better_enums::_eat_assign<GameTag>)GameTag::RECEIVES_DOUBLE_SPELLDAMAGE_BONUS = 404),
            ((::better_enums::_eat_assign<GameTag>)GameTag::HEROPOWER_ADDITIONAL_ACTIVATIONS = 405),
            ((::better_enums::_eat_assign<GameTag>)GameTag::HEROPOWER_ACTIVATIONS_THIS_TURN = 406),
            ((::better_enums::_eat_assign<GameTag>)GameTag::REVEALED = 410),
            ((::better_enums::_eat_assign<GameTag>)GameTag::NUM_FRIENDLY_MINIONS_THAT_DIED_THIS_GAME = 412),
            ((::better_enums::_eat_assign<GameTag>)GameTag::CANNOT_ATTACK_HEROES = 413),
            ((::better_enums::_eat_assign<GameTag>)GameTag::LOCK_AND_LOAD = 414),
            ((::better_enums::_eat_assign<GameTag>)GameTag::DISCOVER = 415),
            ((::better_enums::_eat_assign<GameTag>)GameTag::SHADOWFORM = 416),
            ((::better_enums::_eat_assign<GameTag>)GameTag::NUM_FRIENDLY_MINIONS_THAT_ATTACKED_THIS_TURN = 417),
            ((::better_enums::_eat_assign<GameTag>)GameTag::NUM_RESOURCES_SPENT_THIS_GAME = 418),
            ((::better_enums::_eat_assign<GameTag>)GameTag::CHOOSE_BOTH = 419),
            ((::better_enums::_eat_assign<GameTag>)GameTag::ELECTRIC_CHARGE_LEVEL = 420),
            ((::better_enums::_eat_assign<GameTag>)GameTag::HEAVILY_ARMORED = 421),
            ((::better_enums::_eat_assign<GameTag>)GameTag::DONT_SHOW_IMMUNE = 422),
            ((::better_enums::_eat_assign<GameTag>)GameTag::RITUAL = 424),
            ((::better_enums::_eat_assign<GameTag>)GameTag::PREHEALING = 425),
            ((::better_enums::_eat_assign<GameTag>)GameTag::APPEAR_FUNCTIONALLY_DEAD = 426),
            ((::better_enums::_eat_assign<GameTag>)GameTag::OVERLOAD_THIS_GAME = 427),
            ((::better_enums::_eat_assign<GameTag>)GameTag::SPELLS_COST_HEALTH = 431),
            ((::better_enums::_eat_assign<GameTag>)GameTag::HISTORY_PROXY_NO_BIG_CARD = 432),
            ((::better_enums::_eat_assign<GameTag>)GameTag::PROXY_CTHUN = 434),
            ((::better_enums::_eat_assign<GameTag>)GameTag::TRANSFORMED_FROM_CARD = 435),
            ((::better_enums::_eat_assign<GameTag>)GameTag::CTHUN = 436),
            ((::better_enums::_eat_assign<GameTag>)GameTag::CAST_RANDOM_SPELLS = 437),
            ((::better_enums::_eat_assign<GameTag>)GameTag::SHIFTING = 438),
            ((::better_enums::_eat_assign<GameTag>)GameTag::JADE_GOLEM = 441),
            ((::better_enums::_eat_assign<GameTag>)GameTag::EMBRACE_THE_SHADOW = 442),
            ((::better_enums::_eat_assign<GameTag>)GameTag::CHOOSE_ONE = 443),
            ((::better_enums::_eat_assign<GameTag>)GameTag::EXTRA_ATTACKS_THIS_TURN = 444),
            ((::better_enums::_eat_assign<GameTag>)GameTag::SEEN_CTHUN = 445),
            ((::better_enums::_eat_assign<GameTag>)GameTag::MINION_TYPE_REFERENCE = 447),
            ((::better_enums::_eat_assign<GameTag>)GameTag::UNTOUCHABLE = 448),
            ((::better_enums::_eat_assign<GameTag>)GameTag::RED_MANA_CRYSTALS = 449),
            ((::better_enums::_eat_assign<GameTag>)GameTag::SCORE_LABELID_1 = 450),
            ((::better_enums::_eat_assign<GameTag>)GameTag::SCORE_VALUE_1 = 451),
            ((::better_enums::_eat_assign<GameTag>)GameTag::SCORE_LABELID_2 = 452),
            ((::better_enums::_eat_assign<GameTag>)GameTag::SCORE_VALUE_2 = 453),
            ((::better_enums::_eat_assign<GameTag>)GameTag::SCORE_LABELID_3 = 454),
            ((::better_enums::_eat_assign<GameTag>)GameTag::SCORE_VALUE_3 = 455),
            ((::better_enums::_eat_assign<GameTag>)GameTag::CANT_BE_FATIGUED = 456),
            ((::better_enums::_eat_assign<GameTag>)GameTag::AUTOATTACK = 457),
            ((::better_enums::_eat_assign<GameTag>)GameTag::ARMS_DEALING = 458),
            ((::better_enums::_eat_assign<GameTag>)GameTag::PENDING_EVOLUTIONS = 461),
            ((::better_enums::_eat_assign<GameTag>)GameTag::QUEST = 462),
            ((::better_enums::_eat_assign<GameTag>)GameTag::TAG_LAST_KNOWN_COST_IN_HAND = 466),
            ((::better_enums::_eat_assign<GameTag>)GameTag::DEFINING_ENCHANTMENT = 469),
            ((::better_enums::_eat_assign<GameTag>)GameTag::FINISH_ATTACK_SPELL_ON_DAMAGE = 470),
            ((::better_enums::_eat_assign<GameTag>)GameTag::MODULAR_ENTITY_PART_1 = 471),
            ((::better_enums::_eat_assign<GameTag>)GameTag::MODULAR_ENTITY_PART_2 = 472),
            ((::better_enums::_eat_assign<GameTag>)GameTag::MODIFY_DEFINITION_ATTACK = 473),
            ((::better_enums::_eat_assign<GameTag>)GameTag::MODIFY_DEFINITION_HEALTH = 474),
            ((::better_enums::_eat_assign<GameTag>)GameTag::MODIFY_DEFINITION_COST = 475),
            ((::better_enums::_eat_assign<GameTag>)GameTag::MULTIPLE_CLASSES = 476),
            ((::better_enums::_eat_assign<GameTag>)GameTag::ALL_TARGETS_RANDOM = 477),
            ((::better_enums::_eat_assign<GameTag>)GameTag::MULTI_CLASS_GROUP = 480),
            ((::better_enums::_eat_assign<GameTag>)GameTag::CARD_COSTS_HEALTH = 481),
            ((::better_enums::_eat_assign<GameTag>)GameTag::GRIMY_GOONS = 482),
            ((::better_enums::_eat_assign<GameTag>)GameTag::JADE_LOTUS = 483),
            ((::better_enums::_eat_assign<GameTag>)GameTag::KABAL = 484),
            ((::better_enums::_eat_assign<GameTag>)GameTag::ADDITIONAL_PLAY_REQS_1 = 515),
            ((::better_enums::_eat_assign<GameTag>)GameTag::ADDITIONAL_PLAY_REQS_2 = 516),
            ((::better_enums::_eat_assign<GameTag>)GameTag::ELEMENTAL_POWERED_UP = 532),
            ((::better_enums::_eat_assign<GameTag>)GameTag::QUEST_PROGRESS = 534),
            ((::better_enums::_eat_assign<GameTag>)GameTag::QUEST_PROGRESS_TOTAL = 535),
            ((::better_enums::_eat_assign<GameTag>)GameTag::QUEST_CONTRIBUTOR = 541),
            ((::better_enums::_eat_assign<GameTag>)GameTag::ADAPT = 546),
            ((::better_enums::_eat_assign<GameTag>)GameTag::IS_CURRENT_TURN_AN_EXTRA_TURN = 547),
            ((::better_enums::_eat_assign<GameTag>)GameTag::EXTRA_TURNS_TAKEN_THIS_GAME = 548),
            ((::better_enums::_eat_assign<GameTag>)GameTag::SHIFTING_MINION = 549),
            ((::better_enums::_eat_assign<GameTag>)GameTag::SHIFTING_WEAPON = 550),
            ((::better_enums::_eat_assign<GameTag>)GameTag::DEATH_KNIGHT = 554),
            ((::better_enums::_eat_assign<GameTag>)GameTag::BOSS = 556),
            ((::better_enums::_eat_assign<GameTag>)GameTag::TREASURE = 557),
            ((::better_enums::_eat_assign<GameTag>)GameTag::TREASURE_DEFINTIONAL_ATTACK = 558),
            ((::better_enums::_eat_assign<GameTag>)GameTag::TREASURE_DEFINTIONAL_COST = 559),
            ((::better_enums::_eat_assign<GameTag>)GameTag::TREASURE_DEFINTIONAL_HEALTH = 560),
            ((::better_enums::_eat_assign<GameTag>)GameTag::ACTS_LIKE_A_SPELL = 561),
            ((::better_enums::_eat_assign<GameTag>)GameTag::STAMPEDE = 564),
            ((::better_enums::_eat_assign<GameTag>)GameTag::EMPOWERED_TREASURE = 646),
            ((::better_enums::_eat_assign<GameTag>)GameTag::ONE_SIDED_GHOSTLY = 648),
            ((::better_enums::_eat_assign<GameTag>)GameTag::CURRENT_NEGATIVE_SPELLPOWER = 651),
            ((::better_enums::_eat_assign<GameTag>)GameTag::IS_VAMPIRE = 680),
            ((::better_enums::_eat_assign<GameTag>)GameTag::CORRUPTED = 681),
            ((::better_enums::_eat_assign<GameTag>)GameTag::HIDE_HEALTH = 682),
            ((::better_enums::_eat_assign<GameTag>)GameTag::HIDE_ATTACK = 683),
            ((::better_enums::_eat_assign<GameTag>)GameTag::HIDE_COST = 684),
            ((::better_enums::_eat_assign<GameTag>)GameTag::LIFESTEAL = 685),
            ((::better_enums::_eat_assign<GameTag>)GameTag::OVERRIDE_EMOTE_0 = 740),
            ((::better_enums::_eat_assign<GameTag>)GameTag::OVERRIDE_EMOTE_1 = 741),
            ((::better_enums::_eat_assign<GameTag>)GameTag::OVERRIDE_EMOTE_2 = 742),
            ((::better_enums::_eat_assign<GameTag>)GameTag::OVERRIDE_EMOTE_3 = 743),
            ((::better_enums::_eat_assign<GameTag>)GameTag::OVERRIDE_EMOTE_4 = 744),
            ((::better_enums::_eat_assign<GameTag>)GameTag::OVERRIDE_EMOTE_5 = 745),
            ((::better_enums::_eat_assign<GameTag>)GameTag::SCORE_FOOTERID = 751),
            ((::better_enums::_eat_assign<GameTag>)GameTag::RECRUIT = 763),
            ((::better_enums::_eat_assign<GameTag>)GameTag::LOOT_CARD_1 = 764),
            ((::better_enums::_eat_assign<GameTag>)GameTag::LOOT_CARD_2 = 765),
            ((::better_enums::_eat_assign<GameTag>)GameTag::LOOT_CARD_3 = 766),
            ((::better_enums::_eat_assign<GameTag>)GameTag::HERO_POWER_DISABLED = 777),
            ((::better_enums::_eat_assign<GameTag>)GameTag::VALEERASHADOW = 779),
            ((::better_enums::_eat_assign<GameTag>)GameTag::OVERRIDECARDNAME = 781),
            ((::better_enums::_eat_assign<GameTag>)GameTag::OVERRIDECARDTEXTBUILDER = 782),
            ((::better_enums::_eat_assign<GameTag>)GameTag::DUNGEON_PASSIVE_BUFF = 783),
            ((::better_enums::_eat_assign<GameTag>)GameTag::GHOSTLY = 785),
            ((::better_enums::_eat_assign<GameTag>)GameTag::DISGUISED_TWIN = 788),
            ((::better_enums::_eat_assign<GameTag>)GameTag::SECRET_DEATHRATTLE = 789),
            ((::better_enums::_eat_assign<GameTag>)GameTag::RUSH = 791),
            ((::better_enums::_eat_assign<GameTag>)GameTag::REVEAL_CHOICES = 792),
            ((::better_enums::_eat_assign<GameTag>)GameTag::HIDDEN_CHOICE = 813),
            ((::better_enums::_eat_assign<GameTag>)GameTag::ZOMBEAST = 823),
            ((::better_enums::_eat_assign<GameTag>)GameTag::HERO_EMOTE_SILENCED = 832),
            ((::better_enums::_eat_assign<GameTag>)GameTag::MINION_IN_HAND_BUFF = 845),
            ((::better_enums::_eat_assign<GameTag>)GameTag::ECHO = 846),
            ((::better_enums::_eat_assign<GameTag>)GameTag::IGNORE_HIDE_STATS_FOR_BIG_CARD = 857),
            ((::better_enums::_eat_assign<GameTag>)GameTag::REAL_TIME_TRANSFORM = 859),
            ((::better_enums::_eat_assign<GameTag>)GameTag::WAIT_FOR_PLAYER_RECONNECT_PERIOD = 860),
            ((::better_enums::_eat_assign<GameTag>)GameTag::PHASED_RESTART = 888),
            ((::better_enums::_eat_assign<GameTag>)GameTag::HEALTH_DISPLAY = 917),
            ((::better_enums::_eat_assign<GameTag>)GameTag::ENABLE_HEALTH_DISPLAY = 920),
            ((::better_enums::_eat_assign<GameTag>)GameTag::VOODOO_LINK = 921),
            ((::better_enums::_eat_assign<GameTag>)GameTag::ATTACKABLE_BY_RUSH = 930),
            ((::better_enums::_eat_assign<GameTag>)GameTag::SHIFTING_SPELL = 936),
            ((::better_enums::_eat_assign<GameTag>)GameTag::USE_ALTERNATE_CARD_TEXT = 955),
            ((::better_enums::_eat_assign<GameTag>)GameTag::SUPPRESS_DEATH_SOUND = 959),
            ((::better_enums::_eat_assign<GameTag>)GameTag::ECHOING_OOZE_SPELL = 963),
            ((::better_enums::_eat_assign<GameTag>)GameTag::COLLECTIONMANAGER_FILTER_MANA_EVEN = 956),
            ((::better_enums::_eat_assign<GameTag>)GameTag::COLLECTIONMANAGER_FILTER_MANA_ODD = 957),
            ((::better_enums::_eat_assign<GameTag>)GameTag::ZOMBEAST_DEBUG_CURRENT_BEAST_DATABASE_ID = 964),
            ((::better_enums::_eat_assign<GameTag>)GameTag::ZOMBEAST_DEBUG_CURRENT_ITERATION = 965),
            ((::better_enums::_eat_assign<GameTag>)GameTag::ZOMBEAST_DEBUG_MAX_ITERATIONS = 966),
            ((::better_enums::_eat_assign<GameTag>)GameTag::START_OF_GAME = 968),
            ((::better_enums::_eat_assign<GameTag>)GameTag::ENCHANTMENT_INVISIBLE = 976),

            // More or less guessed gametags
            ((::better_enums::_eat_assign<GameTag>)GameTag::HEADCRACK_COMBO = 298),
            ((::better_enums::_eat_assign<GameTag>)GameTag::RESTORE_TO_DAMAGE = 326),
            ((::better_enums::_eat_assign<GameTag>)GameTag::CONTROLLER_CHANGED_THIS_TURN = 333),
            ((::better_enums::_eat_assign<GameTag>)GameTag::EXTRA_BATTLECRY = 411),
            ((::better_enums::_eat_assign<GameTag>)GameTag::NUM_SPELLS_PLAYED_THIS_TURN = 430),
            ((::better_enums::_eat_assign<GameTag>)GameTag::NUM_CARDS_TO_DRAW = 467),
            ((::better_enums::_eat_assign<GameTag>)GameTag::MOAT_LURKER_MINION = 468),
            ((::better_enums::_eat_assign<GameTag>)GameTag::TAG_LAST_KNOWN_ATK_IN_HAND = 479),
            ((::better_enums::_eat_assign<GameTag>)GameTag::EXTRA_END_TURN_EFFECT = 755),
            ((::better_enums::_eat_assign<GameTag>)GameTag::AMOUNT_HERO_HEALED_THIS_TURN = 821),
            ((::better_enums::_eat_assign<GameTag>)GameTag::KEEP_ENCHANTMENTS = 851),
            ((::better_enums::_eat_assign<GameTag>)GameTag::NUM_SPELLS_PLAYED_THIS_GAME = 1001),
            ((::better_enums::_eat_assign<GameTag>)GameTag::NUM_SECRETS_PLAYED_THIS_GAME = 1002),
            ((::better_enums::_eat_assign<GameTag>)GameTag::NUM_WEAPONS_PLAYED_THIS_GAME = 1003),
            ((::better_enums::_eat_assign<GameTag>)GameTag::LAST_CARD_DRAWN = 1004),
            ((::better_enums::_eat_assign<GameTag>)GameTag::LAST_CARD_DISCARDED = 1005),
            ((::better_enums::_eat_assign<GameTag>)GameTag::NUM_ELEMENTAL_PLAYED_THIS_TURN = 1006),
            ((::better_enums::_eat_assign<GameTag>)GameTag::NUM_ELEMENTAL_PLAYED_LAST_TURN = 1007),
            ((::better_enums::_eat_assign<GameTag>)GameTag::NUM_MURLOCS_PLAYED_THIS_GAME = 1008),
            ((::better_enums::_eat_assign<GameTag>)GameTag::TAG_LAST_KNOWN_POSITION_ON_BOARD = 1009),
        };
        constexpr const char* _the_raw_names[] = {
            "INVALID = 0",
            "IGNORE_DAMAGE = 1",
            "TAG_SCRIPT_DATA_NUM_1 = 2",
            "TAG_SCRIPT_DATA_NUM_2 = 3",
            "TAG_SCRIPT_DATA_ENT_1 = 4",
            "TAG_SCRIPT_DATA_ENT_2 = 5",
            "MISSION_EVENT = 6",
            "TIMEOUT = 7",
            "TURN_START = 8",
            "TURN_TIMER_SLUSH = 9",
            "PREMIUM = 12",
            "GOLD_REWARD_STATE = 13",
            "PLAYSTATE = 17",
            "LAST_AFFECTED_BY = 18",
            "STEP = 19",
            "TURN = 20",
            "FATIGUE = 22",
            "CURRENT_PLAYER = 23",
            "FIRST_PLAYER = 24",
            "RESOURCES_USED = 25",
            "RESOURCES = 26",
            "HERO_ENTITY = 27",
            "MAXHANDSIZE = 28",
            "STARTHANDSIZE = 29",
            "PLAYER_ID = 30",
            "TEAM_ID = 31",
            "TRIGGER_VISUAL = 32",
            "RECENTLY_ARRIVED = 33",
            "PROTECTED = 34",
            "PROTECTING = 35",
            "DEFENDING = 36",
            "PROPOSED_DEFENDER = 37",
            "ATTACKING = 38",
            "PROPOSED_ATTACKER = 39",
            "ATTACHED = 40",
            "EXHAUSTED = 43",
            "DAMAGE = 44",
            "HEALTH = 45",
            "ATK = 47",
            "COST = 48",
            "ZONE = 49",
            "CONTROLLER = 50",
            "OWNER = 51",
            "DEFINITION = 52",
            "ENTITY_ID = 53",
            "HISTORY_PROXY = 54",
            "COPY_DEATHRATTLE = 55",
            "COPY_DEATHRATTLE_INDEX = 56",
            "ELITE = 114",
            "MAXRESOURCES = 176",
            "CARD_SET = 183",
            "CARDTEXT = 184",
            "CARDNAME = 185",
            "CARD_ID = 186",
            "DURABILITY = 187",
            "SILENCED = 188",
            "WINDFURY = 189",
            "TAUNT = 190",
            "STEALTH = 191",
            "SPELLPOWER = 192",
            "DIVINE_SHIELD = 194",
            "CHARGE = 197",
            "NEXT_STEP = 198",
            "CLASS = 199",
            "CARDRACE = 200",
            "FACTION = 201",
            "CARDTYPE = 202",
            "RARITY = 203",
            "STATE = 204",
            "SUMMONED = 205",
            "FREEZE = 208",
            "ENRAGED = 212",
            "OVERLOAD = 215",
            "LOYALTY = 216",
            "DEATHRATTLE = 217",
            "BATTLECRY = 218",
            "SECRET = 219",
            "COMBO = 220",
            "CANT_HEAL = 221",
            "CANT_DAMAGE = 222",
            "CANT_SET_ASIDE = 223",
            "CANT_REMOVE_FROM_GAME = 224",
            "CANT_READY = 225",
            "CANT_EXHAUST = 226",
            "CANT_ATTACK = 227",
            "CANT_TARGET = 228",
            "CANT_DESTROY = 229",
            "CANT_DISCARD = 230",
            "CANT_PLAY = 231",
            "CANT_DRAW = 232",
            "INCOMING_HEALING_MULTIPLIER = 233",
            "INCOMING_HEALING_ADJUSTMENT = 234",
            "INCOMING_HEALING_CAP = 235",
            "INCOMING_DAMAGE_MULTIPLIER = 236",
            "INCOMING_DAMAGE_ADJUSTMENT = 237",
            "INCOMING_DAMAGE_CAP = 238",
            "CANT_BE_HEALED = 239",
            "IMMUNE = 240",
            "CANT_BE_SET_ASIDE = 241",
            "CANT_BE_REMOVED_FROM_GAME = 242",
            "CANT_BE_READIED = 243",
            "CANT_BE_EXHAUSTED = 244",
            "CANT_BE_ATTACKED = 245",
            "CANT_BE_TARGETED = 246",
            "CANT_BE_DESTROYED = 247",
            "AttackVisualType = 251",
            "CardTextInPlay = 252",
            "CANT_BE_SUMMONING_SICK = 253",
            "FROZEN = 260",
            "JUST_PLAYED = 261",
            "LINKED_ENTITY = 262",
            "ZONE_POSITION = 263",
            "CANT_BE_FROZEN = 264",
            "COMBO_ACTIVE = 266",
            "CARD_TARGET = 267",
            "DevState = 268",
            "NUM_CARDS_PLAYED_THIS_TURN = 269",
            "CANT_BE_TARGETED_BY_OPPONENTS = 270",
            "NUM_TURNS_IN_PLAY = 271",
            "NUM_TURNS_LEFT = 272",
            "OUTGOING_DAMAGE_CAP = 273",
            "OUTGOING_DAMAGE_ADJUSTMENT = 274",
            "OUTGOING_DAMAGE_MULTIPLIER = 275",
            "OUTGOING_HEALING_CAP = 276",
            "OUTGOING_HEALING_ADJUSTMENT = 277",
            "OUTGOING_HEALING_MULTIPLIER = 278",
            "INCOMING_ABILITY_DAMAGE_ADJUSTMENT = 279",
            "INCOMING_COMBAT_DAMAGE_ADJUSTMENT = 280",
            "OUTGOING_ABILITY_DAMAGE_ADJUSTMENT = 281",
            "OUTGOING_COMBAT_DAMAGE_ADJUSTMENT = 282",
            "OUTGOING_ABILITY_DAMAGE_MULTIPLIER = 283",
            "OUTGOING_ABILITY_DAMAGE_CAP = 284",
            "INCOMING_ABILITY_DAMAGE_MULTIPLIER = 285",
            "INCOMING_ABILITY_DAMAGE_CAP = 286",
            "OUTGOING_COMBAT_DAMAGE_MULTIPLIER = 287",
            "OUTGOING_COMBAT_DAMAGE_CAP = 288",
            "INCOMING_COMBAT_DAMAGE_MULTIPLIER = 289",
            "INCOMING_COMBAT_DAMAGE_CAP = 290",
            "CURRENT_SPELLPOWER = 291",
            "ARMOR = 292",
            "MORPH = 293",
            "IS_MORPHED = 294",
            "TEMP_RESOURCES = 295",
            "OVERLOAD_OWED = 296",
            "NUM_ATTACKS_THIS_TURN = 297",
            "NEXT_ALLY_BUFF = 302",
            "MAGNET = 303",
            "FIRST_CARD_PLAYED_THIS_TURN = 304",
            "MULLIGAN_STATE = 305",
            "TAUNT_READY = 306",
            "STEALTH_READY = 307",
            "CHARGE_READY = 308",
            "CANT_BE_TARGETED_BY_SPELLS = 311",
            "SHOULDEXITCOMBAT = 312",
            "CREATOR = 313",
            "CANT_BE_SILENCED = 314",
            "PARENT_CARD = 316",
            "NUM_MINIONS_PLAYED_THIS_TURN = 317",
            "PREDAMAGE = 318",
            "COLLECTIBLE = 321",
            "TARGETING_ARROW_TEXT = 325",
            "DATABASE_ID = 327",
            "ENCHANTMENT_BIRTH_VISUAL = 330",
            "ENCHANTMENT_IDLE_VISUAL = 331",
            "CANT_BE_TARGETED_BY_HERO_POWERS = 332",
            "WEAPON = 334",
            "InvisibleDeathrattle = 335",
            "HEALTH_MINIMUM = 337",
            "TAG_ONE_TURN_EFFECT = 338",
            "SILENCE = 339",
            "COUNTER = 340",
            "ARTISTNAME = 342",
            "LocalizationNotes = 344",
            "ZONES_REVEALED = 348",
            "ImmuneToSpellpower = 349",
            "ADJACENT_BUFF = 350",
            "FLAVORTEXT = 351",
            "FORCED_PLAY = 352",
            "LOW_HEALTH_THRESHOLD = 353",
            "IGNORE_DAMAGE_OFF = 354",
            "GrantCharge = 355",
            "SPELLPOWER_DOUBLE = 356",
            "HEALING_DOUBLE = 357",
            "NUM_OPTIONS_PLAYED_THIS_TURN = 358",
            "NUM_OPTIONS = 359",
            "TO_BE_DESTROYED = 360",
            "HealTarget = 361",
            "AURA = 362",
            "POISONOUS = 363",
            "HOW_TO_EARN = 364",
            "HOW_TO_EARN_GOLDEN = 365",
            "HERO_POWER_DOUBLE = 366",
            "AI_MUST_PLAY = 367",
            "NUM_MINIONS_PLAYER_KILLED_THIS_TURN = 368",
            "NUM_MINIONS_KILLED_THIS_TURN = 369",
            "AFFECTED_BY_SPELL_POWER = 370",
            "EXTRA_DEATHRATTLES = 371",
            "START_WITH_1_HEALTH = 372",
            "IMMUNE_WHILE_ATTACKING = 373",
            "MULTIPLY_HERO_DAMAGE = 374",
            "MULTIPLY_BUFF_VALUE = 375",
            "CUSTOM_KEYWORD_EFFECT = 376",
            "TOPDECK = 377",
            "CANT_BE_TARGETED_BY_BATTLECRIES = 379",
            "HERO_POWER = 380",
            "DEATHRATTLE_RETURN_ZONE = 382",
            "STEADY_SHOT_CAN_TARGET = 383",
            "DISPLAYED_CREATOR = 385",
            "POWERED_UP = 386",
            "SPARE_PART = 388",
            "FORGETFUL = 389",
            "CAN_SUMMON_MAXPLUSONE_MINION = 390",
            "OBFUSCATED = 391",
            "BURNING = 392",
            "OVERLOAD_LOCKED = 393",
            "NUM_TIMES_HERO_POWER_USED_THIS_GAME = 394",
            "CURRENT_HEROPOWER_DAMAGE_BONUS = 395",
            "HEROPOWER_DAMAGE = 396",
            "LAST_CARD_PLAYED = 397",
            "NUM_FRIENDLY_MINIONS_THAT_DIED_THIS_TURN = 398",
            "NUM_CARDS_DRAWN_THIS_TURN = 399",
            "AI_ONE_SHOT_KILL = 400",
            "EVIL_GLOW = 401",
            "HIDE_STATS = 402",
            "INSPIRE = 403",
            "RECEIVES_DOUBLE_SPELLDAMAGE_BONUS = 404",
            "HEROPOWER_ADDITIONAL_ACTIVATIONS = 405",
            "HEROPOWER_ACTIVATIONS_THIS_TURN = 406",
            "REVEALED = 410",
            "NUM_FRIENDLY_MINIONS_THAT_DIED_THIS_GAME = 412",
            "CANNOT_ATTACK_HEROES = 413",
            "LOCK_AND_LOAD = 414",
            "DISCOVER = 415",
            "SHADOWFORM = 416",
            "NUM_FRIENDLY_MINIONS_THAT_ATTACKED_THIS_TURN = 417",
            "NUM_RESOURCES_SPENT_THIS_GAME = 418",
            "CHOOSE_BOTH = 419",
            "ELECTRIC_CHARGE_LEVEL = 420",
            "HEAVILY_ARMORED = 421",
            "DONT_SHOW_IMMUNE = 422",
            "RITUAL = 424",
            "PREHEALING = 425",
            "APPEAR_FUNCTIONALLY_DEAD = 426",
            "OVERLOAD_THIS_GAME = 427",
            "SPELLS_COST_HEALTH = 431",
            "HISTORY_PROXY_NO_BIG_CARD = 432",
            "PROXY_CTHUN = 434",
            "TRANSFORMED_FROM_CARD = 435",
            "CTHUN = 436",
            "CAST_RANDOM_SPELLS = 437",
            "SHIFTING = 438",
            "JADE_GOLEM = 441",
            "EMBRACE_THE_SHADOW = 442",
            "CHOOSE_ONE = 443",
            "EXTRA_ATTACKS_THIS_TURN = 444",
            "SEEN_CTHUN = 445",
            "MINION_TYPE_REFERENCE = 447",
            "UNTOUCHABLE = 448",
            "RED_MANA_CRYSTALS = 449",
            "SCORE_LABELID_1 = 450",
            "SCORE_VALUE_1 = 451",
            "SCORE_LABELID_2 = 452",
            "SCORE_VALUE_2 = 453",
            "SCORE_LABELID_3 = 454",
            "SCORE_VALUE_3 = 455",
            "CANT_BE_FATIGUED = 456",
            "AUTOATTACK = 457",
            "ARMS_DEALING = 458",
            "PENDING_EVOLUTIONS = 461",
            "QUEST = 462",
            "TAG_LAST_KNOWN_COST_IN_HAND = 466",
            "DEFINING_ENCHANTMENT = 469",
            "FINISH_ATTACK_SPELL_ON_DAMAGE = 470",
            "MODULAR_ENTITY_PART_1 = 471",
            "MODULAR_ENTITY_PART_2 = 472",
            "MODIFY_DEFINITION_ATTACK = 473",
            "MODIFY_DEFINITION_HEALTH = 474",
            "MODIFY_DEFINITION_COST = 475",
            "MULTIPLE_CLASSES = 476",
            "ALL_TARGETS_RANDOM = 477",
            "MULTI_CLASS_GROUP = 480",
            "CARD_COSTS_HEALTH = 481",
            "GRIMY_GOONS = 482",
            "JADE_LOTUS = 483",
            "KABAL = 484",
            "ADDITIONAL_PLAY_REQS_1 = 515",
            "ADDITIONAL_PLAY_REQS_2 = 516",
            "ELEMENTAL_POWERED_UP = 532",
            "QUEST_PROGRESS = 534",
            "QUEST_PROGRESS_TOTAL = 535",
            "QUEST_CONTRIBUTOR = 541",
            "ADAPT = 546",
            "IS_CURRENT_TURN_AN_EXTRA_TURN = 547",
            "EXTRA_TURNS_TAKEN_THIS_GAME = 548",
            "SHIFTING_MINION = 549",
            "SHIFTING_WEAPON = 550",
            "DEATH_KNIGHT = 554",
            "BOSS = 556",
            "TREASURE = 557",
            "TREASURE_DEFINTIONAL_ATTACK = 558",
            "TREASURE_DEFINTIONAL_COST = 559",
            "TREASURE_DEFINTIONAL_HEALTH = 560",
            "ACTS_LIKE_A_SPELL = 561",
            "STAMPEDE = 564",
            "EMPOWERED_TREASURE = 646",
            "ONE_SIDED_GHOSTLY = 648",
            "CURRENT_NEGATIVE_SPELLPOWER = 651",
            "IS_VAMPIRE = 680",
            "CORRUPTED = 681",
            "HIDE_HEALTH = 682",
            "HIDE_ATTACK = 683",
            "HIDE_COST = 684",
            "LIFESTEAL = 685",
            "OVERRIDE_EMOTE_0 = 740",
            "OVERRIDE_EMOTE_1 = 741",
            "OVERRIDE_EMOTE_2 = 742",
            "OVERRIDE_EMOTE_3 = 743",
            "OVERRIDE_EMOTE_4 = 744",
            "OVERRIDE_EMOTE_5 = 745",
            "SCORE_FOOTERID = 751",
            "RECRUIT = 763",
            "LOOT_CARD_1 = 764",
            "LOOT_CARD_2 = 765",
            "LOOT_CARD_3 = 766",
            "HERO_POWER_DISABLED = 777",
            "VALEERASHADOW = 779",
            "OVERRIDECARDNAME = 781",
            "OVERRIDECARDTEXTBUILDER = 782",
            "DUNGEON_PASSIVE_BUFF = 783",
            "GHOSTLY = 785",
            "DISGUISED_TWIN = 788",
            "SECRET_DEATHRATTLE = 789",
            "RUSH = 791",
            "REVEAL_CHOICES = 792",
            "HIDDEN_CHOICE = 813",
            "ZOMBEAST = 823",
            "HERO_EMOTE_SILENCED = 832",
            "MINION_IN_HAND_BUFF = 845",
            "ECHO = 846",
            "IGNORE_HIDE_STATS_FOR_BIG_CARD = 857",
            "REAL_TIME_TRANSFORM = 859",
            "WAIT_FOR_PLAYER_RECONNECT_PERIOD = 860",
            "PHASED_RESTART = 888",
            "HEALTH_DISPLAY = 917",
            "ENABLE_HEALTH_DISPLAY = 920",
            "VOODOO_LINK = 921",
            "ATTACKABLE_BY_RUSH = 930",
            "SHIFTING_SPELL = 936",
            "USE_ALTERNATE_CARD_TEXT = 955",
            "SUPPRESS_DEATH_SOUND = 959",
            "ECHOING_OOZE_SPELL = 963",
            "COLLECTIONMANAGER_FILTER_MANA_EVEN = 956",
            "COLLECTIONMANAGER_FILTER_MANA_ODD = 957",
            "ZOMBEAST_DEBUG_CURRENT_BEAST_DATABASE_ID = 964",
            "ZOMBEAST_DEBUG_CURRENT_ITERATION = 965",
            "ZOMBEAST_DEBUG_MAX_ITERATIONS = 966",
            "START_OF_GAME = 968",
            "ENCHANTMENT_INVISIBLE = 976",

            // More or less guessed gametags
            "HEADCRACK_COMBO = 298",
            "RESTORE_TO_DAMAGE = 326",
            "CONTROLLER_CHANGED_THIS_TURN = 333",
            "EXTRA_BATTLECRY = 411",
            "NUM_SPELLS_PLAYED_THIS_TURN = 430",
            "NUM_CARDS_TO_DRAW = 467",
            "MOAT_LURKER_MINION = 468",
            "TAG_LAST_KNOWN_ATK_IN_HAND = 479",
            "EXTRA_END_TURN_EFFECT = 755",
            "AMOUNT_HERO_HEALED_THIS_TURN = 821",
            "KEEP_ENCHANTMENTS = 851",
            "NUM_SPELLS_PLAYED_THIS_GAME = 1001",
            "NUM_SECRETS_PLAYED_THIS_GAME = 1002",
            "NUM_WEAPONS_PLAYED_THIS_GAME = 1003",
            "LAST_CARD_DRAWN = 1004",
            "LAST_CARD_DISCARDED = 1005",
            "NUM_ELEMENTAL_PLAYED_THIS_TURN = 1006",
            "NUM_ELEMENTAL_PLAYED_LAST_TURN = 1007",
            "NUM_MURLOCS_PLAYED_THIS_GAME = 1008",
            "TAG_LAST_KNOWN_POSITION_ON_BOARD = 1009",
        };
        constexpr const char* const *_raw_names()
        {
            return _the_raw_names;
        }
        inline char* _name_storage()
        {
            static char storage[] =
                "INVALID = 0"
                ","
                "IGNORE_DAMAGE = 1"
                ","
                "TAG_SCRIPT_DATA_NUM_1 = 2"
                ","
                "TAG_SCRIPT_DATA_NUM_2 = 3"
                ","
                "TAG_SCRIPT_DATA_ENT_1 = 4"
                ","
                "TAG_SCRIPT_DATA_ENT_2 = 5"
                ","
                "MISSION_EVENT = 6"
                ","
                "TIMEOUT = 7"
                ","
                "TURN_START = 8"
                ","
                "TURN_TIMER_SLUSH = 9"
                ","
                "PREMIUM = 12"
                ","
                "GOLD_REWARD_STATE = 13"
                ","
                "PLAYSTATE = 17"
                ","
                "LAST_AFFECTED_BY = 18"
                ","
                "STEP = 19"
                ","
                "TURN = 20"
                ","
                "FATIGUE = 22"
                ","
                "CURRENT_PLAYER = 23"
                ","
                "FIRST_PLAYER = 24"
                ","
                "RESOURCES_USED = 25"
                ","
                "RESOURCES = 26"
                ","
                "HERO_ENTITY = 27"
                ","
                "MAXHANDSIZE = 28"
                ","
                "STARTHANDSIZE = 29"
                ","
                "PLAYER_ID = 30"
                ","
                "TEAM_ID = 31"
                ","
                "TRIGGER_VISUAL = 32"
                ","
                "RECENTLY_ARRIVED = 33"
                ","
                "PROTECTED = 34"
                ","
                "PROTECTING = 35"
                ","
                "DEFENDING = 36"
                ","
                "PROPOSED_DEFENDER = 37"
                ","
                "ATTACKING = 38"
                ","
                "PROPOSED_ATTACKER = 39"
                ","
                "ATTACHED = 40"
                ","
                "EXHAUSTED = 43"
                ","
                "DAMAGE = 44"
                ","
                "HEALTH = 45"
                ","
                "ATK = 47"
                ","
                "COST = 48"
                ","
                "ZONE = 49"
                ","
                "CONTROLLER = 50"
                ","
                "OWNER = 51"
                ","
                "DEFINITION = 52"
                ","
                "ENTITY_ID = 53"
                ","
                "HISTORY_PROXY = 54"
                ","
                "COPY_DEATHRATTLE = 55"
                ","
                "COPY_DEATHRATTLE_INDEX = 56"
                ","
                "ELITE = 114"
                ","
                "MAXRESOURCES = 176"
                ","
                "CARD_SET = 183"
                ","
                "CARDTEXT = 184"
                ","
                "CARDNAME = 185"
                ","
                "CARD_ID = 186"
                ","
                "DURABILITY = 187"
                ","
                "SILENCED = 188"
                ","
                "WINDFURY = 189"
                ","
                "TAUNT = 190"
                ","
                "STEALTH = 191"
                ","
                "SPELLPOWER = 192"
                ","
                "DIVINE_SHIELD = 194"
                ","
                "CHARGE = 197"
                ","
                "NEXT_STEP = 198"
                ","
                "CLASS = 199"
                ","
                "CARDRACE = 200"
                ","
                "FACTION = 201"
                ","
                "CARDTYPE = 202"
                ","
                "RARITY = 203"
                ","
                "STATE = 204"
                ","
                "SUMMONED = 205"
                ","
                "FREEZE = 208"
                ","
                "ENRAGED = 212"
                ","
                "OVERLOAD = 215"
                ","
                "LOYALTY = 216"
                ","
                "DEATHRATTLE = 217"
                ","
                "BATTLECRY = 218"
                ","
                "SECRET = 219"
                ","
                "COMBO = 220"
                ","
                "CANT_HEAL = 221"
                ","
                "CANT_DAMAGE = 222"
                ","
                "CANT_SET_ASIDE = 223"
                ","
                "CANT_REMOVE_FROM_GAME = 224"
                ","
                "CANT_READY = 225"
                ","
                "CANT_EXHAUST = 226"
                ","
                "CANT_ATTACK = 227"
                ","
                "CANT_TARGET = 228"
                ","
                "CANT_DESTROY = 229"
                ","
                "CANT_DISCARD = 230"
                ","
                "CANT_PLAY = 231"
                ","
                "CANT_DRAW = 232"
                ","
                "INCOMING_HEALING_MULTIPLIER = 233"
                ","
                "INCOMING_HEALING_ADJUSTMENT = 234"
                ","
                "INCOMING_HEALING_CAP = 235"
                ","
                "INCOMING_DAMAGE_MULTIPLIER = 236"
                ","
                "INCOMING_DAMAGE_ADJUSTMENT = 237"
                ","
                "INCOMING_DAMAGE_CAP = 238"
                ","
                "CANT_BE_HEALED = 239"
                ","
                "IMMUNE = 240"
                ","
                "CANT_BE_SET_ASIDE = 241"
                ","
                "CANT_BE_REMOVED_FROM_GAME = 242"
                ","
                "CANT_BE_READIED = 243"
                ","
                "CANT_BE_EXHAUSTED = 244"
                ","
                "CANT_BE_ATTACKED = 245"
                ","
                "CANT_BE_TARGETED = 246"
                ","
                "CANT_BE_DESTROYED = 247"
                ","
                "AttackVisualType = 251"
                ","
                "CardTextInPlay = 252"
                ","
                "CANT_BE_SUMMONING_SICK = 253"
                ","
                "FROZEN = 260"
                ","
                "JUST_PLAYED = 261"
                ","
                "LINKED_ENTITY = 262"
                ","
                "ZONE_POSITION = 263"
                ","
                "CANT_BE_FROZEN = 264"
                ","
                "COMBO_ACTIVE = 266"
                ","
                "CARD_TARGET = 267"
                ","
                "DevState = 268"
                ","
                "NUM_CARDS_PLAYED_THIS_TURN = 269"
                ","
                "CANT_BE_TARGETED_BY_OPPONENTS = 270"
                ","
                "NUM_TURNS_IN_PLAY = 271"
                ","
                "NUM_TURNS_LEFT = 272"
                ","
                "OUTGOING_DAMAGE_CAP = 273"
                ","
                "OUTGOING_DAMAGE_ADJUSTMENT = 274"
                ","
                "OUTGOING_DAMAGE_MULTIPLIER = 275"
                ","
                "OUTGOING_HEALING_CAP = 276"
                ","
                "OUTGOING_HEALING_ADJUSTMENT = 277"
                ","
                "OUTGOING_HEALING_MULTIPLIER = 278"
                ","
                "INCOMING_ABILITY_DAMAGE_ADJUSTMENT = 279"
                ","
                "INCOMING_COMBAT_DAMAGE_ADJUSTMENT = 280"
                ","
                "OUTGOING_ABILITY_DAMAGE_ADJUSTMENT = 281"
                ","
                "OUTGOING_COMBAT_DAMAGE_ADJUSTMENT = 282"
                ","
                "OUTGOING_ABILITY_DAMAGE_MULTIPLIER = 283"
                ","
                "OUTGOING_ABILITY_DAMAGE_CAP = 284"
                ","
                "INCOMING_ABILITY_DAMAGE_MULTIPLIER = 285"
                ","
                "INCOMING_ABILITY_DAMAGE_CAP = 286"
                ","
                "OUTGOING_COMBAT_DAMAGE_MULTIPLIER = 287"
                ","
                "OUTGOING_COMBAT_DAMAGE_CAP = 288"
                ","
                "INCOMING_COMBAT_DAMAGE_MULTIPLIER = 289"
                ","
                "INCOMING_COMBAT_DAMAGE_CAP = 290"
                ","
                "CURRENT_SPELLPOWER = 291"
                ","
                "ARMOR = 292"
                ","
                "MORPH = 293"
                ","
                "IS_MORPHED = 294"
                ","
                "TEMP_RESOURCES = 295"
                ","
                "OVERLOAD_OWED = 296"
                ","
                "NUM_ATTACKS_THIS_TURN = 297"
                ","
                "NEXT_ALLY_BUFF = 302"
                ","
                "MAGNET = 303"
                ","
                "FIRST_CARD_PLAYED_THIS_TURN = 304"
                ","
                "MULLIGAN_STATE = 305"
                ","
                "TAUNT_READY = 306"
                ","
                "STEALTH_READY = 307"
                ","
                "CHARGE_READY = 308"
                ","
                "CANT_BE_TARGETED_BY_SPELLS = 311"
                ","
                "SHOULDEXITCOMBAT = 312"
                ","
                "CREATOR = 313"
                ","
                "CANT_BE_SILENCED = 314"
                ","
                "PARENT_CARD = 316"
                ","
                "NUM_MINIONS_PLAYED_THIS_TURN = 317"
                ","
                "PREDAMAGE = 318"
                ","
                "COLLECTIBLE = 321"
                ","
                "TARGETING_ARROW_TEXT = 325"
                ","
                "DATABASE_ID = 327"
                ","
                "ENCHANTMENT_BIRTH_VISUAL = 330"
                ","
                "ENCHANTMENT_IDLE_VISUAL = 331"
                ","
                "CANT_BE_TARGETED_BY_HERO_POWERS = 332"
                ","
                "WEAPON = 334"
                ","
                "InvisibleDeathrattle = 335"
                ","
                "HEALTH_MINIMUM = 337"
                ","
                "TAG_ONE_TURN_EFFECT = 338"
                ","
                "SILENCE = 339"
                ","
                "COUNTER = 340"
                ","
                "ARTISTNAME = 342"
                ","
                "LocalizationNotes = 344"
                ","
                "ZONES_REVEALED = 348"
                ","
                "ImmuneToSpellpower = 349"
                ","
                "ADJACENT_BUFF = 350"
                ","
                "FLAVORTEXT = 351"
                ","
                "FORCED_PLAY = 352"
                ","
                "LOW_HEALTH_THRESHOLD = 353"
                ","
                "IGNORE_DAMAGE_OFF = 354"
                ","
                "GrantCharge = 355"
                ","
                "SPELLPOWER_DOUBLE = 356"
                ","
                "HEALING_DOUBLE = 357"
                ","
                "NUM_OPTIONS_PLAYED_THIS_TURN = 358"
                ","
                "NUM_OPTIONS = 359"
                ","
                "TO_BE_DESTROYED = 360"
                ","
                "HealTarget = 361"
                ","
                "AURA = 362"
                ","
                "POISONOUS = 363"
                ","
                "HOW_TO_EARN = 364"
                ","
                "HOW_TO_EARN_GOLDEN = 365"
                ","
                "HERO_POWER_DOUBLE = 366"
                ","
                "AI_MUST_PLAY = 367"
                ","
                "NUM_MINIONS_PLAYER_KILLED_THIS_TURN = 368"
                ","
                "NUM_MINIONS_KILLED_THIS_TURN = 369"
                ","
                "AFFECTED_BY_SPELL_POWER = 370"
                ","
                "EXTRA_DEATHRATTLES = 371"
                ","
                "START_WITH_1_HEALTH = 372"
                ","
                "IMMUNE_WHILE_ATTACKING = 373"
                ","
                "MULTIPLY_HERO_DAMAGE = 374"
                ","
                "MULTIPLY_BUFF_VALUE = 375"
                ","
                "CUSTOM_KEYWORD_EFFECT = 376"
                ","
                "TOPDECK = 377"
                ","
                "CANT_BE_TARGETED_BY_BATTLECRIES = 379"
                ","
                "HERO_POWER = 380"
                ","
                "DEATHRATTLE_RETURN_ZONE = 382"
                ","
                "STEADY_SHOT_CAN_TARGET = 383"
                ","
                "DISPLAYED_CREATOR = 385"
                ","
                "POWERED_UP = 386"
                ","
                "SPARE_PART = 388"
                ","
                "FORGETFUL = 389"
                ","
                "CAN_SUMMON_MAXPLUSONE_MINION = 390"
                ","
                "OBFUSCATED = 391"
                ","
                "BURNING = 392"
                ","
                "OVERLOAD_LOCKED = 393"
                ","
                "NUM_TIMES_HERO_POWER_USED_THIS_GAME = 394"
                ","
                "CURRENT_HEROPOWER_DAMAGE_BONUS = 395"
                ","
                "HEROPOWER_DAMAGE = 396"
                ","
                "LAST_CARD_PLAYED = 397"
                ","
                "NUM_FRIENDLY_MINIONS_THAT_DIED_THIS_TURN = 398"
                ","
                "NUM_CARDS_DRAWN_THIS_TURN = 399"
                ","
                "AI_ONE_SHOT_KILL = 400"
                ","
                "EVIL_GLOW = 401"
                ","
                "HIDE_STATS = 402"
                ","
                "INSPIRE = 403"
                ","
                "RECEIVES_DOUBLE_SPELLDAMAGE_BONUS = 404"
                ","
                "HEROPOWER_ADDITIONAL_ACTIVATIONS = 405"
                ","
                "HEROPOWER_ACTIVATIONS_THIS_TURN = 406"
                ","
                "REVEALED = 410"
                ","
                "NUM_FRIENDLY_MINIONS_THAT_DIED_THIS_GAME = 412"
                ","
                "CANNOT_ATTACK_HEROES = 413"
                ","
                "LOCK_AND_LOAD = 414"
                ","
                "DISCOVER = 415"
                ","
                "SHADOWFORM = 416"
                ","
                "NUM_FRIENDLY_MINIONS_THAT_ATTACKED_THIS_TURN = 417"
                ","
                "NUM_RESOURCES_SPENT_THIS_GAME = 418"
                ","
                "CHOOSE_BOTH = 419"
                ","
                "ELECTRIC_CHARGE_LEVEL = 420"
                ","
                "HEAVILY_ARMORED = 421"
                ","
                "DONT_SHOW_IMMUNE = 422"
                ","
                "RITUAL = 424"
                ","
                "PREHEALING = 425"
                ","
                "APPEAR_FUNCTIONALLY_DEAD = 426"
                ","
                "OVERLOAD_THIS_GAME = 427"
                ","
                "SPELLS_COST_HEALTH = 431"
                ","
                "HISTORY_PROXY_NO_BIG_CARD = 432"
                ","
                "PROXY_CTHUN = 434"
                ","
                "TRANSFORMED_FROM_CARD = 435"
                ","
                "CTHUN = 436"
                ","
                "CAST_RANDOM_SPELLS = 437"
                ","
                "SHIFTING = 438"
                ","
                "JADE_GOLEM = 441"
                ","
                "EMBRACE_THE_SHADOW = 442"
                ","
                "CHOOSE_ONE = 443"
                ","
                "EXTRA_ATTACKS_THIS_TURN = 444"
                ","
                "SEEN_CTHUN = 445"
                ","
                "MINION_TYPE_REFERENCE = 447"
                ","
                "UNTOUCHABLE = 448"
                ","
                "RED_MANA_CRYSTALS = 449"
                ","
                "SCORE_LABELID_1 = 450"
                ","
                "SCORE_VALUE_1 = 451"
                ","
                "SCORE_LABELID_2 = 452"
                ","
                "SCORE_VALUE_2 = 453"
                ","
                "SCORE_LABELID_3 = 454"
                ","
                "SCORE_VALUE_3 = 455"
                ","
                "CANT_BE_FATIGUED = 456"
                ","
                "AUTOATTACK = 457"
                ","
                "ARMS_DEALING = 458"
                ","
                "PENDING_EVOLUTIONS = 461"
                ","
                "QUEST = 462"
                ","
                "TAG_LAST_KNOWN_COST_IN_HAND = 466"
                ","
                "DEFINING_ENCHANTMENT = 469"
                ","
                "FINISH_ATTACK_SPELL_ON_DAMAGE = 470"
                ","
                "MODULAR_ENTITY_PART_1 = 471"
                ","
                "MODULAR_ENTITY_PART_2 = 472"
                ","
                "MODIFY_DEFINITION_ATTACK = 473"
                ","
                "MODIFY_DEFINITION_HEALTH = 474"
                ","
                "MODIFY_DEFINITION_COST = 475"
                ","
                "MULTIPLE_CLASSES = 476"
                ","
                "ALL_TARGETS_RANDOM = 477"
                ","
                "MULTI_CLASS_GROUP = 480"
                ","
                "CARD_COSTS_HEALTH = 481"
                ","
                "GRIMY_GOONS = 482"
                ","
                "JADE_LOTUS = 483"
                ","
                "KABAL = 484"
                ","
                "ADDITIONAL_PLAY_REQS_1 = 515"
                ","
                "ADDITIONAL_PLAY_REQS_2 = 516"
                ","
                "ELEMENTAL_POWERED_UP = 532"
                ","
                "QUEST_PROGRESS = 534"
                ","
                "QUEST_PROGRESS_TOTAL = 535"
                ","
                "QUEST_CONTRIBUTOR = 541"
                ","
                "ADAPT = 546"
                ","
                "IS_CURRENT_TURN_AN_EXTRA_TURN = 547"
                ","
                "EXTRA_TURNS_TAKEN_THIS_GAME = 548"
                ","
                "SHIFTING_MINION = 549"
                ","
                "SHIFTING_WEAPON = 550"
                ","
                "DEATH_KNIGHT = 554"
                ","
                "BOSS = 556"
                ","
                "TREASURE = 557"
                ","
                "TREASURE_DEFINTIONAL_ATTACK = 558"
                ","
                "TREASURE_DEFINTIONAL_COST = 559"
                ","
                "TREASURE_DEFINTIONAL_HEALTH = 560"
                ","
                "ACTS_LIKE_A_SPELL = 561"
                ","
                "STAMPEDE = 564"
                ","
                "EMPOWERED_TREASURE = 646"
                ","
                "ONE_SIDED_GHOSTLY = 648"
                ","
                "CURRENT_NEGATIVE_SPELLPOWER = 651"
                ","
                "IS_VAMPIRE = 680"
                ","
                "CORRUPTED = 681"
                ","
                "HIDE_HEALTH = 682"
                ","
                "HIDE_ATTACK = 683"
                ","
                "HIDE_COST = 684"
                ","
                "LIFESTEAL = 685"
                ","
                "OVERRIDE_EMOTE_0 = 740"
                ","
                "OVERRIDE_EMOTE_1 = 741"
                ","
                "OVERRIDE_EMOTE_2 = 742"
                ","
                "OVERRIDE_EMOTE_3 = 743"
                ","
                "OVERRIDE_EMOTE_4 = 744"
                ","
                "OVERRIDE_EMOTE_5 = 745"
                ","
                "SCORE_FOOTERID = 751"
                ","
                "RECRUIT = 763"
                ","
                "LOOT_CARD_1 = 764"
                ","
                "LOOT_CARD_2 = 765"
                ","
                "LOOT_CARD_3 = 766"
                ","
                "HERO_POWER_DISABLED = 777"
                ","
                "VALEERASHADOW = 779"
                ","
                "OVERRIDECARDNAME = 781"
                ","
                "OVERRIDECARDTEXTBUILDER = 782"
                ","
                "DUNGEON_PASSIVE_BUFF = 783"
                ","
                "GHOSTLY = 785"
                ","
                "DISGUISED_TWIN = 788"
                ","
                "SECRET_DEATHRATTLE = 789"
                ","
                "RUSH = 791"
                ","
                "REVEAL_CHOICES = 792"
                ","
                "HIDDEN_CHOICE = 813"
                ","
                "ZOMBEAST = 823"
                ","
                "HERO_EMOTE_SILENCED = 832"
                ","
                "MINION_IN_HAND_BUFF = 845"
                ","
                "ECHO = 846"
                ","
                "IGNORE_HIDE_STATS_FOR_BIG_CARD = 857"
                ","
                "REAL_TIME_TRANSFORM = 859"
                ","
                "WAIT_FOR_PLAYER_RECONNECT_PERIOD = 860"
                ","
                "PHASED_RESTART = 888"
                ","
                "HEALTH_DISPLAY = 917"
                ","
                "ENABLE_HEALTH_DISPLAY = 920"
                ","
                "VOODOO_LINK = 921"
                ","
                "ATTACKABLE_BY_RUSH = 930"
                ","
                "SHIFTING_SPELL = 936"
                ","
                "USE_ALTERNATE_CARD_TEXT = 955"
                ","
                "SUPPRESS_DEATH_SOUND = 959"
                ","
                "ECHOING_OOZE_SPELL = 963"
                ","
                "COLLECTIONMANAGER_FILTER_MANA_EVEN = 956"
                ","
                "COLLECTIONMANAGER_FILTER_MANA_ODD = 957"
                ","
                "ZOMBEAST_DEBUG_CURRENT_BEAST_DATABASE_ID = 964"
                ","
                "ZOMBEAST_DEBUG_CURRENT_ITERATION = 965"
                ","
                "ZOMBEAST_DEBUG_MAX_ITERATIONS = 966"
                ","
                "START_OF_GAME = 968"
                ","
                "ENCHANTMENT_INVISIBLE = 976"
                ","

                // More or less guessed gametags
                "HEADCRACK_COMBO = 298"
                ","
                "RESTORE_TO_DAMAGE = 326"
                ","
                "CONTROLLER_CHANGED_THIS_TURN = 333"
                ","
                "EXTRA_BATTLECRY = 411"
                ","
                "NUM_SPELLS_PLAYED_THIS_TURN = 430"
                ","
                "NUM_CARDS_TO_DRAW = 467"
                ","
                "MOAT_LURKER_MINION = 468"
                ","
                "TAG_LAST_KNOWN_ATK_IN_HAND = 479"
                ","
                "EXTRA_END_TURN_EFFECT = 755"
                ","
                "AMOUNT_HERO_HEALED_THIS_TURN = 821"
                ","
                "KEEP_ENCHANTMENTS = 851"
                ","
                "NUM_SPELLS_PLAYED_THIS_GAME = 1001"
                ","
                "NUM_SECRETS_PLAYED_THIS_GAME = 1002"
                ","
                "NUM_WEAPONS_PLAYED_THIS_GAME = 1003"
                ","
                "LAST_CARD_DRAWN = 1004"
                ","
                "LAST_CARD_DISCARDED = 1005"
                ","
                "NUM_ELEMENTAL_PLAYED_THIS_TURN = 1006"
                ","
                "NUM_ELEMENTAL_PLAYED_LAST_TURN = 1007"
                ","
                "NUM_MURLOCS_PLAYED_THIS_GAME = 1008"
                ","
                "TAG_LAST_KNOWN_POSITION_ON_BOARD = 1009"
                ",";
            return storage;
        }
        inline const char** _name_array()
        {
            static const char* value[GameTag::_size_constant];
            return value;
        }
        inline bool& _initialized()
        {
            static bool value = false;
            return value;
        }
    }

    constexpr inline const GameTag operator+(GameTag::_enumerated enumerated)
    {
        return static_cast<GameTag>(enumerated);
    }
    constexpr inline GameTag::_optional_index GameTag::_from_value_loop(
        GameTag::_integral value, std::size_t index)
    {
        return index == _size()
                   ? _optional_index()
                   : better_enums_data_GameTag::_value_array[index]._value ==
                             value
                         ? _optional_index(index)
                         : _from_value_loop(value, index + 1);
    }
    constexpr inline GameTag::_optional_index GameTag::_from_string_loop(
        const char* name, std::size_t index)
    {
        return index == _size()
                   ? _optional_index()
                   : ::better_enums::_names_match(
                         better_enums_data_GameTag::_raw_names()[index], name)
                         ? _optional_index(index)
                         : _from_string_loop(name, index + 1);
    }
    constexpr inline GameTag::_optional_index GameTag::_from_string_nocase_loop(
        const char* name, std::size_t index)
    {
        return index == _size()
                   ? _optional_index()
                   : ::better_enums::_names_match_nocase(
                         better_enums_data_GameTag::_raw_names()[index], name)
                         ? _optional_index(index)
                         : _from_string_nocase_loop(name, index + 1);
    }
    constexpr inline GameTag::_integral GameTag::_to_integral() const
    {
        return _integral(_value);
    }
    constexpr inline GameTag GameTag::_from_integral_unchecked(_integral value)
    {
        return static_cast<_enumerated>(value);
    }
    constexpr inline GameTag::_optional GameTag::_from_integral_nothrow(
        _integral value)
    {
        return ::better_enums::_map_index<GameTag>(
            better_enums_data_GameTag::_value_array, _from_value_loop(value));
    }
    constexpr inline GameTag GameTag::_from_integral(_integral value)
    {
        return ::better_enums::_or_throw(_from_integral_nothrow(value),
                                         "GameTag"
                                         "::_from_integral: invalid argument");
    }
    inline const char* GameTag::_to_string() const
    {
        return ::better_enums::_or_null(
            ::better_enums::_map_index<const char* >(
                better_enums_data_GameTag::_name_array(),
                _from_value_loop(
                    ::better_enums::continue_with(initialize(), _value))));
    }
    constexpr inline GameTag::_optional GameTag::_from_string_nothrow(
        const char* name)
    {
        return ::better_enums::_map_index<GameTag>(
            better_enums_data_GameTag::_value_array, _from_string_loop(name));
    }
    constexpr inline GameTag GameTag::_from_string(const char* name)
    {
        return ::better_enums::_or_throw(_from_string_nothrow(name),
                                         "GameTag"
                                         "::_from_string: invalid argument");
    }
    constexpr inline GameTag::_optional GameTag::_from_string_nocase_nothrow(
        const char* name)
    {
        return ::better_enums::_map_index<GameTag>(
            better_enums_data_GameTag::_value_array,
            _from_string_nocase_loop(name));
    }
    constexpr inline GameTag GameTag::_from_string_nocase(const char* name)
    {
        return ::better_enums::_or_throw(
            _from_string_nocase_nothrow(name),
            "GameTag"
            "::_from_string_nocase: invalid argument");
    }
    constexpr inline bool GameTag::_is_valid(_integral value)
    {
        return _from_value_loop(value);
    }
    constexpr inline bool GameTag::_is_valid(const char* name)
    {
        return _from_string_loop(name);
    }
    constexpr inline bool GameTag::_is_valid_nocase(const char* name)
    {
        return _from_string_nocase_loop(name);
    }
    constexpr inline const char* GameTag::_name()
    {
        return "GameTag";
    }
    constexpr inline GameTag::_value_iterable GameTag::_values()
    {
        return _value_iterable(better_enums_data_GameTag::_value_array, _size());
    }
    inline GameTag::_name_iterable GameTag::_names()
    {
        return _name_iterable(
            better_enums_data_GameTag::_name_array(),
            ::better_enums::continue_with(initialize(), _size()));
    }
    inline int GameTag::initialize()
    {
        if (better_enums_data_GameTag::_initialized())
            return 0;
        ::better_enums::_trim_names(better_enums_data_GameTag::_raw_names(),
                                    better_enums_data_GameTag::_name_array(),
                                    better_enums_data_GameTag::_name_storage(),
                                    _size());
        better_enums_data_GameTag::_initialized() = true;
        return 0;
    }
    constexpr inline bool operator==(const GameTag& a, const GameTag& b)
    {
        return a._to_integral() == b._to_integral();
    }
    constexpr inline bool operator!=(const GameTag& a, const GameTag& b)
    {
        return a._to_integral() != b._to_integral();
    }
    constexpr inline bool operator<(const GameTag& a, const GameTag& b)
    {
        return a._to_integral() < b._to_integral();
    }
    constexpr inline bool operator<=(const GameTag& a, const GameTag& b)
    {
        return a._to_integral() <= b._to_integral();
    }
    constexpr inline bool operator>(const GameTag& a, const GameTag& b)
    {
        return a._to_integral() > b._to_integral();
    }
    constexpr inline bool operator>=(const GameTag& a, const GameTag& b)
    {
        return a._to_integral() >= b._to_integral();
    }
    template <typename Char, typename Traits>
    std::basic_ostream<Char, Traits>& operator<<(
        std::basic_ostream<Char, Traits>& stream, const GameTag& value)
    {
        return stream << value._to_string();
    }
    template <typename Char, typename Traits>
    std::basic_istream<Char, Traits>& operator>>(
        std::basic_istream<Char, Traits>& stream, GameTag& value)
    {
        std::basic_string<Char, Traits> buffer;
        stream >> buffer;
        ::better_enums::optional<GameTag> converted =
            GameTag::_from_string_nothrow(buffer.c_str());
        if (converted)
            value = *converted;
        else
            stream.setstate(std::basic_istream<Char, Traits>::failbit);
        return stream;
    }
#endif

    BETTER_ENUM(GameType, int, UNKNOWN = 0, VS_AI = 1, VS_FRIEND = 2,
                TUTORIAL = 4, ARENA = 5, TEST_AI_VS_AI = 6, RANKED = 7,
                CASUAL = 8, TAVERNBRAWL = 16, TB_1P_VS_AI = 17, TB_2P_COOP = 18,
                LAST = 19)

    BETTER_ENUM(GoldRewardState, int, INVALID = 0, ELIGIBLE = 1,
                WRONG_GAME_TYPE = 2, ALREADY_CAPPED = 3, BAD_RATING = 4,
                SHORT_GAME = 5, SHORT_GAME_BY_TIME = 5, OVER_CAIS = 6)

    BETTER_ENUM(Locale, int, UNKNOWN = -1, enUS = 0, enGB = 1, frFR = 2,
                deDE = 3, koKR = 4, esES = 5, esMX = 6, ruRU = 7, zhTW = 8,
                zhCN = 9, itIT = 10, ptBR = 11, plPL = 12, ptPT = 13, jaJP = 14,
                thTH = 15)

    BETTER_ENUM(MetaDataType, int, TARGET = 0, DAMAGE = 1, HEALING = 2,
                JOUST = 3, CLIENT_HISTORY = 4, SHOW_BIG_CARD = 5,
                EFFECT_TIMING = 6, HISTORY_TARGET = 7, OVERRIDE_HISTORY = 8,
                HISTORY_TARGET_DONT_DUPLICATE_UNTIL_END = 9,
                BEGIN_ARTIFICIAL_HISTORY_TILE = 10,
                BEGIN_ARTIFICIAL_HISTORY_TRIGGER_TILE = 11,
                END_ARTIFICIAL_HISTORY_TILE = 12, START_DRAW = 13)

    BETTER_ENUM(Mulligan, int, INVALID = 0, INPUT = 1, DEALING = 2, WAITING = 3,
                DONE = 4)

    BETTER_ENUM(MultiClassGroup, int, INVALID = 0, GRIMY_GOONS = 1,
                JADE_LOTUS = 2, KABAL = 3)

    BETTER_ENUM(OptionType, int, PASS = 1, END_TURN = 2, POWER = 3)

#ifndef HEARTHSTONEPP_EXPAND_LARGE_ENUMS
    BETTER_ENUM(PlayReq, int, REQ_MINION_TARGET = 1, REQ_FRIENDLY_TARGET = 2,
        REQ_ENEMY_TARGET = 3, REQ_DAMAGED_TARGET = 4, REQ_MAX_SECRETS = 5,
        REQ_FROZEN_TARGET = 6, REQ_CHARGE_TARGET = 7, REQ_TARGET_MAX_ATTACK = 8,
        REQ_NONSELF_TARGET = 9, REQ_TARGET_WITH_RACE = 10,
        REQ_TARGET_TO_PLAY = 11, REQ_NUM_MINION_SLOTS = 12,
        REQ_WEAPON_EQUIPPED = 13, REQ_ENOUGH_MANA = 14, REQ_YOUR_TURN = 15,
        REQ_NONSTEALTH_ENEMY_TARGET = 16, REQ_HERO_TARGET = 17,
        REQ_SECRET_ZONE_CAP = 18, REQ_MINION_CAP_IF_TARGET_AVAILABLE = 19,
        REQ_MINION_CAP = 20, REQ_TARGET_ATTACKED_THIS_TURN = 21,
        REQ_TARGET_IF_AVAILABLE = 22, REQ_MINIMUM_ENEMY_MINIONS = 23,
        REQ_TARGET_FOR_COMBO = 24, REQ_NOT_EXHAUSTED_ACTIVATE = 25,
        REQ_UNIQUE_SECRET_OR_QUEST = 26, REQ_TARGET_TAUNTER = 27,
        REQ_CAN_BE_ATTACKED = 28, REQ_ACTION_PWR_IS_MASTER_PWR = 29,
        REQ_TARGET_MAGNET = 30, REQ_ATTACK_GREATER_THAN_0 = 31,
        REQ_ATTACKER_NOT_FROZEN = 32, REQ_HERO_OR_MINION_TARGET = 33,
        REQ_CAN_BE_TARGETED_BY_SPELLS = 34, REQ_SUBCARD_IS_PLAYABLE = 35,
        REQ_TARGET_FOR_NO_COMBO = 36, REQ_NOT_MINION_JUST_PLAYED = 37,
        REQ_NOT_EXHAUSTED_HERO_POWER = 38,
        REQ_CAN_BE_TARGETED_BY_OPPONENTS = 39, REQ_ATTACKER_CAN_ATTACK = 40,
        REQ_TARGET_MIN_ATTACK = 41, REQ_CAN_BE_TARGETED_BY_HERO_POWERS = 42,
        REQ_ENEMY_TARGET_NOT_IMMUNE = 43, REQ_ENTIRE_ENTOURAGE_NOT_IN_PLAY = 44,
        REQ_MINIMUM_TOTAL_MINIONS = 45, REQ_MUST_TARGET_TAUNTER = 46,
        REQ_UNDAMAGED_TARGET = 47, REQ_CAN_BE_TARGETED_BY_BATTLECRIES = 48,
        REQ_STEADY_SHOT = 49, REQ_MINION_OR_ENEMY_HERO = 50,
        REQ_TARGET_IF_AVAILABLE_AND_DRAGON_IN_HAND = 51,
        REQ_LEGENDARY_TARGET = 52, REQ_FRIENDLY_MINION_DIED_THIS_TURN = 53,
        REQ_FRIENDLY_MINION_DIED_THIS_GAME = 54, REQ_ENEMY_WEAPON_EQUIPPED = 55,
        REQ_TARGET_IF_AVAILABLE_AND_MINIMUM_FRIENDLY_MINIONS = 56,
        REQ_TARGET_WITH_BATTLECRY = 57, REQ_TARGET_WITH_DEATHRATTLE = 58,
        REQ_TARGET_IF_AVAILABLE_AND_MINIMUM_FRIENDLY_SECRETS = 59,
        REQ_SECRET_ZONE_CAP_FOR_NON_SECRET = 60, REQ_TARGET_EXACT_COST = 61,
        REQ_STEALTHED_TARGET = 62, REQ_MINION_SLOT_OR_MANA_CRYSTAL_SLOT = 63,
        REQ_MAX_QUESTS = 64,
        REQ_TARGET_IF_AVAILABE_AND_ELEMENTAL_PLAYED_LAST_TURN = 65,
        REQ_TARGET_NOT_VAMPIRE = 66,
        REQ_TARGET_NOT_DAMAGEABLE_ONLY_BY_WEAPONS = 67,
        REQ_NOT_DISABLED_HERO_POWER = 68, REQ_MUST_PLAY_OTHER_CARD_FIRST = 69,
        REQ_HAND_NOT_FULL = 70,
        REQ_TARGET_IF_AVAILABLE_AND_NO_3_COST_CARD_IN_DECK = 71,
        REQ_CAN_BE_TARGETED_BY_COMBOS = 72, REQ_CANNOT_PLAY_THIS = 73,
        REQ_FRIENDLY_MINIONS_OF_RACE_DIED_THIS_GAME = 74, REQ_DRAG_TO_PLAY = 75)
#else
    namespace better_enums_data_PlayReq { }
    class PlayReq
    {
     private:
        typedef ::better_enums::optional<PlayReq> _optional;
        typedef ::better_enums::optional<std::size_t> _optional_index;

     public:
        typedef int _integral;
        enum _enumerated : int
        {
            REQ_MINION_TARGET = 1,
            REQ_FRIENDLY_TARGET = 2,
            REQ_ENEMY_TARGET = 3,
            REQ_DAMAGED_TARGET = 4,
            REQ_MAX_SECRETS = 5,
            REQ_FROZEN_TARGET = 6,
            REQ_CHARGE_TARGET = 7,
            REQ_TARGET_MAX_ATTACK = 8,
            REQ_NONSELF_TARGET = 9,
            REQ_TARGET_WITH_RACE = 10,
            REQ_TARGET_TO_PLAY = 11,
            REQ_NUM_MINION_SLOTS = 12,
            REQ_WEAPON_EQUIPPED = 13,
            REQ_ENOUGH_MANA = 14,
            REQ_YOUR_TURN = 15,
            REQ_NONSTEALTH_ENEMY_TARGET = 16,
            REQ_HERO_TARGET = 17,
            REQ_SECRET_ZONE_CAP = 18,
            REQ_MINION_CAP_IF_TARGET_AVAILABLE = 19,
            REQ_MINION_CAP = 20,
            REQ_TARGET_ATTACKED_THIS_TURN = 21,
            REQ_TARGET_IF_AVAILABLE = 22,
            REQ_MINIMUM_ENEMY_MINIONS = 23,
            REQ_TARGET_FOR_COMBO = 24,
            REQ_NOT_EXHAUSTED_ACTIVATE = 25,
            REQ_UNIQUE_SECRET_OR_QUEST = 26,
            REQ_TARGET_TAUNTER = 27,
            REQ_CAN_BE_ATTACKED = 28,
            REQ_ACTION_PWR_IS_MASTER_PWR = 29,
            REQ_TARGET_MAGNET = 30,
            REQ_ATTACK_GREATER_THAN_0 = 31,
            REQ_ATTACKER_NOT_FROZEN = 32,
            REQ_HERO_OR_MINION_TARGET = 33,
            REQ_CAN_BE_TARGETED_BY_SPELLS = 34,
            REQ_SUBCARD_IS_PLAYABLE = 35,
            REQ_TARGET_FOR_NO_COMBO = 36,
            REQ_NOT_MINION_JUST_PLAYED = 37,
            REQ_NOT_EXHAUSTED_HERO_POWER = 38,
            REQ_CAN_BE_TARGETED_BY_OPPONENTS = 39,
            REQ_ATTACKER_CAN_ATTACK = 40,
            REQ_TARGET_MIN_ATTACK = 41,
            REQ_CAN_BE_TARGETED_BY_HERO_POWERS = 42,
            REQ_ENEMY_TARGET_NOT_IMMUNE = 43,
            REQ_ENTIRE_ENTOURAGE_NOT_IN_PLAY = 44,
            REQ_MINIMUM_TOTAL_MINIONS = 45,
            REQ_MUST_TARGET_TAUNTER = 46,
            REQ_UNDAMAGED_TARGET = 47,
            REQ_CAN_BE_TARGETED_BY_BATTLECRIES = 48,
            REQ_STEADY_SHOT = 49,
            REQ_MINION_OR_ENEMY_HERO = 50,
            REQ_TARGET_IF_AVAILABLE_AND_DRAGON_IN_HAND = 51,
            REQ_LEGENDARY_TARGET = 52,
            REQ_FRIENDLY_MINION_DIED_THIS_TURN = 53,
            REQ_FRIENDLY_MINION_DIED_THIS_GAME = 54,
            REQ_ENEMY_WEAPON_EQUIPPED = 55,
            REQ_TARGET_IF_AVAILABLE_AND_MINIMUM_FRIENDLY_MINIONS = 56,
            REQ_TARGET_WITH_BATTLECRY = 57,
            REQ_TARGET_WITH_DEATHRATTLE = 58,
            REQ_TARGET_IF_AVAILABLE_AND_MINIMUM_FRIENDLY_SECRETS = 59,
            REQ_SECRET_ZONE_CAP_FOR_NON_SECRET = 60,
            REQ_TARGET_EXACT_COST = 61,
            REQ_STEALTHED_TARGET = 62,
            REQ_MINION_SLOT_OR_MANA_CRYSTAL_SLOT = 63,
            REQ_MAX_QUESTS = 64,
            REQ_TARGET_IF_AVAILABE_AND_ELEMENTAL_PLAYED_LAST_TURN = 65,
            REQ_TARGET_NOT_VAMPIRE = 66,
            REQ_TARGET_NOT_DAMAGEABLE_ONLY_BY_WEAPONS = 67,
            REQ_NOT_DISABLED_HERO_POWER = 68,
            REQ_MUST_PLAY_OTHER_CARD_FIRST = 69,
            REQ_HAND_NOT_FULL = 70,
            REQ_TARGET_IF_AVAILABLE_AND_NO_3_COST_CARD_IN_DECK = 71,
            REQ_CAN_BE_TARGETED_BY_COMBOS = 72,
            REQ_CANNOT_PLAY_THIS = 73,
            REQ_FRIENDLY_MINIONS_OF_RACE_DIED_THIS_GAME = 74,
            REQ_DRAG_TO_PLAY = 75,
        };

        constexpr PlayReq(_enumerated value) : _value(value)
        {
            // Do nothing
        }
        constexpr operator _enumerated() const
        {
            return _enumerated(_value);
        }
        constexpr _integral _to_integral() const;
        constexpr static PlayReq _from_integral(_integral value);
        constexpr static PlayReq _from_integral_unchecked(_integral value);
        constexpr static _optional _from_integral_nothrow(_integral value);
        const char* _to_string() const;
        constexpr static PlayReq _from_string(const char* name);
        constexpr static _optional _from_string_nothrow(const char* name);
        constexpr static PlayReq _from_string_nocase(const char* name);
        constexpr static _optional _from_string_nocase_nothrow(const char* name);
        constexpr static bool _is_valid(_integral value);
        constexpr static bool _is_valid(const char* name);
        constexpr static bool _is_valid_nocase(const char* name);
        typedef ::better_enums::_Iterable<PlayReq> _value_iterable;
        typedef ::better_enums::_Iterable<const char*> _name_iterable;
        typedef _value_iterable::iterator _value_iterator;
        typedef _name_iterable::iterator _name_iterator;
        constexpr static const std::size_t _size_constant = 75;
        constexpr static std::size_t _size()
        {
            return _size_constant;
        }
        constexpr static const char* _name();
        constexpr static _value_iterable _values();
        static _name_iterable _names();
        _integral _value;

     private:
        PlayReq() : _value(0)
        {
            // Do nothing
        }

     private:
        explicit constexpr PlayReq(const _integral& value) : _value(value)
        {
            // Do nothing
        }
        static int initialize();
        constexpr static _optional_index _from_value_loop(
            _integral value, std::size_t index = 0);
        constexpr static _optional_index _from_string_loop(
            const char* name, std::size_t index = 0);
        constexpr static _optional_index _from_string_nocase_loop(
            const char* name, std::size_t index = 0);
        friend struct ::better_enums::_initialize_at_program_start<PlayReq>;
    };

    namespace better_enums_data_PlayReq
    {
        static ::better_enums::_initialize_at_program_start<PlayReq>
            _force_initialization;
        enum _PutNamesInThisScopeAlso
        {
            REQ_MINION_TARGET = 1,
            REQ_FRIENDLY_TARGET = 2,
            REQ_ENEMY_TARGET = 3,
            REQ_DAMAGED_TARGET = 4,
            REQ_MAX_SECRETS = 5,
            REQ_FROZEN_TARGET = 6,
            REQ_CHARGE_TARGET = 7,
            REQ_TARGET_MAX_ATTACK = 8,
            REQ_NONSELF_TARGET = 9,
            REQ_TARGET_WITH_RACE = 10,
            REQ_TARGET_TO_PLAY = 11,
            REQ_NUM_MINION_SLOTS = 12,
            REQ_WEAPON_EQUIPPED = 13,
            REQ_ENOUGH_MANA = 14,
            REQ_YOUR_TURN = 15,
            REQ_NONSTEALTH_ENEMY_TARGET = 16,
            REQ_HERO_TARGET = 17,
            REQ_SECRET_ZONE_CAP = 18,
            REQ_MINION_CAP_IF_TARGET_AVAILABLE = 19,
            REQ_MINION_CAP = 20,
            REQ_TARGET_ATTACKED_THIS_TURN = 21,
            REQ_TARGET_IF_AVAILABLE = 22,
            REQ_MINIMUM_ENEMY_MINIONS = 23,
            REQ_TARGET_FOR_COMBO = 24,
            REQ_NOT_EXHAUSTED_ACTIVATE = 25,
            REQ_UNIQUE_SECRET_OR_QUEST = 26,
            REQ_TARGET_TAUNTER = 27,
            REQ_CAN_BE_ATTACKED = 28,
            REQ_ACTION_PWR_IS_MASTER_PWR = 29,
            REQ_TARGET_MAGNET = 30,
            REQ_ATTACK_GREATER_THAN_0 = 31,
            REQ_ATTACKER_NOT_FROZEN = 32,
            REQ_HERO_OR_MINION_TARGET = 33,
            REQ_CAN_BE_TARGETED_BY_SPELLS = 34,
            REQ_SUBCARD_IS_PLAYABLE = 35,
            REQ_TARGET_FOR_NO_COMBO = 36,
            REQ_NOT_MINION_JUST_PLAYED = 37,
            REQ_NOT_EXHAUSTED_HERO_POWER = 38,
            REQ_CAN_BE_TARGETED_BY_OPPONENTS = 39,
            REQ_ATTACKER_CAN_ATTACK = 40,
            REQ_TARGET_MIN_ATTACK = 41,
            REQ_CAN_BE_TARGETED_BY_HERO_POWERS = 42,
            REQ_ENEMY_TARGET_NOT_IMMUNE = 43,
            REQ_ENTIRE_ENTOURAGE_NOT_IN_PLAY = 44,
            REQ_MINIMUM_TOTAL_MINIONS = 45,
            REQ_MUST_TARGET_TAUNTER = 46,
            REQ_UNDAMAGED_TARGET = 47,
            REQ_CAN_BE_TARGETED_BY_BATTLECRIES = 48,
            REQ_STEADY_SHOT = 49,
            REQ_MINION_OR_ENEMY_HERO = 50,
            REQ_TARGET_IF_AVAILABLE_AND_DRAGON_IN_HAND = 51,
            REQ_LEGENDARY_TARGET = 52,
            REQ_FRIENDLY_MINION_DIED_THIS_TURN = 53,
            REQ_FRIENDLY_MINION_DIED_THIS_GAME = 54,
            REQ_ENEMY_WEAPON_EQUIPPED = 55,
            REQ_TARGET_IF_AVAILABLE_AND_MINIMUM_FRIENDLY_MINIONS = 56,
            REQ_TARGET_WITH_BATTLECRY = 57,
            REQ_TARGET_WITH_DEATHRATTLE = 58,
            REQ_TARGET_IF_AVAILABLE_AND_MINIMUM_FRIENDLY_SECRETS = 59,
            REQ_SECRET_ZONE_CAP_FOR_NON_SECRET = 60,
            REQ_TARGET_EXACT_COST = 61,
            REQ_STEALTHED_TARGET = 62,
            REQ_MINION_SLOT_OR_MANA_CRYSTAL_SLOT = 63,
            REQ_MAX_QUESTS = 64,
            REQ_TARGET_IF_AVAILABE_AND_ELEMENTAL_PLAYED_LAST_TURN = 65,
            REQ_TARGET_NOT_VAMPIRE = 66,
            REQ_TARGET_NOT_DAMAGEABLE_ONLY_BY_WEAPONS = 67,
            REQ_NOT_DISABLED_HERO_POWER = 68,
            REQ_MUST_PLAY_OTHER_CARD_FIRST = 69,
            REQ_HAND_NOT_FULL = 70,
            REQ_TARGET_IF_AVAILABLE_AND_NO_3_COST_CARD_IN_DECK = 71,
            REQ_CAN_BE_TARGETED_BY_COMBOS = 72,
            REQ_CANNOT_PLAY_THIS = 73,
            REQ_FRIENDLY_MINIONS_OF_RACE_DIED_THIS_GAME = 74,
            REQ_DRAG_TO_PLAY = 75,
        };
        constexpr const PlayReq _value_array[] = {
            ((::better_enums::_eat_assign<PlayReq>)PlayReq::REQ_MINION_TARGET = 1),
            ((::better_enums::_eat_assign<PlayReq>)PlayReq::REQ_FRIENDLY_TARGET = 2),
            ((::better_enums::_eat_assign<PlayReq>)PlayReq::REQ_ENEMY_TARGET = 3),
            ((::better_enums::_eat_assign<PlayReq>)PlayReq::REQ_DAMAGED_TARGET = 4),
            ((::better_enums::_eat_assign<PlayReq>)PlayReq::REQ_MAX_SECRETS = 5),
            ((::better_enums::_eat_assign<PlayReq>)PlayReq::REQ_FROZEN_TARGET = 6),
            ((::better_enums::_eat_assign<PlayReq>)PlayReq::REQ_CHARGE_TARGET = 7),
            ((::better_enums::_eat_assign<PlayReq>)PlayReq::REQ_TARGET_MAX_ATTACK = 8),
            ((::better_enums::_eat_assign<PlayReq>)PlayReq::REQ_NONSELF_TARGET = 9),
            ((::better_enums::_eat_assign<PlayReq>)PlayReq::REQ_TARGET_WITH_RACE = 10),
            ((::better_enums::_eat_assign<PlayReq>)PlayReq::REQ_TARGET_TO_PLAY = 11),
            ((::better_enums::_eat_assign<PlayReq>)PlayReq::REQ_NUM_MINION_SLOTS = 12),
            ((::better_enums::_eat_assign<PlayReq>)PlayReq::REQ_WEAPON_EQUIPPED = 13),
            ((::better_enums::_eat_assign<PlayReq>)PlayReq::REQ_ENOUGH_MANA = 14),
            ((::better_enums::_eat_assign<PlayReq>)PlayReq::REQ_YOUR_TURN = 15),
            ((::better_enums::_eat_assign<PlayReq>)PlayReq::REQ_NONSTEALTH_ENEMY_TARGET = 16),
            ((::better_enums::_eat_assign<PlayReq>)PlayReq::REQ_HERO_TARGET = 17),
            ((::better_enums::_eat_assign<PlayReq>)PlayReq::REQ_SECRET_ZONE_CAP = 18),
            ((::better_enums::_eat_assign<PlayReq>)PlayReq::REQ_MINION_CAP_IF_TARGET_AVAILABLE = 19),
            ((::better_enums::_eat_assign<PlayReq>)PlayReq::REQ_MINION_CAP = 20),
            ((::better_enums::_eat_assign<PlayReq>)PlayReq::REQ_TARGET_ATTACKED_THIS_TURN = 21),
            ((::better_enums::_eat_assign<PlayReq>)PlayReq::REQ_TARGET_IF_AVAILABLE = 22),
            ((::better_enums::_eat_assign<PlayReq>)PlayReq::REQ_MINIMUM_ENEMY_MINIONS = 23),
            ((::better_enums::_eat_assign<PlayReq>)PlayReq::REQ_TARGET_FOR_COMBO = 24),
            ((::better_enums::_eat_assign<PlayReq>)PlayReq::REQ_NOT_EXHAUSTED_ACTIVATE = 25),
            ((::better_enums::_eat_assign<PlayReq>)PlayReq::REQ_UNIQUE_SECRET_OR_QUEST = 26),
            ((::better_enums::_eat_assign<PlayReq>)PlayReq::REQ_TARGET_TAUNTER = 27),
            ((::better_enums::_eat_assign<PlayReq>)PlayReq::REQ_CAN_BE_ATTACKED = 28),
            ((::better_enums::_eat_assign<PlayReq>)PlayReq::REQ_ACTION_PWR_IS_MASTER_PWR = 29),
            ((::better_enums::_eat_assign<PlayReq>)PlayReq::REQ_TARGET_MAGNET = 30),
            ((::better_enums::_eat_assign<PlayReq>)PlayReq::REQ_ATTACK_GREATER_THAN_0 = 31),
            ((::better_enums::_eat_assign<PlayReq>)PlayReq::REQ_ATTACKER_NOT_FROZEN = 32),
            ((::better_enums::_eat_assign<PlayReq>)PlayReq::REQ_HERO_OR_MINION_TARGET = 33),
            ((::better_enums::_eat_assign<PlayReq>)PlayReq::REQ_CAN_BE_TARGETED_BY_SPELLS = 34),
            ((::better_enums::_eat_assign<PlayReq>)PlayReq::REQ_SUBCARD_IS_PLAYABLE = 35),
            ((::better_enums::_eat_assign<PlayReq>)PlayReq::REQ_TARGET_FOR_NO_COMBO = 36),
            ((::better_enums::_eat_assign<PlayReq>)PlayReq::REQ_NOT_MINION_JUST_PLAYED = 37),
            ((::better_enums::_eat_assign<PlayReq>)PlayReq::REQ_NOT_EXHAUSTED_HERO_POWER = 38),
            ((::better_enums::_eat_assign<PlayReq>)PlayReq::REQ_CAN_BE_TARGETED_BY_OPPONENTS = 39),
            ((::better_enums::_eat_assign<PlayReq>)PlayReq::REQ_ATTACKER_CAN_ATTACK = 40),
            ((::better_enums::_eat_assign<PlayReq>)PlayReq::REQ_TARGET_MIN_ATTACK = 41),
            ((::better_enums::_eat_assign<PlayReq>)PlayReq::REQ_CAN_BE_TARGETED_BY_HERO_POWERS = 42),
            ((::better_enums::_eat_assign<PlayReq>)PlayReq::REQ_ENEMY_TARGET_NOT_IMMUNE = 43),
            ((::better_enums::_eat_assign<PlayReq>)PlayReq::REQ_ENTIRE_ENTOURAGE_NOT_IN_PLAY = 44),
            ((::better_enums::_eat_assign<PlayReq>)PlayReq::REQ_MINIMUM_TOTAL_MINIONS = 45),
            ((::better_enums::_eat_assign<PlayReq>)PlayReq::REQ_MUST_TARGET_TAUNTER = 46),
            ((::better_enums::_eat_assign<PlayReq>)PlayReq::REQ_UNDAMAGED_TARGET = 47),
            ((::better_enums::_eat_assign<PlayReq>)PlayReq::REQ_CAN_BE_TARGETED_BY_BATTLECRIES = 48),
            ((::better_enums::_eat_assign<PlayReq>)PlayReq::REQ_STEADY_SHOT = 49),
            ((::better_enums::_eat_assign<PlayReq>)PlayReq::REQ_MINION_OR_ENEMY_HERO = 50),
            ((::better_enums::_eat_assign<PlayReq>)PlayReq::REQ_TARGET_IF_AVAILABLE_AND_DRAGON_IN_HAND = 51),
            ((::better_enums::_eat_assign<PlayReq>)PlayReq::REQ_LEGENDARY_TARGET = 52),
            ((::better_enums::_eat_assign<PlayReq>)PlayReq::REQ_FRIENDLY_MINION_DIED_THIS_TURN = 53),
            ((::better_enums::_eat_assign<PlayReq>)PlayReq::REQ_FRIENDLY_MINION_DIED_THIS_GAME = 54),
            ((::better_enums::_eat_assign<PlayReq>)PlayReq::REQ_ENEMY_WEAPON_EQUIPPED = 55),
            ((::better_enums::_eat_assign<PlayReq>)PlayReq::REQ_TARGET_IF_AVAILABLE_AND_MINIMUM_FRIENDLY_MINIONS = 56),
            ((::better_enums::_eat_assign<PlayReq>)PlayReq::REQ_TARGET_WITH_BATTLECRY = 57),
            ((::better_enums::_eat_assign<PlayReq>)PlayReq::REQ_TARGET_WITH_DEATHRATTLE = 58),
            ((::better_enums::_eat_assign<PlayReq>)PlayReq::REQ_TARGET_IF_AVAILABLE_AND_MINIMUM_FRIENDLY_SECRETS = 59),
            ((::better_enums::_eat_assign<PlayReq>)PlayReq::REQ_SECRET_ZONE_CAP_FOR_NON_SECRET = 60),
            ((::better_enums::_eat_assign<PlayReq>)PlayReq::REQ_TARGET_EXACT_COST = 61),
            ((::better_enums::_eat_assign<PlayReq>)PlayReq::REQ_STEALTHED_TARGET = 62),
            ((::better_enums::_eat_assign<PlayReq>)PlayReq::REQ_MINION_SLOT_OR_MANA_CRYSTAL_SLOT = 63),
            ((::better_enums::_eat_assign<PlayReq>)PlayReq::REQ_MAX_QUESTS = 64),
            ((::better_enums::_eat_assign<PlayReq>)PlayReq::REQ_TARGET_IF_AVAILABE_AND_ELEMENTAL_PLAYED_LAST_TURN = 65),
            ((::better_enums::_eat_assign<PlayReq>)PlayReq::REQ_TARGET_NOT_VAMPIRE = 66),
            ((::better_enums::_eat_assign<PlayReq>)PlayReq::REQ_TARGET_NOT_DAMAGEABLE_ONLY_BY_WEAPONS = 67),
            ((::better_enums::_eat_assign<PlayReq>)PlayReq::REQ_NOT_DISABLED_HERO_POWER = 68),
            ((::better_enums::_eat_assign<PlayReq>)PlayReq::REQ_MUST_PLAY_OTHER_CARD_FIRST = 69),
            ((::better_enums::_eat_assign<PlayReq>)PlayReq::REQ_HAND_NOT_FULL = 70),
            ((::better_enums::_eat_assign<PlayReq>)PlayReq::REQ_TARGET_IF_AVAILABLE_AND_NO_3_COST_CARD_IN_DECK = 71),
            ((::better_enums::_eat_assign<PlayReq>)PlayReq::REQ_CAN_BE_TARGETED_BY_COMBOS = 72),
            ((::better_enums::_eat_assign<PlayReq>)PlayReq::REQ_CANNOT_PLAY_THIS = 73),
            ((::better_enums::_eat_assign<PlayReq>)PlayReq::REQ_FRIENDLY_MINIONS_OF_RACE_DIED_THIS_GAME = 74),
            ((::better_enums::_eat_assign<PlayReq>)PlayReq::REQ_DRAG_TO_PLAY = 75),
        };
        constexpr const char* _the_raw_names[] = {
            "REQ_MINION_TARGET = 1",
            "REQ_FRIENDLY_TARGET = 2",
            "REQ_ENEMY_TARGET = 3",
            "REQ_DAMAGED_TARGET = 4",
            "REQ_MAX_SECRETS = 5",
            "REQ_FROZEN_TARGET = 6",
            "REQ_CHARGE_TARGET = 7",
            "REQ_TARGET_MAX_ATTACK = 8",
            "REQ_NONSELF_TARGET = 9",
            "REQ_TARGET_WITH_RACE = 10",
            "REQ_TARGET_TO_PLAY = 11",
            "REQ_NUM_MINION_SLOTS = 12",
            "REQ_WEAPON_EQUIPPED = 13",
            "REQ_ENOUGH_MANA = 14",
            "REQ_YOUR_TURN = 15",
            "REQ_NONSTEALTH_ENEMY_TARGET = 16",
            "REQ_HERO_TARGET = 17",
            "REQ_SECRET_ZONE_CAP = 18",
            "REQ_MINION_CAP_IF_TARGET_AVAILABLE = 19",
            "REQ_MINION_CAP = 20",
            "REQ_TARGET_ATTACKED_THIS_TURN = 21",
            "REQ_TARGET_IF_AVAILABLE = 22",
            "REQ_MINIMUM_ENEMY_MINIONS = 23",
            "REQ_TARGET_FOR_COMBO = 24",
            "REQ_NOT_EXHAUSTED_ACTIVATE = 25",
            "REQ_UNIQUE_SECRET_OR_QUEST = 26",
            "REQ_TARGET_TAUNTER = 27",
            "REQ_CAN_BE_ATTACKED = 28",
            "REQ_ACTION_PWR_IS_MASTER_PWR = 29",
            "REQ_TARGET_MAGNET = 30",
            "REQ_ATTACK_GREATER_THAN_0 = 31",
            "REQ_ATTACKER_NOT_FROZEN = 32",
            "REQ_HERO_OR_MINION_TARGET = 33",
            "REQ_CAN_BE_TARGETED_BY_SPELLS = 34",
            "REQ_SUBCARD_IS_PLAYABLE = 35",
            "REQ_TARGET_FOR_NO_COMBO = 36",
            "REQ_NOT_MINION_JUST_PLAYED = 37",
            "REQ_NOT_EXHAUSTED_HERO_POWER = 38",
            "REQ_CAN_BE_TARGETED_BY_OPPONENTS = 39",
            "REQ_ATTACKER_CAN_ATTACK = 40",
            "REQ_TARGET_MIN_ATTACK = 41",
            "REQ_CAN_BE_TARGETED_BY_HERO_POWERS = 42",
            "REQ_ENEMY_TARGET_NOT_IMMUNE = 43",
            "REQ_ENTIRE_ENTOURAGE_NOT_IN_PLAY = 44",
            "REQ_MINIMUM_TOTAL_MINIONS = 45",
            "REQ_MUST_TARGET_TAUNTER = 46",
            "REQ_UNDAMAGED_TARGET = 47",
            "REQ_CAN_BE_TARGETED_BY_BATTLECRIES = 48",
            "REQ_STEADY_SHOT = 49",
            "REQ_MINION_OR_ENEMY_HERO = 50",
            "REQ_TARGET_IF_AVAILABLE_AND_DRAGON_IN_HAND = 51",
            "REQ_LEGENDARY_TARGET = 52",
            "REQ_FRIENDLY_MINION_DIED_THIS_TURN = 53",
            "REQ_FRIENDLY_MINION_DIED_THIS_GAME = 54",
            "REQ_ENEMY_WEAPON_EQUIPPED = 55",
            "REQ_TARGET_IF_AVAILABLE_AND_MINIMUM_FRIENDLY_MINIONS = 56",
            "REQ_TARGET_WITH_BATTLECRY = 57",
            "REQ_TARGET_WITH_DEATHRATTLE = 58",
            "REQ_TARGET_IF_AVAILABLE_AND_MINIMUM_FRIENDLY_SECRETS = 59",
            "REQ_SECRET_ZONE_CAP_FOR_NON_SECRET = 60",
            "REQ_TARGET_EXACT_COST = 61",
            "REQ_STEALTHED_TARGET = 62",
            "REQ_MINION_SLOT_OR_MANA_CRYSTAL_SLOT = 63",
            "REQ_MAX_QUESTS = 64",
            "REQ_TARGET_IF_AVAILABE_AND_ELEMENTAL_PLAYED_LAST_TURN = 65",
            "REQ_TARGET_NOT_VAMPIRE = 66",
            "REQ_TARGET_NOT_DAMAGEABLE_ONLY_BY_WEAPONS = 67",
            "REQ_NOT_DISABLED_HERO_POWER = 68",
            "REQ_MUST_PLAY_OTHER_CARD_FIRST = 69",
            "REQ_HAND_NOT_FULL = 70",
            "REQ_TARGET_IF_AVAILABLE_AND_NO_3_COST_CARD_IN_DECK = 71",
            "REQ_CAN_BE_TARGETED_BY_COMBOS = 72",
            "REQ_CANNOT_PLAY_THIS = 73",
            "REQ_FRIENDLY_MINIONS_OF_RACE_DIED_THIS_GAME = 74",
            "REQ_DRAG_TO_PLAY = 75",
        };
        constexpr const char* const* _raw_names()
        {
            return _the_raw_names;
        }
        inline char* _name_storage()
        {
            static char storage[] =
                "REQ_MINION_TARGET = 1"
                ","
                "REQ_FRIENDLY_TARGET = 2"
                ","
                "REQ_ENEMY_TARGET = 3"
                ","
                "REQ_DAMAGED_TARGET = 4"
                ","
                "REQ_MAX_SECRETS = 5"
                ","
                "REQ_FROZEN_TARGET = 6"
                ","
                "REQ_CHARGE_TARGET = 7"
                ","
                "REQ_TARGET_MAX_ATTACK = 8"
                ","
                "REQ_NONSELF_TARGET = 9"
                ","
                "REQ_TARGET_WITH_RACE = 10"
                ","
                "REQ_TARGET_TO_PLAY = 11"
                ","
                "REQ_NUM_MINION_SLOTS = 12"
                ","
                "REQ_WEAPON_EQUIPPED = 13"
                ","
                "REQ_ENOUGH_MANA = 14"
                ","
                "REQ_YOUR_TURN = 15"
                ","
                "REQ_NONSTEALTH_ENEMY_TARGET = 16"
                ","
                "REQ_HERO_TARGET = 17"
                ","
                "REQ_SECRET_ZONE_CAP = 18"
                ","
                "REQ_MINION_CAP_IF_TARGET_AVAILABLE = 19"
                ","
                "REQ_MINION_CAP = 20"
                ","
                "REQ_TARGET_ATTACKED_THIS_TURN = 21"
                ","
                "REQ_TARGET_IF_AVAILABLE = 22"
                ","
                "REQ_MINIMUM_ENEMY_MINIONS = 23"
                ","
                "REQ_TARGET_FOR_COMBO = 24"
                ","
                "REQ_NOT_EXHAUSTED_ACTIVATE = 25"
                ","
                "REQ_UNIQUE_SECRET_OR_QUEST = 26"
                ","
                "REQ_TARGET_TAUNTER = 27"
                ","
                "REQ_CAN_BE_ATTACKED = 28"
                ","
                "REQ_ACTION_PWR_IS_MASTER_PWR = 29"
                ","
                "REQ_TARGET_MAGNET = 30"
                ","
                "REQ_ATTACK_GREATER_THAN_0 = 31"
                ","
                "REQ_ATTACKER_NOT_FROZEN = 32"
                ","
                "REQ_HERO_OR_MINION_TARGET = 33"
                ","
                "REQ_CAN_BE_TARGETED_BY_SPELLS = 34"
                ","
                "REQ_SUBCARD_IS_PLAYABLE = 35"
                ","
                "REQ_TARGET_FOR_NO_COMBO = 36"
                ","
                "REQ_NOT_MINION_JUST_PLAYED = 37"
                ","
                "REQ_NOT_EXHAUSTED_HERO_POWER = 38"
                ","
                "REQ_CAN_BE_TARGETED_BY_OPPONENTS = 39"
                ","
                "REQ_ATTACKER_CAN_ATTACK = 40"
                ","
                "REQ_TARGET_MIN_ATTACK = 41"
                ","
                "REQ_CAN_BE_TARGETED_BY_HERO_POWERS = 42"
                ","
                "REQ_ENEMY_TARGET_NOT_IMMUNE = 43"
                ","
                "REQ_ENTIRE_ENTOURAGE_NOT_IN_PLAY = 44"
                ","
                "REQ_MINIMUM_TOTAL_MINIONS = 45"
                ","
                "REQ_MUST_TARGET_TAUNTER = 46"
                ","
                "REQ_UNDAMAGED_TARGET = 47"
                ","
                "REQ_CAN_BE_TARGETED_BY_BATTLECRIES = 48"
                ","
                "REQ_STEADY_SHOT = 49"
                ","
                "REQ_MINION_OR_ENEMY_HERO = 50"
                ","
                "REQ_TARGET_IF_AVAILABLE_AND_DRAGON_IN_HAND = 51"
                ","
                "REQ_LEGENDARY_TARGET = 52"
                ","
                "REQ_FRIENDLY_MINION_DIED_THIS_TURN = 53"
                ","
                "REQ_FRIENDLY_MINION_DIED_THIS_GAME = 54"
                ","
                "REQ_ENEMY_WEAPON_EQUIPPED = 55"
                ","
                "REQ_TARGET_IF_AVAILABLE_AND_MINIMUM_FRIENDLY_MINIONS = 56"
                ","
                "REQ_TARGET_WITH_BATTLECRY = 57"
                ","
                "REQ_TARGET_WITH_DEATHRATTLE = 58"
                ","
                "REQ_TARGET_IF_AVAILABLE_AND_MINIMUM_FRIENDLY_SECRETS = 59"
                ","
                "REQ_SECRET_ZONE_CAP_FOR_NON_SECRET = 60"
                ","
                "REQ_TARGET_EXACT_COST = 61"
                ","
                "REQ_STEALTHED_TARGET = 62"
                ","
                "REQ_MINION_SLOT_OR_MANA_CRYSTAL_SLOT = 63"
                ","
                "REQ_MAX_QUESTS = 64"
                ","
                "REQ_TARGET_IF_AVAILABE_AND_ELEMENTAL_PLAYED_LAST_TURN = 65"
                ","
                "REQ_TARGET_NOT_VAMPIRE = 66"
                ","
                "REQ_TARGET_NOT_DAMAGEABLE_ONLY_BY_WEAPONS = 67"
                ","
                "REQ_NOT_DISABLED_HERO_POWER = 68"
                ","
                "REQ_MUST_PLAY_OTHER_CARD_FIRST = 69"
                ","
                "REQ_HAND_NOT_FULL = 70"
                ","
                "REQ_TARGET_IF_AVAILABLE_AND_NO_3_COST_CARD_IN_DECK = 71"
                ","
                "REQ_CAN_BE_TARGETED_BY_COMBOS = 72"
                ","
                "REQ_CANNOT_PLAY_THIS = 73"
                ","
                "REQ_FRIENDLY_MINIONS_OF_RACE_DIED_THIS_GAME = 74"
                ","
                "REQ_DRAG_TO_PLAY = 75"
                ",";
            return storage;
        }
        inline const char** _name_array()
        {
            static const char* value[PlayReq::_size_constant];
            return value;
        }
        inline bool& _initialized()
        {
            static bool value = false;
            return value;
        }
    }

    constexpr inline const PlayReq operator+(PlayReq::_enumerated enumerated)
    {
        return static_cast<PlayReq>(enumerated);
    }
    constexpr inline PlayReq::_optional_index PlayReq::_from_value_loop(
        PlayReq::_integral value, std::size_t index)
    {
        return index == _size()
                   ? _optional_index()
                   : better_enums_data_PlayReq::_value_array[index]._value ==
                             value
                         ? _optional_index(index)
                         : _from_value_loop(value, index + 1);
    }
    constexpr inline PlayReq::_optional_index PlayReq::_from_string_loop(
        const char* name, std::size_t index)
    {
        return index == _size()
                   ? _optional_index()
                   : ::better_enums::_names_match(
                         better_enums_data_PlayReq::_raw_names()[index], name)
                         ? _optional_index(index)
                         : _from_string_loop(name, index + 1);
    }
    constexpr inline PlayReq::_optional_index PlayReq::_from_string_nocase_loop(
        const char* name, std::size_t index)
    {
        return index == _size()
                   ? _optional_index()
                   : ::better_enums::_names_match_nocase(
                         better_enums_data_PlayReq::_raw_names()[index], name)
                         ? _optional_index(index)
                         : _from_string_nocase_loop(name, index + 1);
    }
    constexpr inline PlayReq::_integral PlayReq::_to_integral() const
    {
        return _integral(_value);
    }
    constexpr inline PlayReq PlayReq::_from_integral_unchecked(_integral value)
    {
        return static_cast<_enumerated>(value);
    }
    constexpr inline PlayReq::_optional PlayReq::_from_integral_nothrow(
        _integral value)
    {
        return ::better_enums::_map_index<PlayReq>(
            better_enums_data_PlayReq::_value_array, _from_value_loop(value));
    }
    constexpr inline PlayReq PlayReq::_from_integral(_integral value)
    {
        return ::better_enums::_or_throw(_from_integral_nothrow(value),
                                         "PlayReq"
                                         "::_from_integral: invalid argument");
    }
    inline const char* PlayReq::_to_string() const
    {
        return ::better_enums::_or_null(::better_enums::_map_index<const char*>(
            better_enums_data_PlayReq::_name_array(),
            _from_value_loop(
                ::better_enums::continue_with(initialize(), _value))));
    }
    constexpr inline PlayReq::_optional PlayReq::_from_string_nothrow(
        const char* name)
    {
        return ::better_enums::_map_index<PlayReq>(
            better_enums_data_PlayReq::_value_array, _from_string_loop(name));
    }
    constexpr inline PlayReq PlayReq::_from_string(const char* name)
    {
        return ::better_enums::_or_throw(_from_string_nothrow(name),
                                         "PlayReq"
                                         "::_from_string: invalid argument");
    }
    constexpr inline PlayReq::_optional PlayReq::_from_string_nocase_nothrow(
        const char* name)
    {
        return ::better_enums::_map_index<PlayReq>(
            better_enums_data_PlayReq::_value_array,
            _from_string_nocase_loop(name));
    }
    constexpr inline PlayReq PlayReq::_from_string_nocase(const char* name)
    {
        return ::better_enums::_or_throw(
            _from_string_nocase_nothrow(name),
            "PlayReq"
            "::_from_string_nocase: invalid argument");
    }
    constexpr inline bool PlayReq::_is_valid(_integral value)
    {
        return _from_value_loop(value);
    }
    constexpr inline bool PlayReq::_is_valid(const char* name)
    {
        return _from_string_loop(name);
    }
    constexpr inline bool PlayReq::_is_valid_nocase(const char* name)
    {
        return _from_string_nocase_loop(name);
    }
    constexpr inline const char* PlayReq::_name()
    {
        return "PlayReq";
    }
    constexpr inline PlayReq::_value_iterable PlayReq::_values()
    {
        return _value_iterable(better_enums_data_PlayReq::_value_array,
                               _size());
    }
    inline PlayReq::_name_iterable PlayReq::_names()
    {
        return _name_iterable(
            better_enums_data_PlayReq::_name_array(),
            ::better_enums::continue_with(initialize(), _size()));
    }
    inline int PlayReq::initialize()
    {
        if (better_enums_data_PlayReq::_initialized())
            return 0;
        ::better_enums::_trim_names(better_enums_data_PlayReq::_raw_names(),
                                    better_enums_data_PlayReq::_name_array(),
                                    better_enums_data_PlayReq::_name_storage(),
                                    _size());
        better_enums_data_PlayReq::_initialized() = true;
        return 0;
    }
    constexpr inline bool operator==(const PlayReq& a, const PlayReq& b)
    {
        return a._to_integral() == b._to_integral();
    }
    constexpr inline bool operator!=(const PlayReq& a, const PlayReq& b)
    {
        return a._to_integral() != b._to_integral();
    }
    constexpr inline bool operator<(const PlayReq& a, const PlayReq& b)
    {
        return a._to_integral() < b._to_integral();
    }
    constexpr inline bool operator<=(const PlayReq& a, const PlayReq& b)
    {
        return a._to_integral() <= b._to_integral();
    }
    constexpr inline bool operator>(const PlayReq& a, const PlayReq& b)
    {
        return a._to_integral() > b._to_integral();
    }
    constexpr inline bool operator>=(const PlayReq& a, const PlayReq& b)
    {
        return a._to_integral() >= b._to_integral();
    }
    template <typename Char, typename Traits>
    std::basic_ostream<Char, Traits>& operator<<(
        std::basic_ostream<Char, Traits>& stream, const PlayReq& value)
    {
        return stream << value._to_string();
    }
    template <typename Char, typename Traits>
    std::basic_istream<Char, Traits>& operator>>(
        std::basic_istream<Char, Traits>& stream, PlayReq& value)
    {
        std::basic_string<Char, Traits> buffer;
        stream >> buffer;
        ::better_enums::optional<PlayReq> converted =
            PlayReq::_from_string_nothrow(buffer.c_str());
        if (converted)
            value = *converted;
        else
            stream.setstate(std::basic_istream<Char, Traits>::failbit);
        return stream;
    }
#endif

    BETTER_ENUM(PlayState, int, INVALID = 0, PLAYING = 1, WINNING = 2,
                LOSING = 3, WON = 4, LOST = 5, TIED = 6, DISCONNECTED = 7,
                CONCEDED = 8)

    BETTER_ENUM(PowerType, int, FULL_ENTITY = 1, SHOW_ENTITY = 2,
                HIDE_ENTITY = 3, TAG_CHANGE = 4, BLOCK_START = 5,
                ACTION_START = 5, BLOCK_END = 6, ACTION_END = 6,
                CREATE_GAME = 7, META_DATA = 8, CHANGE_ENTITY = 9)

    BETTER_ENUM(Race, int, INVALID = 0, BLOODELF = 1, DRAENEI = 2, DWARF = 3,
                GNOME = 4, GOBLIN = 5, HUMAN = 6, NIGHTELF = 7, ORC = 8, TAUREN = 9,
                TROLL = 10, UNDEAD = 11, WORGEN = 12, GOBLIN2 = 13, MURLOC = 14,
                DEMON = 15, SCOURGE = 16, MECHANICAL = 17, ELEMENTAL = 18,
                OGRE = 19, BEAST = 20, PET = 20, TOTEM = 21, NERUBIAN = 22,
                PIRATE = 23, DRAGON = 24, BLANK = 25, ALL = 26, EGG = 38)

    BETTER_ENUM(Rarity, int, INVALID = 0, COMMON = 1, FREE = 2, RARE = 3, EPIC = 4,
                LEGENDARY = 5, UNKNOWN_6 = 6)

    BETTER_ENUM(State, int, INVALID = 0, LOADING = 1, RUNNING = 2,
                COMPLETE = 3)

    BETTER_ENUM(Step, int, INVALID = 0, BEGIN_FIRST = 1, BEGIN_SHUFFLE = 2,
                BEGIN_DRAW = 3, BEGIN_MULLIGAN = 4, MAIN_BEGIN = 5,
                MAIN_READY = 6, MAIN_RESOURCE = 7, MAIN_DRAW = 8,
                MAIN_START = 9, MAIN_ACTION = 10, MAIN_COMBAT = 11,
                MAIN_END = 12, MAIN_NEXT = 13, FINAL_WRAPUP = 14,
                FINAL_GAMEOVER = 15, MAIN_CLEANUP = 16,
                MAIN_START_TRIGGERS = 17)

    BETTER_ENUM(Type, int, LOCSTRING = -2, UNKNOWN = 0, BOOL = 1, NUMBER = 2,
                COUNTER = 3, ENTITY = 4, PLAYER = 5, TEAM = 6,
                ENTITY_DEFINITION = 7, STRING = 8)

    BETTER_ENUM(ZodiacYear, int, INVALID = -1, PRE_STANDARD = 0, KRAKEN = 1,
                MAMMOTH = 2)

    BETTER_ENUM(Zone, int, INVALID = 0, PLAY = 1, DECK = 2, HAND = 3,
                GRAVEYARD = 4, REMOVEDFROMGAME = 5, SETASIDE = 6, SECRET = 7)

    BETTER_ENUM(NumericModification, int, ADD = 0, SUB = 1, SYNC = 2)

    BETTER_ENUM(Action, int, BRIEF = 100, OVER_DRAW = 101, EXHAUST_DECK = 102,
                MANA_MODIFICATION = 103, HEALTH_MODIFICATION = 104,
                EXHAUST_MINION = 105)

    BETTER_ENUM(TaskID, int, INVALID = 0, TASK_TUPLE = 1, REQUIRE = 2, USER_SETTING = 3,
                SWAP = 4, SHUFFLE = 5, DRAW = 6, MODIFY_MANA = 7, MODIFY_HEALTH = 8, BRIEF = 9,
                SELECT_MENU = 10, SELECT_CARD = 11, SELECT_TARGET = 12, MULLIGAN = 13, SUMMON_MINION = 14,
                COMBAT = 15, GAME_END = 16)
}

#endif