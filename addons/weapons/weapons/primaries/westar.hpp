
	class 3AS_WestarM5_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo;
		class 3AS_WestarM5_GL_F: UGL_F
		{
		};
	};
	class 3AS_WestarM5_F: 3AS_WestarM5_Base_F
	{
	};
	class WPEC_3AS_WestarM5: 3AS_WestarM5_F
	{
		scope=2;
		displayName="[104th] Westar M5";
		canShootInWater=1;
		JLTS_hasEMPProtection=1;
		magazines[]=
		{
			"WPEC_3AS_WestarM5_Mag"
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
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot;
			class MuzzleSlot;
		};
	};
	class WPEC_3AS_WestarM5GL: 3AS_WestarM5_GL
	{
		scope=2;
		displayName="[104th] Westar M5/GL";
		magazines[]=
		{
			"WPEC_3AS_WestarM5_Mag",
			"WPEC_3AS_WestarLightAT"
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
		class WPEC_WestarM5_GL_F: 3AS_WestarM5_GL_F
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
			"WPEC_WestarM5_GL_F"
		};
	};
