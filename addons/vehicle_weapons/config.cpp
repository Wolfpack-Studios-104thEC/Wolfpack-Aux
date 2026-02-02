#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {
            "WPEC_LAAT_Cannon_Low",
            "WPEC_LAAT_Cannon_High",
            "WPEC_aircraft_green_CAP_plasma_weapon",
            "WPEC_coaxium_plasma_weapon"
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
class CfgMagazines
{
	class VehicleMagazine;
	class 104th_2000Rnd_LAAT_laser: VehicleMagazine
	{
		scope=2;
		displayName="Kamman Charge Cell Ball Turret";
		displayNameShort="Ball Turret";
		picture="";
		ammo="104th_Ball_Turret";
		mass=6;
		count=2000;
		tracersEvery=1;
		lastRoundsTracer=2000;
		timeToLive=3;
		tracerScale=5;
		tracerStartTime=0;
	};
	class 104th_LAAT_Cannon_LowPower_Magazine: VehicleMagazine
	{
		scope=2;
		displayName="Low Power Laser Cell";
		displayNameShort="Low Power Cell";
		picture="";
		count=1000;
		tracersEvery=1;
		lastRoundsTracer=1000;
		maxLeadSpeed=300;
		ammo="104th_LAAT_Cannon_LowPower_Ammo";
	};
	class 104th_LAAT_Cannon_HighPower_Magazine: VehicleMagazine
	{
		scope=2;
		displayName="High Power Laser Cell";
		displayNameShort="High Power Cell";
		picture="";
		count=50;
		tracersEvery=1;
		lastRoundsTracer=500;
		maxLeadSpeed=300;
		ammo="104th_LAAT_Cannon_HighPower_Ammo";
	};
	class 4Rnd_AAA_missiles;
	class 104th_Maramu_6Rnd_A2A_mag: 4Rnd_AAA_missiles
	{
		ammo="104th_Maramu_A2A_Missile";
		count=6;
		displayName="Maramu AA Missile";
		displayNameShort="Maramu AA";
		tracersEvery=1;
	};
	class 104th_Hoska_6Rnd_A2A_mag: 4Rnd_AAA_missiles
	{
		ammo="104th_Hoska_A2A_Missile";
		count=6;
		displayName="Hoska AA Missile";
		displayNameShort="Hoska AA";
		tracersEvery=1;
	};
	class 4Rnd_LG_Jian;
	class 104th_Dianoga_4Rnd_WGM_mag: 4Rnd_LG_Jian
	{
		ammo="104th_Dianoga_WGM_Missile";
		count=4;
		displayName="Dianoga WGM Missile";
		displayNameShort="Dianoga WGM";
		tracersEvery=1;
	};
	class 7Rnd_Rocket_04_AP_F;
	class 104th_Kaada_10Rnd_Unguided_Rocket_mag: 7Rnd_Rocket_04_AP_F
	{
		ammo="104th_Kaada_Unguided_Rocket";
		count=10;
		displayName="Kaada Unguided Missile";
		displayNameShort="Kaada Missile";
	};
	class 4Rnd_GAA_missiles;
	class 104th_Loper_6Rnd_SR_Mag: 4Rnd_GAA_missiles
	{
		displayName="Loper Ground-to-Air Missile";
		displayNameShort="Loper SR Missile";
		count=6;
		ammo="104th_Loper_SR_GtA_Missile";
	};
	class 104th_Loper_12Rnd_SR_Mag: 4Rnd_GAA_missiles
	{
		displayName="Loper Ground-to-Air Missile";
		displayNameShort="Loper SR Missile";
		count=12;
		ammo="104th_Loper_SR_GtA_Missile";
	};
	class 104th_Nuna_12Rnd_SR_Mag: 4Rnd_GAA_missiles
	{
		displayName="Nuna General Purpose Missile";
		displayNameShort="Nuna GP Missile";
		count=12;
		ammo="104th_Nuna_SR_GP_Missile";
	};
	class 104th_Oslet_4Rnd_LR_Mag: 4Rnd_GAA_missiles
	{
		displayName="Oslet Ground-to-Air Long Range Missile";
		displayNameShort="Oslet LR Missile";
		count=12;
		ammo="104th_Oslet_LR_AtA_Missile";
	};
	class 4Rnd_104th_SuperLaser: VehicleMagazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="4Rnd_104th_SuperLaser_Coolant";
		displayNameShort="Super_Laser_Coolant";
		ammo="104th_SuperLaser_shot";
		count=4;
		initSpeed=550;
		maxLeadSpeed=25;
		tracersEvery=1;
		nameSound="cannon";
		muzzleImpulseFactor[]={1,1};
	};
	class 4Rnd_104th_SuperLaser_HE: VehicleMagazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="4Rnd_104th_SuperLaser_Coolant_HE";
		displayNameShort="Super_Laser_Coolant";
		ammo="104th_SuperLaser_shotHE";
		count=4;
		initSpeed=450;
		maxLeadSpeed=25;
		tracersEvery=1;
		nameSound="cannon";
		muzzleImpulseFactor[]={1,1};
	};
};
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
	class B_20mm;
	class ShellBase;
	class SubmunitionCore;
    class BulletBase;
	class B_35mm_AA_Tracer_Red;
	class M_Zephyr;
    class ammo_Missile_AA_R73;
	class 104th_Ball_Turret: B_20mm_Tracer_Red
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
	class 104th_B_GreenPlasma_127_GPR: B_20mm
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
	class 104th_SuperLaser_shot: ShellBase
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
	class 104th_SuperLaser_shotHE: 104th_SuperLaser_shot
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
	class 104th_Loper_SR_AtA_Missile: M_Zephyr
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
	class 104th_Nuna_SR_GP_Missile: 104th_Loper_SR_AtA_Missile
	{
		displayName="Nuna General-Purpose Short-Range Missile";
		displayNameShort="Nuna GP SR Missile";
		cmImmunity=0.73001;
		effectsMissile="WPEC_particle_effect_Missile_fly_Yellow";
		timeToLive=60;
	};
	class 104th_Oslet_LR_AtA_Missile: 104th_Loper_SR_AtA_Missile
	{
		displayName="Oslet Air-to-Air Long Range Missile";
		displayNameShort="Oslet AA LR Missile";
		cmImmunity=0.95001;
		effectsMissile="WPEC_particle_effect_Missile_fly_Teal";
		timeToLive=120;
	};
	class BulletBase;
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
	class 104th_LAAT_Cannon_LowPower_Ammo: LAAT_Cannon_Ammo_Base
	{
		hit=300;
		indirectHit=80;
		indirectHitRange=0.2;
		tracerScale=3;
		caliber=2;
		explosive=0.60000002;
		deflecting=0;
	};
	class 104th_LAAT_Cannon_HighPower_Ammo: LAAT_Cannon_Ammo_Base
	{
		hit=500;
		explosive=0.5;
		indirectHit=200;
		indirectHitRange=4;
		caliber=3;
		ACE_caliber=1;
		craterEffects="ImpactEffectsMedium";
		explosionSoundEffect="DefaultExplosion";
		tracerScale=5;
		effectFly="3AS_PlasmaBolt_Large_Green_Fly";
		deflecting=0;
	};
	class M_Air_AA
	{
		class Components
		{
			class SensorsManagerComponent
			{
				class components;
			};
		};
	};
	class 104th_Maramu_A2A_Missile: M_Air_AA
	{
		displayName="Maramu LR AA Missile";
		displayNameShort="Maramu LR AA";
		effectsMissile="WPEC_particle_effect_Missile_fly_Purple";
		hit=900;
		indirectHit=100;
		indirectHitRange=2;
		cameraViewAvailable=1;
		maneuvrability=15;
		cmimmunity=0.930001;
        missileLockMaxDistance=16000;
        missileLockMinDistance=0;
		tracklead=0.5;
		weaponLockSystem = 1 + 2 + 8 + 16;
		airFriction=-0.20001;
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
    class 104th_Hoska_A2A_Missile: 104th_Maramu_A2A_Missile
	{
		displayName="Hoska SR AA Missile";
		displayNameShort="Hoska SR AA";
		effectsMissile="WPEC_particle_effect_Missile_fly_Yellow";
		hit=700;
		indirectHit=100;
		indirectHitRange=2;
		cameraViewAvailable=1;
		maneuvrability=30;
		cmimmunity=0.900001;
        missileLockMaxDistance=6000;
        missileLockMinDistance=0;
		tracklead=0.9;
		weaponLockSystem = 1 + 2 + 8 + 16;
		airFriction=-3.96e-005;
		class Components
		{
			class SensorsManagerComponent
			{
				class components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						typeRecognitionDistance=6000;
						angleRangeHorizontal=360;
						angleRangeVertical=360;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=1600;
						minSpeedThreshold=0;
						maxSpeedThreshold=2000;
						class AirTarget
						{
							minRange=0;
							maxRange=6000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=0;
							maxRange=6000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
					};
					class NVSensorComponent: SensorTemplateNV
					{
						typeRecognitionDistance=6000;
						angleRangeHorizontal=360;
						angleRangeVertical=360;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=1600;
						minSpeedThreshold=0;
						maxSpeedThreshold=2000;
						class AirTarget
						{
							minRange=0;
							maxRange=6000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=0;
							maxRange=6000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
					};
					class LaserSensorComponent: SensorTemplateLaser
					{
						typeRecognitionDistance=6000;
						angleRangeHorizontal=360;
						angleRangeVertical=360;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=1600;
						minSpeedThreshold=0;
						maxSpeedThreshold=2000;
						class AirTarget
						{
							minRange=0;
							maxRange=6000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=0;
							maxRange=6000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
					};
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						typeRecognitionDistance=6000;
						angleRangeHorizontal=360;
						angleRangeVertical=360;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=1600;
						minSpeedThreshold=0;
						maxSpeedThreshold=2000;
						class AirTarget
						{
							minRange=0;
							maxRange=6000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=0;
							maxRange=6000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
					};
					class PassiveRadarSensorComponent: SensorTemplatePassiveRadar
					{
						typeRecognitionDistance=6000;
						angleRangeHorizontal=360;
						angleRangeVertical=360;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=1600;
						minSpeedThreshold=0;
						maxSpeedThreshold=2000;
						class AirTarget
						{
							minRange=0;
							maxRange=6000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=0;
							maxRange=6000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
					};
					class VisualSensorComponent: SensorTemplateVisual
					{
						typeRecognitionDistance=6000;
						angleRangeHorizontal=360;
						angleRangeVertical=360;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=1600;
						minSpeedThreshold=0;
						maxSpeedThreshold=2000;
						class AirTarget
						{
							minRange=0;
							maxRange=6000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=0;
							maxRange=6000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
					};
					class ManSensorComponent: SensorTemplateMan
					{
						typeRecognitionDistance=6000;
						angleRangeHorizontal=360;
						angleRangeVertical=360;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=1600;
						minSpeedThreshold=0;
						maxSpeedThreshold=2000;
						class AirTarget
						{
							minRange=0;
							maxRange=6000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=0;
							maxRange=6000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
					};
					class DataLinkSensorComponent: SensorTemplateDataLink
					{
						typeRecognitionDistance=6000;
						angleRangeHorizontal=360;
						angleRangeVertical=360;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=1600;
						minSpeedThreshold=0;
						maxSpeedThreshold=2000;
						class AirTarget
						{
							minRange=0;
							maxRange=6000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=0;
							maxRange=6000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
					};
				};
			};
		};
	};
	class M_Jian_AT;
	class M_AT;
    class Bo_Mk82;
    class ammo_Bomb_SDB;

    #include "ammo.hpp"
};
class CfgMagazines
{
	class VehicleMagazine;
	class 4Rnd_AAA_missiles;
	class 4Rnd_LG_Jian;
	class 7Rnd_Rocket_04_AP_F;
	class 4Rnd_GAA_missiles;
	class 2Rnd_Mk82_MI08;
    class magazine_Bomb_SDB_x1;

    #include "magazines.hpp"
};
class CfgWeapons
{
	class CannonCore;
	class Cannon_30mm_Plane_CAS_02_F: CannonCore
	{
		class LowROF;
	};
	class 104th_LAAT_Cannon_Base: Cannon_30mm_Plane_CAS_02_F
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
	class 104th_LAAT_Cannon_Low: 104th_LAAT_Cannon_Base
	{
		scope=2;
		displayName="LAAT Cannon (Low Power)";
		magazines[]=
		{
			"104th_LAAT_Cannon_LowPower_Magazine"
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
	class 104th_LAAT_Cannon_High: 104th_LAAT_Cannon_Base
	{
		displayName="LAAT Cannon (High Power)";
		scope=2;
		initSpeed=2000;
		magazineReloadTime=6;
		magazines[]=
		{
			"104th_LAAT_Cannon_HighPower_Magazine"
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
	class missiles_ASRAAM;
    class weapon_R73Launcher;
	class missiles_Jian;
	class Rocket_04_AP_Plane_CAS_01_F;
    class Mk82BombLauncher;
    class weapon_SDBLauncher;

    #include "weapons.hpp"
};
