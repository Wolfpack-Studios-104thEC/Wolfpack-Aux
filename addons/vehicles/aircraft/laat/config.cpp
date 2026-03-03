#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        addonRootClass = QADDON;
        name = COMPONENT_NAME;
        units[] = {
            QGVAR(LAAT_turrets),
            QGVAR(LAAT_doors),
            QGVAR(LAAT_doors_lamps),
            QGVAR(LAAT_lamps)
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            QE_ADDON(vehicles)
        };
        VERSION_CONFIG;
    };
};

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
class WPEC_impulsor_base;

class CfgVehicles {
    class Air;
    class Helicopter: Air {
        class ACE_Actions;
    };
    class Helicopter_Base_F: Helicopter {
        class ACE_Actions: ACE_Actions {
            class ACE_MainActions;
        };
    };
    class Helicopter_Base_H: Helicopter_Base_F {
        class Turrets;
    };
	class 3AS_LAAT_Base: Helicopter_Base_H {
        class HitPoints {
            class HitHull;
            class HitFuel;
            class HitEngine;
            class HitHRotor;
            class HitVRotor;
            class HitAvionics;
        };

        class UserActions;
        class ACE_SelfActions;

        class Components;
        class RotorLibHelicopterProperties;

        class Turrets: Turrets {
            class Copilot;
            class LeftDoorgun;
            class RightDoorGun;
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
            class CargoTurret_05;
            class CargoTurret_06;
        };

        class AnimationSources;
    };
	class 3AS_LAAT_Mk1: 3AS_LAAT_Base {
        class AnimationSources: AnimationSources {
            class Doors;
            class Lamps;
            class Turrets;
        };
    };

	class GVAR(LAAT_turrets): 3AS_LAAT_Mk1 {
        scope = 2;
		scopecurator = 2;
		displayName="[104th] LAAT/I (Turrets)";
		author="Wolfpack Studios";
        side = 1;

		//Specific Defines:
		canFloat = 1; //Defines if the vehicle will sink in the water or not. This is used here to prevent water damage
		enableSweep = 1; //Enables AI to sweep over the target as a method of attack.
		enableGPS = 1; //Enables the crew to use GPS and Map even if they do not have one in their inventory.

		//Vehicle Threat Level to AI:
		//type = VAir; //Threat Type.  Defined at the top of the file.
		threat[] = {0.750001,0.8500001, 0.8500001}; //Threat to Soft Targets (Soldiers), Armor, and Air assets in that order.
		cost = 1000; //Higher cost means AI are more likely to target it.
		camouflage = 15; //How hard the vehicle is to see. Higher value means it is easier to see.  1 is default.
		audible = 8; //How easy it is to hear. Higher means it is easier to hear by AI. 1 is Default.

		//Factions Association:
        faction= QEGVAR(faction,eclipse);
		//vehicleClass = "GAR_LAATCatNSub";
		editorSubcategory=QEGVAR(edsubcat,heli);

		//Crew Specifics:
		//crew="WPEC_Phase_2_Unit_Trooper_CSP2";  //Deal with this later
		crewCrashProtection = 0.1; // Means crew takes 10% of the damage they normally would on a crash.

        //Impulsor
        tas_can_impulse = 0;
        class ls_impulsor: WPEC_impulsor_base {};
		epeImpulseDamageCoef = 0;

        //Flight Characteristics
        liftForceCoef = 2;
		bodyFrictionCoef = 5;
		cyclicAsideForceCoef = 4*1.2;
		cyclicForwardForceCoef = 2*1.2;
		altFullForce = 10000;
		altNoForce = 20000;

        ls_vehicles_rampAnims[] = {"ramp"};
        ls_vehicles_rampToggleSounds[] = {"ls_laat_ramp", "ls_laat_ramp"};

