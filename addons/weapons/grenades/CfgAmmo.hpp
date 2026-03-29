class CfgAmmo
{
	class SmokeShell;
	class GrenadeHand;
	class Grenade;

    
    class WPEC_3AS_ThermalDetonator_Ammo: GrenadeHand
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
		ace_frag_gurney_k=0.6;
		allowAgainstInfantry=1;
	};
	class WPEC_ThermalDisruptor_Ammo: WPEC_3AS_ThermalDetonator_Ammo
	{
		author="Maldova";
		hit=10;
		indirectHit=5;
		indirectHitRange=12;
		explosionEffects="JLTS_fx_exp_EMP";
		soundFly[]=
		{
			"\Z\wps\addons\weapons\Sounds\Grenades\fly\Thermal_Disruptor_Fly.ogg",
			30.0,
			1,
			100
		};
		ace_grenades_pullPinSound[] =
		{
			"\Z\wps\addons\weapons\Sounds\Grenades\pin\Thermal_Disruptor_Pin.ogg",
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
		ace_frag_gurney_k=0.6;
		allowAgainstInfantry=1;
	};
	class WPEC_ThermalDisruptorImpact_Ammo: WPEC_ThermalDisruptor_Ammo
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
	class WPEC_PersonalShield_Republic_Ammo: Grenade
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
	class WPEC_PersonalShieldFull_Republic_Ammo: Grenade
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
	class WPEC_SquadShield_Republic_Ammo: Grenade
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
	class WPEC_3AS_BaridiumCore_Ammo: GrenadeHand
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
	class WPEC_SmokeShellBase: SmokeShell
	{
		model="3AS\3AS_Equipment\model\3AS_smokegrenade.p3d";
		ace_grenades_pullPinSound[] =
		{
			"\Z\wps\addons\weapons\Sounds\Grenades\pin\Thermal_Disruptor_Pin.ogg",
			30.0,
			1,
			50
		};
	};
	class WPEC_SmokeShellRed: WPEC_SmokeShellBase
	{
		smokeColor[]={0.84380001,0.1383,0.1353,1};
	};
	class WPEC_SmokeShellGreen: WPEC_SmokeShellBase
	{
		smokeColor[]={0.21250001,0.62580001,0.48909998,1};
	};
	class WPEC_SmokeShellYellow: WPEC_SmokeShellBase
	{
		smokeColor[]={0.98830003,0.86059999,0.071900003,1};
	};
	class WPEC_SmokeShellPurple: WPEC_SmokeShellBase
	{
		smokeColor[]={0.4341,0.1388,0.41439998,1};
	};
	class WPEC_SmokeShellBlue: WPEC_SmokeShellBase
	{
		smokeColor[]={0.1183,0.1867,1,1};
	};
	class WPEC_SmokeShellOrange: WPEC_SmokeShellBase
	{
		smokeColor[]={0.66970003,0.22750001,0.10053,1};
	};

};
