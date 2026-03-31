    class GrenadeLauncher;
	class Throw: GrenadeLauncher
	{
		muzzles[]+=
		{
			"WPEC_3AS_ThermalDetonator",
			"WPEC_3AS_BaridiumCore",
			"WPEC_3AS_SmokeWhite",
			"WPEC_3AS_SmokeRed",
			"WPEC_3AS_SmokeOrange",
			"WPEC_3AS_SmokeYellow",
			"WPEC_3AS_SmokeGreen",
			"WPEC_3AS_SmokeBlue",
			"WPEC_3AS_SmokePurple",
			"WPEC_Disruptor",
			"WPEC_DisruptorImpact",
			"WPEC_PersonalShield_Republic",
			"WPEC_PersonalShieldFull_Republic",
			"WPEC_SquadShield_Republic"
		};
		class ThrowMuzzle;
		class WPEC_3AS_ThermalDetonator: ThrowMuzzle
		{
			model="\3AS\3AS_Equipment\model\3AS_thermaldet.p3d";
			magazines[]=
			{
				"WPEC_3AS_ThermalDetonator_Mag"
			};
		};
		class WPEC_3AS_BaridiumCore: ThrowMuzzle
		{
			model="\3AS\3AS_Equipment\model\3AS_coredetonator.p3d";
			magazines[]=
			{
				"WPEC_3AS_BaridiumCore_Mag"
			};
		};
		class WPEC_3AS_SmokeWhite: ThrowMuzzle
		{
			model="\3AS\3AS_Equipment\model\3AS_smokegrenade.p3d";
			magazines[]=
			{
				"WPEC_3AS_SmokeGrenade_White"
			};
		};
		class WPEC_3AS_SmokeRed: ThrowMuzzle
		{
			model="\3AS\3AS_Equipment\model\3AS_smokegrenade.p3d";
			magazines[]=
			{
				"WPEC_3AS_SmokeGrenade_Red"
			};
		};
		class WPEC_3AS_SmokeOrange: ThrowMuzzle
		{
			model="\3AS\3AS_Equipment\model\3AS_smokegrenade.p3d";
			magazines[]=
			{
				"WPEC_3AS_SmokeGrenade_Orange"
			};
		};
		class WPEC_3AS_SmokeYellow: ThrowMuzzle
		{
			model="\3AS\3AS_Equipment\model\3AS_smokegrenade.p3d";
			magazines[]=
			{
				"WPEC_3AS_SmokeGrenade_Yellow"
			};
		};
		class WPEC_3AS_SmokeGreen: ThrowMuzzle
		{
			model="\3AS\3AS_Equipment\model\3AS_smokegrenade.p3d";
			magazines[]=
			{
				"WPEC_3AS_SmokeGrenade_Green"
			};
		};
		class WPEC_3AS_SmokeBlue: ThrowMuzzle
		{
			model="\3AS\3AS_Equipment\model\3AS_smokegrenade.p3d";
			magazines[]=
			{
				"WPEC_3AS_SmokeGrenade_Blue"
			};
		};
		class WPEC_3AS_SmokePurple: ThrowMuzzle
		{
			model="\3AS\3AS_Equipment\model\3AS_smokegrenade.p3d";
			magazines[]=
			{
				"WPEC_3AS_SmokeGrenade_Purple"
			};
		};
		class WPEC_Disruptor: ThrowMuzzle
		{
			model="\3AS\3AS_Equipment\model\3AS_thermaldet.p3d";
			magazines[]=
			{
				"WPEC_ThermalDisruptor"
			};
		};
		class WPEC_DisruptorImpact: ThrowMuzzle
		{
			model="\3AS\3AS_Equipment\model\3AS_thermaldet.p3d";
			magazines[]=
			{
				"WPEC_ThermalDisruptorImpact"
			};
		};
		class WPEC_PersonalShield_Republic: ThrowMuzzle
		{
			model = "3AS\3AS_Shield\Shield.p3d";
			magazines[]=
			{
				"WPEC_PersonalShield_Republic_Mag"
			};
		};
		class WPEC_PersonalShieldFull_Republic: ThrowMuzzle
		{
			model = "3AS\3AS_Shield\Personal_Shield.p3d";
			magazines[]=
			{
				"WPEC_PersonalShieldFull_Republic_Mag"
			};
		};
		class WPEC_SquadShield_Republic: ThrowMuzzle
		{
			model = "3AS\3AS_Shield\SquadShield.p3d";
			magazines[]=
			{
				"WPEC_SquadShield_Republic_Mag"
			};
		};
	};