


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
		aiAmmoUsageFlags=128 + 512;
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

//Aircraft
	class LAAT_Cannon_Ammo_Base: BulletBase
	{
		aiAmmoUsageFlags=64 + 128 + 256 + 512;
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
		model="3as\3as_weapons\data\tracer_yellow.p3d";
        effectFly="3AS_PlasmaBolt_Medium_Yellow_Fly";
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
    class WPEC_coaxium_plasma_ammo: B_35mm_AA_Tracer_Red
	{
		hit = 6000;
		indirectHit = 4000;
		indirectHitRange = 10;
		caliber = 6;
		explosive = 1;
		model="3as\3as_weapons\data\tracer_yellow.p3d";
        effectFly="3AS_PlasmaBolt_Medium_Yellow_Fly";
		aiAmmoUsageFlags = 64 + 128 + 256 + 512;
		simulation = "shotShell";
		effectsFire = "CannonFire";
		//explosionEffects="NCA_Coax_Rounds_Explosion_Effects";
		CraterEffects="ArtyShellCrater";
		explosionSoundEffect = "DefaultExplosion";
		tracertScale = 1;
		tracerStartTime = 0.11;
		tracerEndTime = 10;
		soundHit1[] =
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_01.wss",
			2.5118899,
			1,
			2000
		};
			soundHit2[] =
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_02.wss",
			2.5118899,
			1,
			2000
		};
		soundHit3[] =
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_03.wss",
			2.5118899,
			1,
			2000
		};
		SoundSetExplosion[] =
		{
			"Shell155mm_Exp_SoundSet",
			"Shell155mm_Tail_SoundSet",
			"Explosion_Debris_SoundSet"
		};
		soundSetSonicCrack[] =
		{
			"bulletSonicCrack_SoundSet",
			"bulletSonicCrackTail_SoundSet"
		};
		supersonicCrackFar[] =
		{
			"A3\Sounds_F\weapons\Explosion\supersonic_crack_50meters",
			0.22387201,
			1,
			150
		};
		supersonicCrackNear[] =
		{
			"A3\Sounds_F\weapons\Explosion\supersonic_crack_close",
			0.316228,
			1,
			50
		};
	};

    //Missiles
	class WPEC_Maramu_A2A_Missile_ammo_01: ammo_Missile_AA_R73  //Internal base class to call Components
	{
		class Components;
	};
    class WPEC_Maramu_A2A_Missile_ammo: WPEC_Maramu_A2A_Missile_ammo_01  //1 shot vultures //LR A2A
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
		weaponLockDelay = 2; // Drastically faster lock-on
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
		airLock=1;
		irLock=0;
		laserLock=0;
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
    class WPEC_Hoska_A2A_Missile_ammo: WPEC_Maramu_A2A_Missile_ammo_01  //MR A2A
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
		airLock=1;
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
    class WPEC_Talons_A2A_missile_ammo: WPEC_Maramu_A2A_Missile_ammo_01 //SR A2A
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
		airLock=1;
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
    class WPEC_Dianoga_WGM_FixWing_Missile_ammo: WPEC_Dianoga_WGM_Missile_ammo  //1 shot AAT
	{
		initTime = 1;
    };
	class WPEC_Kaada_Unguided_Rocket_ammo: M_AT //Inantry killer
	{
		displayName="UGM";
		displayNameShort="UGM";
        hit=700;
		indirectHit=950;
		indirectHitRange=6.5;
		effectsMissile="WPEC_particle_effect_Missile_fly_Maroon";
	};

    //Bombs
	class WPEC_Unguided_Bomb_ammo: Bo_Mk82
	{
		hit=2000;
		indirectHit=1800;
		indirectHitRange=7;
		//CraterEffects="NCA_ProtonBombBombCrater";
		//explosionEffects="NCA_Proton_Bomb_ExplosionEffects";
	};

	class WPEC_Guided_Bomb_ammo: ammo_Bomb_SDB
	{
		hit=4000;
		indirectHit=1000;
		indirectHitRange=2;
		dangerRadiusHit=1500;
		suppressionRadiusHit=200;
		craterEffects="AAMissileCrater";
		explosionEffects="AAMissileExplosion";
	};



//Unknown Ammo
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
	class WPEC_Loper_SR_AtA_Missile_ammo: M_Zephyr
	{
		displayName="Loper Short Range Missile";
		displayNameShort="Loper SR Missile";
		aiAmmoUsageFlags=64 + 128 + 256 + 512;
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
