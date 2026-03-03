#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        addonRootClass = QADDON;
        name = COMPONENT_NAME;
        units[] = {
            QGVAR(ParticleCannon)
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            QE_ADDON(vehicles)
        };
        VERSION_CONFIG;
    };
};

class CfgVehicles
{
	class StaticWeapon;
	class StaticMGWeapon: StaticWeapon
	{
		class Turrets;
	};
	class 3AS_ParticleCannon_Base: StaticMGWeapon
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};
	class GVAR(ParticleCannon): 3AS_ParticleCannon_Base
	{
		author="Wolfpack Studios";
		scope = 1;
		scopeCurator = 1;
		displayName = "[104th] Particle Cannon";
        faction= QEGVAR(faction,eclipse);
		editorSubcategory=QEGVAR(edsubcat,turrets);
		side = 0;
		crew = "WPEC_separatistArmy_B1_unit_crew";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"WPEC_Partical_Cannon_Weapon"};
				magazines[] =
				{
					"WPEC_500Rnd_30mm_DF9_AA_mag",
					"WPEC_500Rnd_30mm_DF9_AA_mag",
					"WPEC_500Rnd_30mm_DF9_AA_mag"
				};
			};
		};
		class AnimationSources
		{
			class mainturret
			{
				source = "mainturret";
				weapon = "WPEC_Partical_Cannon_Weapon";
			};
			class maingun
			{
				source = "maingun";
				weapon = "WPEC_Partical_Cannon_Weapon";
			};
			class recoil1_in
			{
				source = "recoil1_in";
				weapon = "WPEC_Partical_Cannon_Weapon";
			};
			class recoil2_in
			{
				source = "recoil2_in";
				weapon = "WPEC_Partical_Cannon_Weapon";
			};
		};
	};
};

class CfgAmmo
{
	class BulletBase;
	class WPEC_Partical_Cannon_30mm: BulletBase
	{
		hit=120;
		indirectHit=35;
		indirectHitRange=2;
		warheadName="AP";
		explosive=0.60000002;
		explosionSoundEffect="DefaultExplosion";
		explosionEffects="ExploAmmoExplosion";
		craterEffects="ExploAmmoCrater";
		visibleFire=32;
		audibleFire=200;
		visibleFireTime=3;
		dangerRadiusBulletClose=20;
		dangerRadiusHit=60;
		suppressionRadiusBulletClose=12;
		suppressionRadiusHit=24;
		cost=20;
		deflecting=0;
		coefGravity = 0.000001574;
		airFriction=-0.0001;
		fuseDistance=3;
		typicalSpeed=1070;
		caliber=4.4000001;
		airlock=1;
		aiAmmoUsageFlags = 64 + 128 + 256 + 512;
		allowAgainstInfantry=1;
		model="\3AS\3AS_Weapons\Data\tracer_red.p3d";
		tracerScale=2.5;
		tracerStartTime=0;
		tracerEndTime=10;
		effectFly="3AS_PlasmaBolt_Medium_Red_Fly";
		soundSetSonicCrack[]=
		{
			"3AS_HeavyPlasma_Flyby_SoundSet"
		};

		class CamShakeExplode
		{
			power=6;
			duration=1;
			frequency=20;
			distance=67.817802;
		};
		class CamShakeHit
		{
			power=30;
			duration=0.40000001;
			frequency=20;
			distance=1;
		};
		class CamShakeFire
		{
			power=2.2360699;
			duration=1;
			frequency=20;
			distance=40;
		};
		class CamShakePlayerFire
		{
			power=0.0099999998;
			duration=0.1;
			frequency=20;
			distance=1;
		};
		soundFly[]=
		{
			"",
			1,
			1,
			50
		};
		soundHit1[]=
		{
			"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_01.wss",
			1.7782794,
			1,
			1600
		};
		soundHit2[]=
		{
			"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_02.wss",
			1.7782794,
			1,
			1600
		};
		soundHit3[]=
		{
			"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_03.wss",
			1.7782794,
			1,
			1600
		};
		soundHit4[]=
		{
			"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_04.wss",
			1.7782794,
			1,
			1600
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
			hitMetal="ImpactMetalSabotSmall";
			hitMetalPlate="ImpactMetalSabotSmall";
			hitBuilding="ImpactConcreteSabotSmall";
			hitConcrete="ImpactConcreteSabotSmall";
			hitGroundSoft="ImpactEffectsGroundSabot";
			hitGroundHard="ImpactEffectsGroundSabot";
			Hit_Foliage_green="ImpactLeavesGreen";
			Hit_Foliage_Dead="ImpactLeavesDead";
			Hit_Foliage_Green_big="ImpactLeavesGreenBig";
			Hit_Foliage_Palm="ImpactLeavesPalm";
			Hit_Foliage_Pine="ImpactLeavesPine";
			hitFoliage="ImpactLeaves";
			hitGlass="ImpactGlass";
			hitGlassArmored="ImpactGlassThin";
			hitWood="ImpactWood";
			hitHay="ImpactHay";
			hitPlastic="ImpactPlastic";
			hitRubber="ImpactRubber";
			hitTyre="ImpactTyre";
			hitMan="ImpactEffectsBlood";
			hitWater="ImpactEffectsWater";
			default_mat="ImpactEffectsGroundSabot";
		};
	};
};

class CfgWeapons
{
	class CannonCore;
	class WPEC_Partical_Cannon_Weapon: CannonCore
	{
		scope=1;
        author = AUTHOR;
		displayName="[21st] Partical Cannon";
		nameSound="cannon";
		cursor="EmptyCursor";
		cursorAim="mg";
		magazines[]=
		{
			"WPEC_500Rnd_30mm_DF9_AA_mag"
		};
		magazineReloadTime=20;
		modes[]=
		{
			"manual",
			"close",
			"short",
			"medium",
			"far"
		};
		canLock=0;
		ballisticsComputer = 2 + 4;
		class GunParticles
		{
			class FirstEffect
			{
				effectName="MachineGun1";
				positionName="Usti hlavne 1";
				directionName="Konec hlavne 1";
			};
			class SecondEffect
			{
				effectName="MachineGun1";
				positionName="Usti hlavne 2";
				directionName="Konec hlavne 2";
			};
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
				soundSetShot[]=
				{
					"3AS_DF9_AA_SoundSet"
				};
			};
			soundContinuous=0;
			soundBurst=0;
			reloadTime=0.16500001;
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
			aiRateOfFireDispersion=1;
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
			aiRateOfFireDispersion=2;
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
			aiRateOfFireDispersion=3;
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
	class VehicleMagazine;
	class WPEC_500Rnd_30mm_DF9_AA_mag: VehicleMagazine
	{
		scope=2;
        author = AUTHOR;
		displayName = "[21st] 500Rnd Partical Cannon Magazine";
		displayNameShort="AA";
		ammo="WPEC_Partical_Cannon_30mm";
		count=500;
		initSpeed=1070;
		maxLeadSpeed=416.66699;
		tracersEvery=1;
		nameSound="cannon";
		muzzleImpulseFactor[]={0,0};
	};
};
