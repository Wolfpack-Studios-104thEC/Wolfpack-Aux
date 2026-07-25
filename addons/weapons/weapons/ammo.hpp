
//Primaries
    class WPEC_3AS_DCLight_PlasmaAmmo: 3AS_EC30_bluePlasma
	{
		scope=2;
		//effectfly="104th_3AS_FX_Bullet_Teal";
		effectFly="3AS_PlasmaBolt_Blue_Fly";
		timeToLive=6;
		coefGravity=0;
		airFriction=0;
		
	};
	class WPEC_3AS_DCMid_PlasmaAmmo: 3AS_EC40_BluePlasma
	{
		scope=2;
		//effectfly="104th_3AS_FX_Bullet_Teal";
		effectFly="3AS_PlasmaBolt_Blue_Fly";
		timeToLive=6;
		coefGravity=0;
		airFriction=0;
	};
	class WPEC_3AS_DCMid_OCPlasmaAmmo: 3AS_EC40_BluePlasma
	{
		scope=2;
		hit=50;
		//effectfly="104th_3AS_FX_Bullet_Teal";
		effectFly="3AS_PlasmaBolt_Blue_Fly";
		timeToLive=6;
		coefGravity=0;
		airFriction=0;
	};
	class WPEC_3AS_DCHeavy_PlasmaAmmo: 3AS_EC50_bluePlasma
	{
		scope=2;
		//effectfly="104th_3AS_FX_Bullet_Teal";
		effectFly="3AS_PlasmaBolt_Blue_Fly";
		timeToLive=6;
		coefGravity=0;
		airFriction=0;
	};
	class WPEC_3AS_DCExtraHeavy_PlasmaAmmo: 3AS_EC50_bluePlasma
	{
		scope=2;
		hit=17;
		//effectfly="104th_3AS_FX_Bullet_Teal";
		effectFly="3AS_PlasmaBolt_Blue_Fly";
		timeToLive=6;
		coefGravity=0;
		airFriction=0;
	};
	class WPEC_3AS_Z6_PlasmaAmmo: 3AS_EC60_bluePlasma
	{
		scope=2;
		hit=14;
		//effectfly="104th_3AS_FX_Bullet_Teal";
		effectFly="3AS_PlasmaBolt_Blue_Fly";
		timeToLive=6;
		coefGravity=0;
		airFriction=0;
	};
	class WPEC_3AS_Sniper_PlasmaAmmo: 3AS_EC80_BluePlasma
	{
		scope=2;
		effectfly="3AS_PlasmaBolt_Medium_Green_Fly";
		timeToLive=6;
		coefGravity=0;
		airFriction=0;
	};
	class WPEC_3AS_DC15LE_PlasmaAmmo: 3AS_EC60_bluePlasma
	{
		hit=20;
		scope=2;
		effectfly="3AS_PlasmaBolt_Blue_Fly";
		timeToLive=6;
		coefGravity=0;
		airFriction=0;
	};
	class WPEC_3AS_ChaingunAmmo: 3AS_Chaingun_Ammo
	{
		scope=2;
		//effectfly="104th_3AS_FX_Bullet_Teal";
		effectFly="3AS_PlasmaBolt_Blue_Fly";
		timeToLive=6;
		coefGravity=0;
		airFriction=0;
	};
	class WPEC_3AS_R_Mk40_AT: 3AS_R_Mk40_AT
	{
		scope=2;
		displayName="[104th] MK40 AT Rocket";
		hit=800;
		effectsMissile="3AS_Rocket_effect_Purple_fly";
	};
	class WPEC_3AS_M_Mk40_AT: 3AS_M_Mk40_AT
	{
		scope=2;
		displayName="[104th] MK40 AT Missile";
		hit=800;
		effectsMissile="3AS_Rocket_effect_Purple_fly";
	};
	class WPEC_DC15XM_Plasma: JLTS_bullet_sniper_blue
	{
		hit = 300;
		caliber = 3.20001;
		indirectHit=50;
		indirectHitRange=1;
		model="\A3\Weapons_f\Data\bullettracer\shell_tracer_green.p3d";
		tracerScale=2;
		effectfly="3AS_PlasmaBolt_Medium_Yellow_Fly";
		warheadName="TandemHEAT";
		submunitionAmmo="3AS_ammo_Penetrator_MK41";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitSpeed=1000;
		submunitionParentSpeedCoef=0;
		submunitionInitialOffset[]={0,0,-0.2};
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
		explosive=1;
		cost=50;
		coefGravity=0;
		airFriction=0;
	};
	class WPEC_DC15XM_Energy: JLTS_bullet_sniper_blue
	{
		hit=120;
		model="\A3\Weapons_f\Data\bullettracer\shell_tracer_yellow.p3d";
		tracerScale=2;
		effectfly="3AS_PlasmaBolt_Yellow_Fly";
		coefGravity=0;
		airFriction=0;
	};
