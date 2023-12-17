#pragma once

typedef enum {
    TEXT_CURSED_SKULLTULA_PEOPLE = 0x22,
    TEXT_SARIAS_SONG_FACE_TO_FACE= 0x160,
    TEXT_SARIAS_SONG_TEXT_START = 0x160,
    TEXT_SARIAS_SONG_TEXT_END = 0x16D,
    TEXT_SARIA_SFM = 0x10AD,
    TEXT_ITEM_KEY_SMALL = 0x60,
    TEXT_ITEM_DUNGEON_MAP = 0x66,
    TEXT_ITEM_COMPASS = 0x67,
    TEXT_ITEM_KEY_BOSS = 0xC7,
    TEXT_DAMPES_DIARY = 0x5003,
    TEXT_CHEST_GAME_PROCEED = 0x704C,
    TEXT_BUY_BOMBCHU_10_PROMPT = 0x8C,
    TEXT_BUY_BOMBCHU_10_DESC = 0xBC,
    TEXT_GS_NO_FREEZE = 0xB4,
    TEXT_GS_FREEZE = 0xB5,
    TEXT_RANDOMIZER_CUSTOM_ITEM = 0xF8,
    TEXT_SCRUB_POH = 0x10A2,
    TEXT_SCRUB_STICK_UPGRADE = 0x10DC,
    TEXT_SCRUB_NUT_UPGRADE = 0x10DD,
    TEXT_RANDOMIZER_GOSSIP_STONE_HINTS = 0x2053,
    TEXT_ALTAR_CHILD = 0x7040,
    TEXT_ALTAR_ADULT = 0x7088,
    TEXT_GANONDORF = 0x70CC,
    TEXT_GANONDORF_NOHINT = 0x70CD,
    TEXT_HEART_CONTAINER = 0xC6,
    TEXT_HEART_PIECE = 0xC2,
    TEXT_BLUE_RUPEE = 0xCC,
    TEXT_RED_RUPEE = 0xF0,
    TEXT_PURPLE_RUPEE = 0xF1,
    TEXT_HUGE_RUPEE = 0xF2,
    TEXT_FROGS_UNDERWATER = 0x22E,
    TEXT_BEAN_SALESMAN = 0x405E,
    TEXT_MEDIGORON = 0x304C,
    TEXT_GRANNYS_SHOP = 0x500C,
    TEXT_CARPET_SALESMAN_1 = 0x6077,
    TEXT_CARPET_SALESMAN_2 = 0x6078,
    TEXT_MARKET_GUARD_NIGHT = 0x7003,
    TEXT_SHEIK_NEED_HOOK = 0x700F,
    TEXT_SHEIK_HAVE_HOOK = 0x7010,
    TEXT_SCRUB_RANDOM = 0x9000,
    TEXT_SCRUB_RANDOM_FREE = 0x9001,
    TEXT_SHOP_ITEM_RANDOM = 0x9100,
    TEXT_SHOP_ITEM_RANDOM_CONFIRM = 0x9101,
    TEXT_WARP_MINUET_OF_FOREST = 0x88D,
    TEXT_WARP_BOLERO_OF_FIRE = 0x88E,
    TEXT_WARP_SERENADE_OF_WATER = 0x88F,
    TEXT_WARP_REQUIEM_OF_SPIRIT = 0x890,
    TEXT_WARP_NOCTURNE_OF_SHADOW = 0x891,
    TEXT_WARP_PRELUDE_OF_LIGHT = 0x892,
    TEXT_FISHING_POND_START = 0x407B,
    TEXT_FISHING_POND_START_MET = 0x4093,
    TEXT_WARP_RANDOM_REPLACED_TEXT = 0x9200,
    TEXT_LAKE_HYLIA_WATER_SWITCH_SIGN = 0x346, // 0x3yy for cuttable sign range
    TEXT_LAKE_HYLIA_WATER_SWITCH_NAVI = 0x1B3, // 0x1yy for Navi msg range
} TextIDs;

#ifdef __cplusplus

typedef struct {
    u16 giid;
    ItemID iid;
    std::string english;
    std::string german;
    std::string french;
} GetItemMessage;

#define GIMESSAGE(giid, iid, english, german, french) \
    { giid, iid, english, german, french }

#define GIMESSAGE_UNTRANSLATED(giid, iid, message) \
    { giid, iid, message, message, message }

#define GIMESSAGE_NO_GERMAN(giid, iid, english, french) \
    { giid, iid, english, english, french  }

#endif
