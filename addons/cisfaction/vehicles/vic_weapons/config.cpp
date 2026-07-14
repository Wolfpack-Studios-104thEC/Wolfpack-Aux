class CfgPatches
{
	class WPEC_CIS_Vic_Weapons
	{
		author="WPEC Dev";
		requiredAddons[]=
		{
			"cba_common",
			"cba_events",
			"ls_weapons"
		};
		requiredVersion=2.2;
		units[]={};
		weapons[]={};
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class CfgAmmo
{
	class Sh_105mm_APFSDS_T_Green;
	class Sh_120mm_HE;
	class Sh_120mm_APFSDS;
	class WPEC_CIS_AAT_Main_Cannon_Shell: Sh_120mm_APFSDS
	{
		hit=600;
		caliber=25;
		warheadName="AP";
		indirectHit=50;
		indirectHitRange=8;
		typicalSpeed=700;
		explosive=0.30000001;
		cost=50;
		airFriction=-0.000275;
		airlock=1;
		model="3as\3AS_Weapons\Data\tracer_shell_red.p3d";
		effectFly="3AS_PlasmaBolt_Large_Red_Fly";
		tracerScale=4;
		tracerStartTime=0.0099999998;
		tracerEndTime=3;
		muzzleEffect="";
		CraterEffects="ATRocketCrater";
		explosionEffects="ATRocketExplosion";
		explosionSoundEffect="DefaultExplosion";
		aiAmmoUsageFlags=960;
		allowAgainstInfantry=1;
		class CamShakeExplode
		{
			power=24;
			duration=2.2;
			frequency=20;
			distance=143.636;
		};
		class CamShakeHit
		{
			power=120;
			duration=0.80000001;
			frequency=20;
			distance=1;
		};
		class CamShakeFire
		{
			power=3.3097501;
			duration=4.1999998;
			frequency=20;
			distance=87.635597;
		};
		class CamShakePlayerFire
		{
			power=0.059999999;
			duration=0.1;
			frequency=20;
			distance=1;
		};
	};
	class WPEC_CIS_King_Cannon_Ammo: Sh_105mm_APFSDS_T_Green
	{
		caliber=10;
		hit=400;
		explosive=1;
		indirectHitRange=5;
		aiAmmoUsageFlags="64 + 128 + 256 + 512";
		model="3as\3AS_Weapons\Data\tracer_shell_purple.p3d";
		effectFly="3AS_PlasmaBolt_Large_Purple_Fly";
		tracerScale=3;
		flaresize=10;
	};
	class 3AS_Vulture_Shell;
	class WPEC_CIS_Vulture_30mm_Ammo: 3AS_Vulture_Shell
	{
		aiAmmoUsageFlags="64 + 128 + 256 + 512";
		model="\3AS\3AS_Weapons\Data\tracer_shell_red.p3d";
		flaresize=4;
		caliber=3;
		maxLeadSpeed=2000;
		allowAgainstInfantry=1;
		tracersEvery=1;
		cost=30;
		hit=50;
		explosionEffects="ATRocketExplosion";
		indirectHit=6;
		mass=2;
		indirectHitRange=0.1;
		tracerscale=2;
	};
};
class CfgMagazines
{
	class 40Rnd_105mm_APFSDS_T_Green;
	class ls_30Rnd_120mm_AP_mag_red;
	class WPEC_CIS_AAT_Cannon_Mag: 40Rnd_105mm_APFSDS_T_Green
	{
		scope=2;
		displayName="AAT  Plasma (Red)";
		displayNameShort="AAT Main Gun Magazine";
		ammo="WPEC_CIS_AAT_Main_Cannon_Shell";
		count=30;
		tracersEvery=1;
		muzzleImpulseFactor[]={1,6};
	};
	class WPEC_CIS_King_Cannon_Mag: 40Rnd_105mm_APFSDS_T_Green
	{
		scope=2;
		displayName="King AAT Overcharged Plasma (Red)";
		displayNameShort="Overcharged";
		ammo="WPEC_CIS_King_Cannon_Ammo";
		count=30;
		tracersEvery=1;
		muzzleImpulseFactor[]={1,6};
	};
	class 1000Rnd_25mm_shells;
	class WPEC_CIS_Vulture_30mm_Mag_x1000: 1000Rnd_25mm_shells
	{
		displayName="Vulture main cannon";
		initSpeed=800;
		displayNameShort="High Energy";
		ammo="WPEC_CIS_Vulture_30mm_Ammo";
		tracersEvery=1;
		count=1000;
	};
};
class LowROF;
class player;
class manual;
class CfgWeapons
{
	class 3AS_HeavyAATCannon_Base;
	class WPEC_CIS_AAT_Cannon_Weapon: 3AS_HeavyAATCannon_Base
	{
		scope=2;
		displayName="AAT Cannon";
		magazines[]=
		{
			"WPEC_CIS_AAT_Cannon_Mag"
		};
		reloadTime=6;
		magazineReloadTime=6;
		autoReload=1;
	};
	class WPEC_CIS_King_Cannon_Weapon: 3AS_HeavyAATCannon_Base
	{
		scope=2;
		displayName="Overcharged AAT Cannon";
		magazines[]=
		{
			"WPEC_CIS_King_Cannon_Mag"
		};
		reloadTime=6;
		magazineReloadTime=6;
		autoReload=1;
	};
	class Cannon_30mm_Plane_CAS_02_F;
	class WPEC_CIS_Vulture_cannon_Weapon: Cannon_30mm_Plane_CAS_02_F
	{
		magazineWell[]={};
		magazines[]=
		{
			"WPEC_CIS_Vulture_30mm_Mag_x1000"
		};
		modes[]=
		{
			"manual",
			"close",
			"short",
			"medium"
		};
		ballisticsComputer=1;
		displayName="Vulture Main Cannon";
		class manual: LowROF
		{
			displayname="Full";
			burst=1;
			magazineReloadTime=6;
			autoReload=1;
			reloadTime=0.1;
			dispersion=0.0020000001;
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"3AS\3AS_Main\Sounds\VultureDroidBlaster\Vulturegun1.ogg",
					1.5,
					1,
					3000
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
		};
		class close: manual
		{
			aiDispersionCoefX=2;
			aiDispersionCoefY=2;
			burst=50;
			aiRateOfFire=0.1;
			aiRateOfFireDistance=50;
			minRange=10;
			minRangeProbab=0.050000001;
			midRange=20;
			midRangeProbab=0.69999999;
			maxRange=50;
			maxRangeProbab=0.039999999;
			showToPlayer=0;
		};
		class short: close
		{
			aiDispersionCoefX=2;
			aiDispersionCoefY=2;
			burst=30;
			aiRateOfFire=0.1;
			aiRateOfFireDistance=300;
			minRange=50;
			minRangeProbab=0.050000001;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=300;
			maxRangeProbab=0.039999999;
		};
		class medium: close
		{
			aiDispersionCoefX=2;
			aiDispersionCoefY=2;
			burst=30;
			aiRateOfFire=0.1;
			aiRateOfFireDistance=600;
			minRange=200;
			minRangeProbab=0.050000001;
			midRange=300;
			midRangeProbab=0.69999999;
			maxRange=2000;
			maxRangeProbab=0.1;
		};
	};
};
class cfgMods
{
	author="ChaosViking";
	timepacked="1677279925";
};
