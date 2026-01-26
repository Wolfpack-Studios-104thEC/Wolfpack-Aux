#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        addonRootClass = QADDON;
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            QE_ADDON(vehicles)
        };
		skipWhenMissingDependencies = 1;
        VERSION_CONFIG;
    };
};

#define NO_SIDE -1
#define EAST 0			// (Russian)
#define WEST 1			// (NATO)
#define RESISTANCE 2	// Guerilla
#define CIVILIAN 3
#define NEUTRAL 4
#define ENEMY 5
#define FRIENDLY 6
#define LOGIC 7
#define VSoft 0
#define VArmor 1
#define VAir 2
#define Private 0
#define Protected 1
#define Public 2
class SensorTemplatePassiveRadar;
class SensorTemplateAntiRadiation;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class SensorTemplateDataLink;
class DefaultVehicleSystemsDisplayManagerLeft
{
	class Components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class Components;
};
class VehicleSystemsTemplateLeftPilot: DefaultVehicleSystemsDisplayManagerLeft
{
	class Components;
};
class VehicleSystemsTemplateRightPilot: DefaultVehicleSystemsDisplayManagerRight
{
	class Components;
};
class DefaultEventhandlers;
class CfgVehicles
{
	class 3as_laat_Base;
	class 3as_laatUnarmed_Base: 3as_laat_Base
	{
	};
	class 3AS_LAAT_LampBase: 3as_laat_Base
	{
	};
	class 3as_LAAT_Mk1: 3as_laat_Base
	{
		class ACE_SelfActions;
		class UserActions;
	};
	class 3as_LAAT_Mk2: 3as_laatUnarmed_Base
	{
		class ACE_SelfActions;
		class UserActions;
	};
	class 3as_LAAT_Mk1Lights: 3AS_LAAT_LampBase
	{
		class ACE_SelfActions;
		class UserActions;
	};
	class 3as_LAAT_Mk2Lights: 3AS_LAAT_LampBase
	{
		class ACE_SelfActions;
		class UserActions;
	};
	class 104th_3AS_LAAT_Turrets_Base: 3as_LAAT_Mk1
	{
		//Standard Defines:
		scope = Protected;//Defined above as #Define Protected 1
		scopecurator = 2;
		displayName="[104th/3AS] LAAT/I (Turrets)";
		author="Wolfpack Studios";
		model = "3as\3AS_laat\LAATi\model\tcw_laat.p3d";//Does not usually need to be redefined if you are inheriting but it can fix issues by just having it here.  Just make sure it is the same model!
		side = 1;
		//Specific Defines:
		canFloat = 1; //Defines if the vehicle will sink in the water or not. This is used here to prevent water damage
		enableSweep = 1; //Enables AI to sweep over the target as a method of attack.
		enableGPS = 1; //Enables the crew to use GPS and Map even if they do not have one in their inventory.
		//Vehicle Threat Level to AI:
		type = VAir; //Threat Type.  Defined at the top of the file.
		threat[] = {0.750001,0.8500001, 0.8500001}; //Threat to Soft Targets (Soldiers), Armor, and Air assets in that order.
		cost = 1000; //Higher cost means AI are more likely to target it.
		camouflage = 15; //How hard the vehicle is to see. Higher value means it is easier to see.  1 is default. 
		audible = 8; //How easy it is to hear. Higher means it is easier to hear by AI. 1 is Default.
		//Factions Association:
		faction="WPEC_Category_EclipseCompany";
		vehicleClass="WPEC_subcategoryAircraftRotary";
		editorSubcategory="WPEC_subcategoryAircraftRotary";
		//Crew Specifics:
		crew="WPEC_Phase_2_Unit_Trooper_CSP2";
		crewCrashProtection = 0.1; // Means crew takes 10% of the damage they normally would on a crash.
		//Textures
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"mat1"
		};
		hiddenSelectionsMaterials[]=
		{
			"WPEC\WPEC_Vehicles\WPEC_LAAT\data\textures\Apollo_Hull.rvmat",
			"WPEC\WPEC_Vehicles\WPEC_LAAT\data\textures\Apollo_Wings.rvmat",
			"WPEC\WPEC_Vehicles\WPEC_LAAT\data\textures\Apollo_Weapons.rvmat",
			"WPEC\WPEC_Vehicles\WPEC_LAAT\data\textures\Apollo_Weapon_Details.rvmat",
			"WPEC\WPEC_Vehicles\WPEC_LAAT\data\textures\Apollo_Interior.rvmat"
		};
		hiddenSelectionsTextures[]=
		{
			"WPEC\WPEC_Vehicles\WPEC_LAAT\data\textures\Apollo_Hull_CO.paa",
			"WPEC\WPEC_Vehicles\WPEC_LAAT\data\textures\Apollo_Wings_CO.paa",
			"WPEC\WPEC_Vehicles\WPEC_LAAT\data\textures\Apollo_Weapons_CO.paa",
			"WPEC\WPEC_Vehicles\WPEC_LAAT\data\textures\Apollo_Weapon_Details_CO.paa",
			"WPEC\WPEC_Vehicles\WPEC_LAAT\data\textures\Apollo_Interior_CO.paa"
		};
		//Texture Selections for the Garage:
		class TextureSources
		{
			class Apollo_Lead
			{
				displayName="Apollo Lead";
				author="Ghoul";
				factions[]=
				{
					"WPEC_Category_EclipseCompany"
				};
				textures[]=
				{
					"WPEC\WPEC_Vehicles\WPEC_LAAT\data\LeadTextures\Apollo_Lead_Hull_CO.paa",
					"WPEC\WPEC_Vehicles\WPEC_LAAT\data\LeadTextures\Apollo_Lead_Wings_CO.paa",
					"WPEC\WPEC_Vehicles\WPEC_LAAT\data\LeadTextures\Apollo_Lead_Weapons_CO.paa",
					"WPEC\WPEC_Vehicles\WPEC_LAAT\data\LeadTextures\Apollo_Lead_Weapon_Details_CO.paa",
					"WPEC\WPEC_Vehicles\WPEC_LAAT\data\LeadTextures\Apollo_Lead_Interior_CO.paa"
				};
			};
			class Apollo_Pilot
			{
				displayName="Apollo Pilot";
				author="Ghoul";
				factions[]=
				{
					"WPEC_Category_EclipseCompany"
				};
				textures[]=
				{
					"WPEC\WPEC_Vehicles\WPEC_LAAT\data\textures\Apollo_Hull_CO.paa",
					"WPEC\WPEC_Vehicles\WPEC_LAAT\data\textures\Apollo_Wings_CO.paa",
					"WPEC\WPEC_Vehicles\WPEC_LAAT\data\textures\Apollo_Weapons_CO.paa",
					"WPEC\WPEC_Vehicles\WPEC_LAAT\data\textures\Apollo_Weapon_Details_CO.paa",
					"WPEC\WPEC_Vehicles\WPEC_LAAT\data\textures\Apollo_Interior_CO.paa"
				};
			};
			class Apollo_Unmarked
			{
				displayName="Apollo Unmarked";
				author="3AS Studios";
				factions[]=
				{
					"WPEC_Category_EclipseCompany"
				};
				textures[]=
				{
					"3AS\3as_Laat\LAATI\data\Hull_CO.paa",
					"3AS\3as_Laat\LAATI\data\Wings_CO.paa",
					"3AS\3as_Laat\LAATI\data\Weapons_CO.paa",
					"3AS\3as_Laat\LAATI\data\Weapon_Details_CO.paa",
					"3AS\3as_Laat\LAATI\data\Interior_CO.paa"
				};
			};
		};
		//Weapons, Armor, and Cargo:
		armor=650;
		radarType=8;
		receiveRemoteTargets = 1;
		dustEffect="";
		waterEffect="";
		ace_cargo_space=70;
		ace_cargo_hasCargo=1;
		smokeLauncherAngle=360;
		smokeLauncherGrenadeCount=18;
		smokeLauncherVelocity=20;
		weapons[]=
		{
			"Laserdesignator_pilotCamera",
			"CMFlareLauncher",
			"104th_SmokeLauncher",
			"104th_LAAT_Cannon_Low",
			"104th_LAAT_Cannon_High",
			"104th_Maramu_A2A_MissileSystem",
            "104th_Hoska_A2A_MissileSystem",
			"104th_Dianoga_WGM_MissileSystem",
            "104th_Kaada_DF_MissileSystem"
		};
		magazines[]=
		{
			"Laserbatteries",
			"300Rnd_CMFlare_Chaff_Magazine",
			"300Rnd_CMFlare_Chaff_Magazine",
			"300Rnd_CMFlare_Chaff_Magazine",
			"104th_SmokeLauncherMag",
			"104th_SmokeLauncherMag",
			"104th_SmokeLauncherMag",
			"104th_LAAT_Cannon_LowPower_Magazine",
			"104th_LAAT_Cannon_LowPower_Magazine",
			"104th_LAAT_Cannon_LowPower_Magazine",
			"104th_LAAT_Cannon_HighPower_Magazine",
			"104th_LAAT_Cannon_HighPower_Magazine",
			"104th_LAAT_Cannon_HighPower_Magazine",
			"104th_Maramu_6Rnd_A2A_mag",
			"104th_Maramu_6Rnd_A2A_mag",
			"104th_Hoska_6Rnd_A2A_mag",
            "104th_Hoska_6Rnd_A2A_mag",
            "104th_Dianoga_4Rnd_WGM_mag",
            "104th_Dianoga_4Rnd_WGM_mag",
            "104th_Kaada_10Rnd_Unguided_Rocket_mag",
            "104th_Kaada_10Rnd_Unguided_Rocket_mag"
		};
		//Inventory for the Vehicle.  Make sure this is all correct otherwise you will get a .model error!
		//TransportMagazines includes anything defined in CfgMagazines you want in the inventory, including grenades.
		class TransportMagazines
		{
			class _xx_104th_MK1_PistolMag
			{
				magazine="104th_MK1_PistolMag";
				count=50;
			};
			class _xx_104th_3AS_DC15A_Mag
			{
				magazine="104th_3AS_DC15A_Mag";
				count=100;
			};
			class _xx_104th_3AS_DC15S_Mag
			{
				magazine="104th_3AS_DC15S_Mag";
				count=100;
			};
			class _xx_104th_3AS_DC15L_Mag
			{
				magazine="104th_3AS_DC15L_Mag";
				count=30;
			};
			class _xx_104th_3AS_DC15C_Mag
			{
				magazine="104th_3AS_DC15C_Mag";
				count=50;
			};
			class _xx_104th_3AS_WestarM5_Mag
			{
				magazine="104th_3AS_WestarM5_Mag";
				count=40;
			};
			class _xx_104th_3AS_DC17M_Mag
			{
				magazine="104th_3AS_DC17M_Mag";
				count=25;
			};
			class _xx_104th_MK2_PistolMag_Long
			{
				magazine="104th_MK2_PistolMag_Long";
				count=30;
			};
            class _xx_104th_3AS_Chaingun_Mag
			{
				magazine="104th_3AS_Chaingun_Mag";
				count=5;
			};
			class _xx_104th_MK4_PistolMag
			{
				magazine="104th_MK4_PistolMag";
				count=5;
			};
			class _xx_104th_MK2_AT_Mag
			{
				magazine="104th_MK2_AT_Mag";
				count=10;
			};
			class _xx_3AS_JLTS_MK43_AT
			{
				magazine="3AS_JLTS_MK43_AT";
				count=5;
			};
			class _xx_3AS_JLTS_MK39_AA
			{
				magazine="3AS_JLTS_MK39_AA";
				count=5;
			};
			class _xx_OPTRE_M8_Flare_Green
			{
				magazine="OPTRE_M8_Flare_Green";
				count=10;
			};
			class _xx_OPTRE_M8_Flare_Blue
			{
				magazine="OPTRE_M8_Flare_Blue";
				count=10;
			};
			class _xx_3Rnd_Smoke_Grenade_shell
			{
				magazine="3Rnd_Smoke_Grenade_shell";
				count=10;
			};
			class _xx_3Rnd_SmokeGreen_Grenade_shell
			{
				magazine="3Rnd_SmokeGreen_Grenade_shell";
				count=10;
			};
			class _xx_3Rnd_SmokeBlue_Grenade_shell
			{
				magazine="3Rnd_SmokeBlue_Grenade_shell";
				count=10;
			};
			class _xx_3Rnd_SmokeRed_Grenade_shell
			{
				magazine="3Rnd_SmokeRed_Grenade_shell";
				count=10;
			};
			class _xx_3Rnd_SmokeYellow_Grenade_shell
			{
				magazine="3Rnd_SmokeYellow_Grenade_shell";
				count=10;
			};
			class _xx_3Rnd_SmokePurple_Grenade_shell
			{
				magazine="3Rnd_SmokePurple_Grenade_shell";
				count=10;
			};
			class _xx_3Rnd_SmokeOrange_Grenade_shell
			{
				magazine="3Rnd_SmokeOrange_Grenade_shell";
				count=10;
			};
			class _xx_3Rnd_UGL_FlareWhite_F
			{
				magazine="3Rnd_UGL_FlareWhite_F";
				count=5;
			};
			class _xx_3Rnd_UGL_FlareGreen_F
			{
				magazine="3Rnd_UGL_FlareGreen_F";
				count=5;
			};
			class _xx_3Rnd_UGL_FlareRed_F
			{
				magazine="3Rnd_UGL_FlareRed_F";
				count=5;
			};
			class _xx_3Rnd_UGL_FlareYellow_F
			{
				magazine="3Rnd_UGL_FlareYellow_F";
				count=5;
			};
			class _xx_3Rnd_UGL_FlareCIR_F
			{
				magazine="3Rnd_UGL_FlareCIR_F";
				count=5;
			};
			class _xx_ACE_HuntIR_M203
			{
				magazine="ACE_HuntIR_M203";
				count=5;
			};
			class _xx_3Rnd_HE_Grenade_shell
			{
				magazine="3Rnd_HE_Grenade_shell";
				count=10;
			};
			class _xx_3AS_6Rnd_HE_Grenade_Shell
			{
				magazine="3AS_6Rnd_HE_Grenade_Shell";
				count=20;
			};
            class _xx_104th_3AS_WestarLightAT
			{
				magazine="104th_3AS_WestarLightAT";
				count=20;
			};
			class _xx_104th_3AS_ThermalDetonator_Mag
			{
				magazine="104th_3AS_ThermalDetonator_Mag";
				count=30;
			};
			class _xx_ACE_M84
			{
				magazine="ACE_M84";
				count=10;
			};
			class _xx_104th_PersonalShield_Republic_Mag
			{
				magazine="104th_PersonalShield_Republic_Mag";
				count=15;
			};
			class _xx_104th_SquadShield_Republic_Mag
			{
				magazine="104th_SquadShield_Republic_Mag";
				count=5;
			};
		};
		//TransportWeapons includes anything defined in CfgWeapons you want in the inventory.
		class TransportWeapons
		{
			class _xx_104th_3AS_DC15A
			{
				weapon="104th_3AS_DC15A";
				count=10;
			};
			class _xx_104th_3AS_DC15AGL
			{
				weapon="104th_3AS_DC15AGL";
				count=5;
			};
			class _xx_104th_3AS_DC15L
			{
				weapon="104th_3AS_DC15L";
				count=5;
			};
			class _xx_104th_3AS_DC15C
			{
				weapon="104th_3AS_DC15C";
				count=10;
			};
			class _xx_104th_3AS_DC15CGL
			{
				weapon="104th_3AS_DC15CGL";
				count=5;
			};
			class _xx_104th_3AS_DC15S
			{
				weapon="104th_3AS_DC15S";
				count=10;
			};
			class _xx_104th_RPS6_K
			{
				weapon="104th_RPS6_K";
				count=2;
			};
            class _xx_104th_3AS_RPS6_F
			{
				weapon="104th_3AS_RPS6_F";
				count=3;
			};
            class _xx_104th_3AS_RPS6_G
			{
				weapon="104th_3AS_RPS6_G";
				count=3;
			};
			class _xx_104th_JLTS_DC17SA
			{
				weapon="104th_JLTS_DC17SA";
				count=5;
			};
		};
		//TransportItems includes anything not defined in CfgWeapons, CfgMagazines, and CfgVehicles that you want in the inventory.  Do not include Weapons or Magazines in here!
		class TransportItems
		{
			class _xx_ACE_packingBandage
			{
				name="ACE_packingBandage";
				count=100;
			};
			class _xx_ACE_elasticBandage
			{
				name="ACE_elasticBandage";
				count=100;
			};
			class _xx_ACE_quikclot
			{
				name="ACE_quikclot";
				count=150;
			};
			class _xx_ACE_salineIV_250
			{
				name="ACE_salineIV_250";
				count=20;
			};
			class _xx_ACE_salineIV_500
			{
				name="ACE_salineIV_500";
				count=15;
			};
			class _xx_ACE_salineIV
			{
				name="ACE_salineIV";
				count=15;
			};
			class _xx_ACE_CableTie
			{
				name="ACE_CableTie";
				count=50;
			};
			class _xx_ACE_tourniquet
			{
				name="ACE_tourniquet";
				count=20;
			};
			class _xx_ACE_morphine
			{
				name="ACE_morphine";
				count=20;
			};
			class _xx_ACE_epinephrine
			{
				name="ACE_epinephrine";
				count=20;
			};
			class _xx_ACE_splint
			{
				name="ACE_splint";
				count=10;
			};
			class _xx_ToolKit
			{
				name="ToolKit";
				count=1;
			};
		};
		//TransportBackpacks includes any defined backpack you want in the inventory.
		class TransportBackpacks
		{
			class _xx_B_Parachute
			{
				backpack="B_Parachute";
				count=4;
			};
		};
		//Components deals with the radar range for the Vehicle.  Here it is set to 8000 so the range will be 8000M or 8KM.
		class Components
		{	
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange = 0;
							maxRange = 0;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 0;
							maxRange = 0;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						maxTrackableSpeed = 70;
						animDirection = "mainGun";
						angleRangeHorizontal = 46;
						angleRangeVertical = 34;
						aimdown = -0.25;
					};
					class VisualSensorComponent: SensorTemplateVisual
					{
						class AirTarget
						{
							minRange = 0;
							maxRange = 0;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 0;
							maxRange = 0;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						maxTrackableSpeed = 70;
						animDirection = "mainGun";
						angleRangeHorizontal = 46;
						angleRangeVertical = 34;
						aimdown = -0.25;
					};
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange = 8000;
							maxRange = 8000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 8000;
							maxRange = 8000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						maxTrackableSpeed = 125;
						angleRangeHorizontal = 180;
						angleRangeVertical = 90;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						minSpeedThreshold = 0;
						maxSpeedThreshold = 0;
						aimDown = 30;
					};
					class PassiveRadarSensorComponent: SensorTemplatePassiveRadar{};
					class LaserSensorComponent: SensorTemplateLaser{};
					class NVSensorComponent: SensorTemplateNV{};
				};
			};
			//Deals with the "[" and "]" screens shown on your monitor. componentType and resource define what is shown for each option.  These can be changed to only show one type on a single side.
			class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
			{
				class Components: Components
				{
					class EmptyDisplay
					{
						componentType = "EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType = "MinimapDisplayComponent";
						resource = "RscCustomInfoAirborneMiniMap";
					};
					class CrewDisplay
					{
						componentType = "CrewDisplayComponent";
						resource = "RscCustomInfoCrew";
					};
					class UAVDisplay
					{
						componentType = "UAVFeedDisplayComponent";
					};
					class VehiclePrimaryGunnerDisplay
					{
						componentType = "TransportFeedDisplayComponent";
						source = "PrimaryGunner";
					};
					class VehicleMissileDisplay
					{
						componentType = "TransportFeedDisplayComponent";
						source = "Missile";
					};
					class SensorDisplay
					{
						componentType = "SensorsDisplayComponent";
						range[] = {16000,16000,16000,8000};
						resource = "RscCustomInfoSensors";
					};
				};
			};
			//Deals with the "[" and "]" screens shown on your monitor. componentType and resource define what is shown for each option.  These can be changed to only show one type on a single side.
			class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
			{
				defaultDisplay = "SensorDisplay";
				class Components: Components
				{
					class EmptyDisplay
					{
						componentType = "EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType = "MinimapDisplayComponent";
						resource = "RscCustomInfoAirborneMiniMap";
					};
					class CrewDisplay
					{
						componentType = "CrewDisplayComponent";
						resource = "RscCustomInfoCrew";
					};
					class UAVDisplay
					{
						componentType = "UAVFeedDisplayComponent";
					};
					class VehiclePrimaryGunnerDisplay
					{
						componentType = "TransportFeedDisplayComponent";
						source = "PrimaryGunner";
					};
					class VehicleMissileDisplay
					{
						componentType = "TransportFeedDisplayComponent";
						source = "Missile";
					};
					class SensorDisplay
					{
						componentType = "SensorsDisplayComponent";
						range[] = {16000,16000,16000,8000};
						resource = "RscCustomInfoSensors";
					};
				};
			};
			class TransportCounterMeasuresComponent;
		};
		//Deals with user actions from the scroll wheel.
		class UserActions: UserActions
		{
			class rampOpen
			{
				available=0;
				showWindow=0;
				displayName="Ramp Open";
				position="pilotview";
				radius=9;
				condition="((player == driver this) AND (this animationphase 'ramp' ==0))";
				statement="this animateSource ['ramp',1,1];";
				onlyforplayer=0;
				shortcut="User18";
			};
			class rampClose
			{
				available=0;
				showWindow=0;
				displayName="Ramp Close";
				position="pilotview";
				radius=9;
				condition="((player == driver this) AND (this animationphase 'ramp' ==1))";
				statement="this animateSource ['ramp',0,1];";
				onlyforplayer=0;
				shortcut="User18";
			};
			class ThrusterEngage
			{
				displayName="";
				displayNameDefault="";
				textToolTip="<t color='#4C9900'>[Impulsor On]</t>";
				position="pilotview";
				radius=20;
				priority=21;
				onlyForPlayer=1;
				condition="(!(this getvariable [""impulsorStatus"",false]) AND (player == driver this) AND (alive this) AND (speed this >5) )";
				statement="this execVM ""WPEC\WPEC_Core\Functions\initTE.sqf""";
			};
			class ThrusterDisngage: ThrusterEngage
			{
				priority=21;
				displayName="";
				displayNameDefault="";
				textToolTip="<t color='#FF9933'>[RepulsorBrake On]</t>";
				condition="((this getvariable [""impulsorStatus"",false]) AND (player == driver this) AND (alive this))";
				statement="this execVM ""WPEC\WPEC_Core\Functions\initTD.sqf""";
			};
			class ThrusterEngage_spam: ThrusterEngage
			{
				displayName="";
				displayNameDefault="";
				textToolTip="";
				position="pilotview";
				radius=20;
				priority=0;
				onlyForPlayer=1;
				condition="((player == driver this) AND (alive this) AND (speed this >5) )";
				statement="this execVM ""WPEC\WPEC_Core\Functions\initTE.sqf""";
				shortcut="User19";
			};
			class ThrusterDisngage_spam: ThrusterEngage
			{
				priority=0;
				displayName="";
				displayNameDefault="";
				textToolTip="";
				condition="((player == driver this) AND (alive this))";
				statement="this execVM ""WPEC\WPEC_Core\Functions\initTD.sqf""";
				shortcut="User20";
			};
		};
		//Deals with ACE actions in the vehicle.  Can be fairly buggy so use with caution and test with a working SQF script.  May not always work in editor so use a multiplayer setting.
		class ACE_SelfActions: ACE_SelfActions
		{
			//Adds a menu in ACE that displays the passengers who are alive in your vehicle for the pilot to see.
			class ACE_Passengers
			{
				condition="alive _target";
				displayName="Passengers";
				insertChildren="_this call ace_interaction_fnc_addPassengersActions";
				statement="";
			};
		};
		//Event Handler for when the weapon is fired.  Base 3AS script is used for this.
		class EventHandlers: DefaultEventhandlers
		{
			fired="_this call (uinamespace getvariable 'BIS_fnc_effectFired');_this execVM '\3AS\3as_Laat\LAATI\scripts\fired_laser.sqf';";
		};
		//Defines the pilot camera they can use for firing their weapons and defines the views they have.
		class pilotCamera
		{
			class OpticsIn
			{
				class Wide
				{
					opticsDisplayName="WFOV";
					initAngleX=0;
					minAngleX=-10;
					maxAngleX=90;
					initAngleY=0;
					minAngleY=-90;
					maxAngleY=90;
					initFov=0.42500001;
					minFov=0.42500001;
					maxFov=0.42500001;
					directionStabilized=1;
					//Optics View Modes and Effects:
					thermalMode[]={0,1};
					visionMode[]=
					{
						"Normal",
						"NVG",
						"Ti"
					};
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
					opticsPPEffects[]=
					{
						"OpticsCHAbera2",
						"OpticsBlur2"
					};
					// All other optics inherit from this so they will all have the view modes od the wide view defined above.
				};
				class zoomx4: Wide
				{
					opticsDisplayName="NFOV";
					initFov="(0.425/4)";
					minFov="(0.425/4)";
					maxFov="(0.425/4)";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				class zoomX8: Wide
				{
					opticsDisplayName="NFOV";
					initFov="(0.42/8)";
					minFov="(0.42/8)";
					maxFov="(0.42/8)";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				class zoomX20: Wide
				{
					opticsDisplayName="NFOV";
					initFov="(0.42/20)";
					minFov="(0.42/20)";
					maxFov="(0.42/20)";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				class zoomX50: Wide
				{
					opticsDisplayName="NFOV";
					initFov="(0.42/50)";
					minFov="(0.42/50)";
					maxFov="(0.42/50)";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				class zoomX70: Wide
				{
					opticsDisplayName="NFOV";
					initFov="(0.42/70)";
					minFov="(0.42/70)";
					maxFov="(0.42/70)";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				showMiniMapInOptics=1;
				showUAVViewInOptics=0;
				showSlingLoadManagerInOptics=1;
			};
			minTurn=-180;
			maxTurn=180;
			initTurn=0;
			minElev=-10;
			maxElev=90;
			initElev=-10;
			maxXRotSpeed=0.30000001;
			maxYRotSpeed=0.30000001;
			pilotOpticsShowCursor=1;
			controllable=1;
		};
		class ViewPilot
		{
			initAngleX=0;
			minAngleX=-55;
			maxAngleX=85;
			initAngleY=0;
			minAngleY=-150;
			maxAngleY=150;
			minFov=0.25;
			maxFov=1.25;
			initFov=0.75;
			minMoveX=-100;
			maxMoveX=100;
			minMoveY=0;
			maxMoveY=0;
			minMoveZ=0;
			maxMoveZ=0;
		};
		class Exhausts
		{
			class Exhaust1
			{
				position="exhaust1";
				direction="exhaust1_dir";
				effect="ExhaustsEffectHeliBig";
			};
			class Exhaust2
			{
				position="exhaust2";
				direction="exhaust2_dir";
				effect="ExhaustsEffectHeliBig";
			};
		};
	};
	class 104th_3AS_LAAT_Doors_Base: 3as_LAAT_Mk2
	{
		//Standard Defines:
		scope = Protected;//Defined above as #Define Protected 1
		scopecurator = 2;
		displayName="[104th/3AS] LAAT/I (Doors)";
		author="Wolfpack Studios";
		model = "3as\3AS_laat\LAATi\model\tcw_laat.p3d";//Does not usually need to be redefined if you are inheriting but it can fix issues by just having it here.  Just make sure it is the same model!
		side = 1;
		//Specific Defines:
		canFloat = 1; //Defines if the vehicle will sink in the water or not. This is used here to prevent water damage
		enableSweep = 1; //Enables AI to sweep over the target as a method of attack.
		enableGPS = 1; //Enables the crew to use GPS and Map even if they do not have one in their inventory.
		//Vehicle Threat Level to AI:
		type = VAir; //Threat Type.  Defined at the top of the file.
		threat[] = {0.750001,0.8500001, 0.8500001}; //Threat to Soft Targets (Soldiers), Armor, and Air assets in that order.
		cost = 1000; //Higher cost means AI are more likely to target it.
		camouflage = 15; //How hard the vehicle is to see. Higher value means it is easier to see.  1 is default. 
		audible = 8; //How easy it is to hear. Higher means it is easier to hear by AI. 1 is Default.
		//Factions Association:
		faction="WPEC_Category_EclipseCompany";
		vehicleClass="WPEC_subcategoryAircraftRotary";
		editorSubcategory="WPEC_subcategoryAircraftRotary";
		//Crew Specifics:
		crew="WPEC_Phase_2_Unit_Trooper_CSP2";
		crewCrashProtection = 0.1; // Means crew takes 10% of the damage they normally would on a crash.
		//Textures
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"mat1"
		};
		hiddenSelectionsMaterials[]=
		{
			"WPEC\WPEC_Vehicles\WPEC_LAAT\data\textures\Apollo_Hull.rvmat",
			"WPEC\WPEC_Vehicles\WPEC_LAAT\data\textures\Apollo_Wings.rvmat",
			"WPEC\WPEC_Vehicles\WPEC_LAAT\data\textures\Apollo_Weapons.rvmat",
			"WPEC\WPEC_Vehicles\WPEC_LAAT\data\textures\Apollo_Weapon_Details.rvmat",
			"WPEC\WPEC_Vehicles\WPEC_LAAT\data\textures\Apollo_Interior.rvmat"
		};
		hiddenSelectionsTextures[]=
		{
			"WPEC\WPEC_Vehicles\WPEC_LAAT\data\textures\Apollo_Hull_CO.paa",
			"WPEC\WPEC_Vehicles\WPEC_LAAT\data\textures\Apollo_Wings_CO.paa",
			"WPEC\WPEC_Vehicles\WPEC_LAAT\data\textures\Apollo_Weapons_CO.paa",
			"WPEC\WPEC_Vehicles\WPEC_LAAT\data\textures\Apollo_Weapon_Details_CO.paa",
			"WPEC\WPEC_Vehicles\WPEC_LAAT\data\textures\Apollo_Interior_CO.paa"
		};
		//Texture Selections for the Garage:
		class TextureSources
		{
			class Apollo_Lead
			{
				displayName="Apollo Lead";
				author="Ghoul";
				factions[]=
				{
					"WPEC_Category_EclipseCompany"
				};
				textures[]=
				{
					"WPEC\WPEC_Vehicles\WPEC_LAAT\data\LeadTextures\Apollo_Lead_Hull_CO.paa",
					"WPEC\WPEC_Vehicles\WPEC_LAAT\data\LeadTextures\Apollo_Lead_Wings_CO.paa",
					"WPEC\WPEC_Vehicles\WPEC_LAAT\data\LeadTextures\Apollo_Lead_Weapons_CO.paa",
					"WPEC\WPEC_Vehicles\WPEC_LAAT\data\LeadTextures\Apollo_Lead_Weapon_Details_CO.paa",
					"WPEC\WPEC_Vehicles\WPEC_LAAT\data\LeadTextures\Apollo_Lead_Interior_CO.paa"
				};
			};
			class Apollo_Pilot
			{
				displayName="Apollo Pilot";
				author="Ghoul";
				factions[]=
				{
					"WPEC_Category_EclipseCompany"
				};
				textures[]=
				{
					"WPEC\WPEC_Vehicles\WPEC_LAAT\data\textures\Apollo_Hull_CO.paa",
					"WPEC\WPEC_Vehicles\WPEC_LAAT\data\textures\Apollo_Wings_CO.paa",
					"WPEC\WPEC_Vehicles\WPEC_LAAT\data\textures\Apollo_Weapons_CO.paa",
					"WPEC\WPEC_Vehicles\WPEC_LAAT\data\textures\Apollo_Weapon_Details_CO.paa",
					"WPEC\WPEC_Vehicles\WPEC_LAAT\data\textures\Apollo_Interior_CO.paa"
				};
			};
			class Apollo_Unmarked
			{
				displayName="Apollo Unmarked";
				author="3AS Studios";
				factions[]=
				{
					"WPEC_Category_EclipseCompany"
				};
				textures[]=
				{
					"3AS\3as_Laat\LAATI\data\Hull_CO.paa",
					"3AS\3as_Laat\LAATI\data\Wings_CO.paa",
					"3AS\3as_Laat\LAATI\data\Weapons_CO.paa",
					"3AS\3as_Laat\LAATI\data\Weapon_Details_CO.paa",
					"3AS\3as_Laat\LAATI\data\Interior_CO.paa"
				};
			};
		};
		//Weapons, Armor, and Cargo:
		armor=650;
		radarType=8;
		receiveRemoteTargets = 1;
		dustEffect="";
		waterEffect="";
		ace_cargo_space=70;
		ace_cargo_hasCargo=1;
		smokeLauncherAngle=360;
		smokeLauncherGrenadeCount=18;
		smokeLauncherVelocity=20;
		weapons[]=
		{
			"Laserdesignator_pilotCamera",
			"CMFlareLauncher",
			"104th_SmokeLauncher",
			"104th_LAAT_Cannon_Low",
			"104th_LAAT_Cannon_High",
			"104th_Maramu_A2A_MissileSystem",
            "104th_Hoska_A2A_MissileSystem",
			"104th_Dianoga_WGM_MissileSystem",
            "104th_Kaada_DF_MissileSystem"
		};
		magazines[]=
		{
			"Laserbatteries",
			"300Rnd_CMFlare_Chaff_Magazine",
			"300Rnd_CMFlare_Chaff_Magazine",
			"300Rnd_CMFlare_Chaff_Magazine",
			"104th_SmokeLauncherMag",
			"104th_SmokeLauncherMag",
			"104th_SmokeLauncherMag",
			"104th_LAAT_Cannon_LowPower_Magazine",
			"104th_LAAT_Cannon_LowPower_Magazine",
			"104th_LAAT_Cannon_LowPower_Magazine",
			"104th_LAAT_Cannon_HighPower_Magazine",
			"104th_LAAT_Cannon_HighPower_Magazine",
			"104th_LAAT_Cannon_HighPower_Magazine",
			"104th_Maramu_6Rnd_A2A_mag",
			"104th_Maramu_6Rnd_A2A_mag",
			"104th_Hoska_6Rnd_A2A_mag",
            "104th_Hoska_6Rnd_A2A_mag",
            "104th_Dianoga_4Rnd_WGM_mag",
            "104th_Dianoga_4Rnd_WGM_mag",
            "104th_Kaada_10Rnd_Unguided_Rocket_mag",
            "104th_Kaada_10Rnd_Unguided_Rocket_mag"
		};
		//Inventory for the Vehicle.  Make sure this is all correct otherwise you will get a .model error!
		//TransportMagazines includes anything defined in CfgMagazines you want in the inventory, including grenades.
		class TransportMagazines
		{
			class _xx_104th_MK1_PistolMag
			{
				magazine="104th_MK1_PistolMag";
				count=50;
			};
			class _xx_104th_3AS_DC15A_Mag
			{
				magazine="104th_3AS_DC15A_Mag";
				count=100;
			};
			class _xx_104th_3AS_DC15S_Mag
			{
				magazine="104th_3AS_DC15S_Mag";
				count=100;
			};
			class _xx_104th_3AS_DC15L_Mag
			{
				magazine="104th_3AS_DC15L_Mag";
				count=30;
			};
			class _xx_104th_3AS_DC15C_Mag
			{
				magazine="104th_3AS_DC15C_Mag";
				count=50;
			};
			class _xx_104th_3AS_WestarM5_Mag
			{
				magazine="104th_3AS_WestarM5_Mag";
				count=40;
			};
			class _xx_104th_3AS_DC17M_Mag
			{
				magazine="104th_3AS_DC17M_Mag";
				count=25;
			};
			class _xx_104th_MK2_PistolMag_Long
			{
				magazine="104th_MK2_PistolMag_Long";
				count=30;
			};
            class _xx_104th_3AS_Chaingun_Mag
			{
				magazine="104th_3AS_Chaingun_Mag";
				count=5;
			};
			class _xx_104th_MK4_PistolMag
			{
				magazine="104th_MK4_PistolMag";
				count=5;
			};
			class _xx_104th_MK2_AT_Mag
			{
				magazine="104th_MK2_AT_Mag";
				count=10;
			};
			class _xx_3AS_JLTS_MK43_AT
			{
				magazine="3AS_JLTS_MK43_AT";
				count=5;
			};
			class _xx_3AS_JLTS_MK39_AA
			{
				magazine="3AS_JLTS_MK39_AA";
				count=5;
			};
			class _xx_OPTRE_M8_Flare_Green
			{
				magazine="OPTRE_M8_Flare_Green";
				count=10;
			};
			class _xx_OPTRE_M8_Flare_Blue
			{
				magazine="OPTRE_M8_Flare_Blue";
				count=10;
			};
			class _xx_3Rnd_Smoke_Grenade_shell
			{
				magazine="3Rnd_Smoke_Grenade_shell";
				count=10;
			};
			class _xx_3Rnd_SmokeGreen_Grenade_shell
			{
				magazine="3Rnd_SmokeGreen_Grenade_shell";
				count=10;
			};
			class _xx_3Rnd_SmokeBlue_Grenade_shell
			{
				magazine="3Rnd_SmokeBlue_Grenade_shell";
				count=10;
			};
			class _xx_3Rnd_SmokeRed_Grenade_shell
			{
				magazine="3Rnd_SmokeRed_Grenade_shell";
				count=10;
			};
			class _xx_3Rnd_SmokeYellow_Grenade_shell
			{
				magazine="3Rnd_SmokeYellow_Grenade_shell";
				count=10;
			};
			class _xx_3Rnd_SmokePurple_Grenade_shell
			{
				magazine="3Rnd_SmokePurple_Grenade_shell";
				count=10;
			};
			class _xx_3Rnd_SmokeOrange_Grenade_shell
			{
				magazine="3Rnd_SmokeOrange_Grenade_shell";
				count=10;
			};
			class _xx_3Rnd_UGL_FlareWhite_F
			{
				magazine="3Rnd_UGL_FlareWhite_F";
				count=5;
			};
			class _xx_3Rnd_UGL_FlareGreen_F
			{
				magazine="3Rnd_UGL_FlareGreen_F";
				count=5;
			};
			class _xx_3Rnd_UGL_FlareRed_F
			{
				magazine="3Rnd_UGL_FlareRed_F";
				count=5;
			};
			class _xx_3Rnd_UGL_FlareYellow_F
			{
				magazine="3Rnd_UGL_FlareYellow_F";
				count=5;
			};
			class _xx_3Rnd_UGL_FlareCIR_F
			{
				magazine="3Rnd_UGL_FlareCIR_F";
				count=5;
			};
			class _xx_ACE_HuntIR_M203
			{
				magazine="ACE_HuntIR_M203";
				count=5;
			};
			class _xx_3Rnd_HE_Grenade_shell
			{
				magazine="3Rnd_HE_Grenade_shell";
				count=10;
			};
			class _xx_3AS_6Rnd_HE_Grenade_Shell
			{
				magazine="3AS_6Rnd_HE_Grenade_Shell";
				count=20;
			};
            class _xx_104th_3AS_WestarLightAT
			{
				magazine="104th_3AS_WestarLightAT";
				count=20;
			};
			class _xx_104th_3AS_ThermalDetonator_Mag
			{
				magazine="104th_3AS_ThermalDetonator_Mag";
				count=30;
			};
			class _xx_ACE_M84
			{
				magazine="ACE_M84";
				count=10;
			};
			class _xx_104th_PersonalShield_Republic_Mag
			{
				magazine="104th_PersonalShield_Republic_Mag";
				count=15;
			};
			class _xx_104th_SquadShield_Republic_Mag
			{
				magazine="104th_SquadShield_Republic_Mag";
				count=5;
			};
		};
		//TransportWeapons includes anything defined in CfgWeapons you want in the inventory.
		class TransportWeapons
		{
			class _xx_104th_3AS_DC15A
			{
				weapon="104th_3AS_DC15A";
				count=10;
			};
			class _xx_104th_3AS_DC15AGL
			{
				weapon="104th_3AS_DC15AGL";
				count=5;
			};
			class _xx_104th_3AS_DC15L
			{
				weapon="104th_3AS_DC15L";
				count=5;
			};
			class _xx_104th_3AS_DC15C
			{
				weapon="104th_3AS_DC15C";
				count=10;
			};
			class _xx_104th_3AS_DC15CGL
			{
				weapon="104th_3AS_DC15CGL";
				count=5;
			};
			class _xx_104th_3AS_DC15S
			{
				weapon="104th_3AS_DC15S";
				count=10;
			};
			class _xx_104th_RPS6_K
			{
				weapon="104th_RPS6_K";
				count=2;
			};
            class _xx_104th_3AS_RPS6_F
			{
				weapon="104th_3AS_RPS6_F";
				count=3;
			};
            class _xx_104th_3AS_RPS6_G
			{
				weapon="104th_3AS_RPS6_G";
				count=3;
			};
			class _xx_104th_JLTS_DC17SA
			{
				weapon="104th_JLTS_DC17SA";
				count=5;
			};
		};
		//TransportItems includes anything not defined in CfgWeapons, CfgMagazines, and CfgVehicles that you want in the inventory.  Do not include Weapons or Magazines in here!
		class TransportItems
		{
			class _xx_ACE_packingBandage
			{
				name="ACE_packingBandage";
				count=100;
			};
			class _xx_ACE_elasticBandage
			{
				name="ACE_elasticBandage";
				count=100;
			};
			class _xx_ACE_quikclot
			{
				name="ACE_quikclot";
				count=150;
			};
			class _xx_ACE_salineIV_250
			{
				name="ACE_salineIV_250";
				count=20;
			};
			class _xx_ACE_salineIV_500
			{
				name="ACE_salineIV_500";
				count=15;
			};
			class _xx_ACE_salineIV
			{
				name="ACE_salineIV";
				count=15;
			};
			class _xx_ACE_CableTie
			{
				name="ACE_CableTie";
				count=50;
			};
			class _xx_ACE_tourniquet
			{
				name="ACE_tourniquet";
				count=20;
			};
			class _xx_ACE_morphine
			{
				name="ACE_morphine";
				count=20;
			};
			class _xx_ACE_epinephrine
			{
				name="ACE_epinephrine";
				count=20;
			};
			class _xx_ACE_splint
			{
				name="ACE_splint";
				count=10;
			};
			class _xx_ToolKit
			{
				name="ToolKit";
				count=1;
			};
		};
		//TransportBackpacks includes any defined backpack you want in the inventory.
		class TransportBackpacks
		{
			class _xx_B_Parachute
			{
				backpack="B_Parachute";
				count=4;
			};
		};
		//Components deals with the radar range for the Vehicle.  Here it is set to 8000 so the range will be 8000M or 8KM.
		class Components
		{	
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange = 0;
							maxRange = 0;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 0;
							maxRange = 0;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						maxTrackableSpeed = 70;
						animDirection = "mainGun";
						angleRangeHorizontal = 46;
						angleRangeVertical = 34;
						aimdown = -0.25;
					};
					class VisualSensorComponent: SensorTemplateVisual
					{
						class AirTarget
						{
							minRange = 0;
							maxRange = 0;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 0;
							maxRange = 0;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						maxTrackableSpeed = 70;
						animDirection = "mainGun";
						angleRangeHorizontal = 46;
						angleRangeVertical = 34;
						aimdown = -0.25;
					};
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange = 8000;
							maxRange = 8000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 8000;
							maxRange = 8000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						maxTrackableSpeed = 125;
						angleRangeHorizontal = 180;
						angleRangeVertical = 90;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						minSpeedThreshold = 0;
						maxSpeedThreshold = 0;
						aimDown = 30;
					};
					class PassiveRadarSensorComponent: SensorTemplatePassiveRadar{};
					class LaserSensorComponent: SensorTemplateLaser{};
					class NVSensorComponent: SensorTemplateNV{};
				};
			};
			//Deals with the "[" and "]" screens shown on your monitor. componentType and resource define what is shown for each option.  These can be changed to only show one type on a single side.
			class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
			{
				class Components: Components
				{
					class EmptyDisplay
					{
						componentType = "EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType = "MinimapDisplayComponent";
						resource = "RscCustomInfoAirborneMiniMap";
					};
					class CrewDisplay
					{
						componentType = "CrewDisplayComponent";
						resource = "RscCustomInfoCrew";
					};
					class UAVDisplay
					{
						componentType = "UAVFeedDisplayComponent";
					};
					class VehiclePrimaryGunnerDisplay
					{
						componentType = "TransportFeedDisplayComponent";
						source = "PrimaryGunner";
					};
					class VehicleMissileDisplay
					{
						componentType = "TransportFeedDisplayComponent";
						source = "Missile";
					};
					class SensorDisplay
					{
						componentType = "SensorsDisplayComponent";
						range[] = {16000,16000,16000,8000};
						resource = "RscCustomInfoSensors";
					};
				};
			};
			//Deals with the "[" and "]" screens shown on your monitor. componentType and resource define what is shown for each option.  These can be changed to only show one type on a single side.
			class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
			{
				defaultDisplay = "SensorDisplay";
				class Components: Components
				{
					class EmptyDisplay
					{
						componentType = "EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType = "MinimapDisplayComponent";
						resource = "RscCustomInfoAirborneMiniMap";
					};
					class CrewDisplay
					{
						componentType = "CrewDisplayComponent";
						resource = "RscCustomInfoCrew";
					};
					class UAVDisplay
					{
						componentType = "UAVFeedDisplayComponent";
					};
					class VehiclePrimaryGunnerDisplay
					{
						componentType = "TransportFeedDisplayComponent";
						source = "PrimaryGunner";
					};
					class VehicleMissileDisplay
					{
						componentType = "TransportFeedDisplayComponent";
						source = "Missile";
					};
					class SensorDisplay
					{
						componentType = "SensorsDisplayComponent";
						range[] = {16000,16000,16000,8000};
						resource = "RscCustomInfoSensors";
					};
				};
			};
			class TransportCounterMeasuresComponent;
		};
		//Deals with user actions from the scroll wheel.
		class UserActions: UserActions
		{
			class rampOpen
			{
				available=0;
				showWindow=0;
				displayName="Ramp Open";
				position="pilotview";
				radius=9;
				condition="((player == driver this) AND (this animationphase 'ramp' ==0))";
				statement="this animateSource ['ramp',1,1];";
				onlyforplayer=0;
				shortcut="User18";
			};
			class rampClose
			{
				available=0;
				showWindow=0;
				displayName="Ramp Close";
				position="pilotview";
				radius=9;
				condition="((player == driver this) AND (this animationphase 'ramp' ==1))";
				statement="this animateSource ['ramp',0,1];";
				onlyforplayer=0;
				shortcut="User18";
			};
			class ThrusterEngage
			{
				displayName="";
				displayNameDefault="";
				textToolTip="<t color='#4C9900'>[Impulsor On]</t>";
				position="pilotview";
				radius=20;
				priority=21;
				onlyForPlayer=1;
				condition="(!(this getvariable [""impulsorStatus"",false]) AND (player == driver this) AND (alive this) AND (speed this >5) )";
				statement="this execVM ""WPEC\WPEC_Core\Functions\initTE.sqf""";
			};
			class ThrusterDisngage: ThrusterEngage
			{
				priority=21;
				displayName="";
				displayNameDefault="";
				textToolTip="<t color='#FF9933'>[RepulsorBrake On]</t>";
				condition="((this getvariable [""impulsorStatus"",false]) AND (player == driver this) AND (alive this))";
				statement="this execVM ""WPEC\WPEC_Core\Functions\initTD.sqf""";
			};
			class ThrusterEngage_spam: ThrusterEngage
			{
				displayName="";
				displayNameDefault="";
				textToolTip="";
				position="pilotview";
				radius=20;
				priority=0;
				onlyForPlayer=1;
				condition="((player == driver this) AND (alive this) AND (speed this >5) )";
				statement="this execVM ""WPEC\WPEC_Core\Functions\initTE.sqf""";
				shortcut="User19";
			};
			class ThrusterDisngage_spam: ThrusterEngage
			{
				priority=0;
				displayName="";
				displayNameDefault="";
				textToolTip="";
				condition="((player == driver this) AND (alive this))";
				statement="this execVM ""WPEC\WPEC_Core\Functions\initTD.sqf""";
				shortcut="User20";
			};
		};
		//Deals with ACE actions in the vehicle.  Can be fairly buggy so use with caution and test with a working SQF script.  May not always work in editor so use a multiplayer setting.
		class ACE_SelfActions: ACE_SelfActions
		{
			
			//Adds a menu in ACE that displays the passengers who are alive in your vehicle for the pilot to see.
			class ACE_Passengers
			{
				condition="alive _target";
				displayName="Passengers";
				insertChildren="_this call ace_interaction_fnc_addPassengersActions";
				statement="";
			};
		};
		//Event Handler for when the weapon is fired.  Base 3AS script is used for this.
		class EventHandlers: DefaultEventhandlers
		{
			fired="_this call (uinamespace getvariable 'BIS_fnc_effectFired');_this execVM '\3AS\3as_Laat\LAATI\scripts\fired_laser.sqf';";
		};
		//Defines the pilot camera they can use for firing their weapons and defines the views they have.
		class pilotCamera
		{
			class OpticsIn
			{
				class Wide
				{
					opticsDisplayName="WFOV";
					initAngleX=0;
					minAngleX=-10;
					maxAngleX=90;
					initAngleY=0;
					minAngleY=-90;
					maxAngleY=90;
					initFov=0.42500001;
					minFov=0.42500001;
					maxFov=0.42500001;
					directionStabilized=1;
					//Optics View Modes and Effects:
					thermalMode[]={0,1};
					visionMode[]=
					{
						"Normal",
						"NVG",
						"Ti"
					};
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
					opticsPPEffects[]=
					{
						"OpticsCHAbera2",
						"OpticsBlur2"
					};
					// All other optics inherit from this so they will all have the view modes od the wide view defined above.
				};
				class zoomx4: Wide
				{
					opticsDisplayName="NFOV";
					initFov="(0.425/4)";
					minFov="(0.425/4)";
					maxFov="(0.425/4)";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				class zoomX8: Wide
				{
					opticsDisplayName="NFOV";
					initFov="(0.42/8)";
					minFov="(0.42/8)";
					maxFov="(0.42/8)";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				class zoomX20: Wide
				{
					opticsDisplayName="NFOV";
					initFov="(0.42/20)";
					minFov="(0.42/20)";
					maxFov="(0.42/20)";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				class zoomX50: Wide
				{
					opticsDisplayName="NFOV";
					initFov="(0.42/50)";
					minFov="(0.42/50)";
					maxFov="(0.42/50)";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				class zoomX70: Wide
				{
					opticsDisplayName="NFOV";
					initFov="(0.42/70)";
					minFov="(0.42/70)";
					maxFov="(0.42/70)";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				showMiniMapInOptics=1;
				showUAVViewInOptics=0;
				showSlingLoadManagerInOptics=1;
			};
			minTurn=-180;
			maxTurn=180;
			initTurn=0;
			minElev=-10;
			maxElev=90;
			initElev=-10;
			maxXRotSpeed=0.30000001;
			maxYRotSpeed=0.30000001;
			pilotOpticsShowCursor=1;
			controllable=1;
		};
		class ViewPilot
		{
			initAngleX=0;
			minAngleX=-55;
			maxAngleX=85;
			initAngleY=0;
			minAngleY=-150;
			maxAngleY=150;
			minFov=0.25;
			maxFov=1.25;
			initFov=0.75;
			minMoveX=-100;
			maxMoveX=100;
			minMoveY=0;
			maxMoveY=0;
			minMoveZ=0;
			maxMoveZ=0;
		};
		class Exhausts
		{
			class Exhaust1
			{
				position="exhaust1";
				direction="exhaust1_dir";
				effect="ExhaustsEffectHeliBig";
			};
			class Exhaust2
			{
				position="exhaust2";
				direction="exhaust2_dir";
				effect="ExhaustsEffectHeliBig";
			};
		};
	};
	class 104th_3AS_LAAT_Floodlights_Base: 3as_LAAT_Mk1Lights
	{
		//Standard Defines:
		scope = Protected;//Defined above as #Define Protected 1
		scopecurator = 2;
		displayName="[104th/3AS] LAAT/I (Floodlights)";
		author="Wolfpack Studios";
		model = "3as\3AS_laat\LAATi\model\tcw_laat.p3d";//Does not usually need to be redefined if you are inheriting but it can fix issues by just having it here.  Just make sure it is the same model!
		side = 1;
		//Specific Defines:
		canFloat = 1; //Defines if the vehicle will sink in the water or not. This is used here to prevent water damage
		enableSweep = 1; //Enables AI to sweep over the target as a method of attack.
		enableGPS = 1; //Enables the crew to use GPS and Map even if they do not have one in their inventory.
		//Vehicle Threat Level to AI:
		type = VAir; //Threat Type.  Defined at the top of the file.
		threat[] = {0.750001,0.8500001, 0.8500001}; //Threat to Soft Targets (Soldiers), Armor, and Air assets in that order.
		cost = 1000; //Higher cost means AI are more likely to target it.
		camouflage = 15; //How hard the vehicle is to see. Higher value means it is easier to see.  1 is default. 
		audible = 8; //How easy it is to hear. Higher means it is easier to hear by AI. 1 is Default.
		//Factions Association:
		faction="WPEC_Category_EclipseCompany";
		vehicleClass="WPEC_subcategoryAircraftRotary";
		editorSubcategory="WPEC_subcategoryAircraftRotary";
		//Crew Specifics:
		crew="WPEC_Phase_2_Unit_Trooper_CSP2";
		crewCrashProtection = 0.1; // Means crew takes 10% of the damage they normally would on a crash.
		//Textures
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"mat1"
		};
		hiddenSelectionsMaterials[]=
		{
			"WPEC\WPEC_Vehicles\WPEC_LAAT\data\textures\Apollo_Hull.rvmat",
			"WPEC\WPEC_Vehicles\WPEC_LAAT\data\textures\Apollo_Wings.rvmat",
			"WPEC\WPEC_Vehicles\WPEC_LAAT\data\textures\Apollo_Weapons.rvmat",
			"WPEC\WPEC_Vehicles\WPEC_LAAT\data\textures\Apollo_Weapon_Details.rvmat",
			"WPEC\WPEC_Vehicles\WPEC_LAAT\data\textures\Apollo_Interior.rvmat"
		};
		hiddenSelectionsTextures[]=
		{
			"WPEC\WPEC_Vehicles\WPEC_LAAT\data\textures\Apollo_Hull_CO.paa",
			"WPEC\WPEC_Vehicles\WPEC_LAAT\data\textures\Apollo_Wings_CO.paa",
			"WPEC\WPEC_Vehicles\WPEC_LAAT\data\textures\Apollo_Weapons_CO.paa",
			"WPEC\WPEC_Vehicles\WPEC_LAAT\data\textures\Apollo_Weapon_Details_CO.paa",
			"WPEC\WPEC_Vehicles\WPEC_LAAT\data\textures\Apollo_Interior_CO.paa"
		};
		//Texture Selections for the Garage:
		class TextureSources
		{
			class Apollo_Lead
			{
				displayName="Apollo Lead";
				author="Ghoul";
				factions[]=
				{
					"WPEC_Category_EclipseCompany"
				};
				textures[]=
				{
					"WPEC\WPEC_Vehicles\WPEC_LAAT\data\LeadTextures\Apollo_Lead_Hull_CO.paa",
					"WPEC\WPEC_Vehicles\WPEC_LAAT\data\LeadTextures\Apollo_Lead_Wings_CO.paa",
					"WPEC\WPEC_Vehicles\WPEC_LAAT\data\LeadTextures\Apollo_Lead_Weapons_CO.paa",
					"WPEC\WPEC_Vehicles\WPEC_LAAT\data\LeadTextures\Apollo_Lead_Weapon_Details_CO.paa",
					"WPEC\WPEC_Vehicles\WPEC_LAAT\data\LeadTextures\Apollo_Lead_Interior_CO.paa"
				};
			};
			class Apollo_Pilot
			{
				displayName="Apollo Pilot";
				author="Ghoul";
				factions[]=
				{
					"WPEC_Category_EclipseCompany"
				};
				textures[]=
				{
					"WPEC\WPEC_Vehicles\WPEC_LAAT\data\textures\Apollo_Hull_CO.paa",
					"WPEC\WPEC_Vehicles\WPEC_LAAT\data\textures\Apollo_Wings_CO.paa",
					"WPEC\WPEC_Vehicles\WPEC_LAAT\data\textures\Apollo_Weapons_CO.paa",
					"WPEC\WPEC_Vehicles\WPEC_LAAT\data\textures\Apollo_Weapon_Details_CO.paa",
					"WPEC\WPEC_Vehicles\WPEC_LAAT\data\textures\Apollo_Interior_CO.paa"
				};
			};
			class Apollo_Unmarked
			{
				displayName="Apollo Unmarked";
				author="3AS Studios";
				factions[]=
				{
					"WPEC_Category_EclipseCompany"
				};
				textures[]=
				{
					"3AS\3as_Laat\LAATI\data\Hull_CO.paa",
					"3AS\3as_Laat\LAATI\data\Wings_CO.paa",
					"3AS\3as_Laat\LAATI\data\Weapons_CO.paa",
					"3AS\3as_Laat\LAATI\data\Weapon_Details_CO.paa",
					"3AS\3as_Laat\LAATI\data\Interior_CO.paa"
				};
			};
		};
		//Weapons, Armor, and Cargo:
		armor=650;
		radarType=8;
		receiveRemoteTargets = 1;
		dustEffect="";
		waterEffect="";
		ace_cargo_space=70;
		ace_cargo_hasCargo=1;
		smokeLauncherAngle=360;
		smokeLauncherGrenadeCount=18;
		smokeLauncherVelocity=20;
		weapons[]=
		{
			"Laserdesignator_pilotCamera",
			"CMFlareLauncher",
			"104th_SmokeLauncher",
			"104th_LAAT_Cannon_Low",
			"104th_LAAT_Cannon_High",
			"104th_Maramu_A2A_MissileSystem",
            "104th_Hoska_A2A_MissileSystem",
			"104th_Dianoga_WGM_MissileSystem",
            "104th_Kaada_DF_MissileSystem"
		};
		magazines[]=
		{
			"Laserbatteries",
			"300Rnd_CMFlare_Chaff_Magazine",
			"300Rnd_CMFlare_Chaff_Magazine",
			"300Rnd_CMFlare_Chaff_Magazine",
			"104th_SmokeLauncherMag",
			"104th_SmokeLauncherMag",
			"104th_SmokeLauncherMag",
			"104th_LAAT_Cannon_LowPower_Magazine",
			"104th_LAAT_Cannon_LowPower_Magazine",
			"104th_LAAT_Cannon_LowPower_Magazine",
			"104th_LAAT_Cannon_HighPower_Magazine",
			"104th_LAAT_Cannon_HighPower_Magazine",
			"104th_LAAT_Cannon_HighPower_Magazine",
			"104th_Maramu_6Rnd_A2A_mag",
			"104th_Maramu_6Rnd_A2A_mag",
			"104th_Hoska_6Rnd_A2A_mag",
            "104th_Hoska_6Rnd_A2A_mag",
            "104th_Dianoga_4Rnd_WGM_mag",
            "104th_Dianoga_4Rnd_WGM_mag",
            "104th_Kaada_10Rnd_Unguided_Rocket_mag",
            "104th_Kaada_10Rnd_Unguided_Rocket_mag"
		};
		//Inventory for the Vehicle.  Make sure this is all correct otherwise you will get a .model error!
		//TransportMagazines includes anything defined in CfgMagazines you want in the inventory, including grenades.
		class TransportMagazines
		{
			class _xx_104th_MK1_PistolMag
			{
				magazine="104th_MK1_PistolMag";
				count=50;
			};
			class _xx_104th_3AS_DC15A_Mag
			{
				magazine="104th_3AS_DC15A_Mag";
				count=100;
			};
			class _xx_104th_3AS_DC15S_Mag
			{
				magazine="104th_3AS_DC15S_Mag";
				count=100;
			};
			class _xx_104th_3AS_DC15L_Mag
			{
				magazine="104th_3AS_DC15L_Mag";
				count=30;
			};
			class _xx_104th_3AS_DC15C_Mag
			{
				magazine="104th_3AS_DC15C_Mag";
				count=50;
			};
			class _xx_104th_3AS_WestarM5_Mag
			{
				magazine="104th_3AS_WestarM5_Mag";
				count=40;
			};
			class _xx_104th_3AS_DC17M_Mag
			{
				magazine="104th_3AS_DC17M_Mag";
				count=25;
			};
			class _xx_104th_MK2_PistolMag_Long
			{
				magazine="104th_MK2_PistolMag_Long";
				count=30;
			};
            class _xx_104th_3AS_Chaingun_Mag
			{
				magazine="104th_3AS_Chaingun_Mag";
				count=5;
			};
			class _xx_104th_MK4_PistolMag
			{
				magazine="104th_MK4_PistolMag";
				count=5;
			};
			class _xx_104th_MK2_AT_Mag
			{
				magazine="104th_MK2_AT_Mag";
				count=10;
			};
			class _xx_3AS_JLTS_MK43_AT
			{
				magazine="3AS_JLTS_MK43_AT";
				count=5;
			};
			class _xx_3AS_JLTS_MK39_AA
			{
				magazine="3AS_JLTS_MK39_AA";
				count=5;
			};
			class _xx_OPTRE_M8_Flare_Green
			{
				magazine="OPTRE_M8_Flare_Green";
				count=10;
			};
			class _xx_OPTRE_M8_Flare_Blue
			{
				magazine="OPTRE_M8_Flare_Blue";
				count=10;
			};
			class _xx_3Rnd_Smoke_Grenade_shell
			{
				magazine="3Rnd_Smoke_Grenade_shell";
				count=10;
			};
			class _xx_3Rnd_SmokeGreen_Grenade_shell
			{
				magazine="3Rnd_SmokeGreen_Grenade_shell";
				count=10;
			};
			class _xx_3Rnd_SmokeBlue_Grenade_shell
			{
				magazine="3Rnd_SmokeBlue_Grenade_shell";
				count=10;
			};
			class _xx_3Rnd_SmokeRed_Grenade_shell
			{
				magazine="3Rnd_SmokeRed_Grenade_shell";
				count=10;
			};
			class _xx_3Rnd_SmokeYellow_Grenade_shell
			{
				magazine="3Rnd_SmokeYellow_Grenade_shell";
				count=10;
			};
			class _xx_3Rnd_SmokePurple_Grenade_shell
			{
				magazine="3Rnd_SmokePurple_Grenade_shell";
				count=10;
			};
			class _xx_3Rnd_SmokeOrange_Grenade_shell
			{
				magazine="3Rnd_SmokeOrange_Grenade_shell";
				count=10;
			};
			class _xx_3Rnd_UGL_FlareWhite_F
			{
				magazine="3Rnd_UGL_FlareWhite_F";
				count=5;
			};
			class _xx_3Rnd_UGL_FlareGreen_F
			{
				magazine="3Rnd_UGL_FlareGreen_F";
				count=5;
			};
			class _xx_3Rnd_UGL_FlareRed_F
			{
				magazine="3Rnd_UGL_FlareRed_F";
				count=5;
			};
			class _xx_3Rnd_UGL_FlareYellow_F
			{
				magazine="3Rnd_UGL_FlareYellow_F";
				count=5;
			};
			class _xx_3Rnd_UGL_FlareCIR_F
			{
				magazine="3Rnd_UGL_FlareCIR_F";
				count=5;
			};
			class _xx_ACE_HuntIR_M203
			{
				magazine="ACE_HuntIR_M203";
				count=5;
			};
			class _xx_3Rnd_HE_Grenade_shell
			{
				magazine="3Rnd_HE_Grenade_shell";
				count=10;
			};
			class _xx_3AS_6Rnd_HE_Grenade_Shell
			{
				magazine="3AS_6Rnd_HE_Grenade_Shell";
				count=20;
			};
            class _xx_104th_3AS_WestarLightAT
			{
				magazine="104th_3AS_WestarLightAT";
				count=20;
			};
			class _xx_104th_3AS_ThermalDetonator_Mag
			{
				magazine="104th_3AS_ThermalDetonator_Mag";
				count=30;
			};
			class _xx_ACE_M84
			{
				magazine="ACE_M84";
				count=10;
			};
			class _xx_104th_PersonalShield_Republic_Mag
			{
				magazine="104th_PersonalShield_Republic_Mag";
				count=15;
			};
			class _xx_104th_SquadShield_Republic_Mag
			{
				magazine="104th_SquadShield_Republic_Mag";
				count=5;
			};
		};
		//TransportWeapons includes anything defined in CfgWeapons you want in the inventory.
		class TransportWeapons
		{
			class _xx_104th_3AS_DC15A
			{
				weapon="104th_3AS_DC15A";
				count=10;
			};
			class _xx_104th_3AS_DC15AGL
			{
				weapon="104th_3AS_DC15AGL";
				count=5;
			};
			class _xx_104th_3AS_DC15L
			{
				weapon="104th_3AS_DC15L";
				count=5;
			};
			class _xx_104th_3AS_DC15C
			{
				weapon="104th_3AS_DC15C";
				count=10;
			};
			class _xx_104th_3AS_DC15CGL
			{
				weapon="104th_3AS_DC15CGL";
				count=5;
			};
			class _xx_104th_3AS_DC15S
			{
				weapon="104th_3AS_DC15S";
				count=10;
			};
			class _xx_104th_RPS6_K
			{
				weapon="104th_RPS6_K";
				count=2;
			};
            class _xx_104th_3AS_RPS6_F
			{
				weapon="104th_3AS_RPS6_F";
				count=3;
			};
            class _xx_104th_3AS_RPS6_G
			{
				weapon="104th_3AS_RPS6_G";
				count=3;
			};
			class _xx_104th_JLTS_DC17SA
			{
				weapon="104th_JLTS_DC17SA";
				count=5;
			};
		};
		//TransportItems includes anything not defined in CfgWeapons, CfgMagazines, and CfgVehicles that you want in the inventory.  Do not include Weapons or Magazines in here!
		class TransportItems
		{
			class _xx_ACE_packingBandage
			{
				name="ACE_packingBandage";
				count=100;
			};
			class _xx_ACE_elasticBandage
			{
				name="ACE_elasticBandage";
				count=100;
			};
			class _xx_ACE_quikclot
			{
				name="ACE_quikclot";
				count=150;
			};
			class _xx_ACE_salineIV_250
			{
				name="ACE_salineIV_250";
				count=20;
			};
			class _xx_ACE_salineIV_500
			{
				name="ACE_salineIV_500";
				count=15;
			};
			class _xx_ACE_salineIV
			{
				name="ACE_salineIV";
				count=15;
			};
			class _xx_ACE_CableTie
			{
				name="ACE_CableTie";
				count=50;
			};
			class _xx_ACE_tourniquet
			{
				name="ACE_tourniquet";
				count=20;
			};
			class _xx_ACE_morphine
			{
				name="ACE_morphine";
				count=20;
			};
			class _xx_ACE_epinephrine
			{
				name="ACE_epinephrine";
				count=20;
			};
			class _xx_ACE_splint
			{
				name="ACE_splint";
				count=10;
			};
			class _xx_ToolKit
			{
				name="ToolKit";
				count=1;
			};
		};
		//TransportBackpacks includes any defined backpack you want in the inventory.
		class TransportBackpacks
		{
			class _xx_B_Parachute
			{
				backpack="B_Parachute";
				count=4;
			};
		};
		//Components deals with the radar range for the Vehicle.  Here it is set to 8000 so the range will be 8000M or 8KM.
		class Components
		{	
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange = 0;
							maxRange = 0;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 0;
							maxRange = 0;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						maxTrackableSpeed = 70;
						animDirection = "mainGun";
						angleRangeHorizontal = 46;
						angleRangeVertical = 34;
						aimdown = -0.25;
					};
					class VisualSensorComponent: SensorTemplateVisual
					{
						class AirTarget
						{
							minRange = 0;
							maxRange = 0;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 0;
							maxRange = 0;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						maxTrackableSpeed = 70;
						animDirection = "mainGun";
						angleRangeHorizontal = 46;
						angleRangeVertical = 34;
						aimdown = -0.25;
					};
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange = 8000;
							maxRange = 8000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 8000;
							maxRange = 8000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						maxTrackableSpeed = 125;
						angleRangeHorizontal = 180;
						angleRangeVertical = 90;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						minSpeedThreshold = 0;
						maxSpeedThreshold = 0;
						aimDown = 30;
					};
					class PassiveRadarSensorComponent: SensorTemplatePassiveRadar{};
					class LaserSensorComponent: SensorTemplateLaser{};
					class NVSensorComponent: SensorTemplateNV{};
				};
			};
			//Deals with the "[" and "]" screens shown on your monitor. componentType and resource define what is shown for each option.  These can be changed to only show one type on a single side.
			class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
			{
				class Components: Components
				{
					class EmptyDisplay
					{
						componentType = "EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType = "MinimapDisplayComponent";
						resource = "RscCustomInfoAirborneMiniMap";
					};
					class CrewDisplay
					{
						componentType = "CrewDisplayComponent";
						resource = "RscCustomInfoCrew";
					};
					class UAVDisplay
					{
						componentType = "UAVFeedDisplayComponent";
					};
					class VehiclePrimaryGunnerDisplay
					{
						componentType = "TransportFeedDisplayComponent";
						source = "PrimaryGunner";
					};
					class VehicleMissileDisplay
					{
						componentType = "TransportFeedDisplayComponent";
						source = "Missile";
					};
					class SensorDisplay
					{
						componentType = "SensorsDisplayComponent";
						range[] = {16000,16000,16000,8000};
						resource = "RscCustomInfoSensors";
					};
				};
			};
			//Deals with the "[" and "]" screens shown on your monitor. componentType and resource define what is shown for each option.  These can be changed to only show one type on a single side.
			class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
			{
				defaultDisplay = "SensorDisplay";
				class Components: Components
				{
					class EmptyDisplay
					{
						componentType = "EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType = "MinimapDisplayComponent";
						resource = "RscCustomInfoAirborneMiniMap";
					};
					class CrewDisplay
					{
						componentType = "CrewDisplayComponent";
						resource = "RscCustomInfoCrew";
					};
					class UAVDisplay
					{
						componentType = "UAVFeedDisplayComponent";
					};
					class VehiclePrimaryGunnerDisplay
					{
						componentType = "TransportFeedDisplayComponent";
						source = "PrimaryGunner";
					};
					class VehicleMissileDisplay
					{
						componentType = "TransportFeedDisplayComponent";
						source = "Missile";
					};
					class SensorDisplay
					{
						componentType = "SensorsDisplayComponent";
						range[] = {16000,16000,16000,8000};
						resource = "RscCustomInfoSensors";
					};
				};
			};
			class TransportCounterMeasuresComponent;
		};
		//Deals with user actions from the scroll wheel.
		class UserActions: UserActions
		{
			class rampOpen
			{
				available=0;
				showWindow=0;
				displayName="Ramp Open";
				position="pilotview";
				radius=9;
				condition="((player == driver this) AND (this animationphase 'ramp' ==0))";
				statement="this animateSource ['ramp',1,1];";
				onlyforplayer=0;
				shortcut="User18";
			};
			class rampClose
			{
				available=0;
				showWindow=0;
				displayName="Ramp Close";
				position="pilotview";
				radius=9;
				condition="((player == driver this) AND (this animationphase 'ramp' ==1))";
				statement="this animateSource ['ramp',0,1];";
				onlyforplayer=0;
				shortcut="User18";
			};
			class ThrusterEngage
			{
				displayName="";
				displayNameDefault="";
				textToolTip="<t color='#4C9900'>[Impulsor On]</t>";
				position="pilotview";
				radius=20;
				priority=21;
				onlyForPlayer=1;
				condition="(!(this getvariable [""impulsorStatus"",false]) AND (player == driver this) AND (alive this) AND (speed this >5) )";
				statement="this execVM ""WPEC\WPEC_Core\Functions\initTE.sqf""";
			};
			class ThrusterDisngage: ThrusterEngage
			{
				priority=21;
				displayName="";
				displayNameDefault="";
				textToolTip="<t color='#FF9933'>[RepulsorBrake On]</t>";
				condition="((this getvariable [""impulsorStatus"",false]) AND (player == driver this) AND (alive this))";
				statement="this execVM ""WPEC\WPEC_Core\Functions\initTD.sqf""";
			};
			class ThrusterEngage_spam: ThrusterEngage
			{
				displayName="";
				displayNameDefault="";
				textToolTip="";
				position="pilotview";
				radius=20;
				priority=0;
				onlyForPlayer=1;
				condition="((player == driver this) AND (alive this) AND (speed this >5) )";
				statement="this execVM ""WPEC\WPEC_Core\Functions\initTE.sqf""";
				shortcut="User19";
			};
			class ThrusterDisngage_spam: ThrusterEngage
			{
				priority=0;
				displayName="";
				displayNameDefault="";
				textToolTip="";
				condition="((player == driver this) AND (alive this))";
				statement="this execVM ""WPEC\WPEC_Core\Functions\initTD.sqf""";
				shortcut="User20";
			};
		};
		//Deals with ACE actions in the vehicle.  Can be fairly buggy so use with caution and test with a working SQF script.  May not always work in editor so use a multiplayer setting.
		class ACE_SelfActions: ACE_SelfActions
		{
			
			//Adds a menu in ACE that displays the passengers who are alive in your vehicle for the pilot to see.
			class ACE_Passengers
			{
				condition="alive _target";
				displayName="Passengers";
				insertChildren="_this call ace_interaction_fnc_addPassengersActions";
				statement="";
			};
		};
		//Event Handler for when the weapon is fired.  Base 3AS script is used for this.
		class EventHandlers: DefaultEventhandlers
		{
			fired="_this call (uinamespace getvariable 'BIS_fnc_effectFired');_this execVM '\3AS\3as_Laat\LAATI\scripts\fired_laser.sqf';";
		};
		//Defines the pilot camera they can use for firing their weapons and defines the views they have.
		class pilotCamera
		{
			class OpticsIn
			{
				class Wide
				{
					opticsDisplayName="WFOV";
					initAngleX=0;
					minAngleX=-10;
					maxAngleX=90;
					initAngleY=0;
					minAngleY=-90;
					maxAngleY=90;
					initFov=0.42500001;
					minFov=0.42500001;
					maxFov=0.42500001;
					directionStabilized=1;
					//Optics View Modes and Effects:
					thermalMode[]={0,1};
					visionMode[]=
					{
						"Normal",
						"NVG",
						"Ti"
					};
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
					opticsPPEffects[]=
					{
						"OpticsCHAbera2",
						"OpticsBlur2"
					};
					// All other optics inherit from this so they will all have the view modes od the wide view defined above.
				};
				class zoomx4: Wide
				{
					opticsDisplayName="NFOV";
					initFov="(0.425/4)";
					minFov="(0.425/4)";
					maxFov="(0.425/4)";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				class zoomX8: Wide
				{
					opticsDisplayName="NFOV";
					initFov="(0.42/8)";
					minFov="(0.42/8)";
					maxFov="(0.42/8)";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				class zoomX20: Wide
				{
					opticsDisplayName="NFOV";
					initFov="(0.42/20)";
					minFov="(0.42/20)";
					maxFov="(0.42/20)";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				class zoomX50: Wide
				{
					opticsDisplayName="NFOV";
					initFov="(0.42/50)";
					minFov="(0.42/50)";
					maxFov="(0.42/50)";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				class zoomX70: Wide
				{
					opticsDisplayName="NFOV";
					initFov="(0.42/70)";
					minFov="(0.42/70)";
					maxFov="(0.42/70)";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				showMiniMapInOptics=1;
				showUAVViewInOptics=0;
				showSlingLoadManagerInOptics=1;
			};
			minTurn=-180;
			maxTurn=180;
			initTurn=0;
			minElev=-10;
			maxElev=90;
			initElev=-10;
			maxXRotSpeed=0.30000001;
			maxYRotSpeed=0.30000001;
			pilotOpticsShowCursor=1;
			controllable=1;
		};
		class ViewPilot
		{
			initAngleX=0;
			minAngleX=-55;
			maxAngleX=85;
			initAngleY=0;
			minAngleY=-150;
			maxAngleY=150;
			minFov=0.25;
			maxFov=1.25;
			initFov=0.75;
			minMoveX=-100;
			maxMoveX=100;
			minMoveY=0;
			maxMoveY=0;
			minMoveZ=0;
			maxMoveZ=0;
		};
		class Exhausts
		{
			class Exhaust1
			{
				position="exhaust1";
				direction="exhaust1_dir";
				effect="ExhaustsEffectHeliBig";
			};
			class Exhaust2
			{
				position="exhaust2";
				direction="exhaust2_dir";
				effect="ExhaustsEffectHeliBig";
			};
		};
	};
	class 104th_3AS_LAAT_Turrets: 104th_3AS_LAAT_Turrets_Base
	{
		scope = Public;
		scopecurator = Public;
		displayName="LAAT/I (Turrets)";
	};
	class 104th_3AS_LAAT_Doors: 104th_3AS_LAAT_Doors_Base
	{
		scope = Public;
		scopecurator = Public;
		displayName="LAAT/I (Doors)";
	};
	class 104th_3AS_LAAT_Floodlights: 104th_3AS_LAAT_Floodlights_Base
	{
		scope = Public;
		scopecurator = Public;
		displayName="LAAT/I (Floodlights)";
	};
};