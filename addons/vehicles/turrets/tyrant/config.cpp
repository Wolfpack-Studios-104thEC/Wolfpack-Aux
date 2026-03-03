#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        addonRootClass = QADDON;
        name = COMPONENT_NAME;
        units[] = {
            QGVAR(Tyrant)
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            QE_ADDON(vehicles)
        };
        VERSION_CONFIG;
    };
};

class CfgVehicles
{
	class LandVehicle;
	class StaticWeapon: LandVehicle
	{
		class Turrets;
	};
	class StaticMGWeapon: StaticWeapon
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};
	class SAM_System_02_base_F: StaticMGWeapon
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
			};
		};
	};
	class GVAR(Tyrant): SAM_System_02_base_F
	{
		scope = 2;
		scopeCurator = 2;
		author="Wolfpack Studios";
		displayName = "[104th] Tyrant";
		side = 0;
        faction= QEGVAR(faction,eclipse);
		editorSubcategory=QEGVAR(edsubcat,turrets);
		model="\A3\Static_F_Jets\SAM_system_02\SAM_system_02_F.p3d";
		crew="B_UAV_AI";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"WPEC_Tyrant_Weapon"
				};
				magazines[]=
				{
					"WPEC_Tyrant_Mag"
				};
			};
		};
		class SimpleObject
		{
			eden=1;
			animate[]=
			{

				{
					"mainturret",
					0
				},

				{
					"maingun",
					0.25999999
				},

				{
					"hide_missilecover_01",
					1
				},

				{
					"hide_missilecover_02",
					1
				},

				{
					"hide_missilecover_03",
					1
				},

				{
					"hide_missilecover_04",
					1
				},

				{
					"hide_missilecover_05",
					1
				},

				{
					"hide_missilecover_06",
					1
				},

				{
					"hide_missilecover_07",
					1
				},

				{
					"hide_missilecover_08",
					1
				},

				{
					"damageturret",
					0
				},

				{
					"damage_hide_missilecover_01",
					0
				},

				{
					"damage_hide_missilecover_02",
					0
				},

				{
					"damage_hide_missilecover_03",
					0
				},

				{
					"damage_hide_missilecover_04",
					0
				},

				{
					"damage_hide_missilecover_05",
					0
				},

				{
					"damage_hide_missilecover_06",
					0
				},

				{
					"damage_hide_missilecover_07",
					0
				},

				{
					"damage_hide_missilecover_08",
					0
				},

				{
					"missile_move_1",
					1
				},

				{
					"missile_move_2",
					1
				},

				{
					"missile_move_3",
					1
				},

				{
					"missile_move_4",
					1
				},

				{
					"missile_move_5",
					1
				},

				{
					"missile_move_6",
					1
				},

				{
					"missile_move_7",
					1
				}
			};
			hide[]=
			{
				"zasleh",
				"light_back",
				"brzdove svetlo",
				"clan",
				"podsvit pristroju",
				"poskozeni"
			};
			verticalOffset=1.972;
			verticalOffsetWorld=0.001;
			init="''";
		};
		typicalCargo[]=
		{
			"B_UAV_AI"
		};
	};
};

class CfgWeapons
{
	class weapon_rim162Launcher;
	class WPEC_Tyrant_Weapon: weapon_rim162Launcher
	{
        author = AUTHOR;
		displayName="WPEC Tyrant Launcher";
		magazines[]={"WPEC_Tyrant_Mag"};
	};
};

class CfgMagazines
{
	class magazine_Missile_rim162_x8;
	class WPEC_Tyrant_Mag: magazine_Missile_rim162_x8
	{
        author = AUTHOR;
		displayName="WPEC Tyrant Mag";
		ammo="WPEC_Tyrant_Ammo";
	};
};

class CfgAmmo
{
	class ammo_Missile_rim162;
	class WPEC_Tyrant_Ammo: ammo_Missile_rim162
	{
		model="\A3\Weapons_F_Jets\Ammo\Missile_SAM_02_fly_F.p3d";
		proxyShape="\A3\Weapons_F_Jets\Ammo\Missile_SAM_02_fly_F.p3d";
		hit=200;
		indirectHit=200;
		maneuvrability=24;
		trackOversteer=2;
		airFriction=0.090000004;
		sideAirFriction=0.16;
		initTime=0;
		thrust=230;
		missileLockCone=170;
		missileKeepLockedCone=170;
		missileLockMaxSpeed=888.88898;
	};
};
