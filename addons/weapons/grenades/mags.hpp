
	class WPEC_3AS_ThermalDetonator_Mag: 3AS_ThermalDetonator
	{
		scope=2;
		value = 1;
		model="\3AS\3AS_Equipment\model\3AS_thermaldet.p3d";
		picture="\3AS\3AS_Equipment\UI\Thermal_Detonator_UI_ca.paa";
		displayName="[104th] Thermal Detonator";
		displayNameShort="Thermal Detonator";
		ammo="WPEC_3AS_ThermalDetonator_Ammo";
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
	/*class WPEC_3AS_ThermalDetonator_Mag_Easter: 3AS_ThermalDetonator
	{
		scope=2;
		value = 1;
		model="\WPEC\104th_3AS_Weapons\Grenades\EggDetonator.p3d";
		picture="\WPEC\104th_3AS_Weapons\Grenades\icons\logo_co.paa";
		displayName="[104th] Thermal Eggonator";
		displayNameShort="Thermal Eggonator";
		ammo="WPEC_3AS_ThermalDetonator_Ammo";
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
	class WPEC_ThermalDisruptor: WPEC_3AS_ThermalDetonator_Mag
	{
		scope=2;
		displayName="[104th] Thermal Disruptor";
		displayNameShort="Thermal Disruptor";
		descriptionShort="A cross between a Detonator and Droid Popper.";
		ammo="WPEC_ThermalDisruptor_Ammo";
		count=1;
	};
	class WPEC_ThermalDisruptorImpact: WPEC_ThermalDisruptor
	{
		scope=2;
		displayName="[104th] Thermal Disruptor Impact";
		displayNameShort="Thermal Disruptor Impact";
		descriptionShort="A cross between a Detonator and Droid Popper.";
		ammo="WPEC_ThermalDisruptorImpact_Ammo";
		count=1;
	};
	class WPEC_3AS_BaridiumCore_Mag: HandGrenade
	{
		scope=2;
		value = 1;
		model="\3AS\3AS_Equipment\model\3AS_coredetonator.p3d";
		picture="\3AS\3AS_Equipment\UI\Baradium_Core_UI_ca.paa";
		displayName="[104th] Baridium-Core Detonator";
		displayNameShort="Baridium Detonator";
		ammo="WPEC_3AS_BaridiumCore_Ammo";
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
	class WPEC_3AS_SmokeGrenade_Base: SmokeShell
	{
		scope=1;
		model="\3AS\3AS_Equipment\model\3AS_smokegrenade.p3d";
		picture="\3AS\3AS_Equipment\UI\Nacht5_Smoke_UI_ca.paa";
		value=2;
		type=256;
		nameSound="smokeshell";
		displayName="[104th] GS-1 White Smoke";
		displayNameShort="GS-1 White Smoke";
		ammo="WPEC_SmokeShellBase";
		maxLeadSpeed=6;
		initSpeed=22;
		count=1;
		mass=4;
		descriptionShort="Standard-Issue Smoke Grenade of the 104th";
	};
	class WPEC_3AS_SmokeGrenade_White: WPEC_3AS_SmokeGrenade_Base
	{
		scope=2;
		model="\3AS\3AS_Equipment\model\3AS_smokegrenade.p3d";
		displayName="[104th] GS-1 White Smoke";
		displayNameShort="GS-1 White Smoke";
		ammo="WPEC_SmokeShellBase";
		count=1;
	};
	class WPEC_3AS_SmokeGrenade_Red: WPEC_3AS_SmokeGrenade_Base
	{
		scope=2;
		model="\3AS\3AS_Equipment\model\3AS_smokegrenade.p3d";
		displayName="[104th] GS-1 Red Smoke";
		displayNameShort="GS-1 Red Smoke";
		ammo="WPEC_SmokeShellRed";
		count=1;
	};
	class WPEC_3AS_SmokeGrenade_Blue: WPEC_3AS_SmokeGrenade_Base
	{
		scope=2;
		model="\3AS\3AS_Equipment\model\3AS_smokegrenade.p3d";
		displayName="[104th] GS-1 Blue Smoke";
		displayNameShort="GS-1 Blue Smoke";
		ammo="WPEC_SmokeShellBlue";
		count=1;
	};
	class WPEC_3AS_SmokeGrenade_Green: WPEC_3AS_SmokeGrenade_Base
	{
		scope=2;
		model="\3AS\3AS_Equipment\model\3AS_smokegrenade.p3d";
		displayName="[104th] GS-1 Green Smoke";
		displayNameShort="GS-1 Green Smoke";
		ammo="WPEC_SmokeShellGreen";
		count=1;
	};
	class WPEC_3AS_SmokeGrenade_Yellow: WPEC_3AS_SmokeGrenade_Base
	{
		scope=2;
		model="\3AS\3AS_Equipment\model\3AS_smokegrenade.p3d";
		displayName="[104th] GS-1 Yellow Smoke";
		displayNameShort="GS-1 Yellow Smoke";
		ammo="WPEC_SmokeShellYellow";
		count=1;
	};
	class WPEC_3AS_SmokeGrenade_Purple: WPEC_3AS_SmokeGrenade_Base
	{
		scope=2;
		model="\3AS\3AS_Equipment\model\3AS_smokegrenade.p3d";
		displayName="[104th] GS-1 Purple Smoke";
		displayNameShort="GS-1 Purple Smoke";
		ammo="WPEC_SmokeShellPurple";
		count=1;
	};
	class WPEC_3AS_SmokeGrenade_Orange: WPEC_3AS_SmokeGrenade_Base
	{
		scope=2;
		model="\3AS\3AS_Equipment\model\3AS_smokegrenade.p3d";
		displayName="[104th] GS-1 Orange Smoke";
		displayNameShort="GS-1 Orange Smoke";
		ammo="WPEC_SmokeShellOrange";
		count=1;
	};
	class WPEC_PersonalShield_Republic_Mag: SmokeShell
	{
		author = "Maldova";
		mass = 8;
		scope = 2;
		value = 1;
		displayName = "[104th] Personal Shield";
		displayNameShort = "Weapon Shield";
		type = 256;
		ammo = "WPEC_PersonalShield_Republic_Ammo";
		count = 1;
		initSpeed = 18;
		nameSound = "handgrenade";
		maxLeadSpeed = 7;
		sound[] = {"",0.000316228,1};
		descriptionShort = "Small Shield that augments your weapon for 30 seconds.";
	};
	class WPEC_PersonalShieldFull_Republic_Mag: SmokeShell
	{
		author = "Maldova";
		mass = 20;
		scope = 2;
		value = 1;
		displayName = "[104th] Full Body Shield";
		displayNameShort = "Full Body Personal Shield";
		type = 256;
		ammo = "WPEC_PersonalShieldFull_Republic_Ammo";
		count = 1;
		initSpeed = 18;
		nameSound = "handgrenade";
		maxLeadSpeed = 7;
		sound[] = {"",0.000316228,1};
		descriptionShort = "Full Body Shield that lasts 60 seconds";
	};
	class WPEC_SquadShield_Republic_Mag: SmokeShell
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
		ammo = "WPEC_SquadShield_Republic_Ammo";
		count = 1;
		initSpeed = 18;
		nameSound = "handgrenade";
		maxLeadSpeed = 7;
		sound[] = {"",0.000316228,1};
		descriptionShort = "Spherical Shield for Squads. Charge lasts 4 minutes.";
	};
