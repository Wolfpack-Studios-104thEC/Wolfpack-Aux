#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        addonRootClass = QADDON;
        name = COMPONENT_NAME;
        units[] = {
            QGVAR(LAS_Bird),
            QGVAR(LAS_Bird_Guns)
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
class DefaultVehicleSystemsDisplayManagerLeft
{
	class Components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class Components;
};
class WPEC_impulsor_base;
class CfgVehicles
{
	class Helicopter;
	class Helicopter_Base_F: Helicopter
	{
		class Turrets;
		class HitPoints;
	};
	class Helicopter_Base_H: Helicopter_Base_F {
        class Turrets;
    };
    class 3AS_LAS_Base_F: Helicopter_Base_H
    {
        class Turrets: Turrets
		{
			class CopilotTurret;
			class MainTurret;
            class MainTurret1: MainTurret
            {
                class HitPoints;
            };
		};
        class Components;
        class RotorLibHelicopterProperties;
		class EventHandlers;
    };

    class GVAR(LAS_Bird): 3AS_LAS_Base_F
    {  
        scope = 2;
		scopecurator = 2;
		displayName="[104th] LAS 'Litle Bird' ";
		author="Wolfpack Studios";
        crew="3AS_Clone_P2_Pilot";
        side = 1;
        canFloat = 1; //Defines if the vehicle will sink in the water or not. This is used here to prevent water damage
		enableSweep = 1; //Enables AI to sweep over the target as a method of attack.
		enableGPS = 1; //Enables the crew to use GPS and Map even if they do not have one in their inventory.
        camouflage = 45; //How hard the vehicle is to see. Higher value means it is easier to see.  1 is default.
		audible = 4; //How easy it is to hear. Higher means it is easier to hear by AI. 1 is Default.
        faction= QEGVAR(faction,eclipse);
        editorSubcategory=QEGVAR(edsubcat,heli);
        crewCrashProtection = 0.1;
        tas_can_impulse = 0;
        class ls_impulsor: WPEC_impulsor_base {};
		epeImpulseDamageCoef = 0;
        memoryPointGun[]=
		{
			"z_gunl_muzzle",
			"z_gunr_muzzle"
		};
		gunBeg[]=
		{
			"z_gunl_muzzle",
			"z_gunr_muzzle"
		};
		gunEnd[]=
		{
			"z_gunl_chamber",
			"z_gunr_chamber"
		};
		smokeLauncherGrenadeCount=18;
		smokeLauncherVelocity=10;
		smokeLauncherOnTurret=0;
		smokeLauncherAngle=360;
        class ACE_Cargo
		{
			class Cargo
			{
				CARGO_XX(WPEC_RepairCrate,1);
				CARGO_XX(WPEC_AMMOCrate,1);
				CARGO_XX(WPEC_MedicCrate,1);
				CARGO_XX(WPEC_EODCrate,1);
				CARGO_XX(WPEC_GrenadesCrate,1);
			};
		};
        weapons[]=
		{
			"Laserdesignator_pilotCamera",
			"CMFlareLauncher",
			"WPEC_LAAT_Cannon_Low",
			"WPEC_SmokeLauncher",
			"SmokeLauncher"
		};
		magazines[]=
		{
			"Laserbatteries",
			"300Rnd_CMFlare_Chaff_Magazine",
			"300Rnd_CMFlare_Chaff_Magazine",
			"300Rnd_CMFlare_Chaff_Magazine",
			"WPEC_LAAT_Cannon_LowPower_Magazine",
			"WPEC_LAAT_Cannon_LowPower_Magazine",
			"WPEC_LAAT_Cannon_LowPower_Magazine",
			"WPEC_SmokeLauncherMag",
			"WPEC_SmokeLauncherMag",
			"WPEC_SmokeLauncherMag",
			"SmokeLauncherMag",
			"SmokeLauncherMag",
			"SmokeLauncherMag",
			"SmokeLauncherMag",
			
        };
		class EventHandlers: EventHandlers
		{
			fired="_this call (uinamespace getvariable 'BIS_fnc_effectFired');_this execVM '\3AS\3as_Laat\LAATI\scripts\fired_laser.sqf';";
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
		};
        class ACE_SelfActions
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
    };
    class GVAR(LAS_Bird_Guns): 3AS_LAS_Base_F
    {
        scope = 2;
		scopecurator = 2;
		displayName="[104th] LAS Guns 'Litle Bird' ";
		author="Wolfpack Studios";
        crew="3AS_Clone_P2_Pilot";
        side = 1;
        canFloat = 1; //Defines if the vehicle will sink in the water or not. This is used here to prevent water damage
		enableSweep = 1; //Enables AI to sweep over the target as a method of attack.
		enableGPS = 1; //Enables the crew to use GPS and Map even if they do not have one in their inventory.
        camouflage = 45; //How hard the vehicle is to see. Higher value means it is easier to see.  1 is default.
		audible = 4; //How easy it is to hear. Higher means it is easier to hear by AI. 1 is Default.
        faction= QEGVAR(faction,eclipse);
        editorSubcategory=QEGVAR(edsubcat,heli);
        crewCrashProtection = 0.1;
        tas_can_impulse = 0;
        class ls_impulsor: WPEC_impulsor_base {};
		epeImpulseDamageCoef = 0;
        
        model="\3AS\3AS_Republic_Heli\LAS\model\3AS_LAS_z6.p3d";
		transportsoldier=2;
		cargoProxyIndexes[]={1,2};
		getInProxyOrder[]={1,2};
        memoryPointGun[]=
		{
			"z_gunl_muzzle",
			"z_gunr_muzzle"
		};
		gunBeg[]=
		{
			"z_gunl_muzzle",
			"z_gunr_muzzle"
		};
		gunEnd[]=
		{
			"z_gunl_chamber",
			"z_gunr_chamber"
		};
        class Turrets: Turrets
		{
			class CopilotTurret;
			class MainTurret: MainTurret
			{
				gunnerName="Left Gunner";
				gunnerType="3AS_Rep_CloneTrooper_P2Pilot_F";
				primaryGunner=1;
				CanEject=0;
				isCopilot=0;
				gunnerCompartments="Compartment1";
				proxytype="CPGunner";
				proxyIndex=1;
				initElev=0;
				initTurn=90;
				minElev=-60;
				maxElev=30;
				minTurn="90 - 55";
				maxTurn="90 + 55";
				weapons[]=
				{
					"3AS_LAS_Z6_HE_W"
				};
				magazines[]=
				{
					"3AS_LAS_1000Rnd_Z6_HE_Mag",
					"3AS_LAS_1000Rnd_Z6_HE_Mag"
				};
				stabilizedInAxes=0;
				gunBeg="maingun_start";
				gunEnd="maingun_end";
				gunnerOutOpticsShowCursor=0;
				gunnerOpticsShowCursor=0;
				memoryPointGunnerOptics="gunnerOptics";
				gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Transport_01_Optics_Gunner_F";
				selectionFireAnim="zaslehMain";
				class ViewOptics
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					minFov=0.25;
					maxFov=1.25;
					initFov=0.75;
				};
				animationSourceHatch="";
				body="mainTurret";
				gun="mainGun";
				animationSourceBody="mainTurret";
				animationSourceGun="mainGun";
				gunnerAction="LAS_Gunner";
				gunnerInAction="LAS_Gunner";
				gunnerLeftHandAnimName="gunner_left_hand";
				gunnerRightHandAnimName="gunner_right_hand";
				gunnerLeftLegAnimName="gunner_1_legs";
				gunnerRightLegAnimName="gunner_1_legs";
				memoryPointsGetInGunner="pos_cargo";
				memoryPointsGetInGunnerDir="pos_cargo_dir";
				commanding=-1;
				LODTurnedIn=1000;
				LODTurnedOut=1000;
				castGunnerShadow=1;
				viewGunnerShadow=1;
				soundAttenuationTurret="HeliAttenuationGunner";
				playerPosition=3;
				disableSoundAttenuation=0;
				canUseScanners=0;
				class Hitpoints
				{
					class HitTurret1
					{
						armor=0.80000001;
						material=-1;
						name="gun1";
						passthrough=0.5;
						visual="gun1";
					};
					class HitGun1
					{
						armor=0.40000001;
						material=-1;
						name="gun2";
						passthrough=0.2;
						visual="gun2";
					};
				};
				class Reflectors
				{
					class Light
					{
						color[]={7000,7500,10000};
						ambient[]={70,75,100};
						intensity=50;
						size=1;
						innerAngle=15;
						outerAngle=65;
						coneFadeCoef=10;
						position="Light_b_pos";
						direction="Light_b_dir";
						hitpoint="Light_b_hitpoint";
						selection="Light_b";
						useFlare=1;
						flareSize=10;
						flareMaxDistance=250;
						dayLight=0;
						class Attenuation
						{
							start=0;
							constant=0;
							linear=1;
							quadratic=1;
							hardLimitStart=100;
							hardLimitEnd=200;
						};
					};
				};
			};
			class MainTurret1: MainTurret
			{
				gunnerName="Right Gunner";
				primaryGunner=0;
				proxyIndex=2;
				initTurn=-90;
				minTurn="-90 - 55";
				maxTurn="-90 + 55";
				weapons[]=
				{
					"3AS_LAS_Z6_HE_2_W"
				};
				magazines[]=
				{
					"3AS_LAS_1000Rnd_Z6_HE_Mag",
					"3AS_LAS_1000Rnd_Z6_HE_Mag"
				};
				gunBeg="maingun1_start";
				gunEnd="maingun1_end";
				memoryPointGunnerOptics="gunnerOptics1";
				selectionFireAnim="zaslehMain1";
				class ViewOptics
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					minFov=0.25;
					maxFov=1.25;
					initFov=0.75;
				};
				body="mainturret1";
				gun="maingun1";
				animationSourceBody="mainturret1";
				animationSourceGun="maingun1";
				gunnerAction="LAS_Gunner";
				gunnerInAction="LAS_Gunner";
				gunnerLeftHandAnimName="gunner1_left_hand";
				gunnerRightHandAnimName="gunner1_right_hand";
				gunnerLeftLegAnimName="gunner_1_legs";
				gunnerRightLegAnimName="gunner_1_legs";
				memoryPointsGetInGunner="pos_cargo";
				memoryPointsGetInGunnerDir="pos_cargo_dir";
				commanding=-2;
				class Hitpoints
				{
					class HitTurret2
					{
						armor=0.80000001;
						material=-1;
						name="gun1";
						passthrough=0.5;
						visual="gun1";
					};
					class HitGun2
					{
						armor=0.40000001;
						material=-1;
						name="gun2";
						passthrough=0.2;
						visual="gun2";
					};
				};
				class Reflectors: Reflectors
				{
					class Light: Light
					{
						position="Light_a_pos";
						direction="Light_a_dir";
					};
				};
			};
		};
        class ACE_Cargo
		{
			class Cargo
			{
				CARGO_XX(WPEC_RepairCrate,1);
				CARGO_XX(WPEC_AMMOCrate,1);
				CARGO_XX(WPEC_MedicCrate,1);
				CARGO_XX(WPEC_EODCrate,1);
				CARGO_XX(WPEC_GrenadesCrate,1);
			};
		};
        weapons[]=
		{
			"Laserdesignator_pilotCamera",
			"CMFlareLauncher",
			"WPEC_LAAT_Cannon_Low",
		};
		magazines[]=
		{
			"Laserbatteries",
			"300Rnd_CMFlare_Chaff_Magazine",
			"300Rnd_CMFlare_Chaff_Magazine",
			"300Rnd_CMFlare_Chaff_Magazine",
			"WPEC_LAAT_Cannon_LowPower_Magazine",
			"WPEC_LAAT_Cannon_LowPower_Magazine",
			"WPEC_LAAT_Cannon_LowPower_Magazine",
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
		};
        class ACE_SelfActions
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
    };
};