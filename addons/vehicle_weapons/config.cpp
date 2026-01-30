#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {
            "WPEC_LAAT_Cannon_Low",
            "WPEC_LAAT_Cannon_High",
            "WPEC_aircraft_green_CAP_plasma_weapon"
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {};
        author = AUTHOR;
        authors[] = {""};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};
class Mode_SemiAuto;
class Mode_FullAuto;
class Mode_Burst;
class SensorTemplateIR;
class SensorTemplateNV;
class SensorTemplateLaser;
class SensorTemplateActiveRadar;
class SensorTemplatePassiveRadar;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateDataLink;
class CfgAmmo
{
	class B_20mm_Tracer_Red;
	class 60Rnd_30mm_APFSDS_shells_Tracer_Red;
	class B_127x99_Ball_Tracer_Green;
	class B_20mm;
	class ShellBase;
	class SubmunitionCore;
	class WPEC_Ball_Turret: B_20mm_Tracer_Red
	{
		typicalSpeed=1000;
		coefGravity=9.9999999e-038;
		bulletFly[]=
		{
			"bulletFly1",
			1
		};
		bulletFly1[]=
		{
			"",
			1.58489,
			1,
			30
		};
		timeToLive=1;
		tracerScale=5;
		tracerStartTime=0;
		tracerEndTime=10;
		model="3AS\3as_Weapons\Data\tracer_shell_green.p3d";
	};
	class WPEC_B_GreenPlasma_127_GPR: B_20mm
	{
		typicalSpeed=1000;
		coefGravity=9.9999999e-038;
		bulletFly[]=
		{
			"bulletFly1",
			1
		};
		bulletFly1[]=
		{
			"",
			1.58489,
			1,
			30
		};
		timeToLive=10;
		tracerScale=3;
		tracerStartTime=0;
		tracerEndTime=10;
		deflecting=0;
		model="3AS\3as_Weapons\Data\tracer_shell_green.p3d";
		effectFly="3AS_PlasmaBolt_Medium_Green_Fly";
	};
	class WPEC_SuperLaser_shot: ShellBase
	{
		hit=500;
		indirectHit=15;
		indirectHitRange=0.5;
		warheadName="AP";
		dangerRadiusHit=100;
		suppressionRadiusHit=18;
		explosive=0;
		ace_overpressure_angle=40;
		ace_overpressure_range=20;
		ace_overpressure_damage=0.5;
		cost=500;
		airFriction=-3.96e-005;
		CraterEffects="ExploAmmoCrater";
		explosionEffects="ExploAmmoExplosion";
		typicalSpeed=750;
		caliber=35.268799;
		deflecting=15;
		timeToLive=30;
		whistleOnFire=1;
		whistleDist=14;
		model="\A3\Weapons_f\Data\bullettracer\shell_tracer_green";
		tracerScale=2;
		tracerStartTime=0;
		muzzleEffect="";
		soundHit1[]=
		{
			"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_01.wss",
			1.7782794,
			1,
			1800
		};
		soundHit2[]=
		{
			"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_02.wss",
			1.7782794,
			1,
			1800
		};
		soundHit3[]=
		{
			"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_03.wss",
			1.7782794,
			1,
			1800
		};
		soundHit4[]=
		{
			"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_04.wss",
			1.7782794,
			1,
			1800
		};
		multiSoundHit[]=
		{
			"soundHit1",
			0.25,
			"soundHit2",
			0.25,
			"soundHit3",
			0.25,
			"soundHit4",
			0.25
		};
		class HitEffects
		{
			hitMetal="ImpactMetalSabotBig";
			hitMetalPlate="ImpactMetalSabotBig";
			hitBuilding="ImpactConcreteSabot";
			hitConcrete="ImpactConcreteSabot";
			hitGroundSoft="ImpactEffectsGroundSabot";
			hitGroundHard="ImpactEffectsGroundSabot";
			hitWater="ImpactEffectsWater";
			default_mat="ImpactEffectsGroundSabot";
		};
		aiAmmoUsageFlags="128 + 512";
		class CamShakeExplode
		{
			power=13.4164;
			duration=2.5999999;
			frequency=20;
			distance=40.249199;
		};
		class CamShakeHit
		{
			power=180;
			duration=0.80000001;
			frequency=20;
			distance=1;
		};
		class CamShakeFire
		{
			power=3.3097501;
			duration=2.2;
			frequency=20;
			distance=87.635597;
		};
		class CamShakePlayerFire
		{
			power=0.02;
			duration=0.1;
			frequency=20;
			distance=1;
		};
	};
	class WPEC_SuperLaser_shotHE: WPEC_SuperLaser_shot
	{
		hit=200;
		indirectHit=20;
		indirectHitRange=5;
		warheadName="HE";
		dangerRadiusHit=100;
		suppressionRadiusHit=18;
		explosive=0.60000002;
		ace_overpressure_angle=40;
		ace_overpressure_range=20;
		ace_overpressure_damage=0.5;
		cost=500;
		airFriction=-3.96e-005;
		CraterEffects="ExploAmmoCrater";
		explosionEffects="ExploAmmoExplosion";
		typicalSpeed=750;
		caliber=35.268799;
		deflecting=15;
		timeToLive=30;
		whistleOnFire=1;
		whistleDist=14;
		model="\A3\Weapons_f\Data\bullettracer\shell_tracer_green";
		tracerScale=3;
		tracerStartTime=0;
		muzzleEffect="";
	};
	class M_Zephyr;
	class WPEC_Loper_SR_AtA_Missile_ammo: M_Zephyr
	{
		displayName="Loper Short Range Missile";
		displayNameShort="Loper SR Missile";
		aiAmmoUsageFlags="64 + 128 + 256 + 512";
		allowAgainstInfantry=1;
		cmImmunity=0.80001;
		effectsMissile="WPEC_particle_effect_Missile_fly_Teal";
		canLock=2;
		craterEffects="MissileCrater";
		irLock=1;
		airLock=2;
		laserLock=1;
		tracklead=0.3;
		weaponLockSystem = 1 + 2 + 4 + 8 + 16;
		timeToLive=20;
	};
	class WPEC_Nuna_SR_GP_Missile_ammo: WPEC_Loper_SR_AtA_Missile_ammo
	{
		displayName="Nuna General-Purpose Short-Range Missile";
		displayNameShort="Nuna GP SR Missile";
		cmImmunity=0.73001;
		effectsMissile="WPEC_particle_effect_Missile_fly_Yellow";
		timeToLive=60;
	};
	class WPEC_Oslet_LR_AtA_Missile_ammo: WPEC_Loper_SR_AtA_Missile_ammo
	{
		displayName="Oslet Air-to-Air Long Range Missile";
		displayNameShort="Oslet AA LR Missile";
		cmImmunity=0.95001;
		effectsMissile="WPEC_particle_effect_Missile_fly_Teal";
		timeToLive=120;
	};
	class BulletBase;
	class B_35mm_AA_Tracer_Red;
	class LAAT_Cannon_Ammo_Base: BulletBase
	{
		aiAmmoUsageFlags="64 + 128 + 256 + 512";
		allowAgainstInfantry=1;
		cmImmunity=1;
		soundSetBulletFly[]=
		{
			"-"
		};
		soundSetSonicCrack[]=
		{
			"-"
		};
		airLock=1;
		hit=200;
		indirectHit=0;
		indirectHitRange=0;
		caliber=2;
		explosive=0;
		cost=1;
		model="3AS\3AS_Weapons\Data\tracer_green.p3d";
		tracerScale=2;
		brightness=100000;
		tracerStartTime=0;
		tracerEndTime=10;
		nvgOnly=0;
		typicalSpeed=1000;
		coefGravity=0;
		visibleFire=32;
		audibleFire=32;
		visibleFireTime=10;
		dangerRadiusBulletClose=16;
		dangerRadiusHit=40;
		suppressionRadiusBulletClose=10;
		suppressionRadiusHit=14;
		craterEffects="";
		craterShape="";
		ExplosionEffects="ExploAmmoExplosion";
		effectFly="3AS_PlasmaBolt_Large_Green_Fly";
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
				class components
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
	class WPEC_LAAT_Cannon_LowPower_Ammo: LAAT_Cannon_Ammo_Base
	{
		hit=300;
		indirectHit=80;
		indirectHitRange=0.2;
		tracerScale=3;
		caliber=2;
		explosive=0.60000002;
		deflecting=0;
	};
    class WPEC_aircraft_green_CAP_plasma_ammo: B_35mm_AA_Tracer_Red
	{
		airLock = 2;
		trackLead = 1000;
		trackOversteer = 800;
		hit=500;
		indirectHit=100;
		indirectHitRange=0.5;
		caliber=0.5;
		explosive=0.60000002;
		tracerStartTime = 0.11;
        aiAmmoUsageFlags = 64 + 128 + 256 + 512;
		allowAgainstInfantry = 1;
		cmImmunity = 1;
		soundSetBulletFly[] = {"-"};
		soundSerSonicCrack[] = {"-"};
		cost = 1;
		model = "\ls\core\addons\data\effects\ls_laser_green.p3d";
		tracerScale = 1;
		brightness = 100000;
		tracerColor[] = {"Red"};
		tracerEndTime = 10;
		timetolive = 4;
		nvgOnly = 0;
		typicalSpeed = 125;
		coefGravity = 0;
		visibleFire = 32;
		audibleFire = 32;
		visibleFireTime = 4;
		dangerRadiusBulletClose = 16;
		dangerRadiusHit = 40;
		suppressionRadiusBulletClose = 10;
		suppressionRadiusHit = 14;
		craterEffects = "";
		craterShape = "";
		airFriction = 0;
		muzzleEffect = "";
		deflecting = 0;
		initTime = 0;
		weaponLockSystem = 0;
		gravityFactor = 0;
		ACE_caliber = 1;
		class Components
		{
			class SensorsManagerComponent
			{
				class components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						typeRecognitionDistance = 16000;
						angleRangeHorizontal = 360;
						angleRangeVertical = 360;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = 1600;
						minSpeedThreshold = 0;
						maxSpeedThreshold = 2000;
						class AirTarget
						{
							minRange = 0;
							maxRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 0;
							maxRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
					class NVSensorComponent: SensorTemplateNV
					{
						typeRecognitionDistance = 16000;
						angleRangeHorizontal = 360;
						angleRangeVertical = 360;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = 1600;
						minSpeedThreshold = 0;
						maxSpeedThreshold = 2000;
						class AirTarget
						{
							minRange = 0;
							maxRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 0;
							maxRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
					class LaserSensorComponent: SensorTemplateLaser
					{
						typeRecognitionDistance = 16000;
						angleRangeHorizontal = 360;
						angleRangeVertical = 360;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = 1600;
						minSpeedThreshold = 0;
						maxSpeedThreshold = 2000;
						class AirTarget
						{
							minRange = 0;
							maxRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 0;
							maxRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						typeRecognitionDistance = 16000;
						angleRangeHorizontal = 360;
						angleRangeVertical = 360;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = 1600;
						minSpeedThreshold = 0;
						maxSpeedThreshold = 2000;
						class AirTarget
						{
							minRange = 0;
							maxRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 0;
							maxRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
					class PassiveRadarSensorComponent: SensorTemplatePassiveRadar
					{
						typeRecognitionDistance = 16000;
						angleRangeHorizontal = 360;
						angleRangeVertical = 360;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = 1600;
						minSpeedThreshold = 0;
						maxSpeedThreshold = 2000;
						class AirTarget
						{
							minRange = 0;
							maxRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 0;
							maxRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
					class VisualSensorComponent: SensorTemplateVisual
					{
						typeRecognitionDistance = 16000;
						angleRangeHorizontal = 360;
						angleRangeVertical = 360;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = 1600;
						minSpeedThreshold = 0;
						maxSpeedThreshold = 2000;
						class AirTarget
						{
							minRange = 0;
							maxRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 0;
							maxRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
					class ManSensorComponent: SensorTemplateMan
					{
						typeRecognitionDistance = 16000;
						angleRangeHorizontal = 360;
						angleRangeVertical = 360;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = 1600;
						minSpeedThreshold = 0;
						maxSpeedThreshold = 2000;
						class AirTarget
						{
							minRange = 0;
							maxRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 0;
							maxRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
					class DataLinkSensorComponent: SensorTemplateDataLink
					{
						typeRecognitionDistance = 16000;
						angleRangeHorizontal = 360;
						angleRangeVertical = 360;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = 1600;
						minSpeedThreshold = 0;
						maxSpeedThreshold = 2000;
						class AirTarget
						{
							minRange = 0;
							maxRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 0;
							maxRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
				};
			};
		};

	};
	class WPEC_LAAT_Cannon_HighPower_Ammo: B_35mm_AA_Tracer_Red
	{
		hit = 150;
		indirectHit = 750;
		indirectHitRange = 6;
		explosive = 0.7;
		caliber = 9;
		ACE_caliber=1;
		craterEffects="ImpactEffectsMedium";
		explosionSoundEffect="DefaultExplosion";
		tracerScale=5;
		effectFly="3AS_PlasmaBolt_Large_Green_Fly";
		deflecting=0;
	};
    class ammo_Missile_AA_R73;
	class WPEC_Maramu_A2A_Missile_ammo_01: ammo_Missile_AA_R73
	{
		class Components;
	};
    class WPEC_Maramu_A2A_Missile_ammo: WPEC_Maramu_A2A_Missile_ammo_01  //1 shot vultures
	{
		displayName="Maramu LR AA Missile";
		displayNameShort="Maramu LR AA";
		effectsMissile="WPEC_particle_effect_Missile_fly_Purple";
		model="\A3\Weapons_F_Jets\Ammo\Missile_AA_07_fly_F.p3d";
		cmimmunity=0.90000002;
		tracerColor[]=
		{
			"blue"
		};
		brightness=20000;
		lightColor[]={0,0,1,1};
		triggerTime=0.1;
		hit = 900;
		indirectHit = 850;
		indirectHitRange = 15;
		cameraViewAvailable=1;
		maneuvrability=10;
		sideAirFriction=.20;
		thrust=600;
		thrustTime=20;
		timeToLive=40;
		missileLockMinDistance = 10;
		missileLockMaxDistance = 6000;
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
							minRange=10;
							maxRange=6000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=5;
							maxRange=10;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						angleRangeHorizontal=150;
						angleRangeVertical=150;
						minTrackableATL=1;
						maxTrackableATL=1e10;
					};
				};
			};
		};
	};
    class WPEC_Hoska_A2A_Missile_ammo: WPEC_Maramu_A2A_Missile_ammo_01
	{
		displayName="Hoska MR AA Missile";
		displayNameShort="Hoska MR AA";
		effectsMissile="WPEC_particle_effect_Missile_fly_Yellow";
        model = "\A3\Weapons_F_Jets\Ammo\Missile_AA_07_fly_F.p3d";
		cmimmunity = 0.60000002;
		tracerColor[] = {"blue"};
		brightness = 20000;
		lightColor[] = {0,0,1,1};
		triggerTime = 0.1;
		hit = 900;
		indirectHit = 850;
		indirectHitRange = 10;
		cameraViewAvailable = 1;
		maneuvrability = 14;
		sideAirFriction = .22;
		thrust = 220;
		thrustTime = 5;
		timeToLive = 20;
		missileLockMinDistance = 1;
		missileLockMaxDistance = 6000;
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
							minRange = 10;
							maxRange = 6000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 500;
							maxRange = 4000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						angleRangeHorizontal = 150;
						angleRangeVertical = 150;
						minTrackableATL = 1;
						maxTrackableATL = 1e10;
					};
				};
			};
		};
	};
    class WPEC_Talons_A2A_missile_ammo: WPEC_Maramu_A2A_Missile_ammo_01
	{
		displayName="Talons SR AA Missile";
		displayNameShort="Talons SR AA";
		model="\A3\Weapons_F_Jets\Ammo\Missile_AA_07_fly_F.p3d";
		effectsMissile="WPEC_particle_effect_Missile_fly_Purple";
		cmimmunity=0.60000002;
		tracerColor[]=
		{
			"blue"
		};
		brightness=20000;
		lightColor[]={0,0,1,1};
		triggerTime=0.1;
		hit = 900;
		indirectHit = 850;
		indirectHitRange = 10;
		cameraViewAvailable=1;
		maneuvrability=16;
		sideAirFriction=.18;
		thrust=220;
		thrustTime=5;
		timeToLive=20;
		missileLockMinDistance=1;
		missileLockMaxDistance=6000;
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
							minRange=10;
							maxRange=6000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=500;
							maxRange=4000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						angleRangeHorizontal=150;
						angleRangeVertical=150;
						minTrackableATL=1;
						maxTrackableATL=1e10;
					};
				};
			};
		};
	};
	class M_Jian_AT;
	class WPEC_Dianoga_WGM_Missile_ammo: M_Jian_AT  //1 shot AAT
	{
		displayName="Dianoga WGM";
		displayNameShort="Dianoga WGM";
		effectsMissile="WPEC_particle_effect_Missile_fly_Teal";
		muzzleEffect="";
		model="\A3\Weapons_F\Ammo\Missile_AT_02_fly_F";
		triggerTime=0.2;
		thrustTime=15;
		thrust=200;
		maneuvrability=28;
		airFriction=0.050000001;
		hit = 3000;
		indirectHit = 100;
		indirectHitRange = 5;
		cameraViewAvailable=1;
		explosionTime=20;
		timeToLive=20;
	};
	class M_AT;
	class WPEC_Kaada_Unguided_Rocket_ammo: M_AT //Inantry killer
	{
		displayName="UGM";
		displayNameShort="UGM";
        hit=700;
		indirectHit=950;
		indirectHitRange=6.5;
		effectsMissile="WPEC_particle_effect_Missile_fly_Maroon";
	};
};
class CfgMagazines
{
	class VehicleMagazine;
	class WPEC_2000Rnd_LAAT_laser: VehicleMagazine
	{
		scope=2;
		displayName="Kamman Charge Cell Ball Turret";
		displayNameShort="Ball Turret";
		picture="";
		ammo="WPEC_Ball_Turret";
		mass=6;
		count=2000;
		tracersEvery=1;
		lastRoundsTracer=2000;
		timeToLive=3;
		tracerScale=5;
		tracerStartTime=0;
	};
	class WPEC_aircraft_green_CAP_plasma_mag: VehicleMagazine
	{
		scope=2;
		displayName="Green CAP plasma";
		displayNameShort="Green CAP plasma";
		picture="";
		count=1000;
		tracersEvery=1;
		lastRoundsTracer=1000;
		maxLeadSpeed=300;
		ammo="WPEC_aircraft_green_CAP_plasma_ammo";
	};
	class WPEC_LAAT_Cannon_LowPower_Magazine: VehicleMagazine
	{
		scope=2;
		displayName="Low Power Laser Cell";
		displayNameShort="Low Power Cell";
		picture="";
		count=1000;
		tracersEvery=1;
		lastRoundsTracer=1000;
		maxLeadSpeed=300;
		ammo="WPEC_LAAT_Cannon_LowPower_Ammo";
	};
	class WPEC_LAAT_Cannon_HighPower_Magazine: VehicleMagazine
	{
		scope=2;
		displayName="High Power Laser Cell";
		displayNameShort="High Power Cell";
		picture="";
		count=50;
		tracersEvery=1;
		lastRoundsTracer=500;
		maxLeadSpeed=300;
		ammo="WPEC_LAAT_Cannon_HighPower_Ammo";
	};
	class 4Rnd_AAA_missiles;
	class WPEC_Maramu_6Rnd_A2A_mag: 4Rnd_AAA_missiles
	{
		ammo="WPEC_Maramu_A2A_Missile_ammo";
		count=6;
		displayName="Maramu LR AA Missile";
		displayNameShort="Maramu LR AA";
		tracersEvery=1;
	};
	class WPEC_Hoska_6Rnd_A2A_mag: 4Rnd_AAA_missiles
	{
		ammo="WPEC_Hoska_A2A_Missile_ammo";
		count=6;
		displayName="Hoska MR AA Missile";
		displayNameShort="Hoska MR AA";
		tracersEvery=1;
	};
	class WPEC_Talons_A2A_missile_mag: 4Rnd_AAA_missiles
	{
		ammo="WPEC_Talons_A2A_missile_ammo";
		count=6;
		displayName="Talons SR AA Missile";
		displayNameShort="Talons SR AA";
		tracersEvery=1;
	};
	class 4Rnd_LG_Jian;
	class WPEC_Dianoga_4Rnd_WGM_mag: 4Rnd_LG_Jian
	{
		ammo="WPEC_Dianoga_WGM_Missile_ammo";
		count=4;
		displayName="Dianoga WGM Missile";
		displayNameShort="Dianoga WGM";
		tracersEvery=1;
	};
	class 7Rnd_Rocket_04_AP_F;
	class WPEC_Kaada_10Rnd_Unguided_Rocket_mag: 7Rnd_Rocket_04_AP_F
	{
		ammo="WPEC_Kaada_Unguided_Rocket_ammo";
		count=10;
		displayName="Kaada Unguided Missile";
		displayNameShort="Kaada Missile";
	};
	class 4Rnd_GAA_missiles;
	class WPEC_Loper_6Rnd_SR_Mag: 4Rnd_GAA_missiles
	{
		displayName="Loper Ground-to-Air Missile";
		displayNameShort="Loper SR Missile";
		count=6;
		ammo="WPEC_Loper_SR_GtA_Missile_ammo";
	};
	class WPEC_Loper_12Rnd_SR_Mag: 4Rnd_GAA_missiles
	{
		displayName="Loper Ground-to-Air Missile";
		displayNameShort="Loper SR Missile";
		count=12;
		ammo="WPEC_Loper_SR_GtA_Missile_ammo";
	};
	class WPEC_Nuna_12Rnd_SR_Mag: 4Rnd_GAA_missiles
	{
		displayName="Nuna General Purpose Missile";
		displayNameShort="Nuna GP Missile";
		count=12;
		ammo="WPEC_Nuna_SR_GP_Missile_ammo";
	};
	class WPEC_Oslet_4Rnd_LR_Mag: 4Rnd_GAA_missiles
	{
		displayName="Oslet Ground-to-Air Long Range Missile";
		displayNameShort="Oslet LR Missile";
		count=12;
		ammo="WPEC_Oslet_LR_AtA_Missile_ammo";
	};
	class 4Rnd_WPEC_SuperLaser: VehicleMagazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="4Rnd_WPEC_SuperLaser_Coolant";
		displayNameShort="Super_Laser_Coolant";
		ammo="WPEC_SuperLaser_shot";
		count=4;
		initSpeed=550;
		maxLeadSpeed=25;
		tracersEvery=1;
		nameSound="cannon";
		muzzleImpulseFactor[]={1,1};
	};
	class 4Rnd_WPEC_SuperLaser_HE: VehicleMagazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="4Rnd_WPEC_SuperLaser_Coolant_HE";
		displayNameShort="Super_Laser_Coolant";
		ammo="WPEC_SuperLaser_shotHE";
		count=4;
		initSpeed=450;
		maxLeadSpeed=25;
		tracersEvery=1;
		nameSound="cannon";
		muzzleImpulseFactor[]={1,1};
	};
};
class CfgWeapons
{
	class CannonCore;
	class WPEC_autocannon_Base_F: CannonCore
	{
		scope=1;
		cursor="EmptyCursor";
		cursorAim="cannon";
		nameSound="cannon";
		sound[]=
		{
			"A3\sounds_f\dummysound.wss",
			2.5118864,
			1,
			1800
		};
		soundContinuous=0;
		reloadTime=0.30000001;
		aiRateOfFire=0.60000002;
		magazineReloadTime=2;
		autoReload=1;
		ballisticsComputer="2 + 16";
		FCSMaxLeadSpeed=27.778;
		FCSZeroingDelay=1;
		canLock=0;
		autoFire=1;
		modes[]=
		{
			"player",
			"close",
			"short",
			"medium",
			"far"
		};
		shotFromTurret=0;
		showAimCursorInternal=0;
		class player: Mode_FullAuto
		{
			soundContinuous=0;
			reloadTime=0.30000001;
			dispersion=0.00089999998;
			aiRateOfFire=1;
			aiRateOfFireDistance=10;
			minRange=0;
			minRangeProbab=0.0099999998;
			midRange=1;
			midRangeProbab=0.0099999998;
			maxRange=2;
			maxRangeProbab=0.0099999998;
		};
		class close: player
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=3;
			burstRangeMax=6;
			aiRateOfFire=1;
			aiRateOfFireDispersion=2;
			aiRateOfFireDistance=200;
			minRange=0;
			minRangeProbab=0.1;
			midRange=400;
			midRangeProbab=0.69999999;
			maxRange=800;
			maxRangeProbab=0.80000001;
		};
		class short: close
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=1;
			burstRangeMax=5;
			aiRateOfFire=2;
			aiRateOfFireDispersion=2;
			aiRateOfFireDistance=600;
			minRange=600;
			minRangeProbab=0.75;
			midRange=800;
			midRangeProbab=0.80000001;
			maxRange=1200;
			maxRangeProbab=0.80000001;
		};
		class medium: close
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=1;
			burstRangeMax=3;
			aiRateOfFire=2;
			aiRateOfFireDispersion=3;
			aiRateOfFireDistance=1000;
			minRange=1000;
			minRangeProbab=0.80000001;
			midRange=1500;
			midRangeProbab=0.80000001;
			maxRange=2000;
			maxRangeProbab=0.69999999;
		};
		class far: close
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=1;
			burstRangeMax=1;
			aiRateOfFire=2;
			aiRateOfFireDispersion=4;
			aiRateOfFireDistance=1800;
			minRange=1800;
			minRangeProbab=0.74000001;
			midRange=2400;
			midRangeProbab=0.64999998;
			maxRange=3000;
			maxRangeProbab=0.050000001;
		};
	};
	class WPEC_LAAT_LASER: WPEC_autocannon_Base_F
	{
		displayName="$STR_A3_autocannon_40mm_CTWS0";
		muzzles[]=
		{
			"HE"
		};
		class HE: WPEC_autocannon_Base_F
		{
			displayName="$STR_A3_autocannon_40mm_CTWS0";
			magazines[]=
			{
				"WPEC_2000Rnd_LAAT_laser",
				"WPEC_2000Rnd_LAAT_laser"
			};
			class player: player
			{
				dispersion=0;
				reloadTime=0.016666668;
				burst=144;
				sounds[]=
				{
					"StandardSound"
				};
				class StandardSound
				{
					begin1[]=
					{
						"A3\Sounds_F\arsenal\weapons_vehicles\cannon_105mm\slammer_105mm_distant",
						3,
						1,
						150
					};
					soundBegin[]=
					{
						"begin1",
						1
					};
				};
				soundContinuous=1;
			};
			class close: player
			{
				aiBurstTerminable=1;
				showToPlayer=0;
				burst=3;
				burstRangeMax=6;
				aiRateOfFire=1;
				aiRateOfFireDispersion=2;
				aiRateOfFireDistance=200;
				minRange=0;
				minRangeProbab=0.1;
				midRange=400;
				midRangeProbab=0.69999999;
				maxRange=800;
				maxRangeProbab=0.80000001;
			};
			class short: close
			{
				aiBurstTerminable=1;
				showToPlayer=0;
				burst=1;
				burstRangeMax=5;
				aiRateOfFire=2;
				aiRateOfFireDispersion=2;
				aiRateOfFireDistance=600;
				minRange=600;
				minRangeProbab=0.75;
				midRange=800;
				midRangeProbab=0.80000001;
				maxRange=1200;
				maxRangeProbab=0.80000001;
			};
			class medium: close
			{
				aiBurstTerminable=1;
				showToPlayer=0;
				burst=1;
				burstRangeMax=3;
				aiRateOfFire=2;
				aiRateOfFireDispersion=3;
				aiRateOfFireDistance=1000;
				minRange=1000;
				minRangeProbab=0.80000001;
				midRange=1500;
				midRangeProbab=0.80000001;
				maxRange=2000;
				maxRangeProbab=0.69999999;
			};
			class far: close
			{
				aiBurstTerminable=1;
				showToPlayer=0;
				burst=1;
				burstRangeMax=1;
				aiRateOfFire=2;
				aiRateOfFireDispersion=4;
				aiRateOfFireDistance=1800;
				minRange=1800;
				minRangeProbab=0.74000001;
				midRange=2400;
				midRangeProbab=0.64999998;
				maxRange=3000;
				maxRangeProbab=0.050000001;
			};
		};
	};
	class WPEC_SuperLaser: CannonCore
	{
		scope=1;
		displayName="WPEC_SuperLaser";
		cursor="EmptyCursor";
		cursorAim="cannon";
		showAimCursorInternal=0;
		nameSound="cannon";
		reloadSound[]=
		{
			"A3\Sounds_F\arsenal\weapons_vehicles\cannon_120mm\Cannon_120mm_Reload_01.wss",
			2.5118864,
			1,
			10
		};
		reloadMagazineSound[]=
		{
			"A3\Sounds_F\arsenal\weapons_vehicles\cannon_120mm\Cannon_120mm_Reload_01.wss",
			2.5118864,
			1,
			10
		};
		magazines[]=
		{
			"4Rnd_WPEC_SuperLaser",
			"4Rnd_WPEC_SuperLaser_HE"
		};
		reloadTime=10;
		magazineReloadTime=30;
		autoReload=1;
		canLock=0;
		ballisticsComputer="2 + 16";
		FCSMaxLeadSpeed=25;
		FCSZeroingDelay=1;
		aiDispersionCoefY=2;
		aiDispersionCoefX=2;
		autoFire=0;
		modes[]=
		{
			"player",
			"topDown",
			"close",
			"short",
			"medium",
			"far"
		};
		class GunParticles
		{
			class FirstEffect
			{
				effectName="CannonFired";
				positionName="Usti hlavne";
				directionName="Konec hlavne";
			};
		};
		class player: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons_vehicles\cannon_120mm\slammer_120mm_distant",
					3.1622777,
					1,
					1500
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			soundContinuous=0;
			reloadTime=6;
			magazineReloadTime=6;
			autoReload=1;
			autoFire=0;
			dispersion=0.00056999997;
			aiRateOfFire=1;
			aiRateOfFireDistance=10;
			minRange=0;
			minRangeProbab=0.0099999998;
			midRange=1;
			midRangeProbab=0.0099999998;
			maxRange=2;
			maxRangeProbab=0.0099999998;
		};
		class TopDown: player
		{
			textureType="topDown";
			displayName="$STR_A3_FireMode_TopDown0";
			minRange=150;
			minRangeProbab=0.40000001;
			midRange=400;
			midRangeProbab=0.94999999;
			maxRange=8000;
			maxRangeProbab=0.94999999;
		};
		class close: player
		{
			showToPlayer=0;
			burst=1;
			burstRangeMax=1;
			aiRateOfFire=6;
			aiRateOfFireDispersion=0.5;
			aiRateOfFireDistance=500;
			minRange=5;
			minRangeProbab=0.1;
			midRange=500;
			midRangeProbab=0.80000001;
			maxRange=1000;
			maxRangeProbab=0.85000002;
		};
		class short: close
		{
			showToPlayer=0;
			burst=1;
			burstRangeMax=1;
			aiRateOfFire=6;
			aiRateOfFireDispersion=1;
			aiRateOfFireDistance=1000;
			minRange=500;
			minRangeProbab=0.30000001;
			midRange=1000;
			midRangeProbab=0.85000002;
			maxRange=1500;
			maxRangeProbab=0.85000002;
		};
		class medium: close
		{
			dispersion=0.00071250001;
			showToPlayer=0;
			burst=1;
			burstRangeMax=1;
			aiRateOfFire=8;
			aiRateOfFireDispersion=4;
			aiRateOfFireDistance=1250;
			minRange=1000;
			minRangeProbab=0.60000002;
			midRange=1500;
			midRangeProbab=0.85000002;
			maxRange=2000;
			maxRangeProbab=0.80000001;
		};
		class far: close
		{
			dispersion=0.00071250001;
			showToPlayer=0;
			burst=1;
			burstRangeMax=1;
			aiRateOfFire=10;
			aiRateOfFireDispersion=8;
			aiRateOfFireDistance=1500;
			minRange=1500;
			minRangeProbab=0.75;
			midRange=2000;
			midRangeProbab=0.80000001;
			maxRange=3500;
			maxRangeProbab=0.050000001;
		};
	};
	class Cannon_30mm_Plane_CAS_02_F: CannonCore
	{
		class LowROF;
	};
	class Gatling_30mm_Plane_CAS_01_F: CannonCore
	{
		class LowROF;
	};
	class WPEC_LAAT_Cannon_Base: Cannon_30mm_Plane_CAS_02_F
	{
		scope=1;
		displayName="LAAT Cannon (Base)";
		modes[]=
		{
			"LowROF"
		};
		canLock=2;
		ballisticsComputer=21;
		weaponLockSystem=0;
		burst=1;
		magazineReloadTime=2;
		class LowROF: LowROF
		{
			displayName="Low ROF";
			multiplier=1;
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound;
			flashSize=1;
			dispersion=0;
			autoFire="true";
			aiRateOfFire=0.001;
			reloadTime=0.07;
			aiRateOfFireDispersion=0;
			aiRateOfFireDistance=0;
			minRange=0;
			minRangeProbab=1;
			midRange=7500;
			midRangeProbab=1;
			maxRange=15000;
			maxRangeProbab=1;
			weaponLockDelay=0;
			weaponLockSystem=0;
			lockAcquire=1;
			FCSMaxLeadSpeed=1000;
			burst=1;
			textureType="fullAuto";
		};
	};
	class WPEC_LAAT_Cannon_Low: WPEC_LAAT_Cannon_Base
	{
		scope=2;
		displayName="LAAT Cannon (Low Power)";
		magazines[]=
		{
			"WPEC_LAAT_Cannon_LowPower_Magazine"
		};
		class LowROF: LowROF
		{
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				soundsetshot[]=
				{
					"3AS_LAAT_Shot_SoundSet"
				};
			};
		};
	};
	class WPEC_LAAT_Cannon_High: WPEC_LAAT_Cannon_Base
	{
		displayName="LAAT Cannon (High Power)";
		scope=2;
		initSpeed=2000;
		magazineReloadTime=6;
		magazines[]=
		{
			"WPEC_LAAT_Cannon_HighPower_Magazine"
		};
		class LowROF: LowROF
		{
			displayName="LAAT Cannon (High Power)";
			dispersion=0;
			reloadTime=0.2;
			FCSMaxLeadSpeed=1500;
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				soundsetshot[]=
				{
					"3AS_LAAT_Shot_SoundSet"
				};
			};
		};
	};
	class WPEC_aircraft_green_CAP_plasma_weapon: Gatling_30mm_Plane_CAS_01_F
	{
		author = AUTHOR;
		scope = 2;
		displayName = "CAP Plasma Cannons";
		displayNameShort = "Plasma CAP";
		magazines[] = {"WPEC_aircraft_green_CAP_plasma_mag"};
		FCSMaxLeadSpeed = 1800;
		weaponLockSystem = 2;
		dexterity = 5;modes[] = {"LowROF"};
		canLock = 1;
		ballisticsComputer = 1;
		class LowROF: LowROF
		{
			ballisticsComputer = 1;
			soundContinuous = 0;
			autoFire = 1;
			multiplier = 1;
			flashSize = 1;
			dispersion = 0;
			recoil = "Empty";
			ffMagnitude = 0.5;
			ffFrequency = 11;
			ffCount = 6;
			showToPlayer = 1;
			burst = 1;
			reloadTime = 0.07;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 10;
			minRange = 0;
			minRangeProbab = 0.01;
			midRange = 1;
			midRangeProbab = 0.01;
			maxRange = 2;
			maxRangeProbab = 0.01;
			textureType = "fullAuto";
			sounds[] = {"StandardSounds"};
			class StandardSounds
			{
				begin1[] = {"\z\NCA\addons\vehicles\weapons\sounds\cannons\plasmaCannon_fire_left.ogg",1.1,1,1800};
				begin2[] = {"\z\NCA\addons\vehicles\weapons\sounds\cannons\plasmaCannon_fire_right.ogg",1.1,1,1800};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
		};
	};
	class missiles_ASRAAM;
	class WPEC_Maramu_A2A_MissileSystem: missiles_ASRAAM
	{
		displayName="Maramu Missile System";
		displayNameShort="Maramu";
		magazines[]=
		{
			"WPEC_Maramu_6Rnd_A2A_mag"
		};
		sounds[]=
		{
			"StandardSound"
		};
		class StandardSound
		{
			soundsetshot[]=
			{
				"3AS_Missle_SoundSet"
			};
		};
		soundfly[]=
		{
			"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\rocket_fly.wss",
			3,
			1,
			2000
		};
		lockingTargetSound[]=
		{
			"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\Locking_Titan.wss",
			0.56234133,
			1
		};
		lockedTargetSound[]=
		{
			"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\Locked_Titan.wss",
			0.56234133,
			2.5
		};
	};
	class WPEC_Hoska_A2A_MissileSystem: missiles_ASRAAM
	{
		displayName="Hoska Missile System";
		displayNameShort="Hoska";
		magazines[]=
		{
			"WPEC_Hoska_6Rnd_A2A_mag"
		};
		sounds[]=
		{
			"StandardSound"
		};
		class StandardSound
		{
			soundsetshot[]=
			{
				"3AS_Missle_SoundSet"
			};
		};
		soundfly[]=
		{
			"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\rocket_fly.wss",
			3,
			1,
			2000
		};
		lockingTargetSound[]=
		{
			"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\Locking_Titan.wss",
			0.56234133,
			1
		};
		lockedTargetSound[]=
		{
			"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\Locked_Titan.wss",
			0.56234133,
			2.5
		};
	};
    class weapon_R73Launcher;
	class NCA_Talon_A2A_missile_launcher: weapon_R73Launcher
	{
		scope=2;
        author = AUTHOR;
		displayName="Talon Missile (A2A)";
		displayNameShort="Talon A2A";
		sounds[] = {"StandardSound"};
		magazines[]=
		{
			"WPEC_Talons_A2A_missile_mag"
		};
	};

	class missiles_Jian;
	class WPEC_Dianoga_WGM_MissileSystem: missiles_Jian
	{
		displayName="Dianoga Missile System";
		displayNameShort="Dianoga";
		magazines[]=
		{
			"WPEC_Dianoga_4Rnd_WGM_mag"
		};
		sounds[]=
		{
			"StandardSound"
		};
		class StandardSound
		{
			soundsetshot[]=
			{
				"3AS_Missle_SoundSet"
			};
		};
		soundfly[]=
		{
			"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\rocket_fly.wss",
			3,
			1,
			2000
		};
	};
	class Rocket_04_AP_Plane_CAS_01_F;
	class WPEC_Kaada_DF_MissileSystem: Rocket_04_AP_Plane_CAS_01_F
	{
		displayName="Kaada Rocket System";
		displayNameShort="Kaada";
		magazines[]=
		{
			"WPEC_Kaada_10Rnd_Unguided_Rocket_mag"
		};
		sounds[]=
		{
			"StandardSound"
		};
		class StandardSound
		{
			soundsetshot[]=
			{
				"3AS_Missle_SoundSet"
			};
		};
		soundfly[]=
		{
			"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\rocket_fly.wss",
			3,
			1,
			2000
		};
	};
};