//Rockets
	class WPEC_MK1_AT: RocketBase
	{
		model="\A3\weapons_f\launchers\RPG32\pg32v_rocket.p3d";
		hit=1300;
		indirectHit=28;
		indirectHitRange=3;
		warheadName="TandemHEAT";
		submunitionAmmo="3AS_ammo_Penetrator_MK41";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitSpeed=1000;
		submunitionParentSpeedCoef=0;
		submunitionInitialOffset[]={0,0,-0.2};
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
		explosive=1;
		cost=100;
		airFriction=0.075000003;
		sideAirFriction=0.075000003;
		maxSpeed=140;
		initTime=0;
		thrustTime=0.1;
		thrust=500;
		fuseDistance=15;
		CraterEffects="ATMissileCrater";
		explosionEffects="ATMissileExplosion";
		effectsMissileInit="";
		effectsMissile="3AS_Rocket_effect_Purple_fly";
		simulationStep=0.02;
		airLock=0;
		aiAmmoUsageFlags= 128 + 512;
		irLock=0;
		timeToLive=15;
		maneuvrability=0;
		allowAgainstInfantry=0;
		soundHit1[]=
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_01.wss",
			2.5118864,
			1,
			1800
		};
		soundHit2[]=
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_02.wss",
			2.5118864,
			1,
			1800
		};
		soundHit3[]=
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_03.wss",
			2.5118864,
			1,
			1800
		};
		multiSoundHit[]=
		{
			"soundHit1",
			0.34,
			"soundHit2",
			0.33000001,
			"soundHit3",
			0.33000001
		};
		soundFly[]=
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\Fly_RPG32.wss",
			0.31622776,
			1.5,
			900
		};
		class CamShakeExplode
		{
			power=14;
			duration=1.4;
			frequency=20;
			distance=99.329597;
		};
		class CamShakeHit
		{
			power=110;
			duration=0.60000002;
			frequency=20;
			distance=1;
		};
		class CamShakeFire
		{
			power=2.1147399;
			duration=0.80000001;
			frequency=20;
			distance=35.7771;
		};
		class CamShakePlayerFire
		{
			power=1;
			duration=0.2;
			frequency=20;
			distance=2;
		};
	};
	class WPEC_MK2_AT: WPEC_MK1_AT
	{
		hit=800;
		indirectHit=20;
		indirectHitRange=10;
		allowAgainstInfantry=1;
		effectsMissile="3AS_Rocket_effect_Purple_fly";
	};
	class WPEC_MK3_AP: WPEC_MK1_AT
	{
		hit=300;
		indirectHit=45;
		indirectHitRange=20;
		submunitionAmmo="";
		allowAgainstInfantry=1;
		effectsMissile="3AS_Rocket_effect_Purple_fly";
	};
	class WPEC_MK4_AP: WPEC_MK1_AT
	{
		hit=400;
		indirectHit=60;
		indirectHitRange=30;
		submunitionAmmo="";
		allowAgainstInfantry=1;
		effectsMissile="3AS_Rocket_effect_Purple_fly";
	};
	class WPEC_MK5_AP: WPEC_MK1_AT
	{
		hit=1;
		indirectHit=1;
		indirectHitRange=30;
		submunitionAmmo="";
		allowAgainstInfantry=1;
		effectsMissile="3AS_Rocket_effect_Purple_fly";
	};
	class WPEC_3AS_RocketGrenade_HE_ARC: 3AS_RocketGrenade_HE
	{
		hit=250;
		effectfly="3AS_PlasmaBolt_Blue_Fly";
		simulation="shotShell";
	};
	class WPEC_3AS_RocketGrenade_HE_Commando: 3AS_RocketGrenade_HE
	{
		hit=275;
		effectfly="3AS_PlasmaBolt_Blue_Fly";
		simulation="shotShell";
	};
// Pistols
	class WPEC_MK1_Normal_PistolAmmo: 3AS_EC30_bluePlasma
	{
		hit=6;
		//effectfly="104th_3AS_FX_Bullet_Teal";
		effectFly="3AS_PlasmaBolt_Blue_Fly";
		coefGravity=0;
		airFriction=0;
	};
	class WPEC_MK2_Stun_PistolAmmo: JLTS_bullet_stun
	{
		//effectfly="104th_3AS_FX_Bullet_Teal";
		effectFly="3AS_PlasmaBolt_Blue_Fly";
	};
	class WPEC_MK3_EMP_PistolAmmo: JLTS_bullet_emp
	{
		model="\MRC\JLTS\weapons\Core\effects\laser_yellow.p3d";
		lightcolor[]={0.5,0.5,0.25};
		//effectfly="104th_3AS_FX_Bullet_Teal";
		effectFly="3AS_PlasmaBolt_Blue_Fly";
	};
	class WPEC_MK4_OC_PistolAmmo: 3AS_EC30_bluePlasma
	{
		hit=30;
		caliber=1;
		effectfly="3AS_PlasmaBolt_Yellow_Fly";
	};
