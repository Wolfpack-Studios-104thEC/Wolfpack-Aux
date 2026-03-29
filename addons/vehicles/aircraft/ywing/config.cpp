#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        addonRootClass = QADDON;
        name = COMPONENT_NAME;
        units[] = {
            QGVAR(Ywing)
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
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateLaser;
class SensorTemplateNV;
class DefaultVehicleSystemsDisplayManagerLeft;
class DefaultVehicleSystemsDisplayManagerRight;

class CfgVehicles {
	class Plane_Fighter_03_dynamicLoadout_base_F;
	class BTL_Base: Plane_Fighter_03_dynamicLoadout_base_F
	{
        class AnimationSources;
        class Components;
	};
    class GVAR(Ywing): BTL_Base
    {
        scope = 2;
		scopecurator = 2;
		displayName="[104th] Y-wing";
		author="Wolfpack Studios";
		side = 1;
        faction= QEGVAR(faction,eclipse);
		//vehicleClass = "GAR_LAATCatNSub";
		editorSubcategory=QEGVAR(edsubcat,fixedwing);
		driverCanEject = 1;
		//crew = "WPEC_cloneArmor_unit_tauntaunEnlisted";

		armor=400;
		acceleration=250;
		maxSpeed=580;
        //Flight model stuff. Oh god where to even start. If I get tistc enough about what these all do. If you know IRL aircraft physic and terms, all these are simple to understand
		landingAoa = 6*3.1415/180;
		landingSpeed = 215;
		stallSpeed = 190;
		draconicForceXCoef = 4.5;
		draconicForceYCoef = 3;
		draconicForceZCoef = 6;
		airFriction0[] = {100,50,12};
		airFriction1[] = {100,50,12};
		airFriction2[] = {100,50,12};
		cost = 1000000;
		threat[] = {0.2,0.7,0.7};
        weapons[] =
		{
			"Laserdesignator_pilotCamera",
			"WPEC_LAAT_Cannon_Low",
			"WPEC_coaxium_plasma_weapon",
			"CMFlareLauncher"
		};
		magazines[] =
		{
			"Laserbatteries",
			"WPEC_LAAT_Cannon_LowPower_Magazine",
			"WPEC_LAAT_Cannon_LowPower_Magazine",
			"WPEC_LAAT_Cannon_LowPower_Magazine",
			"WPEC_coaxium_plasma_magazine",
			"WPEC_coaxium_plasma_magazine",
			"WPEC_coaxium_plasma_magazine",
			"120Rnd_CMFlare_Chaff_Magazine",
			"120Rnd_CMFlare_Chaff_Magazine",
			"120Rnd_CMFlare_Chaff_Magazine",
			"120Rnd_CMFlare_Chaff_Magazine",
			"120Rnd_CMFlare_Chaff_Magazine"
		};
        hiddenselections[] =
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenselectionstextures[] =
		{
			"3as\3as_btlb\data\chasis_co.paa",
			"3as\3as_btlb\data\detail_co.paa",
			"3as\3as_btlb\data\interior_co.paa"
		};
		class EjectionSystem
		{
			EjectionSeatEnabled = 1;
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
							minRange = 6000;
							maxRange = 6000;
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
						angleRangeHorizontal = 180;
						angleRangeVertical = 180;
						maxTrackableSpeed = 400;
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
							minRange = 8000;
							maxRange = 8000;
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
						maxTrackableSpeed = 100;
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
							minRange = 20000;
							maxRange = 20000;
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
						typeRecognitionDistance = 8000;
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
							minRange = 10000;
							maxRange = 10000;
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
						typeRecognitionDistance = 8000;
						angleRangeHorizontal = 140;
						angleRangeVertical = 180;
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
			class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
			{
				defaultDisplay = "EmptyDisplay";
				class Components
				{
					class EmptyDisplay
					{
						componentType = "EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType = "MinimapDisplayComponent";
						resource = "RscCustomInfoMiniMap";
					};
					class VehicleDriverDisplay
					{
						componentType = "TransportFeedDisplayComponent";
						source = "Driver";
					};
					class VehicleMissileDisplay
					{
						componentType = "TransportFeedDisplayComponent";
						source = "Missile";
					};
					class SensorDisplay
					{
						componentType = "SensorsDisplayComponent";
						range[] = {8000,2000,4000,16000,30000};
						resource = "RscCustomInfoSensors";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
			{
				defaultDisplay = "SensorDisplay";
				class Components
				{
					class EmptyDisplay
					{
						componentType = "EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType = "MinimapDisplayComponent";
						resource = "RscCustomInfoMiniMap";
					};
					class VehicleDriverDisplay
					{
						componentType = "TransportFeedDisplayComponent";
						source = "Driver";
					};
					class VehicleMissileDisplay
					{
						componentType = "TransportFeedDisplayComponent";
						source = "Missile";
					};
					class SensorDisplay
					{
						componentType = "SensorsDisplayComponent";
						range[] = {8000,2000,4000,16000,30000};
						resource = "RscCustomInfoSensors";
					};
				};
			};
			class TransportPylonsComponent
			{
				UIPicture="3as\3AS_BTLB\data\ui\pylon_ywing.paa";
				class pylons
				{
					class pylons1
					{
						hardpoints[]=
						{
							"WPEC_Ywing_Universal_1_2_Missile_rail"
						};
						attachment="WPEC_Unguided_Bomb_mag";
						priority=10;
						maxweight=2500;
						UIposition[]={0.5,0.25};
					};
					class pylons2: pylons1
					{
						UIposition[]={0.15000001,0.25};
						mirroredMissilePos=1;
					};
					class pylons3: pylons1
					{
						hardpoints[]=
						{
							"WPEC_Ywing_Universal_3_6_Missile_rail"
						};
						attachment="WPEC_Dianoga_pylon_x2_WGM_mag";
						priority=9;
						maxweight=2500;
						UIposition[]={0.55000001,0.34999999};
					};
					class pylons4: pylons3
					{
						UIposition[]={0.1,0.34999999};
						mirroredMissilePos=3;
					};
					class pylons5: pylons3
					{
						attachment="WPEC_Guided_Bomb_mag";
						priority=7;
						maxweight=5000;
						UIposition[]={0.60000002,0.44999999};
					};
					class pylons6: pylons5
					{
						UIposition[]={0.050000001,0.44999999};
						mirroredMissilePos=5;
					};
					class pylons7: pylons1
					{
						hardpoints[]=
						{
							"WPEC_Ywing_Universal_7_8_Missile_rail"
						};
						attachment="WPEC_Maramu_pylon_x1_A2A_mag";
						priority=9;
						maxweight=2500;
						UIposition[]={0.44999999,0.40000001};
					};
					class pylons8: pylons7
					{
						UIposition[]={0.2,0.40000001};
						mirroredMissilePos=7;
					};
				};
				/*class presets
				{
					class empty
					{
						displayName="$STR_empty";
						attachment[]={};
					};
					class AA
					{
						displayName="$STR_A3_cfgmagazines_titan_aa_dns";
						attachment[]=
						{
							"PylonRack_Bomb_SDB_x4",
							"PylonRack_Bomb_SDB_x4",
							"PylonRack_Missile_AMRAAM_D_x2",
							"PylonRack_Missile_AMRAAM_D_x2",
							"PylonRack_Missile_BIM9X_x2",
							"PylonRack_Missile_BIM9X_x2",
							"PylonRack_Bomb_SDB_x4",
							"PylonRack_Bomb_SDB_x4"
						};
					};
					class CAS
					{
						displayName="$STR_A3_CAS_PRESET_DISPLAYNAME";
						attachment[]=
						{
							"PylonRack_Bomb_SDB_x4",
							"PylonRack_Bomb_SDB_x4",
							"PylonRack_Bomb_SDB_x4",
							"PylonRack_Bomb_SDB_x4",
							"PylonRack_Missile_AGM_02_x2",
							"PylonRack_Missile_AGM_02_x2",
							"PylonMissile_1Rnd_Bomb_04_F",
							"PylonMissile_1Rnd_Bomb_04_F"
						};
					};
				};*/
			};
		};
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
		class AnimationSources: AnimationSources
		{
			class Muzzle_Flash
			{
				source="ammorandom";
				weapon="WPEC_LAAT_Cannon_Low";
			};
			class Muzzle_Flash2
			{
				source="ammorandom";
				weapon="3AS_ARC_Light_Canon_Rear";
			};
		};
    };
};
