#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        addonRootClass = QADDON;
        name = COMPONENT_NAME;
        units[] = {
            QGVAR(z95)
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

class CfgVehicles {
	class 3AS_Z95_VTOL_Dynamic_Base_F;
	class 3AS_Z95_VTOL_Dynamic_Base_F_H: 3AS_Z95_VTOL_Dynamic_Base_F {
		class Components;
        class ACE_SelfActions;
	};
    class GVAR(z95): 3AS_Z95_VTOL_Dynamic_Base_F_H
    {
        scope = 2;
		scopecurator = 2;
		displayName="[104th] Z-95";
		author="Wolfpack Studios";
		side = 1;
        faction= QEGVAR(faction,eclipse);
		//vehicleClass = "GAR_LAATCatNSub";
		editorSubcategory=QEGVAR(edsubcat,fixedwing);
        //editorPreview = "\z\NCA\addons\vehicles\aircraft\data\ui\editorPreviews\NCA_VWing.jpg";
		crew="3AS_Clone_P2_Pilot";
        HeadAimDown = -7.5;
		driverCanEject = 1;
		cost = 1000000;
		threat[] = {0.2,0.7,0.8};
		acceleration = 300;
		maxSpeed = 740;
        weapons[] =
		{
			"Laserdesignator_pilotCamera",
			"WPEC_LAAT_Cannon_Low",
			"CMFlareLauncher"
		};
		magazines[] =
		{
			"Laserbatteries",
			"WPEC_LAAT_Cannon_LowPower_Magazine",
			"WPEC_LAAT_Cannon_LowPower_Magazine",
			"WPEC_LAAT_Cannon_LowPower_Magazine",
			"120Rnd_CMFlare_Chaff_Magazine",
			"120Rnd_CMFlare_Chaff_Magazine",
			"120Rnd_CMFlare_Chaff_Magazine",
			"120Rnd_CMFlare_Chaff_Magazine",
			"120Rnd_CMFlare_Chaff_Magazine"
		};
        hiddenselections[] =
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenselectionstextures[] =
		{
			"3AS\3as_Z95\Data\body_co.paa",
			"3AS\3as_Z95\Data\cockpit_co.paa",
			"3AS\3as_saber\data\glass\glass_ca"
		};
		class EjectionSystem
		{
			EjectionSeatEnabled = 1;
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
					thermalMode[] = {0, 1};
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
		class Components: Components
		{
			class TransportPylonsComponent
			{
				class pylons
				{
					class pylons1
					{
						hardpoints[] =
						{
							"WPEC_z95_Universal_Missile_rail"
						};
						attachment = "WPEC_Dianoga_pylon_x1_WGM_mag";
						priority = 10;
						maxweight = 300;
						UIposition[] = {0.60000002,0.44999999};
					};
					class pylons2: pylons1
					{
						UIposition[] = {0.050000001,0.44999999};
						mirroredMissilePos = 1;
					};
					class pylons3: pylons1
					{
						priority = 9;
						maxweight = 2500;
						UIposition[] = {0.55000001,0.34999999};
					};
					class pylons4: pylons1
					{
						UIposition[] = {0.1,0.34999999};
						mirroredMissilePos = 3;
					};
					class pylons5: pylons1
					{
						hardpoints[] =
						{
							"WPEC_z95_Universal_Missile_rail"
						};
						attachment = "WPEC_Hoska_pylon_x1_A2A_mag";
						priority = 7;
						maxweight = 5000;
						UIposition[] = {0.5,0.25};
					};
					class pylons6: pylons5
					{
						UIposition[] = {0.15000001,0.25};
						mirroredMissilePos = 5;
					};
					class Pylons7
					{
						hardpoints[] =
						{
							"NCA_z95_Universal_Gun_rail"
						};
						priority = 5;
						attachment = "";
						maxweight = 4000;
						UIposition[] = {0.32499999,0.15000001};
					};
				};
				UIPicture = "3AS\3AS_z95\data\plane_z95_pylon_ca.paa";
			};
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange = 8000;
							maxRange = 8000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 4000;
							maxRange = 4000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						angleRangeHorizontal = 360;
						angleRangeVertical = 360;
						maxTrackableSpeed = 600;
						componentType = "IRSensorComponent";
						typeRecognitionDistance = 2000;
						maxFogSeeThrough = 0.995;
						color[] = {1,0,0,1};
						allowsMarking = 1;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						minSpeedThreshold = 0;
						maxSpeedThreshold = 0;
						animDirection = "";
						aimDown = 0;
						minTrackableSpeed = -1e+010;
						minTrackableATL = -1e+010;
						maxTrackableATL = 1e+010;
					};
					class VisualSensorComponent: SensorTemplateVisual
					{
						class AirTarget
						{
							minRange = 10000;
							maxRange = 10000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 6000;
							maxRange = 6000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						angleRangeHorizontal = 360;
						angleRangeVertical = 360;
						maxTrackableSpeed = 400;
						aimDown = 1;
						animDirection = "";
						componentType = "VisualSensorComponent";
						nightRangeCoef = 0;
						maxFogSeeThrough = 0.94;
						color[] = {1,1,0.5,0.80000001};
						typeRecognitionDistance = 2000;
						allowsMarking = 1;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						minSpeedThreshold = 0;
						maxSpeedThreshold = 0;
						minTrackableSpeed = -1e+010;
						minTrackableATL = -1e+010;
						maxTrackableATL = 1e+010;
					};
					class PassiveRadarSensorComponent: SensorTemplatePassiveRadar
					{
						componentType = "PassiveRadarSensorComponent";
						class AirTarget
						{
							minRange = 32000;
							maxRange = 32000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 20000;
							maxRange = 20000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						typeRecognitionDistance = 12000;
						angleRangeHorizontal = 360;
						angleRangeVertical = 360;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						minSpeedThreshold = 0;
						maxSpeedThreshold = 0;
						animDirection = "";
						aimDown = 0;
						color[] = {0.5,1,0.5,0.5};
						minTrackableSpeed = -1e+010;
						maxTrackableSpeed = 1e+010;
						minTrackableATL = -1e+010;
						maxTrackableATL = 1e+010;
						allowsMarking = 0;
					};
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange = 14000;
							maxRange = 14000;
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
						typeRecognitionDistance = 10000;
						angleRangeHorizontal = 180;
						angleRangeVertical = 200;
						groundNoiseDistanceCoef = 0.2;
						componentType = "ActiveRadarSensorComponent";
						maxGroundNoiseDistance = 200;
						minSpeedThreshold = 30;
						maxSpeedThreshold = 40;
						color[] = {0,1,1,1};
						allowsMarking = 1;
						animDirection = "";
						aimDown = 0;
						minTrackableSpeed = -1e+010;
						maxTrackableSpeed = 1e+010;
						minTrackableATL = -1e+010;
						maxTrackableATL = 1e+010;
					};
					class LaserSensorComponent: SensorTemplateLaser
					{
						componentType = "LaserSensorComponent";
						class AirTarget
						{
							minRange = 6000;
							maxRange = 6000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 6000;
							maxRange = 6000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						angleRangeHorizontal = 180;
						angleRangeVertical = 180;
						typeRecognitionDistance = 0;
						color[] = {1,1,1,0};
						allowsMarking = 1;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						minSpeedThreshold = 0;
						maxSpeedThreshold = 0;
						animDirection = "";
						aimDown = 0;
						minTrackableSpeed = -1e+010;
						maxTrackableSpeed = 1e+010;
						minTrackableATL = -1e+010;
						maxTrackableATL = 1e+010;
					};
					class NVSensorComponent: SensorTemplateNV
					{
						componentType = "NVSensorComponent";
						color[] = {1,1,1,0};
						typeRecognitionDistance = 0;
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
						angleRangeHorizontal = 90;
						angleRangeVertical = 90;
						allowsMarking = 1;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						minSpeedThreshold = 0;
						maxSpeedThreshold = 0;
						animDirection = "";
						aimDown = 0;
						minTrackableSpeed = -1e+010;
						maxTrackableSpeed = 1e+010;
						minTrackableATL = -1e+010;
						maxTrackableATL = 1e+010;
					};
				};
			};
		};
    };
};
