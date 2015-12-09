//
//  EventConst.h
//  Voxel_Explorer
//
//  Created by wang haibo on 15/10/20.
//
//

#ifndef EventConst_h
#define EventConst_h

struct HurtData
{
    bool m_bDodge;
    bool m_bCriticalStrike;
    bool m_bBlocked;
    int m_nDamage;
    cocos2d::Vec3 m_vPos;
    HurtData()
    {
        m_bDodge = false;
        m_bCriticalStrike = false;
        m_bBlocked = false;
        m_nDamage = 0;
        m_vPos = cocos2d::Vec3::ZERO;
    }
    void reset()
    {
        m_bDodge = false;
        m_bCriticalStrike = false;
        m_bBlocked = false;
        m_nDamage = 0;
        m_vPos = cocos2d::Vec3::ZERO;
    }
};

//EVENT
static const std::string EVENT_PLAYER_PROPERTY_DIRTY = "PLAYER_PROPERTY_DIRTY";
static const std::string EVENT_PLAYER_DEATH = "PLAYER_DEATH";
static const std::string EVENT_PLAYER_MONEY_NOT_ENOUGH = "PLAYER_MONEY_NOT_ENOUGH";
static const std::string EVENT_PLAYER_NO_MANA = "PLAYER_NO_MANA";
static const std::string EVENT_PLAYER_EQUIPED_WEAPON = "PLAYER_EQUIPED_WEAPON";
static const std::string EVENT_PLAYER_EQUIPED_ARMOR = "PLAYER_EQUIPED_ARMOR";
static const std::string EVENT_PLAYER_EQUIPED_ORNAMENTS = "PLAYER_EQUIPED_ORNAMENTS";
static const std::string EVENT_PLAYER_USE_SCROLL = "PLAYER_USE_SCROLL";
static const std::string EVENT_PLAYER_USE_POTION = "PLAYER_USE_POTION";
static const std::string EVENT_PLAYER_LEVEL_UP = "PLAYER_LEVEL_UP";
static const std::string EVENT_PLAYER_BAG_NO_SPACE = "PLAYER_BAG_NO_SPACE";
static const std::string EVENT_PLAYER_BAG_EXTEND_OK = "PLAYER_BAG_EXTEND_OK";
static const std::string EVENT_PLAYER_BAG_EXTEND_HAS_REACH_MAXTIMES = "PLAYER_BAG_EXTEND_HAS_REACH_MAXTIMES";
static const std::string EVENT_PLAYER_NO_COPPER_KEY = "PLAYER_NO_COPPER_KEY";
static const std::string EVENT_PLAYER_NO_SILVER_KEY = "PLAYER_NO_SILVER_KEY";
static const std::string EVENT_PLAYER_NO_GOLD_KEY = "PLAYER_NO_GOLD_KEY";
static const std::string EVENT_PLAYER_NO_ROOM_KEY = "PLAYER_NO_ROOM_KEY";
static const std::string EVENT_PLAYER_NO_BOSS_KEY = "PLAYER_NO_BOSS_KEY";

static const std::string EVENT_PLAYER_USE_GOLD_CHEST_KEY = "PLAYER_USE_GOLD_CHEST_KEY";
static const std::string EVENT_PLAYER_USE_SILVER_CHEST_KEY = "PLAYER_USE_SILVER_CHEST_KEY";
static const std::string EVENT_PLAYER_USE_COPPER_CHEST_KEY = "PLAYER_USE_COPPER_CHEST_KEY";
static const std::string EVENT_PLAYER_USE_ROOM_KEY = "PLAYER_USE_ROOM_KEY";
static const std::string EVENT_PLAYER_USE_BOSS_KEY = "PLAYER_USE_BOSS_KEY";

static const std::string EVENT_PLAYER_HURT = "PLAYER_HURT";

static const std::string EVENT_MONSTER_PROPERTY_DIRTY = "MONSTER_PROPERTY_DIRTY";
static const std::string EVENT_MONSTER_DEATH = "MONSTER_DEATH";
static const std::string EVENT_MONSTER_HURT = "MONSTER_HURT";
static const std::string EVENT_MONSTER_ALERT = "MONSTER_ALERT";
static const std::string EVENT_MONSTER_CONFUSING = "MONSTER_CONFUSING";

