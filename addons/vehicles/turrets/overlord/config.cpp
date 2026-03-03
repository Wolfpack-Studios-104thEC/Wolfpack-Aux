#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        author = AUTHOR;
        authors[] = {"Chopper"};
        name = COMPONENT_NAME;
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {QUOTE(ADDON)};
        units[] = {"WPEC_Overlord"};
        weapons[] = {"WPEC_Overlord_Weapon"};
        VERSION_CONFIG;
    };
};

class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateDataLink;

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
    class SAM_System_01_base_F: StaticMGWeapon
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
			};
		};
		class Components;
	};
    class WPEC_Overlord: SAM_System_01_base_F
    {
        scope = 2;
        scopeCurator = 2;
		author="Wolfpack Studios";
        displayName = "[104th] Overlord";
        side = 0;
        faction = "WPEC_separatistArmy";
        editorSubcategory = "WPEC_subcategoryTurrets";
        editorPreview = "\z\WPEC\addons\vehicles\turrets\data\ui\editorPreviews\WPEC_Overlord.jpg";
        model="\A3\Static_F_Jets\SAM_system_01\SAM_system_01_F.p3d";
        crew="B_UAV_AI";
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                weapons[]=
                {
                    "WPEC_Overlord_Weapon"
                };
                magazines[]=
                {
                    "WPEC_Overlord_Mag"
                };
            };
        };
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange=500;
							maxRange=4000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=500;
							maxRange=3500;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						typeRecognitionDistance=3500;
						maxTrackableSpeed=600;
						angleRangeHorizontal=60;
						angleRangeVertical=40;
						animDirection="mainGun";
						aimDown=-0.5;
					};
					class DataLinkSensorComponent: SensorTemplateDataLink
					{
					};
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange=500;
							maxRange=4000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=500;
							maxRange=3500;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						typeRecognitionDistance=3500;
						maxTrackableSpeed=600;
						angleRangeHorizontal=60;
						angleRangeVertical=40;
						animDirection="mainGun";
						aimDown=-0.5;
					};
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
					"hide_missilecover_09",
					1
				},

				{
					"hide_missilecover_10",
					1
				},

				{
					"hide_missilecover_11",
					1
				},

				{
					"hide_missilecover_12",
					1
				},

				{
					"hide_missilecover_13",
					1
				},

				{
					"hide_missilecover_14",
					1
				},

				{
					"hide_missilecover_15",
					1
				},

				{
					"hide_missilecover_16",
					1
				},

				{
					"hide_missilecover_17",
					1
				},

				{
					"hide_missilecover_18",
					1
				},

				{
					"hide_missilecover_19",
					1
				},

				{
					"hide_missilecover_20",
					1
				},

				{
					"hide_missilecover_21",
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
					"damage_hide_missilecover_09",
					0
				},

				{
					"damage_hide_missilecover_10",
					0
				},

				{
					"damage_hide_missilecover_11",
					0
				},

				{
					"damage_hide_missilecover_12",
					0
				},

				{
					"damage_hide_missilecover_13",
					0
				},

				{
					"damage_hide_missilecover_14",
					0
				},

				{
					"damage_hide_missilecover_15",
					0
				},

				{
					"damage_hide_missilecover_16",
					0
				},

				{
					"damage_hide_missilecover_17",
					0
				},

				{
					"damage_hide_missilecover_18",
					0
				},

				{
					"damage_hide_missilecover_19",
					0
				},

				{
					"damage_hide_missilecover_20",
					0
				},

				{
					"damage_hide_missilecover_21",
					0
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
			verticalOffset=1.755;
			verticalOffsetWorld=-0.001;
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
    class weapon_rim116Launcher;
    class WPEC_Overlord_Weapon: weapon_rim116Launcher
    {
        author = AUTHOR;
        magazines[]={"WPEC_Overlord_Mag"};
    };
};

class CfgMagazines
{
    class magazine_Missile_rim116_x21;
    class WPEC_Overlord_Mag: magazine_Missile_rim116_x21
    {
        author = AUTHOR;
        ammo="WPEC_Overlord_Ammo";
    };
};

class CfgAmmo
{
    class ammo_Missile_ShortRangeAABase;
    class WPEC_Overlord_Ammo: ammo_Missile_ShortRangeAABase
    {
        model="\A3\Weapons_F_Jets\Ammo\Missile_SAM_01_fly_F.p3d";
		proxyShape="\A3\Weapons_F_Jets\Ammo\Missile_SAM_01_fly_F.p3d";
		airFriction=0.16;
		thrustTime=4;
		thrust=300;
		maxSpeed=800;
		missileLockMaxDistance=4000;
        effectsMissile="WPEC_missile_Opfor_red";
    };
};
