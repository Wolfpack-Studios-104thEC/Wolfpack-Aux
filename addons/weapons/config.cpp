#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {};
        author = AUTHOR;
        authors[] = {""};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};
class CBA_DisposableLaunchers
{
	104th_3AS_RPS6_Unguided[]=
	{
		"104th_3AS_RPS6_F",
		"3AS_RPS6_Used"
	};
	104th_3AS_RPS6_Guided[]=
	{
		"104th_3AS_RPS6_G",
		"3AS_RPS6_Guided_Used"
	};
};
class CfgAmmo
{
	class 3AS_PlasmaBase;
	class 3AS_EC30_bluePlasma;
	class 3AS_EC40_BluePlasma;
	class 3AS_EC50_bluePlasma;
	class 3AS_EC60_bluePlasma;
	class 3AS_EC80_BluePlasma;
	class 3AS_Chaingun_Ammo;
	class 3AS_R_Mk40_AT;
	class 3AS_M_Mk40_AT;
	class 3AS_RocketGrenade_HE;
	class 3AS_Detonator_1RND;
	class SmokeShell;
	class GrenadeHand;
	class Grenade;
	class JLTS_bullet_sniper_blue;
	class 104th_3AS_ThermalDetonator_Ammo: GrenadeHand
	{
		hit=18;
		indirectHit=18;
		indirectHitRange=6;
		model="\3AS\3AS_Equipment\model\3AS_thermaldet.p3d";
		soundFly[]=
		{
			"3AS\3AS_Equipment\SFX\td.ogg",
			1.5,
			1,
			90
		};
		ace_frag_enabled=1;
		ace_frag_skip=0;
		ace_frag_force=1;
		ace_frag_classes[]=
		{
			"ace_frag_tiny_HD"
		};
		ace_frag_metal=210;
		ace_frag_charge=185;
		ace_frag_gurney_c=2843;
		ace_frag_gurney_k="3/5";
		allowAgainstInfantry=1;
	};
	class 104th_ThermalDisruptor_Ammo: 104th_3AS_ThermalDetonator_Ammo
	{
		author="Maldova";
		hit=10;
		indirectHit=5;
		indirectHitRange=12;
		explosionEffects="JLTS_fx_exp_EMP";
		soundFly[]=
		{
			"WPEC\WPEC_Weapons\Sounds\Grenades\Thermal_Disruptor_Fly.ogg",
			30.0,
			1,
			100
		};
		ace_grenades_pullPinSound[] = 
		{
			"WPEC\WPEC_Weapons\Sounds\Grenades\Thermal_Disruptor_Pin.ogg",
			30.0,
			1,
			50
		};
		SoundSetExplosion[]+=
		{
			"JLTS_GrenadeEMP_Exp_SoundSet",
			"JLTS_GrenadeEMP_Tail_SoundSet",
			"Explosion_Debris_SoundSet"
		};
		ace_frag_enabled=1;
		ace_frag_metal=100;
		ace_frag_charge=100;
		ace_frag_gurney_c=1843;
		ace_frag_gurney_k="3/5";
		allowAgainstInfantry=1;
	};
	class 104th_ThermalDisruptorImpact_Ammo: 104th_ThermalDisruptor_Ammo
	{
		hit=15;
		indirectHit=4;
		indirectHitRange=5;
		explosionTime=-1;
		fuseDistance=5;
		ace_frag_metal=140;
		ace_frag_charge=60;
		coefGravity=0.5;
	};
	class 104th_PersonalShield_Republic_Ammo: Grenade
	{
		explosionEffects = "";
		multiSoundHit[] = {};
		SoundSetExplosion[] = {};
		hit = 0;
		explosionTime = 1e-06;
		indirectHit = 0;
		explosive = 0;
		ace_frag_enabled = 0;
	};
	class 104th_PersonalShieldFull_Republic_Ammo: Grenade
	{
		explosionEffects = "";
		multiSoundHit[] = {};
		SoundSetExplosion[] = {};
		hit = 0;
		explosionTime = 1e-06;
		indirectHit = 0;
		explosive = 0;
		ace_frag_enabled = 0;
	};
	class 104th_SquadShield_Republic_Ammo: Grenade
	{
		model = "3AS\3AS_Shield\SquadShield_Throwable.p3d";
		simulation = "shotShell";
		explosionEffects = "";
		multiSoundHit[] = {};
		SoundSetExplosion[] = {};
		hit = 0;
		explosionTime = 10;
		indirectHit = 0;
		explosive = 0;
		ace_frag_enabled = 0;
	};
	class 104th_3AS_BaridiumCore_Ammo: GrenadeHand
	{
		hit=23;
		indirectHit=23;
		indirectHitRange=7;
		explosionEffectsRadius=1.5;
		suppressionRadiusHit=24;
		typicalspeed=18;
		model="\3AS\3AS_Equipment\model\3AS_coredetonator.p3d";
		visibleFire=0.5;
		audibleFire=0.05;
		visibleFireTime=1;
		fuseDistance=0;
	};
	class 104th_SmokeShellBase: SmokeShell
	{
		model="3AS\3AS_Equipment\model\3AS_smokegrenade.p3d";
		ace_grenades_pullPinSound[] = 
		{
			"WPEC\WPEC_Weapons\Sounds\Grenades\Thermal_Disruptor_Pin.ogg",
			30.0,
			1,
			50
		};
	};
	class 104th_SmokeShellRed: 104th_SmokeShellBase
	{
		smokeColor[]={0.84380001,0.1383,0.1353,1};
	};
	class 104th_SmokeShellGreen: 104th_SmokeShellBase
	{
		smokeColor[]={0.21250001,0.62580001,0.48909998,1};
	};
	class 104th_SmokeShellYellow: 104th_SmokeShellBase
	{
		smokeColor[]={0.98830003,0.86059999,0.071900003,1};
	};
	class 104th_SmokeShellPurple: 104th_SmokeShellBase
	{
		smokeColor[]={0.4341,0.1388,0.41439998,1};
	};
	class 104th_SmokeShellBlue: 104th_SmokeShellBase
	{
		smokeColor[]={0.1183,0.1867,1,1};
	};
	class 104th_SmokeShellOrange: 104th_SmokeShellBase
	{
		smokeColor[]={0.66970003,0.22750001,0.10053,1};
	};
	class RocketBase;
	class MissileBase
	{
		class Components;
	};
	class 104th_3AS_DCLight_PlasmaAmmo: 3AS_EC30_bluePlasma
	{
		scope=2;
		effectfly="WPEC_FX_Bullet_Teal";
		timeToLive=6;
	};
	class 104th_3AS_DCMid_PlasmaAmmo: 3AS_EC40_BluePlasma
	{
		scope=2;
		effectfly="WPEC_FX_Bullet_Teal";
		timeToLive=6;
	};
	class 104th_3AS_DCMid_OCPlasmaAmmo: 3AS_EC40_BluePlasma
	{
		scope=2;
		hit=50;
		effectfly="WPEC_FX_Bullet_Teal";
		timeToLive=6;
	};
	class 104th_3AS_DCHeavy_PlasmaAmmo: 3AS_EC50_bluePlasma
	{
		scope=2;
		effectfly="WPEC_FX_Bullet_Teal";
		timeToLive=6;
	};
	class 104th_3AS_DCExtraHeavy_PlasmaAmmo: 3AS_EC50_bluePlasma
	{
		scope=2;
		hit=17;
		effectfly="WPEC_FX_Bullet_Teal";
		timeToLive=6;
	};
	class 104th_3AS_Z6_PlasmaAmmo: 3AS_EC60_bluePlasma
	{
		scope=2;
		hit=14;
		effectfly="WPEC_FX_Bullet_Teal";
		timeToLive=6;
	};
	class 104th_3AS_Sniper_PlasmaAmmo: 3AS_EC80_BluePlasma
	{
		scope=2;
		effectfly="WPEC_FX_Bullet_Lime_Sniper";
		timeToLive=6;
	};
	class 104th_3AS_ChaingunAmmo: 3AS_Chaingun_Ammo
	{
		scope=2;
		effectfly="WPEC_FX_Bullet_Teal";
		timeToLive=6;
	};
	class 104th_3AS_R_Mk40_AT: 3AS_R_Mk40_AT
	{
		scope=2;
		displayName="[104th] MK40 AT Rocket";
		hit=800;
		effectsMissile="WPEC_FX_Missile_Maroon_Rocket";
	};
	class 104th_3AS_M_Mk40_AT: 3AS_M_Mk40_AT
	{
		scope=2;
		displayName="[104th] MK40 AT Missile";
		hit=800;
		effectsMissile="WPEC_FX_Missile_Maroon_Rocket";
	};
	class 104th_DC15XM_Plasma: JLTS_bullet_sniper_blue
	{
		hit = 300;
		caliber = 3.20001;
		indirectHit=50;
		indirectHitRange=1;
		model="\A3\Weapons_f\Data\bullettracer\shell_tracer_green.p3d";
		tracerScale=2;
		effectfly="WPEC_FX_Bullet_Lime_Sniper";
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
	};
	class 104th_DC15XM_Energy: JLTS_bullet_sniper_blue
	{
		hit=120;
		model="\A3\Weapons_f\Data\bullettracer\shell_tracer_yellow.p3d";
		tracerScale=2;
		effectfly="WPEC_FX_Bullet_Yellow_Sniper";
	};
	class 104th_MK1_AT: RocketBase
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
		effectsMissile="WPEC_particle_effect_Rocket_fly_Maroon";
		simulationStep=0.02;
		airLock=0;
		aiAmmoUsageFlags="128 + 512";
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
	class 104th_MK2_AT: 104th_MK1_AT
	{
		hit=800;
		indirectHit=20;
		indirectHitRange=10;
		allowAgainstInfantry=1;
		effectsMissile="WPEC_particle_effect_Rocket_fly_Maroon";
	};
	class 104th_MK3_AP: 104th_MK1_AT
	{
		hit=300;
		indirectHit=45;
		indirectHitRange=20;
		submunitionAmmo="";
		allowAgainstInfantry=1;
		effectsMissile="WPEC_particle_effect_Rocket_fly_Maroon";
	};
	class 104th_MK4_AP: 104th_MK1_AT
	{
		hit=400;
		indirectHit=60;
		indirectHitRange=30;
		submunitionAmmo="";
		allowAgainstInfantry=1;
		effectsMissile="WPEC_particle_effect_Rocket_fly_Maroon";
	};
	class 104th_MK5_AP: 104th_MK1_AT
	{
		hit=1;
		indirectHit=1;
		indirectHitRange=30;
		submunitionAmmo="";
		allowAgainstInfantry=1;
		effectsMissile="WPEC_particle_effect_Rocket_fly_Maroon";
	};
	class JLTS_bullet_stun;
	class JLTS_bullet_emp;
	class 104th_MK1_Normal_PistolAmmo: 3AS_EC30_bluePlasma
	{
		hit=6;
		effectfly="WPEC_FX_Bullet_Teal";
	};
	class 104th_MK2_Stun_PistolAmmo: JLTS_bullet_stun
	{
		effectfly="WPEC_FX_Bullet_Teal";
	};
	class 104th_MK3_EMP_PistolAmmo: JLTS_bullet_emp
	{
		model="\MRC\JLTS\weapons\Core\effects\laser_yellow.p3d";
		lightcolor[]={0.5,0.5,0.25};
		effectfly="WPEC_FX_Bullet_Teal";
	};
	class 104th_MK4_OC_PistolAmmo: 3AS_EC30_bluePlasma
	{
		hit=30;
		caliber=1;
		effectfly="WPEC_FX_Bullet_Yellow_Pistol";
	};
	class 104th_3AS_RocketGrenade_HE_ARC: 3AS_RocketGrenade_HE
	{
		hit=250;
		effectfly="WPEC_particle_effect_GL_Blue";
		simulation="shotShell";
	};
	class 104th_3AS_RocketGrenade_HE_Commando: 3AS_RocketGrenade_HE
	{
		hit=275;
		effectfly="WPEC_particle_effect_GL_Blue";
		simulation="shotShell";
	};
};
class CfgMagazines
{
	class 3AS_16Rnd_EC20_Mag;
	class 3AS_60Rnd_EC30_mag;
	class 3AS_40Rnd_EC40_Mag;
	class 3AS_200Rnd_EC40_Mag;
	class 3AS_45Rnd_EC50_Mag;
	class 3AS_60Rnd_EC50_Mag;
	class 3AS_300Rnd_EC60_Mag;
	class 3AS_10Rnd_EC80_Mag;
	class 3AS_Chaingun_Drum_Mag;
	class 3AS_500_Rnd_BlasterTurret_mag;
	class 3AS_MK40_AT;
	class 3AS_MK40_AT_Guided;
	class 3AS_6Rnd_RocketGrenades_HE;
	class 3AS_ThermalDetonator;
	class Default;
	class JLTS_DC15X_mag;
	class CA_Magazine: Default
	{
	};
	class CA_LauncherMagazine: CA_Magazine
	{
	};
	class FakeMagazine;
	class HandGrenade;
	class 104th_3AS_ThermalDetonator_Mag: 3AS_ThermalDetonator
	{
		scope=2;
		value = 1;
		model="\3AS\3AS_Equipment\model\3AS_thermaldet.p3d";
		picture="\3AS\3AS_Equipment\UI\Thermal_Detonator_UI_ca.paa";
		displayName="[104th] Thermal Detonator";
		displayNameShort="Thermal Detonator";
		ammo="104th_3AS_ThermalDetonator_Ammo";
		mass=4;
		descriptionShort="Standard-Issue Thermal Detonator";
		type=256;
		initSpeed=18;
		nameSound="handgrenade";
		maxLeadSpeed=7;
		sound[]=
		{
			"",
			0.00031622799,
			1
		};

	};
	/*class 104th_3AS_ThermalDetonator_Mag_Easter: 3AS_ThermalDetonator
	{
		scope=2;
		value = 1;
		model="\WPEC\WPEC_Weapons\Grenades\EggDetonator.p3d";
		picture="\WPEC\WPEC_Weapons\Grenades\icons\logo_co.paa";
		displayName="[104th] Thermal Eggonator";
		displayNameShort="Thermal Eggonator";
		ammo="104th_3AS_ThermalDetonator_Ammo";
		mass=4;
		descriptionShort="Standard-Issue Thermal Eggonator";
		type=256;
		initSpeed=18;
		nameSound="handgrenade";
		maxLeadSpeed=7;
		sound[]=
		{
			"",
			0.00031622799,
			1
		};

	};*/
	class 104th_ThermalDisruptor: 104th_3AS_ThermalDetonator_Mag
	{
		scope=2;
		displayName="[104th] Thermal Disruptor";
		displayNameShort="Thermal Disruptor";
		descriptionShort="A cross between a Detonator and Droid Popper.";
		ammo="104th_ThermalDisruptor_Ammo";
		count=1;
	};
	class 104th_ThermalDisruptorImpact: 104th_ThermalDisruptor
	{
		scope=2;
		displayName="[104th] Thermal Disruptor Impact";
		displayNameShort="Thermal Disruptor Impact";
		descriptionShort="A cross between a Detonator and Droid Popper.";
		ammo="104th_ThermalDisruptorImpact_Ammo";
		count=1;
	};
	class 104th_3AS_BaridiumCore_Mag: HandGrenade
	{	
		scope=2;
		value = 1;
		model="\3AS\3AS_Equipment\model\3AS_coredetonator.p3d";
		picture="\3AS\3AS_Equipment\UI\Baradium_Core_UI_ca.paa";
		displayName="[104th] Baridium-Core Detonator";
		displayNameShort="Baridium Detonator";
		ammo="104th_3AS_BaridiumCore_Ammo";
		count=1;
		type=256;
		initSpeed=18;
		nameSound="handgrenade";
		maxLeadSpeed=7;
		sound[]=
		{
			"",
			0.00031622799,
			1
		};
		mass=4;
		descriptionShort="Baridium-Core Thermal Detonator";
	};
	class SmokeShell;
	class 104th_3AS_SmokeGrenade_Base: SmokeShell
	{
		scope=1;
		model="\3AS\3AS_Equipment\model\3AS_smokegrenade.p3d";
		picture="\3AS\3AS_Equipment\UI\Nacht5_Smoke_UI_ca.paa";
		value=2;
		type=256;
		nameSound="smokeshell";
		displayName="[104th] GS-1 White Smoke";
		displayNameShort="GS-1 White Smoke";
		ammo="104th_SmokeShellBase";
		maxLeadSpeed=6;
		initSpeed=22;
		count=1;
		mass=4;
		descriptionShort="Standard-Issue Smoke Grenade of the 104th";
	};
	class 104th_3AS_SmokeGrenade_White: 104th_3AS_SmokeGrenade_Base
	{
		scope=2;
		model="\3AS\3AS_Equipment\model\3AS_smokegrenade.p3d";
		displayName="[104th] GS-1 White Smoke";
		displayNameShort="GS-1 White Smoke";
		ammo="104th_SmokeShellBase";
		count=1;
	};
	class 104th_3AS_SmokeGrenade_Red: 104th_3AS_SmokeGrenade_Base
	{
		scope=2;
		model="\3AS\3AS_Equipment\model\3AS_smokegrenade.p3d";
		displayName="[104th] GS-1 Red Smoke";
		displayNameShort="GS-1 Red Smoke";
		ammo="104th_SmokeShellRed";
		count=1;
	};
	class 104th_3AS_SmokeGrenade_Blue: 104th_3AS_SmokeGrenade_Base
	{
		scope=2;
		model="\3AS\3AS_Equipment\model\3AS_smokegrenade.p3d";
		displayName="[104th] GS-1 Blue Smoke";
		displayNameShort="GS-1 Blue Smoke";
		ammo="104th_SmokeShellBlue";
		count=1;
	};
	class 104th_3AS_SmokeGrenade_Green: 104th_3AS_SmokeGrenade_Base
	{
		scope=2;
		model="\3AS\3AS_Equipment\model\3AS_smokegrenade.p3d";
		displayName="[104th] GS-1 Green Smoke";
		displayNameShort="GS-1 Green Smoke";
		ammo="104th_SmokeShellGreen";
		count=1;
	};
	class 104th_3AS_SmokeGrenade_Yellow: 104th_3AS_SmokeGrenade_Base
	{
		scope=2;
		model="\3AS\3AS_Equipment\model\3AS_smokegrenade.p3d";
		displayName="[104th] GS-1 Yellow Smoke";
		displayNameShort="GS-1 Yellow Smoke";
		ammo="104th_SmokeShellYellow";
		count=1;
	};
	class 104th_3AS_SmokeGrenade_Purple: 104th_3AS_SmokeGrenade_Base
	{
		scope=2;
		model="\3AS\3AS_Equipment\model\3AS_smokegrenade.p3d";
		displayName="[104th] GS-1 Purple Smoke";
		displayNameShort="GS-1 Purple Smoke";
		ammo="104th_SmokeShellPurple";
		count=1;
	};
	class 104th_3AS_SmokeGrenade_Orange: 104th_3AS_SmokeGrenade_Base
	{
		scope=2;
		model="\3AS\3AS_Equipment\model\3AS_smokegrenade.p3d";
		displayName="[104th] GS-1 Orange Smoke";
		displayNameShort="GS-1 Orange Smoke";
		ammo="104th_SmokeShellOrange";
		count=1;
	};
	class 104th_PersonalShield_Republic_Mag: SmokeShell
	{
		author = "Maldova";
		mass = 8;
		scope = 2;
		value = 1;
		displayName = "[104th] Personal Shield";
		displayNameShort = "Weapon Shield";
		type = 256;
		ammo = "104th_PersonalShield_Republic_Ammo";
		count = 1;
		initSpeed = 18;
		nameSound = "handgrenade";
		maxLeadSpeed = 7;
		sound[] = {"",0.000316228,1};
		descriptionShort = "Small Shield that augments your weapon for 30 seconds.";
	};
	class 104th_PersonalShieldFull_Republic_Mag: SmokeShell
	{
		author = "Maldova";
		mass = 20;
		scope = 2;
		value = 1;
		displayName = "[104th] Full Body Shield";
		displayNameShort = "Full Body Personal Shield";
		type = 256;
		ammo = "104th_PersonalShieldFull_Republic_Ammo";
		count = 1;
		initSpeed = 18;
		nameSound = "handgrenade";
		maxLeadSpeed = 7;
		sound[] = {"",0.000316228,1};
		descriptionShort = "Full Body Shield that lasts 60 seconds";
	};
	class 104th_SquadShield_Republic_Mag: SmokeShell
	{
		author = "Maldova";
		mass = 30;
		scope = 2;
		value = 1;
		displayName = "[104th] Squad Shield";
		displayNameShort = "Squad Shield";
		model = "3as\3as_shield\SquadShield_Throwable.p3d";
		picture = "\3AS\3AS_Equipment\UI\Squad_Shield_UI_ca.paa";
		type = 256;
		ammo = "104th_SquadShield_Republic_Ammo";
		count = 1;
		initSpeed = 18;
		nameSound = "handgrenade";
		maxLeadSpeed = 7;
		sound[] = {"",0.000316228,1};
		descriptionShort = "Spherical Shield for Squads. Charge lasts 4 minutes.";
	};
	class 104th_DC15XM_EnergyMag: JLTS_DC15X_mag
	{
		scope=2;
		displayName="[104th] XM Energy Cell";
		displayNameShort = "Energy Cell";
		ammo="104th_DC15XM_Energy";
		count = 10;
	};
	class 104th_DC15XM_PlasmaMag: JLTS_DC15X_mag
	{
		scope=2;
		displayName="[104th] XM Plasma Cell";
		displayNameShort = "Plasma Cell";
		ammo="104th_DC15XM_Plasma";
		count = 1;
	};
	class 104th_3AS_DC15S_Mag: 3AS_60Rnd_EC30_mag
	{
		scope=2;
		displayName="[104th] DC-15S Energy Cell";
		ammo="104th_3AS_DCLight_PlasmaAmmo";
	};
	class 104th_3AS_DC15C_Mag: 3AS_40Rnd_EC40_Mag
	{
		scope=2;
		displayName="[104th] DC-15C Energy Cell";
		ammo="104th_3AS_DCMid_PlasmaAmmo";
	};
	class 104th_3AS_DC15C_OCMag: 3AS_40Rnd_EC40_Mag
	{
		scope=2;
		displayName="[104th] DC-15 Plasma Cell";
		displayNameShort = "Light Plasma Cell";
		ammo="104th_3AS_DCMid_OCPlasmaAmmo";
		count=10;
		tracersEvery=1;
		lastRoundsTracer=10;
	};
	class 104th_3AS_DC15L_Mag: 3AS_200Rnd_EC40_Mag
	{
		scope=2;
		displayName="[104th] DC-15L Energy Cell";
		ammo="104th_3AS_DCMid_PlasmaAmmo";
	};
	class 104th_3AS_DC15A_Mag: 3AS_45Rnd_EC50_Mag
	{
		scope=2;
		displayName="[104th] DC-15A Energy Cell";
		ammo="104th_3AS_DCHeavy_PlasmaAmmo";
	};
	class 104th_3AS_DC17M_Mag: 3AS_60Rnd_EC50_Mag
	{
		scope=2;
		displayName="[104th] DC-17M Energy Cell";
		ammo="104th_3AS_DCHeavy_PlasmaAmmo";
		count=100;
		mass=16;
		initSpeed=470;
		tracersEvery=1;
		lastRoundsTracer=100;
		modelSpecial="3AS\3AS_Weapons\DC17M\attachments\blaster_Barrel.p3d";
		modelSpecialIsProxy=1;
	};
	class 104th_3AS_WestarM5_Mag: 3AS_60Rnd_EC50_Mag
	{
		scope=2;
		displayName="[104th] Westar M5 Energy Cell";
		ammo="104th_3AS_DCExtraHeavy_PlasmaAmmo";
	};
	class 104th_3AS_WestarLightAT: 3AS_6Rnd_RocketGrenades_HE
	{
		scope=2;
		displayName="[104th] Westar Light AT Shot";
		ammo="104th_3AS_RocketGrenade_HE_Arc";
		count=1;
	};
	class 104th_3AS_DC17MLightAT: 3AS_6Rnd_RocketGrenades_HE
	{
		scope=2;
		displayName="[104th] Commando Light AT Shot";
		ammo="104th_3AS_RocketGrenade_HE_Commando";
		count=1;
		modelSpecial="3AS\3AS_Weapons\DC17M\attachments\blaster_Barrel.p3d";
		modelSpecialIsProxy=1;
	};
	class 104th_3AS_Z6_Mag: 3AS_300Rnd_EC60_Mag
	{
		scope=2;
		displayName="Z-6 Cannon Energy Cell";
		ammo="104th_3AS_Z6_PlasmaAmmo";
		mass=40;
		count=500;
		initSpeed=400;
		tracersEvery=1;
		lastRoundsTracer=500;
	};
	class 104th_3AS_Valken38X_Mag: 3AS_10Rnd_EC80_Mag
	{
		scope=2;
		displayName="[104th] Valken-38X Energy Cell";
		ammo="104th_3AS_Sniper_PlasmaAmmo";
	};
	class 104th_3AS_Chaingun_Mag: 3AS_Chaingun_Drum_Mag
	{
		scope=2;
		displayName="[104th] Chaingun Energy Cell";
		ammo="104th_3AS_ChaingunAmmo";
	};
	class 104th_3AS_MK40_AT_Unguided: 3AS_MK40_AT
	{
		scope=2;
		displayName="[104th] MK40 AT Rocket";
		ammo="104th_3AS_R_Mk40_AT";
	};
	class 104th_3AS_MK40_AT_Guided: 3AS_MK40_AT_Guided
	{
		scope=2;
		displayName="[104th] MK40 AT Missile";
		ammo="104th_3AS_M_Mk40_AT";
	};
	class RPG32_F;
	class 104th_MK1_AT_Mag: RPG32_F
	{
		author="Wolfpack Studios";
		scope=2;
		displayName="MK1 Heavy AT Rocket";
		model="\A3\weapons_f\launchers\RPG32\pg32v_rocket_item.p3d";
		picture="\A3\Weapons_F\launchers\RPG32\data\UI\gear_rpg32_rocket_ca.paa";
		ammo="104th_MK1_AT";
		count=1;
		mass=60;
	};
	class 104th_MK2_AT_Mag: 104th_MK1_AT_Mag
	{
		author="Wolfpack Studios";
		scope=2;
		displayName="MK2 Medium AT Rocket";
		model="\A3\weapons_f\launchers\RPG32\pg32v_rocket_item.p3d";
		picture="\A3\Weapons_F\launchers\RPG32\data\UI\gear_rpg32_rocket_ca.paa";
		descriptionshort="";
		ammo="104th_MK2_AT";
		count=1;
		mass=60;
	};
	class 104th_MK3_AP_Mag: RPG32_F
	{
		author="Wolfpack Studios";
		scope=2;
		displayName="MK3 Medium AP Rocket";
		model="\A3\weapons_f\launchers\RPG32\pg32v_rocket_item.p3d";
		picture="\A3\Weapons_F\launchers\RPG32\data\UI\gear_rpg32_rocket_ca.paa";
		descriptionshort="";
		ammo="104th_MK3_AP";
		count=1;
		mass=40;
	};
	class 104th_MK4_AP_Mag: 104th_MK3_AP_Mag
	{
		author="Wolfpack Studios";
		scope=2;
		displayName="MK4 Heavy AP Rocket";
		model="\A3\weapons_f\launchers\RPG32\pg32v_rocket_item.p3d";
		picture="\A3\Weapons_F\launchers\RPG32\data\UI\gear_rpg32_rocket_ca.paa";
		descriptionshort="";
		ammo="104th_MK4_AP";
		count=1;
		mass=70;
	};
	class Odins_Despair: RPG32_F
	{
		author="Wolfpack Studios";
		scope=1;
		displayName="Odins Backshots";
		model="\A3\weapons_f\launchers\RPG32\pg32v_rocket_item.p3d";
		picture="\A3\Weapons_F\launchers\RPG32\data\UI\gear_rpg32_rocket_ca.paa";
		descriptionshort="Stand Behind User";
		ammo="104th_MK5_AP";
		count=100;
		mass=1;
	};
	class 104th_MK1_PistolMag: 3AS_16Rnd_EC20_Mag
	{
		scope=2;
		displayName="DC-17 Charge Cell";
		ammo="104th_MK1_Normal_PistolAmmo";
		count=30;
		lastRoundsTracer=30;
	};
	class 104th_MK2_PistolMag_Long: 3AS_16Rnd_EC20_Mag
	{
		scope=2;
		JLTS_hasEMPProtection=1;
		displayName="DC-17 MK2 Stun Cell (Long)";
		ammo="104th_MK2_Stun_PistolAmmo";
		count=10;
		lastRoundsTracer=10;
		JLTS_stunDuration=30;
	};
	class 104th_MK2_PistolMag_Short: 3AS_16Rnd_EC20_Mag
	{
		scope=2;
		JLTS_hasEMPProtection=1;
		displayName="DC-17 MK1 Stun Cell (Short)";
		ammo="104th_MK2_Stun_PistolAmmo";
		count=10;
		lastRoundsTracer=10;
		JLTS_stunDuration=10;
	};
	class 104th_MK3_PistolMag: 3AS_16Rnd_EC20_Mag
	{
		scope=2;
		displayName="DC-17 EMP Cell";
		ammo="104th_MK3_EMP_PistolAmmo";
		count=10;
		lastRoundsTracer=10;
	};
	class 104th_MK4_PistolMag: 3AS_16Rnd_EC20_Mag
	{
		scope=2;
		displayName="DC-17 Overcharged Cell";
		ammo="104th_MK4_OC_PistolAmmo";
		count=10;
		lastRoundsTracer=5;
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SlotInfo;
class CowsSlot;
class MuzzleSlot;
class PointerSlot;
class UnderBarrelSlot;
class CfgWeapons
{
	class Rifle_Base_F;
	class arifle_MX_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class UGL_F;
	class WeaponSlotsInfo;
	class 3AS_DC15A_Base_F;
	class 3AS_DC15S_Base_F;
	class 3AS_DC15L_Base_F;
	class 3AS_DC15C_Base_F;
	class 3AS_DC17M_Base_F;
	class 3AS_Z6_Base_F;
	class 3AS_Valken38X_Base_F;
	class 3AS_Chaingun;
	class 3AS_RPS6_Base;
	class 3AS_RPS6_Guided;
	class launch_RPG32_F
	{
		class Single;
	};
	class Odins_Launch: launch_RPG32_F
	{
		class Single;
		class Mode_SemiAuto;
	};
	class 3AS_DC15A_F: 3AS_DC15A_Base_F
	{
		class Single;
		class Burst;
		class WeaponSlotInfo;
	};
	class 104th_3AS_DC15A: 3AS_DC15A_F
	{
		canShootinWater=1;
		JLTS_hasEMPProtection=1;
		scope=2;
		displayName="[104th] DC-15A";
		magazines[]=
		{
			"104th_3AS_DC15A_Mag"
		};
		class Burst: Burst
		{
			reloadTime=0.073000006;
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_DC15A_Shot_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_DC15A_Shot_SoundSet"
				};
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot
			{
				compatibleItems[]=
				{
					"3AS_Optic_Red_DC15A",
					"3AS_Optic_LEScope_DC15A",
					"Aux501_cows_Holosight",
					"Aux501_cows_Holosight_2",
					"Aux501_cows_Holosight_3"
				};
			};
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[]=
				{
				};
			};
		};
	};
	class 3AS_DC15A_GL: 3AS_DC15A_Base_F
	{
		canShootInWater=1;
		JLTS_hasEMPProtection=1;
		class WeaponsSlotsInfo;
		class Single;
		class Burst;
	};
	class 104th_3AS_DC15AGL: 3AS_DC15A_GL
	{
		scope=2;
		displayName="[104th] DC-15A/GL";
		magazines[]=
		{
			"104th_3AS_DC15A_Mag"
		};
		class Burst: Burst
		{
			reloadTime=0.073000006;
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_DC15A_Shot_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_DC15A_Shot_SoundSet"
				};
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot
			{
				compatibleItems[]=
				{
					"3AS_Optic_Red_DC15A",
					"Aux501_cows_Holosight",
					"Aux501_cows_Holosight_2",
					"Aux501_cows_Holosight_3"
				};
			};
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[]=
				{
				};
			};
		};
	};
	class 3AS_DC15S_F: 3AS_DC15S_Base_F
	{
		canShootInWater=1;
		JLTS_hasEMPProtection=1;
		scope=1;
		class Single;
		class FullAuto;
	};
	class 104th_3AS_DC15S: 3AS_DC15S_F
	{
		scope=2;
		displayName="[104th] DC-15S";
		magazines[]=
		{
			"104th_3AS_DC15S_Mag"
		};
		class Single: Single
		{
			reloadTime=0.1;
			dispersion=0.00066000002;
			minRange=2;
			minRangeProbab=0.30000001;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=350;
			maxRangeProbab=0.1;
			soundContinuous=0;
			soundBurst=0;
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_DC15S_Shot_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_DC15S_Shot_SoundSet"
				};
			};
		};
		class FullAuto: FullAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_DC15S_Shot_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_DC15S_Shot_SoundSet"
				};
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot
			{
				compatibleItems[]=
				{
					"3AS_optic_holo_DC15S",
					"Aux501_cows_Holosight",
					"Aux501_cows_Holosight_2",
					"Aux501_cows_Holosight_3",
					"Optre_Recon_Sight"
				};
			};
		};
	};
	class 3AS_DC15L_F: 3AS_DC15L_Base_F
	{
		canShootInWater=1;
		JLTS_hasEMPProtection=1;
		class FullAuto;
		class Single;
		class WeaponSlotsInfo;
	};
	class 104th_3AS_DC15L: 3AS_DC15L_F
	{
		scope=2;
		displayName="[104th] DC-15L";
		magazines[]=
		{
			"104th_3AS_DC15L_Mag",
			"104th_3AS_DC15C_OCMag"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot
			{
				compatibleItems[]=
				{
					"3AS_Optic_DC15L",
					"Aux501_cows_Holosight",
					"Aux501_cows_Holosight_2",
					"Aux501_cows_Holosight_3"
				};
			};
		};
	};
	class 3AS_DC15C_F: 3AS_DC15C_Base_F
	{
		canShootInWater=1;
		JLTS_hasEMPProtection=1;
		class FullAuto;
		class Single;
		class WeaponSlotsInfo;
	};
	class 104th_3AS_DC15C: 3AS_DC15C_F
	{
		scope=2;
		displayName="[104th] DC-15C";
		magazines[]=
		{
			"104th_3AS_DC15C_Mag",
			"104th_3AS_DC15C_OCMag"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot
			{
				compatibleItems[]=
				{
					"3AS_optic_reflex_DC15C",
					"3AS_optic_acog_DC15C",
					"Aux501_cows_Holosight",
					"Aux501_cows_Holosight_2",
					"Aux501_cows_Holosight_3"
				};
			};
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[]=
				{
				};
			};
		};
	};
	class 3AS_DC15C_GL: 3AS_DC15C_Base_F
	{
		canShootInWater=1;
		JLTS_hasEMPProtection=1;
		class FullAuto;
		class Single;
		class WeaponSlotsInfo;
	};
	class 104th_3AS_DC15CGL: 3AS_DC15C_GL
	{
		scope=2;
		displayName="[104th] DC-15C/GL";
		magazines[]=
		{
			"104th_3AS_DC15C_Mag"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot
			{
				compatibleItems[]=
				{
					"Aux501_cows_Holosight",
					"Aux501_cows_Holosight_2",
					"Aux501_cows_Holosight_3"
				};
			};
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[]=
				{
				};
			};
		};
	};
	class 3AS_DC17M_F: 3AS_DC17M_Base_F
	{
		canShootInWater=1;
		JLTS_hasEMPProtection=1;
		class FullAuto;
		class Single;
		class WeaponSlotsInfo;
	};
	class 104th_3AS_DC17M: 3AS_DC17M_F
	{
		scope=2;
		displayName="[104th] DC-17M";
		magazines[]=
		{
			"104th_3AS_DC17M_Mag",
			"3AS_5Rnd_EC80_mag",
			"3AS_AntiArmour_mag",
			"104th_3AS_DC17MLightAT"
		};
	};
	class 3AS_WestarM5_Base_F: Rifle_Base_F
	{
		canShootInWater=1;
		JLTS_hasEMPProtection=1;
		class FullAuto;
		class Single;
		class WeaponSlotsInfo;
		class 3AS_WestarM5_GL_F: UGL_F
		{
		};
	};
	class 3AS_WestarM5_F: 3AS_WestarM5_Base_F
	{
	};
	class 104th_3AS_WestarM5: 3AS_WestarM5_F
	{
		scope=2;
		displayName="[104th] Westar M5";
		magazines[]=
		{
			"104th_3AS_WestarM5_Mag"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot
			{
				compatibleItems[]=
				{
					"optre_m7_sight",
					"3AS_Optic_Scope_WestarM5",
					"Optre_Recon_Sight"
				};
			};
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[]=
				{
					"OPTRE_MA5Suppressor"
				};
			};
		};
	};
	class 3AS_WestarM5_GL: 3AS_WestarM5_Base_F
	{
		class FullAuto;
		class Single;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot;
			class MuzzleSlot;
		};
	};
	class 104th_3AS_WestarM5GL: 3AS_WestarM5_GL
	{
		scope=2;
		displayName="[104th] Westar M5/GL";
		magazines[]=
		{
			"104th_3AS_WestarM5_Mag",
			"104th_3AS_WestarLightAT"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot
			{
				compatibleItems[]=
				{
					"optre_m7_sight",
					"Optre_Recon_Sight"
				};
			};
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[]=
				{
					"OPTRE_MA5Suppressor"
				};
			};
		};
		class 104th_WestarM5_GL_F: 3AS_WestarM5_GL_F
		{
			magazines[]=
			{
				"3AS_6Rnd_HE_Grenade_shell",
				"3Rnd_UGL_FlareWhite_F",
				"3Rnd_UGL_FlareGreen_F",
				"3Rnd_UGL_FlareRed_F",
				"3Rnd_UGL_FlareYellow_F",
				"3Rnd_UGL_FlareCIR_F",
				"3Rnd_Smoke_Grenade_shell",
				"3Rnd_SmokeRed_Grenade_shell",
				"3Rnd_SmokeGreen_Grenade_shell",
				"3Rnd_SmokeYellow_Grenade_shell",
				"3Rnd_SmokePurple_Grenade_shell",
				"3Rnd_SmokeBlue_Grenade_shell",
				"3Rnd_SmokeOrange_Grenade_shell",
				"ACE_HuntIR_M203"
			};
		};
		muzzles[]=
		{
			"this",
			"104th_WestarM5_GL_F"
		};
	};
	class 3AS_Z6_F: 3AS_Z6_Base_F
	{
		canShootInWater=1;
		class WeaponSlotsInfo;
		class FullAuto;
	};
	class 104th_3AS_Z6: 3AS_Z6_F
	{
		JLTS_hasEMPProtection=1;
		scope=0;
		displayName="[104th] Z-6";
		magazines[]=
		{
			"104th_3AS_Z6_Mag"
		};
	};
	class 3AS_Valken38X_F: 3AS_Valken38X_Base_F
	{
		canShootInWater=1;
		class Single;
		class WeaponSlotsInfo;
	};
	class 104th_3AS_Valken38X: 3AS_Valken38X_F
	{
		JLTS_hasEMPProtection=1;
		scope=2;
		displayName="[104th] Valken 38X";
		magazines[]=
		{
			"104th_3AS_Valken38X_Mag"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot
			{
				compatibleItems[]=
				{
					"3AS_Optic_VK38X",
					"Optre_M393_Scope"
				};
			};
		};
	};
	class 104th_3AS_Chaingun: 3AS_Chaingun
	{
		canShootInWater=1;
		scope=2;
		displayName="[104th] Chaingun";
		magazines[]=
		{
			"104th_3AS_Chaingun_Mag"
		};
	};
	class 104th_3AS_RPS6_Unguided: 3AS_RPS6_Base
	{
		baseWeapon="104th_3AS_RPS6_F";
		displayname="[104th] RPS6-L Disposable";
		magazines[]=
		{
			"104th_3AS_MK40_AT_Unguided"
		};
	};
	class 104th_3AS_RPS6_F: 104th_3AS_RPS6_Unguided
	{
		scope=2;
		baseWeapon="104th_3AS_RPS6_F";
		displayname="[104th] RPS6-L Disposable";
		magazines[]=
		{
			"CBA_FakeLauncherMagazine"
		};
	};
	class 104th_3AS_RPS6_Guided: 3AS_RPS6_Guided
	{
		baseWeapon="104th_3AS_RPS6_G";
		displayname="[104th] RPS6-L Disposable Guided";
		magazines[]=
		{
			"104th_3AS_MK40_AT_Guided"
		};
	};
	class 104th_3AS_RPS6_G: 104th_3AS_RPS6_Guided
	{
		scope=2;
		baseWeapon="104th_3AS_RPS6_G";
		displayname="[104th] RPS6-L Disposable Guided";
		magazines[]=
		{
			"CBA_FakeLauncherMagazine"
		};
	};
	class 104th_RPS6_K_Odin: Odins_Launch
	{
		JLTS_hasEMPProtection=1;
		reloadaction="ReloadRPG";
		displayName="Backblastinator";
		scope=1;
		scopeCurator=1;
		picture="\A3\Weapons_F\launchers\RPG32\data\UI\gear_RPG32_X_CA.paa";
		UiPicture="\A3\Weapons_F\Data\UI\icon_at_CA.paa";
		model="\3AS\3AS_Weapons\RPS6HP\3AS_RPS6_HP.p3d";
		modelSpecial="";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\MRC\JLTS\weapons\E60R\anims\E60R_handanim.rtm"
		};
		hiddenSelectionsMaterials[]=
		{
			"",
			"\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
		};
		magazines[]=
		{
			"Odins_Despair"
		};
		magazineWell[]={};
		magazineReloadTime=65;
		modes[]=
		{
			"Single"
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\rpg32",
					1.9952624,
					1,
					1500
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			recoil="recoil_single_law";
			aiRateOfFire=5;
			aiRateOfFireDistance=500;
			aiRateOfFireDispersion=2;
			minRange=10;
			minRangeProbab=0.30000001;
			midRange=40;
			midRangeProbab=0.85000002;
			maxRange=600;
			maxRangeProbab=0.85000002;
		};
		drySound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\Dry_RPG32.wss",
			0.44668359,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\reload_RPG32.wss",
			0.25118864,
			1,
			10
		};
		canLock=0;
		weaponLockDelay=3;
		lockAcquire=0;
		inertia=0.89999998;
		aimTransitionSpeed=0.5;
		dexterity=1.1;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=100;
		};
		descriptionShort="$STR_A3_CfgWeapons_launch_LAW1";
		class Library
		{
			libTextDesc="$STR_A3_CfgWeapons_launch_LAW_Library0";
		};
		ace_overpressure_angle=40;
		ace_overpressure_damage=0.69999999;
		ace_overpressure_priority=1;
		ace_overpressure_range=20;
		ace_releadlaunchers_enabled=1;
	};
	class 104th_RPS6_K: launch_RPG32_F
	{
		JLTS_hasEMPProtection=1;
		reloadaction="ReloadRPG";
		displayName="[104th] RPS6-K";
		scope=2;
		picture="\A3\Weapons_F\launchers\RPG32\data\UI\gear_RPG32_X_CA.paa";
		UiPicture="\A3\Weapons_F\Data\UI\icon_at_CA.paa";
		model="\3AS\3AS_Weapons\RPS6HP\3AS_RPS6_HP.p3d";
		modelSpecial="";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\MRC\JLTS\weapons\E60R\anims\E60R_handanim.rtm"
		};
		hiddenSelectionsMaterials[]=
		{
			"",
			"\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
		};
		magazines[]=
		{
			"104th_MK2_AT_Mag",
			"104th_MK3_AP_Mag",
			"104th_MK4_AP_Mag"
		};
		class Single: Single
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\rpg32",
					1.9952624,
					1,
					1500
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			recoil="recoil_single_law";
			aiRateOfFire=5;
			aiRateOfFireDistance=500;
			aiRateOfFireDispersion=2;
			minRange=10;
			minRangeProbab=0.30000001;
			midRange=40;
			midRangeProbab=0.85000002;
			maxRange=600;
			maxRangeProbab=0.85000002;
		};
		drySound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\Dry_RPG32.wss",
			0.44668359,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\reload_RPG32.wss",
			0.25118864,
			1,
			10
		};
		canLock=0;
		weaponLockDelay=3;
		lockAcquire=0;
		inertia=0.89999998;
		aimTransitionSpeed=0.5;
		dexterity=1.1;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=100;
		};
		descriptionShort="$STR_A3_CfgWeapons_launch_LAW1";
		class Library
		{
			libTextDesc="$STR_A3_CfgWeapons_launch_LAW_Library0";
		};
		ace_overpressure_angle=40;
		ace_overpressure_damage=0.69999999;
		ace_overpressure_priority=1;
		ace_overpressure_range=10;
		ace_releadlaunchers_enabled=1;
	};
	class JLTS_stun_muzzle;
	class Pistol;
	class Pistol_Base_F: Pistol
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class 104th_3AS_DC17S_Base_F: Pistol_Base_F
	{
		canShootInWater=1;
		JLTS_hasEMPProtection=1;
		author="Wolfpack Studios";
		magazines[]=
		{
			"104th_MK1_PistolMag",
			"104th_MK3_PistolMag",
			"104th_MK4_PistolMag"
		};
		drySound[]=
		{
			"\3AS\3AS_Main\Sounds\Blaster_empty.wss",
			0.37820718,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"\3AS\3AS_Main\Sounds\Blaster_reload.wss",
			0.56234133,
			1,
			30
		};
		modes[]=
		{
			"Single"
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_DC17_Shot_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_DC15S_Shot_SoundSet"
				};
			};
			recoil="recoil_pistol_heavy";
			recoilProne="recoil_prone_pistol_heavy";
			reloadTime=0.1;
			dispersion=0.0039900001;
			minRange=5;
			minRangeProbab=0.30000001;
			midRange=25;
			midRangeProbab=0.60000002;
			maxRange=50;
			maxRangeProbab=0.1;
			aiRateOfFire=2;
			aiRateOfFireDistance=25;
		};
		muzzles[]=
		{
			"this",
			"Stun"
		};
		class Stun: JLTS_stun_muzzle
		{
			magazines[]=
			{
				"104th_MK2_PistolMag_Short",
				"104th_MK2_PistolMag_Long"
			};
			reloadAction="GestureReloadPistol";
		};
		inertia=0.30000001;
		aimTransitionSpeed=1.5;
		dexterity=1.7;
		initSpeed=-1;
		recoil="recoil_pistol_4five";
		maxZeroing=100;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=30;
			holsterScale=0.94999999;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]={};
				iconPosition[]={0.60000002,0.27000001};
				iconScale=0.15000001;
			};
			class MuzzleSlot: MuzzleSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[]={};
				iconPosition[]={0.23999999,0.34999999};
				iconScale=0.2;
			};
			class PointerSlot: PointerSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[]=
				{
					"acc_flashlight_pistol"
				};
				iconPosition[]={0.47,0.55000001};
				iconScale=0.30000001;
			};
		};
	};
	class 104th_3AS_DC17S: 104th_3AS_DC17S_Base_F
	{
		canShootInWater=1;
		JLTS_hasEMPProtection=1;
		scope=2;
		displayName="[104th] DC-17S";
		model="3AS\3AS_Weapons\Republic\DC17S\3AS_DC17S_F.p3d";
		picture="3AS\3AS_Weapons\DC15A\Data\Textures\DC15A_Arsenal.paa";
		weaponInfoType="RscWeaponZeroing";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=40;
		};
	};
	class hgun_P07_F: Pistol_Base_F
	{
	};
	class JLTS_DC17SA: hgun_P07_F
	{
		class WeaponSlotsInfo;
	};
	class 104th_JLTS_DC17SA: JLTS_DC17SA
	{
		canShootInWater=1;
		scope=2;
		scopeArsenal=2;
		baseWeapon="104th_JLTS_DC17SA";
		displayName="[104th] DC17SA";
		fireLightIntensity=0.89999998;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=15;
			class CowsSlot: CowsSlot
			{
				displayName="Optics Slot";
				iconPicture="\A3\Weapons_F\Data\UI\attachment_top.paa";
				iconPinpoint="Bottom";
				iconPosition[]={0.5,0.34999999};
				iconScale=0.2;
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				scope=0;
				compatibleItems[]=
				{
					"Aux501_cows_Holosight",
					"Optre_Recon_Sight_Red"
				};
			};
			class PointerSlot: PointerSlot
			{
				compatibleItems[]=
				{
					"JLTS_DC17SA_flashlight"
				};
			};
			class MuzzleSlot: MuzzleSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[]={};
				iconPosition[]={0.23999999,0.34999999};
				iconScale=0.2;
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleItems[]={};
			};
		};
		magazines[]=
		{
			"104th_MK1_PistolMag",
			"104th_MK4_PistolMag"
		};
		muzzles[]=
		{
			"this",
			"Stun"
		};
		class Stun: JLTS_stun_muzzle
		{
			magazines[]=
			{
				"104th_MK2_PistolMag_Short",
				"104th_MK2_PistolMag_Long"
			};
			reloadAction="GestureReloadPistol";
		};
	};
	class 104th_JLTS_DC15X: arifle_MX_Base_F
	{
		JLTS_hasElectronics = 0;
		JLTS_hasEMPProtection = 1;
		author = "MrClock";
		scope = 2;
		displayName = "[104th] DC-15X";
		descriptionShort = "$STR_JLTS_descs_BlasterRifle";
		picture = "\MRC\JLTS\weapons\DC15X\data\ui\DC15X_ui_ca.paa";
		model = "\MRC\JLTS\weapons\DC15X\DC15X.p3d";
		baseWeapon = "104th_JLTS_DC15X";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\MRC\JLTS\weapons\DC15X\data\DC15X_co.paa"};
		handAnim[] = {"OFP2_ManSkeleton","\MRC\JLTS\weapons\DC15X\anims\DC15X_handanim.rtm"};
		magazines[] = {"104th_DC15XM_PlasmaMag", "104th_DC15XM_EnergyMag"};
		magazineWell[] = {};
		modes[] = {"Single"};
		fireLightDiffuse[] = {0,0,1};
		drySound[] = {"MRC\JLTS\weapons\Core\sounds\weapon_dry.wss",5,1,10};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "";
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect = "";
				begin1[] = {"MRC\JLTS\weapons\DC15X\sounds\dc15x_fire",2.5,1,1800};
				soundBegin[] = {"begin1",1};
			};
			reloadTime = 0.5;
			recoil = "recoil_single_mx";
			recoilProne = "recoil_single_prone_mx";
			dispersion = 0.00073;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 250;
			midRangeProbab = 0.7;
			maxRange = 450;
			maxRangeProbab = 0.3;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "";
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect = "";
				begin1[] = {"MRC\JLTS\weapons\DC15X\sounds\dc15x_fire",2.5,1,1800};
				soundBegin[] = {"begin1",1};
			};
			reloadTime = 0.096;
			recoil = "recoil_auto_mx";
			recoilProne = "recoil_auto_prone_mx";
			dispersion = 0.00073;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-06;
		};
		class fullauto_medium: FullAuto
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "";
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect = "";
				begin1[] = {"MRC\JLTS\weapons\DC15X\sounds\dc15x_fire",2.5,1,1800};
				soundBegin[] = {"begin1",1};
			};
			dispersion = 0.00073;
			showToPlayer = 0;
			burst = 3;
			aiBurstTerminable = 1;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRange = 150;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 200;
		};
		class single_medium_optics1: Single
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "";
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect = "";
				begin1[] = {"MRC\JLTS\weapons\DC15X\sounds\dc15x_fire",2.5,1,1800};
				soundBegin[] = {"begin1",1};
			};
			dispersion = 0.00073;
			requiredOpticType = 1;
			minRange = 2;
			minRangeProbab = 0.2;
			midRange = 450;
			midRangeProbab = 0.7;
			maxRange = 650;
			maxRangeProbab = 0.2;
			aiRateOfFire = 6;
			aiRateOfFireDistance = 600;
		};
		class single_far_optics2: single_medium_optics1
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "";
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect = "";
				begin1[] = {"MRC\JLTS\weapons\DC15X\sounds\dc15x_fire",2.5,1,1800};
				soundBegin[] = {"begin1",1};
			};
			dispersion = 0.00073;
			requiredOpticType = 2;
			minRange = 100;
			minRangeProbab = 0.2;
			midRange = 550;
			midRangeProbab = 0.7;
			maxRange = 800;
			maxRangeProbab = 0.05;
			aiRateOfFire = 8;
			aiRateOfFireDistance = 800;
		};
		class Pointer
		{
			irLaserPos = "laser pos";
			irLaserEnd = "laser dir";
			irDistance = 5;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 50;
			class CowsSlot: CowsSlot
			{
				compatibleItems[] = {"JLTS_DC15X_scope"};
				iconPicture = "";
			};
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[] = {};
			};
			class PointerSlot: PointerSlot
			{
				compatibleItems[] = {};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleItems[] = {};
			};
		};
		class GunParticles
		{
			class FirstEffect
			{
				directionName = "Konec hlavne";
				effectName = "RifleAssaultCloud";
				positionName = "Usti hlavne";
			};
		};
	};
	class 104th_JLTS_DC15X_scoped: 104th_JLTS_DC15X
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "JLTS_DC15X_scope";
			};
		};
	};
	class 104th_JLTS_DC15X_fried: 104th_JLTS_DC15X
	{
		baseWeapon = "104th_JLTS_DC15X_fried";
		displayName = "$STR_JLTS_names_DC15XFried";
		descriptionShort = "$STR_JLTS_descs_BlasterFried";
		scope = 1;
		picture = "\MRC\JLTS\weapons\DC15X\data\ui\DC15X_fried_ui_ca.paa";
		muzzles[] = {"this"};
		magazines[] = {};
		JLTS_isFried = 1;
		drySound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mx\dry_Mx.wss",0.562341,1,10};
	};
	class GrenadeLauncher;
	class Throw: GrenadeLauncher
	{
		muzzles[]+=
		{
			"104th_3AS_ThermalDetonator",
			"104th_3AS_BaridiumCore",
			"104th_3AS_SmokeWhite",
			"104th_3AS_SmokeRed",
			"104th_3AS_SmokeOrange",
			"104th_3AS_SmokeYellow",
			"104th_3AS_SmokeGreen",
			"104th_3AS_SmokeBlue",
			"104th_3AS_SmokePurple",
			"104th_Disruptor",
			"104th_DisruptorImpact",
			"104th_PersonalShield_Republic",
			"104th_PersonalShieldFull_Republic",
			"104th_SquadShield_Republic"
		};
		class ThrowMuzzle;
		class 104th_3AS_ThermalDetonator: ThrowMuzzle
		{
			model="\3AS\3AS_Equipment\model\3AS_thermaldet.p3d";
			magazines[]=
			{
				"104th_3AS_ThermalDetonator_Mag"
			};
		};
		class 104th_3AS_BaridiumCore: ThrowMuzzle
		{
			model="\3AS\3AS_Equipment\model\3AS_coredetonator.p3d";
			magazines[]=
			{
				"104th_3AS_BaridiumCore_Mag"
			};
		};
		class 104th_3AS_SmokeWhite: ThrowMuzzle
		{
			model="\3AS\3AS_Equipment\model\3AS_smokegrenade.p3d";
			magazines[]=
			{
				"104th_3AS_SmokeGrenade_White"
			};
		};
		class 104th_3AS_SmokeRed: ThrowMuzzle
		{
			model="\3AS\3AS_Equipment\model\3AS_smokegrenade.p3d";
			magazines[]=
			{
				"104th_3AS_SmokeGrenade_Red"
			};
		};
		class 104th_3AS_SmokeOrange: ThrowMuzzle
		{
			model="\3AS\3AS_Equipment\model\3AS_smokegrenade.p3d";
			magazines[]=
			{
				"104th_3AS_SmokeGrenade_Orange"
			};
		};
		class 104th_3AS_SmokeYellow: ThrowMuzzle
		{
			model="\3AS\3AS_Equipment\model\3AS_smokegrenade.p3d";
			magazines[]=
			{
				"104th_3AS_SmokeGrenade_Yellow"
			};
		};
		class 104th_3AS_SmokeGreen: ThrowMuzzle
		{
			model="\3AS\3AS_Equipment\model\3AS_smokegrenade.p3d";
			magazines[]=
			{
				"104th_3AS_SmokeGrenade_Green"
			};
		};
		class 104th_3AS_SmokeBlue: ThrowMuzzle
		{
			model="\3AS\3AS_Equipment\model\3AS_smokegrenade.p3d";
			magazines[]=
			{
				"104th_3AS_SmokeGrenade_Blue"
			};
		};
		class 104th_3AS_SmokePurple: ThrowMuzzle
		{
			model="\3AS\3AS_Equipment\model\3AS_smokegrenade.p3d";
			magazines[]=
			{
				"104th_3AS_SmokeGrenade_Purple"
			};
		};
		class 104th_Disruptor: ThrowMuzzle
		{
			model="\3AS\3AS_Equipment\model\3AS_thermaldet.p3d";
			magazines[]=
			{
				"104th_ThermalDisruptor"
			};
		};
		class 104th_DisruptorImpact: ThrowMuzzle
		{
			model="\3AS\3AS_Equipment\model\3AS_thermaldet.p3d";
			magazines[]=
			{
				"104th_ThermalDisruptorImpact"
			};
		};
		class 104th_PersonalShield_Republic: ThrowMuzzle
		{
			model = "3AS\3AS_Shield\Shield.p3d";
			magazines[]=
			{
				"104th_PersonalShield_Republic_Mag"
			};
		};
		class 104th_PersonalShieldFull_Republic: ThrowMuzzle
		{
			model = "3AS\3AS_Shield\Personal_Shield.p3d";
			magazines[]=
			{
				"104th_PersonalShieldFull_Republic_Mag"
			};
		};
		class 104th_SquadShield_Republic: ThrowMuzzle
		{
			model = "3AS\3AS_Shield\SquadShield.p3d";
			magazines[]=
			{
				"104th_SquadShield_Republic_Mag"
			};
		};
	};
};
class CfgVehicles
{
	class House_F;
	class PersonalShield_Republic: House_F
	{
		model = "3AS\3AS_Shield\Shield.p3d";
		vehicleClass = "VRObjects";
		armor = 999999;
		simulation = "Fountain";
		armorStructural = 999;
		scope = 1;
		scopecurator = 1;
		displayName = "-";
		editorCategory = "EdCat_VRObjects";
		editorSubcategory = "EdSubcat_Helpers";
		sound = "Shield";
	};
	class PersonalShieldFull_Republic: House_F
	{
		model = "3AS\3AS_Shield\Personal_Shield.p3d";
		vehicleClass = "VRObjects";
		armor = 999999;
		simulation = "Fountain";
		armorStructural = 999;
		scope = 1;
		scopecurator = 1;
		displayName = "-";
		editorCategory = "EdCat_VRObjects";
		editorSubcategory = "EdSubcat_Helpers";
		sound = "Shield";
	};
	class SquadShield_Republic: House_F
	{
		model = "3AS\3AS_Shield\SquadShield.p3d";
		vehicleClass = "VRObjects";
		armor = 999999;
		simulation = "Fountain";
		armorStructural = 999;
		scope = 1;
		scopecurator = 1;
		displayName = "-";
		editorCategory = "EdCat_VRObjects";
		editorSubcategory = "EdSubcat_Helpers";
		sound = "Shield";
		destrType = "DestructNo";
	};
};
class CfgFunctions
{
	class TAS
	{
		class ShieldGrenade104th
		{
			file = "WPEC\WPEC_Weapons\Functions";
			class setupEH104th
			{
				postInit = 1;
			};
			class onShieldGrenade104th{};
		};
	};
};