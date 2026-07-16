#include "script_component.hpp"

#include "config_lists.hpp"

class CfgPatches {
    class SUBADDON {
        addonRootClass = QADDON;
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {
            WEAPONS_LIST
        };
        magazines[] = {
            MAGAZINE_LIST
        };
        ammo[] = {
            AMMO_LIST
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "3AS_Weapons",
            "A3_Data_F",
            QE_ADDON(weapons)

        };
        VERSION_CONFIG;
    };
};

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class CowsSlot;
class MuzzleSlot;
class PointerSlot;
class UnderBarrelSlot;
class 3AS_UnderBarrelSlot_DC15A;
class 3AS_MuzzleSlot_DC15S;
class 3AS_MuzzleSlot_DC15L;
class 3AS_UnderBarrelSlot_DC15L;
class 3AS_MuzzleSlot_VK38X;
class 3AS_UnderBarrelSlot_VK38X;

class CBA_DisposableLaunchers
{
	WPEC_3AS_RPS6_Unguided[]=
	{
		"WPEC_3AS_RPS6_F",
		"3AS_RPS6_Used"
	};
	WPEC_3AS_RPS6_Guided[]=
	{
		"WPEC_3AS_RPS6_G",
		"3AS_RPS6_Guided_Used"
	};
};
class Extended_PostInit_EventHandlers
{
	class WPS104th_Z6_Stanced_Anims
	{
		init="call compile preprocessFileLineNumbers 'Z\wpec\addons\weapons\weapons\primaries\z6stance\scripts\XEH_postInit.sqf'";
	};
};
class CfgMovesBasic
{
	class Actions
	{
		class NoActions;
		class WPS104th_RotaryCanon_Moveset: NoActions
		{
			useFastMove=1;
			turnSpeed=2;
			throwGrenade[]=
			{
				"GestureThrowGrenade",
				"Gesture"
			};
			LimpF="Rotary_Proper_Walk";
			LimpLF="Rotary_Proper_WalkFL";
			LimpRF="Rotary_Proper_WalkFR";
			LimpL="Rotary_Proper_WalkL";
			LimpR="Rotary_Proper_WalkR";
			LimpB="Rotary_Proper_WalkB";
			LimpLB="Rotary_Proper_WalkBL";
			LimpRB="Rotary_Proper_WalkBR";
			stop="Rotary_Proper_Idle";
			default="Rotary_Proper_Idle";
			stopRelaxed="Rotary_Proper_Idle";
			TurnL="Rotary_Proper_TurnL";
			TurnR="Rotary_Proper_TurnR";
			TurnLRelaxed="Rotary_Proper_TurnL";
			TurnRRelaxed="Rotary_Proper_TurnR";
			WalkF="Rotary_Proper_Walk";
			PlayerWalkF="Rotary_Proper_Walk";
			WalkLF="Rotary_Proper_WalkFL";
			PlayerWalkLF="Rotary_Proper_WalkFL";
			WalkRF="Rotary_Proper_WalkFR";
			PlayerWalkRF="Rotary_Proper_WalkFR";
			WalkL="Rotary_Proper_WalkL";
			PlayerWalkL="Rotary_Proper_WalkL";
			WalkR="Rotary_Proper_WalkR";
			PlayerWalkR="Rotary_Proper_WalkR";
			WalkB="Rotary_Proper_WalkB";
			PlayerWalkB="Rotary_Proper_WalkB";
			WalkLB="Rotary_Proper_WalkBL";
			PlayerWalkLB="Rotary_Proper_WalkBL";
			WalkRB="Rotary_Proper_WalkBR";
			PlayerWalkRB="Rotary_Proper_WalkBR";
			SlowF="Rotary_Proper_Walk";
			PlayerSlowF="Rotary_Proper_Walk";
			SlowB="Rotary_Proper_WalkB";
			PlayerSlowB="Rotary_Proper_WalkB";
			PlayerFastF="AmovPercMevaSrasWrflDf";
			combat="Rotary_Proper_Walk";
			up="Rotary_Proper_Walk";
			down="AmovPercMstpSrasWrflDnon_AmovPknlMstpSrasWrflDnon";
			Crouch="AmovPercMstpSrasWrflDnon_AmovPknlMstpSrasWrflDnon";
			gear="AmovPercMstpSrasWrflDnon_AinvPercMstpSrasWrflDnon";
			upDegree="ManPosNoWeapon";
			PlayerSlowLF="Rotary_Proper_WalkFL";
			PlayerSlowRF="Rotary_Proper_WalkFR";
			PlayerSlowL="Rotary_Proper_WalkL";
			PlayerSlowR="Rotary_Proper_WalkR";
			PlayerSlowLB="Rotary_Proper_WalkBL";
			PlayerSlowRB="Rotary_Proper_WalkBR";
			FastF="AmovPercMevaSrasWrflDf";
			FastLF="AmovPercMevaSrasWrflDfl";
			FastRF="AmovPercMevaSrasWrflDfr";
			FastL="AmovPercMevaSrasWrflDfl";
			FastR="AmovPercMevaSrasWrflDfr";
			FastLB="AmovPercMevaSrasWrflDfl";
			FastRB="AmovPercMevaSrasWrflDfr";
			TactF="Rotary_Proper_Walk";
			TactLF="Rotary_Proper_Walk";
			TactRF="Rotary_Proper_Walk";
			TactL="Rotary_Proper_WalkL";
			TactR="Rotary_Proper_WalkR";
			TactLB="Rotary_Proper_WalkBL";
			TactRB="Rotary_Proper_WalkBR";
			TactB="Rotary_Proper_WalkB";
			PlayerTactF="Rotary_Proper_Walk";
			PlayerTactLF="Rotary_Proper_WalkFL";
			PlayerTactRF="Rotary_Proper_WalkFR";
			PlayerTactL="Rotary_Proper_WalkL";
			PlayerTactR="Rotary_Proper_WalkR";
			PlayerTactLB="Rotary_Proper_WalkBL";
			PlayerTactRB="Rotary_Proper_WalkBR";
			PlayerTactB="Rotary_Proper_WalkB";
			Unconscious="Unconscious";
			weaponOff="AmovPercMstpSrasWpstDnon";
		};
		class WPS104th_RotaryCanon_Moveset_Walk: WPS104th_RotaryCanon_Moveset
		{
			turnSpeed=4.5;
			PlayerCrouch="Rotary_Proper_Walk";
			Up="Rotary_Proper_Walk";
			Crouch="Rotary_Proper_Walk";
			AdjustB="";
			Stand="Rotary_Proper_Walk";
		};
		class WPS104th_RotaryCanon_Moveset_TurnL: WPS104th_RotaryCanon_Moveset
		{
			turnSpeed=4.5;
			PlayerCrouch="Rotary_Proper_TurnL";
			Up="Rotary_Proper_TurnL";
			Crouch="Rotary_Proper_TurnL";
			AdjustB="";
			Stand="Rotary_Proper_TurnL";
		};
		class WPS104th_RotaryCanon_Moveset_TurnR: WPS104th_RotaryCanon_Moveset
		{
			turnSpeed=4.5;
			PlayerCrouch="Rotary_Proper_TurnR";
			Up="Rotary_Proper_TurnR";
			Crouch="Rotary_Proper_TurnR";
			AdjustB="";
			Stand="Rotary_Proper_TurnR";
		};
		class WPS104th_RotaryCanon_Moveset_WalkR: WPS104th_RotaryCanon_Moveset
		{
			turnSpeed=4.5;
			PlayerCrouch="Rotary_Proper_WalkR";
			Up="Rotary_Proper_WalkR";
			Crouch="Rotary_Proper_WalkR";
			AdjustB="";
			Stand="Rotary_Proper_WalkR";
		};
		class WPS104th_RotaryCanon_Moveset_WalkL: WPS104th_RotaryCanon_Moveset
		{
			turnSpeed=4.5;
			PlayerCrouch="Rotary_Proper_WalkL";
			Up="Rotary_Proper_WalkL";
			Crouch="Rotary_Proper_WalkL";
			AdjustB="";
			Stand="Rotary_Proper_WalkL";
		};
		class WPS104th_RotaryCanon_Moveset_WalkFL: WPS104th_RotaryCanon_Moveset
		{
			turnSpeed=4.5;
			PlayerCrouch="Rotary_Proper_WalkFL";
			Up="Rotary_Proper_WalkFL";
			Crouch="Rotary_Proper_WalkFL";
			AdjustB="";
			Stand="Rotary_Proper_WalkFL";
		};
		class WPS104th_RotaryCanon_Moveset_WalkFR: WPS104th_RotaryCanon_Moveset
		{
			turnSpeed=4.5;
			PlayerCrouch="Rotary_Proper_WalkFR";
			Up="Rotary_Proper_WalkFR";
			Crouch="Rotary_Proper_WalkFR";
			AdjustB="";
			Stand="Rotary_Proper_WalkFR";
		};
		class WPS104th_RotaryCanon_Moveset_WalkB: WPS104th_RotaryCanon_Moveset
		{
			turnSpeed=4.5;
			PlayerCrouch="Rotary_Proper_WalkB";
			Up="Rotary_Proper_WalkB";
			Crouch="Rotary_Proper_WalkB";
			AdjustB="";
			Stand="Rotary_Proper_WalkB";
		};
		class WPS104th_RotaryCanon_Moveset_WalkBL: WPS104th_RotaryCanon_Moveset
		{
			turnSpeed=4.5;
			PlayerCrouch="Rotary_Proper_WalkBL";
			Up="Rotary_Proper_WalkBL";
			Crouch="Rotary_Proper_WalkBL";
			AdjustB="";
			Stand="Rotary_Proper_WalkBL";
		};
		class WPS104th_RotaryCanon_Moveset_WalkBR: WPS104th_RotaryCanon_Moveset
		{
			turnSpeed=4.5;
			PlayerCrouch="Rotary_Proper_WalkBR";
			Up="Rotary_Proper_WalkBR";
			Crouch="Rotary_Proper_WalkBR";
			AdjustB="";
			Stand="Rotary_Proper_WalkBR";
		};
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class AmovPercMstpSrasWrflDnon;
		class Rotary_Proper_Idle: AmovPercMstpSrasWrflDnon
		{
			interpolationSpeed=1;
			ignoreMinPlayTime[]=
			{
				"Unconscious"
			};
			actions="WPS104th_RotaryCanon_Moveset";
			file="Z\wpec\addons\weapons\weapons\primaries\z6stance\anims\Rotary_Proper_Idle.rtm";
			speed=0.89999998;
			mask="BodyFull";
			headBobMode=0;
			headBobStrength=0;
			forceAim=0;
			variantsPlayer[]={};
			variantsAI[]={};
			ConnectTo[]={};
			connectFrom[]={};
			interpolateFrom[]={};
			InterpolateTo[]=
			{
				"Rotary_Proper_Idle",
				0.0099999998,
				"Rotary_Proper_TurnL",
				0.02,
				"Rotary_Proper_TurnR",
				0.02,
				"Rotary_Proper_Walk",
				0.0099999998,
				"Rotary_Proper_WalkR",
				0.0099999998,
				"Rotary_Proper_WalkL",
				0.0099999998,
				"Rotary_Proper_WalkFL",
				0.0099999998,
				"Rotary_Proper_WalkFR",
				0.0099999998,
				"AmovPercMstpSrasWrflDnon_AmovPknlMstpSrasWrflDnon",
				0.0099999998,
				"AmovPercMstpSrasWrflDnon_AinvPercMstpSrasWrflDnon",
				0.0099999998,
				"Rotary_Proper_WalkB",
				0.0099999998,
				"AmovPercMevaSrasWrflDf",
				0.0099999998,
				"AmovPercMevaSrasWrflDfl",
				0.0099999998,
				"AmovPercMevaSrasWrflDfr",
				0.0099999998,
				"Rotary_Proper_WalkBL",
				0.0099999998,
				"Rotary_Proper_WalkBR",
				0.0099999998,
				"Unconscious",
				0.89999998
			};
		};
		class Rotary_Proper_Walk: Rotary_Proper_Idle
		{
			soundEdge[]={0.11,0.22,0.34999999,0.47,0.62,0.72500002,0.85000002,0.96499997};
			soundOverride="run";
			soundEnabled=1;
			interpolationSpeed=1;
			actions="WPS104th_RotaryCanon_Moveset_Walk";
			file="Z\wpec\addons\weapons\weapons\primaries\z6stance\anims\Rotary_Proper_Walk.rtm";
			speed=-5;
		};
		class Rotary_Proper_TurnL: Rotary_Proper_Idle
		{
			soundEdge[]={0.44999999,0.62};
			soundOverride="run";
			soundEnabled=1;
			interpolationSpeed=6;
			looped="true";
			interpolationRestart=2;
			actions="WPS104th_RotaryCanon_Moveset_TurnL";
			file="Z\wpec\addons\weapons\weapons\primaries\z6stance\anims\Rotary_Proper_TurnL.rtm";
			speed=-1.3;
		};
		class Rotary_Proper_TurnR: Rotary_Proper_TurnL
		{
			interpolationSpeed=6;
			looped="true";
			interpolationRestart=2;
			actions="WPS104th_RotaryCanon_Moveset_TurnR";
			file="Z\wpec\addons\weapons\weapons\primaries\z6stance\anims\Rotary_Proper_TurnR.rtm";
			speed=-1.3;
		};
		class Rotary_Proper_ToIdle: Rotary_Proper_Idle
		{
			disableWeapons=1;
			disableWeaponsLong=1;
			soundEdge[]={0.28,0.67000002};
			soundOverride="run";
			soundEnabled=1;
			minPlayTime=1;
			interpolationSpeed=6;
			looped="false";
			interpolationRestart=2;
			file="Z\wpec\addons\weapons\weapons\primaries\z6stance\anims\Rotary_Proper_ToIdle.rtm";
			speed=-1.2;
		};
		class Rotary_Proper_WalkR: Rotary_Proper_Walk
		{
			soundEdge[]={0.1,0.25,0.43000001,0.57999998,0.77999997,0.92000002};
			soundOverride="run";
			soundEnabled=1;
			interpolationSpeed=1;
			actions="WPS104th_RotaryCanon_Moveset_WalkR";
			file="Z\wpec\addons\weapons\weapons\primaries\z6stance\anims\Rotary_Proper_Walk_R.rtm";
			speed=-4.6999998;
		};
		class Rotary_Proper_WalkL: Rotary_Proper_WalkR
		{
			speed=-5.1500001;
			actions="WPS104th_RotaryCanon_Moveset_WalkL";
			file="Z\wpec\addons\weapons\weapons\primaries\z6stance\anims\Rotary_Proper_Walk_L.rtm";
		};
		class Rotary_Proper_WalkFL: Rotary_Proper_WalkR
		{
			speed=-4.5999999;
			actions="WPS104th_RotaryCanon_Moveset_WalkFL";
			file="Z\wpec\addons\weapons\weapons\primaries\z6stance\anims\Rotary_Proper_Walk_FL.rtm";
		};
		class Rotary_Proper_WalkFR: Rotary_Proper_WalkR
		{
			speed=-4.5999999;
			actions="WPS104th_RotaryCanon_Moveset_WalkFR";
			file="Z\wpec\addons\weapons\weapons\primaries\z6stance\anims\Rotary_Proper_Walk_FR.rtm";
		};
		class Rotary_Proper_WalkB: Rotary_Proper_WalkR
		{
			speed=-4.6999998;
			actions="WPS104th_RotaryCanon_Moveset_WalkB";
			file="Z\wpec\addons\weapons\weapons\primaries\z6stance\anims\Rotary_Proper_Walk_B.rtm";
		};
		class Rotary_Proper_WalkBL: Rotary_Proper_WalkR
		{
			speed=-4.6999998;
			actions="WPS104th_RotaryCanon_Moveset_WalkBL";
			file="Z\wpec\addons\weapons\weapons\primaries\z6stance\anims\Rotary_Proper_Walk_BL.rtm";
		};
		class Rotary_Proper_WalkBR: Rotary_Proper_WalkR
		{
			speed=-4.6999998;
			actions="WPS104th_RotaryCanon_Moveset_WalkBR";
			file="Z\wpec\addons\weapons\weapons\primaries\z6stance\anims\Rotary_Proper_Walk_BR.rtm";
		};
	};
};
class CfgRecoils
{
	class recoil_default;
	class WPS104th_recoil_Z6: recoil_default
	{
		muzzleOuter[]={0,0.1,0.40000001,0.40000001};
		kickBack[]={0.059999999,0.090000004};
		temporary=0.0060000001;
	};
};
#include "CfgWeapons.hpp"
#include "CfgMagazines.hpp"
#include "CfgAmmo.hpp"
