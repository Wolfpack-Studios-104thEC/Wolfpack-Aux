#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        addonRootClass = QADDON;
        name = COMPONENT_NAME;
        units[] = {
            QGVAR(Arc170)
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
class VehicleSystemsTemplateLeftPilot: DefaultVehicleSystemsDisplayManagerLeft
{
	class Components;
};
class VehicleSystemsTemplateRightPilot: DefaultVehicleSystemsDisplayManagerRight
{
	class Components;
};
class DefaultEventhandlers;

class CfgVehicles {
	class Plane_Fighter_03_dynamicLoadout_base_F;
	class 3as_arc_170_base: Plane_Fighter_03_dynamicLoadout_base_F
	{
		class Turrets
        {
			class LaserPilot;
			class Reargun;
        };
		class Components;
		class ACE_SelfActions;
		class AnimationSources;
	};
    class NCA_ARC170C: 3as_arc_170_base
    {
        scope = 2;
		scopecurator = 2;
		displayName="[104th] ARC-170";
		author="Wolfpack Studios";
		side = 1;
        faction= QEGVAR(faction,eclipse);
		//vehicleClass = "GAR_LAATCatNSub";
		editorSubcategory=QEGVAR(edsubcat,heli);
		driverCanEject = 1;
		//crew = "NCA_cloneArmor_unit_tauntaunEnlisted";
		acceleration=400;
		maxSpeed=645;
		maxOmega=2500;
		hiddenselections[] =
		{
			"camo1",
			"camo2",
			"guns",
			"glass"
		};
		hiddenselectionstextures[] =
		{
			"\z\NCA\addons\vehicles\aircraft\arc170\data\ARC170_main_21st_co.paa",
			"\z\NCA\addons\vehicles\aircraft\arc170\data\ARC170_wings_21st_co.paa",
			"\z\NCA\addons\vehicles\aircraft\arc170\data\ARC170_guns_21st_co.paa",
			"a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca.paa"
		};
        weapons[] =
		{
			"Laserdesignator_pilotCamera",
			"NCA_voltic_plasma_weapon",
			"NCA_coaxium_plasma_weapon",
			"NCA_chaser_A2A_missile_launcher",
			"NCA_hammer_AGM_missile_launcher",
			"NCA_oro_AGM_missile_launcher",
			"CMFlareLauncher"
		};
		magazines[] =
		{
			"Laserbatteries",
			"NCA_voltic_plasma_magazine",
			"NCA_voltic_plasma_magazine",
			"NCA_voltic_plasma_magazine",
			"NCA_voltic_plasma_magazine",
			"NCA_coaxium_plasma_magazine",
			"NCA_coaxium_plasma_magazine",
			"NCA_coaxium_plasma_magazine",
			"NCA_chaser_A2A_missile_magazine",
			"NCA_chaser_A2A_missile_magazine",
			"NCA_hammer_AGM_missile_magazine",
			"NCA_hammer_AGM_missile_magazine",
			"NCA_hammer_AGM_missile_magazine",
			"NCA_hammer_AGM_missile_magazine",
			"NCA_oro_AGM_missile_fixedwing_magazine",
			"NCA_oro_AGM_missile_fixedwing_magazine",
			"120Rnd_CMFlare_Chaff_Magazine",
			"120Rnd_CMFlare_Chaff_Magazine",
			"120Rnd_CMFlare_Chaff_Magazine",
			"120Rnd_CMFlare_Chaff_Magazine",
			"120Rnd_CMFlare_Chaff_Magazine"
		};
		soundLocked[] = {"\z\NCA\addons\vehicles\aircraft\sounds\targeted_alarm.ogg", 1.0, 1};
		soundIncommingMissile[] = {"\z\NCA\addons\vehicles\aircraft\sounds\incomingMissile_alarm.ogg", 1.0, 1};
		class AnimationSources: AnimationSources
		{
			class SFoil
			{
				source="user";
				animPeriod=1;
				initPhase=1;
			};
			class Muzzle_Flash
			{
				source="ammorandom";
				weapon="NCA_coaxium_plasma_weapon";
			};
			class Muzzle_Flash2
			{
				source="ammorandom";
				weapon="NCA_voltic_plasma_weapon";
			};
			class Muzzle_Flash3
			{
				source="ammorandom";
				weapon="NCA_coaxium_plasma_weapon";
			};
			class recoil_source
			{
				source="reload";
				weapon="NCA_coaxium_plasma_weapon";
			};
		};
		class Turrets: Turrets
		{
			class LaserPilot: LaserPilot
            {
                weapons[] =
                {
                    "Laserdesignator_pilotCamera",
                    "NCA_green_CAP_plasma_weapon"
                };
                magazines[] =
                {
                    "Laserbatteries",
                    "NCA_green_CAP_plasma_x1200_mag",
                    "NCA_green_CAP_plasma_x1200_mag",
                    "NCA_green_CAP_plasma_x1200_mag",
                    "NCA_green_CAP_plasma_x1200_mag",
                };
            };
			class Reargun: Reargun
            {
                weapons[] =
                {
                    "NCA_green_CAP_plasma_weapon",
                };
                magazines[] =
                {
                    "NCA_green_CAP_plasma_x1200_mag",
                    "NCA_green_CAP_plasma_x1200_mag",
                    "NCA_green_CAP_plasma_x1200_mag",
                    "NCA_green_CAP_plasma_x1200_mag",
                };
            };
		};
        class Components: Components
		{
			class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftPilot
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
						range[] = {4000,8000,16000,32000};
						resource = "RscCustomInfoSensors";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightPilot
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
						range[] = {4000,8000,16000,32000};
						resource = "RscCustomInfoSensors";
					};
				};
			};
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange=0;
							maxRange=12000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=0;
							maxRange=12000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=1;
						};
						componentType = "IRSensorComponent";

						typeRecognitionDistance = 9000;
						angleRangeHorizontal = 90;
						angleRangeVertical = 135;
						maxFogSeeThrough = 0.85;

						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = 0;

						minSpeedThreshold = 0;
						maxSpeedThreshold = 1000;

						minTrackableSpeed = -1e10;
						maxTrackableSpeed = 1e10;

						minTrackableATL = -1e10;
						maxTrackableATL = 1e10;

						allowsMarking = 1;
						aimDown = 0;
						color[]={1,0,0,1};
					};

					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange=0;
							maxRange=8000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=0;
							maxRange=8000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						componentType = "ActiveRadarSensorComponent";

						typeRecognitionDistance = 6000;
						angleRangeHorizontal = 90;
						angleRangeVertical = 135;
						maxFogSeeThrough = -1;

						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = 0;

						minSpeedThreshold = 0;
						maxSpeedThreshold = 1000;

						minTrackableSpeed = -1e10;
						maxTrackableSpeed = 1e10;

						minTrackableATL = -1e10;
						maxTrackableATL = 1e10;

						allowsMarking = 1;
						aimDown = 20;
						animDirection = "";
						color[]={0,1,1,1};
					};

					class AntiRadiationSensorComponent: SensorTemplateAntiRadiation
					{
						componentType="PassiveRadarSensorComponent";
						class AirTarget {
							maxRange = 12000;
							minRange = 12000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget {
							maxRange = 12000;
							minRange = 12000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						typeRecognitionDistance = 20000;
						angleRangeHorizontal = 90;
						angleRangeVertical = 135;
						maxFogSeeThrough = 0.85;

						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = 0;

						minSpeedThreshold = 0;
						maxSpeedThreshold = 1000;

						minTrackableSpeed = -1e10;
						maxTrackableSpeed = 1e10;

						minTrackableATL = -1e10;
						maxTrackableATL = 1e10;

						allowsMarking = 1;
						aimDown = 45;
						animDirection = "";
						color[]= {0,1,1,1};
					};

					class VisualRadarSensorComponent: SensorTemplateVisual
					{
						class AirTarget
						{
							minRange	= 0;
							maxRange	= 1000;
							objectDistanceLimitCoef	= -1;
							viewDistanceLimitCoef	= -1;
						};
						class GroundTarget
						{
							minRange = 0;
							maxRange = 1000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef 	= -1;
						};
						componentType = "VisualSensorComponent";

						typeRecognitionDistance = 750;
						angleRangeHorizontal = 90;
						angleRangeVertical = 135;
						maxFogSeeThrough = -1;

						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = 0;

						minSpeedThreshold = 0;
						maxSpeedThreshold = 1000;

						minTrackableSpeed = -1e10;
						maxTrackableSpeed = 1e10;

						minTrackableATL = -1e10;
						maxTrackableATL = 1e10;

						allowsMarking = 1;
						aimDown = 0;
						color[]={1,1,0.5,0.80000001};
					};

					class LaserSensorComponent: SensorTemplateLaser
					{
						class AirTarget
						{
							minRange	= 0;
							maxRange	= 16000;
							objectDistanceLimitCoef	= -1;
							viewDistanceLimitCoef	= -1;
						};
						class GroundTarget
						{
							minRange = 0;
							maxRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef 	= -1;
						};
						componentType="LaserSensorComponent";
						angleRangeHorizontal=360;
						angleRangeVertical=180;
						aimDown=0;
						maxFogSeeThrough = 0.85;
					};

					class NVSensorComponent: SensorTemplateNV
					{
						class AirTarget
						{
							minRange	= 0;
							maxRange	= 16000;
							objectDistanceLimitCoef	= -1;
							viewDistanceLimitCoef	= -1;
						};
						class GroundTarget
						{
							minRange = 0;
							maxRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef 	= -1;
						};
						componentType="NVSensorComponent";
						angleRangeHorizontal=360;
						angleRangeVertical=180;
						aimDown=0;
						maxFogSeeThrough = 0.85;
					};

					class DataLinkSensorComponent: SensorTemplateDataLink
					{
						class AirTarget
						{
							minRange	= 0;
							maxRange	= 16000;
							objectDistanceLimitCoef	= -1;
							viewDistanceLimitCoef	= -1;
						};
						class GroundTarget
						{
							minRange = 0;
							maxRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef 	= -1;
						};
						componentType="DataLinkSensorComponent";
						allowsMarking=1;
						typeRecognitionDistance=0;
						color[]={1,1,1,0};
					};
				};
			};
			class TransportPylonsComponent
			{
				class pylons {};
				UIPicture = "";
			};
		};
		class pilotCamera
		{
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
					initFov = 0.42500001;
					minFov = 0.42500001;
					maxFov = 0.42500001;
					directionStabilized = 1;
					thermalMode[] = {0,1};
					visionMode[] =
					{
						"Normal",
						"NVG",
						"Ti"
					};
					gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
					opticsPPEffects[] =
					{
						"OpticsCHAbera2",
						"OpticsBlur2"
					};
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
			minTurn = -180;
			maxTurn = 180;
			initTurn = 0;
			minElev = -10;
			maxElev = 90;
			initElev = -10;
			maxXRotSpeed = 0.30000001;
			maxYRotSpeed = 0.30000001;
			pilotOpticsShowCursor = 1;
			controllable = 1;
		};
		class ViewPilot
		{
			initAngleX = 0;
			minAngleX = -55;
			maxAngleX = 85;
			initAngleY = 0;
			minAngleY = -150;
			maxAngleY = 150;
			minFov = 0.25;
			maxFov = 1.25;
			initFov = 0.75;
			minMoveX = -100;
			maxMoveX = 100;
			minMoveY = 0;
			maxMoveY = 0;
			minMoveZ = 0;
			maxMoveZ = 0;
		};
		defaultUserMFDvalues[] = {0, 1, 0, 1, 0};
    };
};
