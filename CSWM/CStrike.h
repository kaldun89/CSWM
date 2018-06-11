#pragma once

enum
{
	TEAM_UNASSIGNED = 0,
	TEAM_ZOMBIE,
	TEAM_HUMAN,
	TEAM_SPECTATOR = 6,
};

enum
{
	MESSAGE_VOICEMASK = 64,
	MESSAGE_REQSTATE,
	MESSAGE_CURWEAPON,
	MESSAGE_GEIGER,
	MESSAGE_FLASHLIGHT,
	MESSAGE_FLASHBAT,
	MESSAGE_HEALTH,
	MESSAGE_DAMAGE,
	MESSAGE_BATTERY,
	MESSAGE_TRAIN,
	MESSAGE_HUDTEXTPRO,
	MESSAGE_HUDTEXT,
	MESSAGE_SAYTEXT,
	MESSAGE_TEXTMSG,
	MESSAGE_WEAPONLIST,
	MESSAGE_RESETHUD,
	MESSAGE_INITHUD,
	MESSAGE_VIEWMODE,
	MESSAGE_GAMETITLE,
	MESSAGE_DEATHMSG,
	MESSAGE_SCOREATTRIB,
	MESSAGE_SCOREINFO,
	MESSAGE_TEAMINFO,
	MESSAGE_TEAMSCORE,
	MESSAGE_GAMEMODE,
	MESSAGE_MOTD,
	MESSAGE_SERVERNAME,
	MESSAGE_AMMOPICKUP,
	MESSAGE_WEAPPICKUP,
	MESSAGE_ITEMPICKUP,
	MESSAGE_HIDEWEAPON,
	MESSAGE_SETFOV,
	MESSAGE_SHOWMENU,
	MESSAGE_SCREENSHAKE,
	MESSAGE_SCREENFADE,
	MESSAGE_AMMOX,
	MESSAGE_SENDAUDIO,
	MESSAGE_ROUNDTIME,
	MESSAGE_MONEY,
	MESSAGE_ARMORTYPE,
	MESSAGE_BLINKACCT,
	MESSAGE_STATUSVALUE,
	MESSAGE_STATUSTEXT,
	MESSAGE_STATUSICON,
	MESSAGE_BARTIME,
	MESSAGE_RELOADSOUND,
	MESSAGE_CROSSHAIR,
	MESSAGE_NVGTOGGLE,
	MESSAGE_RADAR,
	MESSAGE_SPECTATOR,
	MESSAGE_VGUIMENU,
	MESSAGE_TUTORTEXT,
	MESSAGE_TUTORLINE,
	MESSAGE_TUTORSTATE,
	MESSAGE_TUTORCLOSE,
	MESSAGE_ALLOWSPEC,
	MESSAGE_BOMBDROP,
	MESSAGE_BOMBPICKUP,
	MESSAGE_CLCORPSE,
	MESSAGE_HOSTAGEPOS,
	MESSAGE_HOSTAGEK,
	MESSAGE_HLTV,
	MESSAGE_SPECHEALTH,
	MESSAGE_FORCECAM,
	MESSAGE_ADSTOP,
	MESSAGE_RECEIVEW,
	MESSAGE_CZCAREER,
	MESSAGE_CZCAREERHUD,
	MESSAGE_SHADOWIDX,
	MESSAGE_TASKTIME,
	MESSAGE_SCENARIO,
	MESSAGE_BOTVOICE,
	MESSAGE_BUYCLOSE,
	MESSAGE_SPECHEALTH2,
	MESSAGE_BARTIME2,
	MESSAGE_ITEMSTATUS,
	MESSAGE_LOCATION,
	MESSAGE_BOTPROGRESS,
	MESSAGE_BRASS,
	MESSAGE_FOG,
	MESSAGE_SHOWTIMER,
	MESSAGE_HUDTEXTARGS,
};

enum
{
	EO_Spawn = 0,
	EO_Precache,
	EO_KeyValue = 3,
	EO_ObjectCaps = 6,
	EO_Activate,
	EO_TraceAttack = 11,
	EO_TakeDamage,
	EO_TakeHealth,
	EO_Killed,
	EO_GiveAmmo = 25,
	EO_Think = 44,
	EO_Touch,
	EO_Use,
	EO_Item_AddToPlayer = 59,
	EO_Item_GetItemInfo = 61,
	EO_Item_Deploy = 64,
	EO_Item_Holster = 67,
	EO_Item_UpdateItemInfo,
	EO_Item_PreFrame,
	EO_Item_PostFrame,
	EO_Item_Drop,
	EO_Item_Kill,
	EO_Item_AttachToPlayer,
	EO_Item_PrimaryAmmoIndex,
	EO_Item_SecondaryAmmoIndex,
	EO_Item_UpdateClientData,
	EO_Item_GetWeaponPtr,
	EO_Item_GetMaxSpeed,
	EO_Item_ItemSlot,

	EO_CStrike_RoundRespawn = 84,
	EO_Weapon_SendWeaponAnim,
	EO_Weapon_PrimaryAttack = 87,
	EO_Weapon_SecondaryAttack,
	EO_Weapon_Reload,
	EO_Weapon_Idle,
	EO_Weapon_Retire,
	EO_Weapon_ShouldIdle,
	EO_Wepon_UseDecrement,
};

#define CSW_P228            1
#define CSW_SCOUT           3
#define CSW_HEGRENADE       4
#define CSW_XM1014          5
#define CSW_C4              6
#define CSW_MAC10           7
#define CSW_AUG             8
#define CSW_SMOKEGRENADE    9
#define CSW_ELITE           10
#define CSW_FIVESEVEN       11
#define CSW_UMP45           12
#define CSW_SG550           13
#define CSW_GALI            14
#define CSW_GALIL           14
#define CSW_FAMAS           15
#define CSW_USP             16
#define CSW_GLOCK18         17
#define CSW_AWP             18
#define CSW_MP5NAVY         19
#define CSW_M249            20
#define CSW_M3              21
#define CSW_M4A1            22
#define CSW_TMP             23
#define CSW_G3SG1           24
#define CSW_FLASHBANG       25
#define CSW_DEAGLE          26
#define CSW_SG552           27
#define CSW_AK47            28
#define CSW_KNIFE           29
#define CSW_P90             30
#define CSW_VEST            31
#define CSW_VESTHELM        32 
#define CSW_SHIELDGUN       99