static const std::string EVENT_TRIGGER_TOXIC_TRAP = "TRIGGER_TOXIC_TRAP";
static const std::string EVENT_TRIGGER_FIRE_TRAP = "TRIGGER_FIRE_TRAP";
static const std::string EVENT_TRIGGER_PARALYTIC_TRAP = "TRIGGER_PARALYTIC_TRAP";
static const std::string EVENT_TRIGGER_GRIPPING_TRAP = "TRIGGER_GRIPPING_TRAP";
static const std::string EVENT_TRIGGER_SUMMONING_TRAP = "TRIGGER_SUMMONING_TRAP";
static const std::string EVENT_TRIGGER_WEAK_TRAP = "TRIGGER_WEAK_TRAP";

static const std::string EVENT_DOOR_MAGIC_LOCKED = "DOOR_MAGIC_LOCKED";
static const std::string EVENT_DOOR_MAGIC_CLOSED = "DOOR_MAGIC_CLOSED";

static const std::string EVENT_FOUND_HIDDEN_DOOR = "FOUND_HIDDEN_DOOR";
static const std::string EVENT_FOUND_HIDDEN_TOXIC_TRAP = "FOUND_HIDDEN_TOXIC_TRAP";
static const std::string EVENT_FOUND_HIDDEN_FIRE_TRAP = "FOUND_HIDDEN_FIRE_TRAP";
static const std::string EVENT_FOUND_HIDDEN_PARALYTIC_TRAP = "FOUND_HIDDEN_PARALYTIC_TRAP";
static const std::string EVENT_FOUND_HIDDEN_GRIPPING_TRAP = "FOUND_HIDDEN_GRIPPING_TRAP";
static const std::string EVENT_FOUND_HIDDEN_SUMMONING_TRAP = "FOUND_HIDDEN_SUMMONING_TRAP";
static const std::string EVENT_FOUND_HIDDEN_WEAK_TRAP = "FOUND_HIDDEN_WEAK_TRAP";
static const std::string EVENT_FOUND_HIDDEN_MSG = "FOUND_HIDDEN_MSG";
static const std::string EVENT_FOUND_HIDDEN_ITEM = "FOUND_HIDDEN_MSG";

static const std::string EVENT_GO_UPSTAIRS = "GO_UPSTAIRS";
static const std::string EVENT_GO_UPSTAIRS_FORBIDDEN = "GO_UPSTAIRS_FORBIDDEN";
static const std::string EVENT_GO_DOWNSTAIRS = "GO_DOWNSTAIRS";
static const std::string EVENT_GO_BOSSROOM = "GO_BOSSROOM";

static const std::string EVENT_NPC_KNIGHT_ANSWER = "NPC_KNIGHT_ANSWER";             ///武器店
static const std::string EVENT_NPC_CHILD_ANSWER = "NPC_CHILD_ANSWER";               ///任务
static const std::string EVENT_NPC_SHOPGIRL_ANSWER = "NPC_SHOPGIRL_ANSWER";          ///魔法物品店
static const std::string EVENT_NPC_OLDLADY_ANSWER = "NPC_OLDLADY_ANSWER";          ///炼金店
static const std::string EVENT_NPC_WEIRDO_ANSWER = "NPC_WEIRDO_ANSWER";          ///赌博店
static const std::string EVENT_NPC_OLDMAN_ANSWER = "NPC_OLDMAN_ANSWER";          ///智者
static const std::string EVENT_NPC_LITTLEWITCH_ANSWER = "NPC_LITTLEWITCH_ANSWER";          ///魔女随机事件
static const std::string EVENT_NPC_NURSE_ANSWER = "NPC_NURSE_ANSWER";          ///护士站

static const std::string EVENT_NPC_DATA_DIRTY = "NPC_DATA_DIRTY";   ///    NPC数据变化

#endif /* EventConst_h */
