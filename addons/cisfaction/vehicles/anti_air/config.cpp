class CfgPatches
{
	class WPEC_Vehicles_Anti_Air
	{
		author="WPEC Dev";
		requiredAddons[]=
		{
			"A3_Armor_F_Beta"
		};
		addonRootClass="WPEC_CIS_Vehicles";
		units[]=
		{
			"WPEC_CIS_Static_M41",
			"WPEC_CIS_Scythe",
			"WPEC_CIS_GAT_AA",
			"WPEC_CIS_Flak_Cannon"
		};
		weapons[]=
		{
			"WPEC_CIS_Vic_Gatling"
		};
	};
};
class CfgWeapons
{
	class CannonCore;
	class weapon_Cannon_Phalanx;
	class WPEC_CIS_Vic_Gatling: weapon_Cannon_Phalanx
	{
		displayName="CIS Gatling Gun ";
		magazines[]=
		{
			"WPEC_CIS_AA_GatMAG",
			"WPEC_CIS_AA_ScytheMAG"
		};
		class manual: CannonCore
		{
			displayName="$STR_A3_autocannon_35mm_manual0";
			textureType="fullAuto";
			autoFire=1;
			burst=2;
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				soundsetshot[]=
				{
					"3AS_Flakcanon_SoundSet"
				};
			};
			soundContinuous=0;
			soundBurst=0;
			reloadTime=0.054545499;
			dispersion=0.0044999998;
			aiRateOfFire=1;
			aiRateOfFireDistance=10;
			minRange=0;
			minRangeProbab=0.0099999998;
			midRange=1;
			midRangeProbab=0.0099999998;
			maxRange=2;
			maxRangeProbab=0.0099999998;
		};
		class close: manual
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=12;
			burstRangeMax=28;
			aiRateOfFire=0.5;
			aiRateOfFireDispersion=0.5;
			aiRateOfFireDistance=200;
			minRange=1;
			minRangeProbab=0.1;
			midRange=100;
			midRangeProbab=0.75;
			maxRange=400;
			maxRangeProbab=0.85000002;
		};
		class short: close
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=18;
			burstRangeMax=42;
			aiRateOfFire=1;
			aiRateOfFireDispersion=2;
			aiRateOfFireDistance=300;
			minRange=200;
			minRangeProbab=0.30000001;
			midRange=400;
			midRangeProbab=0.85000002;
			maxRange=750;
			maxRangeProbab=0.85000002;
		};
		class medium: close
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=18;
			burstRangeMax=42;
			aiRateOfFire=2;
			aiRateOfFireDispersion=4;
			aiRateOfFireDistance=800;
			minRange=600;
			minRangeProbab=0.60000002;
			midRange=750;
			midRangeProbab=0.85000002;
			maxRange=1250;
			maxRangeProbab=0.60000002;
		};
		class far: close
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=18;
			burstRangeMax=42;
			aiRateOfFire=2;
			aiRateOfFireDispersion=7;
			aiRateOfFireDistance=1200;
			minRange=1000;
			minRangeProbab=0.69999999;
			midRange=1250;
			midRangeProbab=0.60000002;
			maxRange=2500;
			maxRangeProbab=0.1;
		};
	};
};
class CfgMagazines
{
	class magazine_Cannon_Phalanx_x1550;
	class WPEC_CIS_AA_GatMAG: magazine_Cannon_Phalanx_x1550
	{
		displayNameShort="AA Ammo";
		displayName="AA Ammo";
		ammo="WPEC_CIS_AA_Ammo";
		count=1000;
		tracersEvery=1;
		initSpeed=1036;
		maxLeadSpeed=200;
		muzzleImpulseFactor[]={0,0};
	};
	class WPEC_CIS_AA_ScytheMAG: WPEC_CIS_AA_GatMAG
	{
		ammo="WPEC_CIS_AA_Ammo";
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
	class components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class VehicleSystemsTemplateLeftPilot: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightPilot: DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class CfgDestructPos
{
	scope=1;
	class DelayedDestruction;
	class DelayedDestructionAmmo: DelayedDestruction
	{
		timeBeforeHiding="21";
		hideDuration="10";
	};
};
class Optics_Armored;
class Optics_Gunner_APC_01: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class WeaponCloudsMGun;
class DefaultEventhandlers;
class CfgAmmo
{
	class ammo_AAA_Gun35mm_AA;
	class WPEC_CIS_AA_Ammo: ammo_AAA_Gun35mm_AA
	{
		aiAmmoUsageFlags="256";
		allowAgainstInfantry=0;
		cmImmunity=1;
		trackLead=200;
		trackOversteer=200;
		airLock=1;
		hit=50;
		indirectHit=15;
		indirectHitRange=0.2;
		caliber=1.5;
		explosive=0.60000002;
		cost=1;
		model="3AS\3AS_Weapons\Data\tracer_red.p3d";
		effectFly="3AS_PlasmaBolt_Medium_Red_Fly";
		tracerScale=1;
		brightness=100000;
		tracerColor[]=
		{
			"Red"
		};
		tracerStartTime=0;
		tracerEndTime=10;
		timetolive=4;
		nvgOnly=0;
		typicalSpeed=125;
		coefGravity=0;
		visibleFire=32;
		audibleFire=32;
		visibleFireTime=4;
		dangerRadiusBulletClose=16;
		dangerRadiusHit=40;
		suppressionRadiusBulletClose=10;
		suppressionRadiusHit=14;
		craterEffects="";
		craterShape="";
		airFriction=0;
		muzzleEffect="";
		deflecting=0;
		initTime=0;
		weaponLockSystem=0;
		gravityFactor=0;
		ACE_caliber=1;
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						typeRecognitionDistance=16000;
						angleRangeHorizontal=360;
						angleRangeVertical=360;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=1600;
						minSpeedThreshold=0;
						maxSpeedThreshold=2000;
						class AirTarget
						{
							minRange=0;
							maxRange=16000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=0;
							maxRange=16000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
					};
					class NVSensorComponent: SensorTemplateNV
					{
						typeRecognitionDistance=16000;
						angleRangeHorizontal=360;
						angleRangeVertical=360;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=1600;
						minSpeedThreshold=0;
						maxSpeedThreshold=2000;
						class AirTarget
						{
							minRange=0;
							maxRange=16000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=0;
							maxRange=16000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
					};
					class LaserSensorComponent: SensorTemplateLaser
					{
						typeRecognitionDistance=16000;
						angleRangeHorizontal=360;
						angleRangeVertical=360;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=1600;
						minSpeedThreshold=0;
						maxSpeedThreshold=2000;
						class AirTarget
						{
							minRange=0;
							maxRange=16000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=0;
							maxRange=16000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
					};
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						typeRecognitionDistance=16000;
						angleRangeHorizontal=360;
						angleRangeVertical=360;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=1600;
						minSpeedThreshold=0;
						maxSpeedThreshold=2000;
						class AirTarget
						{
							minRange=0;
							maxRange=16000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=0;
							maxRange=16000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
					};
					class PassiveRadarSensorComponent: SensorTemplatePassiveRadar
					{
						typeRecognitionDistance=16000;
						angleRangeHorizontal=360;
						angleRangeVertical=360;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=1600;
						minSpeedThreshold=0;
						maxSpeedThreshold=2000;
						class AirTarget
						{
							minRange=0;
							maxRange=16000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=0;
							maxRange=16000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
					};
					class VisualSensorComponent: SensorTemplateVisual
					{
						typeRecognitionDistance=16000;
						angleRangeHorizontal=360;
						angleRangeVertical=360;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=1600;
						minSpeedThreshold=0;
						maxSpeedThreshold=2000;
						class AirTarget
						{
							minRange=0;
							maxRange=16000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=0;
							maxRange=16000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
					};
					class ManSensorComponent: SensorTemplateMan
					{
						typeRecognitionDistance=16000;
						angleRangeHorizontal=360;
						angleRangeVertical=360;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=1600;
						minSpeedThreshold=0;
						maxSpeedThreshold=2000;
						class AirTarget
						{
							minRange=0;
							maxRange=16000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=0;
							maxRange=16000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
					};
					class DataLinkSensorComponent: SensorTemplateDataLink
					{
						typeRecognitionDistance=16000;
						angleRangeHorizontal=360;
						angleRangeVertical=360;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=1600;
						minSpeedThreshold=0;
						maxSpeedThreshold=2000;
						class AirTarget
						{
							minRange=0;
							maxRange=16000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=0;
							maxRange=16000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
					};
				};
			};
		};
	};
};
class CfgVehicles
{
	class All;
	class Strategic;
	class Land;
	class LandVehicle: Land
	{
		class ViewPilot;
		class ViewGunner;
		class NewTurret;
	};
	class StaticWeapon: LandVehicle
	{
		class Turrets
		{
			class MainTurret;
		};
	};
	class StaticMGWeapon: StaticWeapon
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics;
			};
		};
		class Components;
	};
	class AAA_System_01_base_F: StaticMGWeapon
	{
		class Components: Components
		{
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
			};
		};
	};
	class OPTRE_Scythe: AAA_System_01_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};
	class WPEC_CIS_Scythe: OPTRE_Scythe
	{
		displayName="[WPEC-CIS] AA Scythe";
		scope=2;
		scopeCurator=2;
		side=0;
		faction="WPEC_CIS";
		editorSubcategory="WPEC_CIS_AA";
		hiddenSelectionsTextures[]=
		{
			"\OPTRE_Weapons_Turrets\Scythe\data\aaScythe_Black_co.paa",
			"\OPTRE_Weapons_Turrets\Base\aabase_Black_co.paa",
			"",
			""
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"WPEC_CIS_Vic_Gatling"
				};
				magazines[]=
				{
					"WPEC_CIS_AA_ScytheMAG",
					"WPEC_CIS_AA_ScytheMAG",
					"WPEC_CIS_AA_ScytheMAG"
				};
			};
		};
	};
	class 3as_FlakCannon_Base;
	class WPEC_CIS_Flak_Cannon: 3as_FlakCannon_Base
	{
		scope=2;
		side=0;
		scopeCurator=2;
		faction="WPEC_CIS";
		displayName="CIS Flak Cannon";
		editorSubcategory="WPEC_CIS_AA";
		crew="WPEC_CIS_B1_Droid_Crew";
		picture="\A3\Static_f_gamma\data\ui\gear_StaticTurret_MG_CA.paa";
		UiPicture="\A3\Static_f_gamma\data\ui\gear_StaticTurret_MG_CA.paa";
	};
	class 3AS_GAT_base_F;
	class 3AS_GAT_Light_Base: 3AS_GAT_base_F
	{
		class Turrets
		{
			class MainTurret
			{
			};
		};
	};
	class WPEC_CIS_GAT_AA: 3AS_GAT_Light_Base
	{
		scope=2;
		armor=700;
		displayName="CIS GAT AA";
		side=0;
		faction="WPEC_CIS";
		editorPreview="3as\3as_gat\images\3AS_GAT.jpg";
		crew="WPEC_CIS_B1_Droid_Crew";
		editorSubcategory="WPEC_CIS_AA";
		vehicleClass="WPEC_CIS_AA";
		scopeCurator=2;
		forceInGarage=1;
		irScanGround=0;
		irScanRangeMax=10000;
		irScanRangeMin=200;
		irScanToEyeFactor=2;
		irTarget=1;
		irTargetSize=1.2;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets
				{
				};
				memoryPointGun[]=
				{
					"z_gunL_muzzle",
					"z_gunR_muzzle",
					"z_gunL_muzzle_2",
					"z_gunr_muzzle_2"
				};
				weapons[]=
				{
					"WPEC_CIS_Vic_Gatling"
				};
				magazines[]=
				{
					"WPEC_CIS_AA_GatMAG",
					"WPEC_CIS_AA_GatMAG",
					"WPEC_CIS_AA_GatMAG",
					"WPEC_CIS_AA_GatMAG"
				};
				turretInfoType="RscOptics_APC_Tracked_01_gunner";
				discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
				selectionFireAnim="zasleh";
				animationSourceBody="Mainturret";
				animationSourceGun="MainGun";
				body="Mainturret";
				gun="MainGun";
				discreteDistanceInitIndex=5;
				memoryPointGunnerOptics="gunnerview";
				gunnerOutOpticsModel="";
				gunnerOutOpticsEffect[]={};
				gunnerOpticsEffect[]={};
				gunnerForceOptics=1;
				canUseScanner=1;
				visionMode[]=
				{
					"Normal"
				};
				thermalMode[]={};
				class OpticsIn
				{
					class Wide
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.155;
						minFov=0.155;
						maxFov=0.155;
						visionMode[]=
						{
							"Normal",
							"NVG",
							"Ti"
						};
						thermalMode[]={0,1};
						gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Commander_02_F";
						gunnerOpticsEffect[]={};
					};
					class Narrow: Wide
					{
						gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Commander_02_F";
						initFov=0.046999998;
						minFov=0.046999998;
						maxFov=0.046999998;
					};
				};
				gunnerAction="mbt2_slot2b_in";
				forceHideGunner=1;
				outGunnerMayFire=1;
				gunnerInAction="mbt2_slot2b_in";
				gunnerRightHandAnimName="";
				gunnerLeftHandAnimName="";
				gunnerFireAlsoInInternalCamera=1;
				gunnerOutFireAlsoInInternalCamera=1;
				proxyIndex=1;
				viewGunnerInExternal=0;
				gunnerName="Gunner";
				proxytype="CPGunner";
				isPersonTurret=0;
				personTurretAction="vehicle_turnout_1";
				soundServo[]=
				{
					"A3\Sounds_F\vehicles\armor\noises\servo_best",
					"db-40",
					1,
					50
				};
				minElev=-5;
				maxElev=60;
				initElev=0;
				inGunnerMayFire=1;
				class HitPoints
				{
					class HitTurret
					{
						armor=0.80000001;
						material=-1;
						name="otocvez";
						visual="vez";
						passThrough=0;
						minimalHit=0.02;
						explosionShielding=0.60000002;
						radius=0.15000001;
					};
					class HitGun
					{
						armor=0.75;
						material=-1;
						name="otocvez";
						visual="";
						passThrough=0;
						minimalHit=0;
						explosionShielding=1;
						radius=0.15000001;
					};
				};
			};
		};
	};
	class OPTRE_Static_M41: AAA_System_01_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};
	class WPEC_CIS_Static_M41: OPTRE_Static_M41
	{
		displayName="M41 Turret (AA)";
		scope=2;
		scopeCurator=2;
		side=0;
		faction="WPEC_CIS";
		editorSubcategory="WPEC_CIS_AA";
		crew="WPEC_CIS_B1_Droid_Crew";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"WPEC_CIS_Vic_Gatling"
				};
				magazines[]=
				{
					"WPEC_CIS_AA_ScytheMAG",
					"WPEC_CIS_AA_ScytheMAG",
					"WPEC_CIS_AA_ScytheMAG"
				};
			};
		};
	};
};
class cfgMods
{
	author="ChaosViking";
	timepacked="1677279925";
};