        //Weapons
        weapons[]=
		{
			"Laserdesignator_pilotCamera",
			"CMFlareLauncher",
			"WPEC_SmokeLauncher",
			"WPEC_LAAT_Cannon_Low",
			"WPEC_LAAT_Cannon_High",
			"WPEC_Maramu_A2A_MissileSystem",
            "WPEC_Hoska_A2A_MissileSystem",
			"WPEC_Dianoga_WGM_MissileSystem",
            "WPEC_Kaada_DF_MissileSystem"
		};
		magazines[]=
		{
			"Laserbatteries",
			"300Rnd_CMFlare_Chaff_Magazine",
			"300Rnd_CMFlare_Chaff_Magazine",
			"300Rnd_CMFlare_Chaff_Magazine",
			"WPEC_SmokeLauncherMag",
			"WPEC_SmokeLauncherMag",
			"WPEC_SmokeLauncherMag",
			"WPEC_LAAT_Cannon_LowPower_Magazine",
			"WPEC_LAAT_Cannon_LowPower_Magazine",
			"WPEC_LAAT_Cannon_LowPower_Magazine",
			"WPEC_LAAT_Cannon_HighPower_Magazine",
			"WPEC_LAAT_Cannon_HighPower_Magazine",
			"WPEC_LAAT_Cannon_HighPower_Magazine",
			"WPEC_Maramu_6Rnd_A2A_mag",
			"WPEC_Maramu_6Rnd_A2A_mag",
			"WPEC_Hoska_6Rnd_A2A_mag",
            "WPEC_Hoska_6Rnd_A2A_mag",
            "WPEC_Dianoga_4Rnd_WGM_mag",
            "WPEC_Dianoga_4Rnd_WGM_mag",
            "WPEC_Kaada_10Rnd_Unguided_Rocket_mag",
            "WPEC_Kaada_10Rnd_Unguided_Rocket_mag"
		};

        class Turrets: Turrets {
			class Gunner: Copilot {
				weapons[]=
				{
                    "WPEC_LAAT_Cannon_Low",
					"Laserdesignator_pilotCamera"
				};
				magazines[]=
				{
					"Laserbatteries",
                    "WPEC_LAAT_Cannon_LowPower_Magazine",
                    "WPEC_LAAT_Cannon_LowPower_Magazine",
                    "WPEC_LAAT_Cannon_LowPower_Magazine"
				};
				minelev = -60;
				minturn = -240;
				maxelev = 40;
				maxturn = -120;
				class OpticsIn
				{
					class Wide
					{
						opticsDisplayName = "WFOV";
						initAngleX = 0;
						minAngleX = -10;
						maxAngleX = 90;
						initAngleY = 0;
						minAngleY = -90;
						maxAngleY = 90;
						initFov = 0.425;
						minFov = 0.425;
						maxFov = 0.425;
						thermalMode[] = {0,1,2,3,4,5};
						visionMode[] = {"Normal","NVG","Ti"};
						gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
						opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur2"};
					};
					class zoomx4: Wide
					{
						opticsDisplayName = "NFOV";
						initFov = (0.425/4);
						minFov = (0.425/4);
						maxFov = (0.425/4);
						gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
					};
					class zoomX8: Wide
					{
						opticsDisplayName = "NFOV";
						initFov = (0.42/8);
						minFov = (0.42/8);
						maxFov = (0.42/8);
						gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
					};
					class zoomX20: Wide
					{
						opticsDisplayName = "NFOV";
						initFov = (0.42/20);
						minFov = (0.42/20);
						maxFov = (0.42/20);
						gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
					};
					class zoomX50: Wide
					{
						opticsDisplayName = "NFOV";
						initFov = (0.42/50);
						minFov = (0.42/50);
						maxFov = (0.42/50);
						gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
					};
					class zoomX70: Wide
					{
						opticsDisplayName = "NFOV";
						initFov =(0.42/70);
						minFov =(0.42/70);
						maxFov =(0.42/70);
						gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
					};
					showMiniMapInOptics = 1;
					showUAVViewInOptics = 0;
					showSlingLoadManagerInOptics = 1;
				};
				memorypointgunneroptics = "backview";
			};
			class LeftDoorgun: LeftDoorgun {
				/*weapons[] =
				{
					"NCA_ballBeam_weapon",
					"Laserdesignator_pilotCamera"
				};
				magazines[] =
				{
					"Laserbatteries",
					"Laserbatteries",
					"NCA_ballBeam_magazine",
					"NCA_ballBeam_magazine",
					"NCA_ballBeam_magazine",
					"NCA_ballBeam_magazine",
					"NCA_ballBeam_magazine"
				};*/
				class OpticsIn
				{
					class Wide
					{
						opticsDisplayName = "WFOV";
						initAngleX = 0;
						minAngleX = -10;
						maxAngleX = 90;
						initAngleY = 0;
						minAngleY = -90;
						maxAngleY = 90;
						initFov = 0.425;
						minFov = 0.425;
						maxFov = 0.425;
						thermalMode[] = {0,1,2,3,4,5};
						visionMode[] = {"Normal","NVG","Ti"};
						gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
						opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur2"};
					};
					class zoomx4: Wide
					{
						opticsDisplayName = "NFOV";
						initFov = (0.425/4);
						minFov = (0.425/4);
						maxFov = (0.425/4);
						gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
					};
					class zoomX8: Wide
					{
						opticsDisplayName = "NFOV";
						initFov = (0.42/8);
						minFov = (0.42/8);
						maxFov = (0.42/8);
						gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
					};
					class zoomX20: Wide
					{
						opticsDisplayName = "NFOV";
						initFov = (0.42/20);
						minFov = (0.42/20);
						maxFov = (0.42/20);
						gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
					};
					class zoomX50: Wide
					{
						opticsDisplayName = "NFOV";
						initFov = (0.42/50);
						minFov = (0.42/50);
						maxFov = (0.42/50);
						gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
					};
					class zoomX70: Wide
					{
						opticsDisplayName = "NFOV";
						initFov =(0.42/70);
						minFov =(0.42/70);
						maxFov =(0.42/70);
						gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
					};
					showMiniMapInOptics = 1;
					showUAVViewInOptics = 0;
					showSlingLoadManagerInOptics = 1;
				};
				memorypointgunneroptics = "FIXME";
				stabilizedInAxes = 3;
			};
			class RightDoorGun: RightDoorGun {
				/*weapons[] =
				{
					"NCA_ballBeam_weapon",
					"Laserdesignator_pilotCamera"
					};
				magazines[] =
				{
					"Laserbatteries",
					"NCA_ballBeam_magazine",
					"NCA_ballBeam_magazine",
					"NCA_ballBeam_magazine",
					"NCA_ballBeam_magazine",
					"NCA_ballBeam_magazine"
				};*/
				class OpticsIn
				{
					class Wide
					{
						opticsDisplayName = "WFOV";
						initAngleX = 0;
						minAngleX = -10;
						maxAngleX = 90;
						initAngleY = 0;
						minAngleY = -90;
						maxAngleY = 90;
						initFov = 0.425;
						minFov = 0.425;
						maxFov = 0.425;
						thermalMode[] = {0,1,2,3,4,5};
						visionMode[] = {"Normal","NVG","Ti"};
						gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
						opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur2"};
					};
					class zoomx4: Wide
					{
						opticsDisplayName = "NFOV";
						initFov = (0.425/4);
						minFov = (0.425/4);
						maxFov = (0.425/4);
						gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
					};
					class zoomX8: Wide
					{
						opticsDisplayName = "NFOV";
						initFov = (0.42/8);
						minFov = (0.42/8);
						maxFov = (0.42/8);
						gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
					};
					class zoomX20: Wide
					{
						opticsDisplayName = "NFOV";
						initFov = (0.42/20);
						minFov = (0.42/20);
						maxFov = (0.42/20);
						gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
					};
					class zoomX50: Wide
					{
						opticsDisplayName = "NFOV";
						initFov = (0.42/50);
						minFov = (0.42/50);
						maxFov = (0.42/50);
						gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
					};
					class zoomX70: Wide
					{
						opticsDisplayName = "NFOV";
						initFov =(0.42/70);
						minFov =(0.42/70);
						maxFov =(0.42/70);
						gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
					};
					showMiniMapInOptics = 1;
					showUAVViewInOptics = 0;
					showSlingLoadManagerInOptics = 1;
				};
				memorypointgunneroptics = "FIXME";
				stabilizedInAxes = 3;
			};
			class CargoTurret_01: CargoTurret_01 {
				memoryPointsGetInGunner = "pos_cargo";
				memoryPointsGetInGunnerDir = "pos_cargo_dir";
			};
			class CargoTurret_02: CargoTurret_02 {
				memoryPointsGetInGunner = "pos_cargo";
				memoryPointsGetInGunnerDir = "pos_cargo_dir";
			};
			class CargoTurret_03: CargoTurret_03 {};
			class CargoTurret_04: CargoTurret_04 {};
			class CargoTurret_05: CargoTurret_05 {};
			class CargoTurret_06: CargoTurret_06 {};
		};
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
		class RotorLibHelicopterProperties: RotorLibHelicopterProperties
		{
			RTDconfig = "A3\Air_F\Heli_Light_01\RTD_Heli_Light_01.xml";
			autoHoverCorrection[] = {0.28,2.88,0};
			defaultCollective = 0.635;
			maxTorque = 900;
			stressDamagePerSec = 0.0033333332;
			maxHorizontalStabilizerLeftStress = 10000;
			maxHorizontalStabilizerRightStress = 10000;
			maxVerticalStabilizerStress = 10000;
			horizontalWingsAngleCollMin = 0;
			horizontalWingsAngleCollMax = 0;
			maxMainRotorStress = 31000;
			maxTailRotorStress = 5200;
			retreatBladeStallWarningSpeed = 77.222;
		};
        class ACE_Cargo {
            class Cargo {
                //CARGO_XX(NCA_BARC,2);
                //CARGO_XX(NCA_FuelBox,1);
            };
        };
        class AnimationSources: AnimationSources {
            class Doors: Doors {
                initPhase = 0;
            };
            class Lamps: Lamps {
                initPhase = 0;
            };
            class Turrets: Turrets {
                initPhase = 1;
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
					initFov=(0.425/4);
					minFov=(0.425/4);
					maxFov=(0.425/4);
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				class zoomX8: Wide
				{
					opticsDisplayName="NFOV";
					initFov=(0.42/8);
					minFov=(0.42/8);
					maxFov=(0.42/8);
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				class zoomX20: Wide
				{
					opticsDisplayName="NFOV";
					initFov=(0.42/20);
					minFov=(0.42/20);
					maxFov=(0.42/20);
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				class zoomX50: Wide
				{
					opticsDisplayName="NFOV";
					initFov=(0.42/50);
					minFov=(0.42/50);
					maxFov=(0.42/50);
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				class zoomX70: Wide
				{
					opticsDisplayName="NFOV";
					initFov=(0.42/70);
					minFov=(0.42/70);
					maxFov=(0.42/70);
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
		//Texture Selections for the Garage:
		class TextureSources
		{
			class Apollo_Lead
			{
				displayName="Apollo Lead";
				author="Ghoul";
				factions[]=
				{
					QEGVAR(faction,eclipse)
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
					QEGVAR(faction,eclipse)
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
					QEGVAR(faction,eclipse)
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
        LAAT_INVENTORY
    };
    class GVAR(LAAT_doors): GVAR(LAAT_turrets) {
		author="Wolfpack Studios";
		displayName = "[104th] LAAT/I (Doors)";
        //editorPreview = "\z\NCA\addons\vehicles\aircraft\data\ui\editorPreviews\NCA_LAAT_doors.jpg";

		class AnimationSources: AnimationSources {
            class Doors: Doors {
                initPhase = 1;
            };
            class Lamps: Lamps {
                initPhase = 0;
            };
            class Turrets: Turrets {
                initPhase = 0;
            };
        };

        class Turrets: Turrets {
			class Copilot: Copilot {};
			class CargoTurret_01: CargoTurret_01 {};
			class CargoTurret_02: CargoTurret_02 {};
		};
	};
    class GVAR(LAAT_doors_lamps): GVAR(LAAT_turrets) {
		author="Wolfpack Studios";
        displayName = "[104th] LAAT/I (Lights-Doors)";
        //editorPreview = "\z\NCA\addons\vehicles\aircraft\data\ui\editorPreviews\NCA_LAAT_doors_lamps.jpg";

        class AnimationSources: AnimationSources {
            class Doors: Doors {
                initPhase = 1;
            };
            class Lamps: Lamps {
                initPhase = 1;
            };
            class Turrets: Turrets {
                initPhase = 0;
            };
        };
        class Reflectors
		{
			class Left
			{
				color[]={7000,7500,10000};
				ambient[]={70,75,100};
				intensity=550;
				size=10;
				innerAngle=25;
				outerAngle=280;
				coneFadeCoef=5;
				position="Light_L_Pos";
				direction="Light_L_Dir";
				hitpoint="Light_b_hitpoint";
				selection="Light_L_Lamp";
				useFlare=1;
				flareSize=25;
				flareMaxDistance=2000;
				dayLight=1;
				class Attenuation
				{
					start=0;
					constant=0;
					linear=1;
					quadratic=1;
					hardLimitStart=500;
					hardLimitEnd=700;
				};
			};
			class Right
			{
				color[]={7000,7500,10000};
				ambient[]={70,75,100};
				intensity=550;
				size=10;
				innerAngle=25;
				outerAngle=280;
				coneFadeCoef=5;
				position="Light_R_Pos";
				direction="Light_R_Dir";
				hitpoint="Light_b_hitpoint";
				selection="Light_R_Lamp";
				useFlare=1;
				flareSize=25;
				flareMaxDistance=2000;
				dayLight=1;
				class Attenuation
				{
					start=0;
					constant=0;
					linear=1;
					quadratic=1;
					hardLimitStart=700;
					hardLimitEnd=900;
				};
			};
		};
    };
    class GVAR(LAAT_lamps): GVAR(LAAT_turrets) {
		author="Wolfpack Studios";
        displayName = "[104th] LAAT/I (Lights)";
        //editorPreview = "\z\NCA\addons\vehicles\aircraft\data\ui\editorPreviews\NCA_LAAT_lamps.jpg";

        class AnimationSources: AnimationSources {
            class Doors: Doors {
                initPhase = 0;
            };
            class Lamps: Lamps {
                initPhase = 1;
            };
            class Turrets: Turrets {
                initPhase = 0;
            };
        };
        class Reflectors
		{
			class Left
			{
				color[]={7000,7500,10000};
				ambient[]={70,75,100};
				intensity=550;
				size=10;
				innerAngle=25;
				outerAngle=280;
				coneFadeCoef=5;
				position="Light_L_Pos";
				direction="Light_L_Dir";
				hitpoint="Light_b_hitpoint";
				selection="Light_L_Lamp";
				useFlare=1;
				flareSize=25;
				flareMaxDistance=2000;
				dayLight=1;
				class Attenuation
				{
					start=0;
					constant=0;
					linear=1;
					quadratic=1;
					hardLimitStart=700;
					hardLimitEnd=900;
				};
			};
			class Right
			{
				color[]={7000,7500,10000};
				ambient[]={70,75,100};
				intensity=550;
				size=10;
				innerAngle=25;
				outerAngle=280;
				coneFadeCoef=5;
				position="Light_R_Pos";
				direction="Light_R_Dir";
				hitpoint="Light_b_hitpoint";
				selection="Light_R_Lamp";
				useFlare=1;
				flareSize=25;
				flareMaxDistance=2000;
				dayLight=1;
				class Attenuation
				{
					start=0;
					constant=0;
					linear=1;
					quadratic=1;
					hardLimitStart=700;
					hardLimitEnd=900;
				};
			};
		};
    };
};
