
	class WPEC_3AS_DC15A: 3AS_DC15A_Base_F
	{
		canShootinWater=1;
		JLTS_hasEMPProtection=1;
		model="\3AS\3AS_Weapons\Republic\DC15A\3AS_DC15A_F.p3d";
		picture="\3AS\3AS_Weapons\Republic\DC15A\Data\UI\3as_dc15a.paa";
		UiPicture="\A3\weapons_f\data\UI\icon_regular_CA.paa";
		scope=2;
		displayName="[104th] DC-15A";
		baseWeapon="WPEC_3AS_DC15A";
		magazines[]=
		{
			"WPEC_3AS_DC15A_Mag"
		};
		modes[]=
		{
			"Single",
			"single_medium_optics1",
			"single_far_optics2",
            "Burst"
		};
        class Burst: Mode_Burst
		{
			burst=3;
			reloadTime=0.050000001;
			dispersion=0.00066000002;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=50;
			midRangeProbab=0.69999999;
			maxRange=100;
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
			mass=90;
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
			class UnderBarrelSlot: 3AS_UnderBarrelSlot_DC15A
			{
				iconPosition[]={0.23999999,0.69999999};
				iconScale=0.30000001;
			};
		};
	};
	class WPEC_3AS_DC15AGL: 3AS_DC15A_Base_F
	{
		scope=2;
		displayName="[104th] DC-15A/GL";
		baseWeapon="WPEC_3AS_DC15AGL";
		model="\3AS\3AS_Weapons\Republic\DC15A\3AS_DC15A_GL.p3d";
		picture="\3AS\3AS_Weapons\Republic\DC15A\Data\UI\3as_dc15agl.paa";
		UiPicture="\A3\weapons_f\data\UI\icon_regular_CA.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"3as\3AS_Weapons\Republic\DC15A\Data\Anim\New_DC15aGL_Handanim.rtm"
		};
		muzzles[]=
		{
			"this",
			"GL_3GL_F"
		};
		canShootInWater=1;
		JLTS_hasEMPProtection=1;
		magazines[]=
		{
			"WPEC_3AS_DC15A_Mag"
		};
		modes[]=
		{
			"Single",
			"single_medium_optics1",
			"single_far_optics2",
            "Burst"
		};
        class Burst: Mode_Burst
		{
			burst=3;
			reloadTime=0.050000001;
			dispersion=0.00066000002;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=50;
			midRangeProbab=0.69999999;
			maxRange=100;
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
			mass=110;
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
			class UnderBarrelSlot: 3AS_UnderBarrelSlot_DC15A
			{
				iconPosition[]={0.23999999,0.69999999};
				iconScale=0.30000001;
			};
		};
	};
	class WPEC_3AS_DC15S: 3AS_DC15S_Base_F
	{
		canShootInWater=1;
		JLTS_hasEMPProtection=1;
		scope=2;
		displayName="[104th] DC-15S";
		baseWeapon="WPEC_3AS_DC15S";
		model="\3AS\3AS_Weapons\Republic\DC15S\3AS_DC15S_F.p3d";
		picture="\3AS\3AS_Weapons\Republic\DC15S\Data\UI\3as_dc15s.paa";
		UiPicture="\A3\weapons_f\data\UI\icon_regular_CA.paa";
		magazines[]=
		{
			"WPEC_3AS_DC15S_Mag"
		};
		class Single: Mode_SemiAuto
		{
			reloadTime = 0.1;
			dispersion = 0.00066;
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 350;
			maxRangeProbab = 0.1;
			soundContinuous = 0;
			soundBurst = 0;
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"3AS_DC15S_Shot_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"3AS_DC15S_Shot_SoundSet"};
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=50;
			class MuzzleSlot: 3AS_MuzzleSlot_DC15S
			{
				iconPosition[]={0,0.44999999};
				iconScale=0.2;
			};
			class CowsSlot: CowsSlot
			{
				compatibleItems[]=
				{
					"Aux501_cows_Holosight",
					"Aux501_cows_Holosight_2",
					"Aux501_cows_Holosight_3",
					"Optre_Recon_Sight"
				};
			};
		};
	};
	class WPEC_3AS_DC15L: 3AS_DC15L_Base_F
	{
		scope=2;
		displayName="[104th] DC-15L";
		canShootInWater=1;
		JLTS_hasEMPProtection=1;
		model="\3AS\3AS_Weapons\Republic\DC15L\3AS_DC15L_F.p3d";
		picture="\3AS\3AS_Weapons\Republic\DC15L\Data\UI\3as_dc15l.paa";
		UiPicture="\A3\weapons_f\data\UI\icon_regular_CA.paa";
		magazines[]=
		{
			"WPEC_3AS_DC15L_Mag",
			"WPEC_3AS_DC15C_OCMag"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=170;
			class MuzzleSlot: 3AS_MuzzleSlot_DC15L
			{
				iconPosition[]={0,0.44999999};
				iconScale=0.2;
			};
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
			class UnderBarrelSlot: 3AS_UnderBarrelSlot_DC15L
			{
				iconPosition[]={0.23999999,0.69999999};
				iconScale=0.30000001;
			};
		};
	};
	class WPEC_3AS_DC15C: 3AS_DC15C_Base_F
	{
		scope=2;
		displayName="[104th] DC-15C";
		canShootInWater=1;
		JLTS_hasEMPProtection=1;
		baseWeapon="WPEC_3AS_DC15C";
		model="\3AS\3AS_Weapons\Republic\DC15C\3AS_DC15C_F.p3d";
		picture="\3AS\3AS_Weapons\Republic\DC15C\Data\UI\3as_dc15c.paa";
		UiPicture="\A3\weapons_f\data\UI\icon_regular_CA.paa";
		magazines[]=
		{
			"WPEC_3AS_DC15C_Mag",
			"WPEC_3AS_DC15C_OCMag"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=70;
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
	class WPEC_3AS_DC15CGL: 3AS_DC15C_Base_F
	{
		scope=2;
		displayName="[104th] DC-15C/GL";
		canShootInWater=1;
		JLTS_hasEMPProtection=1;
		baseWeapon="WPEC_3AS_DC15CGL";
		model="\3AS\3AS_Weapons\Republic\DC15C\3AS_DC15C_GL.p3d";
		picture="\3AS\3AS_Weapons\Republic\DC15C\Data\UI\3as_dc15cgl.paa";
		UiPicture="\A3\weapons_f\data\UI\icon_regular_CA.paa";
		muzzles[]=
		{
			"this",
			"GL_3GL_F"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"3as\3AS_Weapons\Republic\DC15C\Data\Anim\New_DC15CGL_Handanim.rtm"
		};
		magazines[]=
		{
			"WPEC_3AS_DC15C_Mag"
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
	class WPEC_3AS_DC17M: 3AS_DC17M_F
	{
		scope=2;
		displayName="[104th] DC-17M";
		canShootInWater=1;
		JLTS_hasEMPProtection=1;
		magazines[]=
		{
			"WPEC_3AS_DC17M_Mag",
			"3AS_5Rnd_EC80_mag",
			"3AS_AntiArmour_mag",
			"WPEC_3AS_DC17MLightAT"
		};
	};
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
	class WPEC_3AS_Z6: 3AS_Z6_F
	{
		JLTS_hasEMPProtection=1;
		scope=0;
		displayName="[104th] Z-6";
		canShootInWater=1;
		magazines[]=
		{
			"WPEC_3AS_Z6_Mag"
		};
	};
	class WPEC_3AS_Valken38X: 3AS_Valken38X_Base_F
	{
		JLTS_hasEMPProtection=1;
		canShootInWater=1;
		scope=2;
		displayName="[104th] Valken 38X";
		baseWeapon="WPEC_3AS_Valken38X";
		model="\3AS\3AS_Weapons\Republic\Valken38X\3AS_Valken38X_F.p3d";
		picture="\3AS\3AS_Weapons\Republic\Valken38X\Data\UI\3as_valken38x.paa";
		UiPicture="\A3\weapons_f\data\UI\icon_regular_CA.paa";
		magazines[]=
		{
			"WPEC_3AS_Valken38X_Mag"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=231;
			class MuzzleSlot: 3AS_MuzzleSlot_VK38X
			{
				iconPosition[]={0,0.44999999};
				iconScale=0.2;
			};
			class CowsSlot: CowsSlot
			{
				compatibleItems[]=
				{
					"3AS_Optic_VK38X",
					"Optre_M393_Scope"
				};
			};
			class UnderBarrelSlot: 3AS_UnderBarrelSlot_VK38X
			{
				iconPosition[]={0.23999999,0.69999999};
				iconScale=0.30000001;
			};
		};
	};
	class WPEC_3AS_Chaingun: 3AS_Chaingun
	{
		canShootInWater=1;
		scope=2;
		displayName="[104th] Chaingun";
		magazines[]=
		{
			"WPEC_3AS_Chaingun_Mag"
		};
	};
	class WPEC_3AS_RPS6_Unguided: 3AS_RPS6_Base
	{
		baseWeapon="WPEC_3AS_RPS6_F";
		displayname="[104th] RPS6-L Disposable";
		magazines[]=
		{
			"WPEC_3AS_MK40_AT_Unguided"
		};
	};
	class WPEC_3AS_RPS6_F: WPEC_3AS_RPS6_Unguided
	{
		scope=2;
		baseWeapon="WPEC_3AS_RPS6_F";
		displayname="[104th] RPS6-L Disposable";
		magazines[]=
		{
			"CBA_FakeLauncherMagazine"
		};
	};
	class WPEC_3AS_RPS6_Guided: 3AS_RPS6_Guided
	{
		baseWeapon="WPEC_3AS_RPS6_G";
		displayname="[104th] RPS6-L Disposable Guided";
		magazines[]=
		{
			"WPEC_3AS_MK40_AT_Guided"
		};
	};
	class WPEC_3AS_RPS6_G: WPEC_3AS_RPS6_Guided
	{
		scope=2;
		baseWeapon="WPEC_3AS_RPS6_G";
		displayname="[104th] RPS6-L Disposable Guided";
		magazines[]=
		{
			"CBA_FakeLauncherMagazine"
		};
	};
	class WPEC_RPS6_K_Odin: Odins_Launch
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
	class WPEC_RPS6_K: launch_RPG32_F
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
			"WPEC_MK2_AT_Mag",
			"WPEC_MK3_AP_Mag",
			"WPEC_MK4_AP_Mag"
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
	class WPEC_3AS_DC17S_Base_F: Pistol_Base_F
	{
		canShootInWater=1;
		JLTS_hasEMPProtection=1;
		author="Wolfpack Studios";
		magazines[]=
		{
			"WPEC_MK1_PistolMag",
			"WPEC_MK3_PistolMag",
			"WPEC_MK4_PistolMag"
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
				"WPEC_MK2_PistolMag_Short",
				"WPEC_MK2_PistolMag_Long"
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
	class WPEC_3AS_DC17S: WPEC_3AS_DC17S_Base_F
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
	class WPEC_JLTS_DC17SA: JLTS_DC17SA
	{
		canShootInWater=1;
		scope=2;
		scopeArsenal=2;
		baseWeapon="WPEC_JLTS_DC17SA";
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
			"WPEC_MK1_PistolMag",
			"WPEC_MK4_PistolMag"
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
				"WPEC_MK2_PistolMag_Short",
				"WPEC_MK2_PistolMag_Long"
			};
			reloadAction="GestureReloadPistol";
		};
	};
	class WPEC_JLTS_DC15X: arifle_MX_Base_F
	{
		JLTS_hasElectronics = 0;
		JLTS_hasEMPProtection = 1;
		author = "MrClock";
		scope = 2;
		displayName = "[104th] DC-15X";
		descriptionShort = "$STR_JLTS_descs_BlasterRifle";
		picture = "\MRC\JLTS\weapons\DC15X\data\ui\DC15X_ui_ca.paa";
		model = "\MRC\JLTS\weapons\DC15X\DC15X.p3d";
		baseWeapon = "WPEC_JLTS_DC15X";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\MRC\JLTS\weapons\DC15X\data\DC15X_co.paa"};
		handAnim[] = {"OFP2_ManSkeleton","\MRC\JLTS\weapons\DC15X\anims\DC15X_handanim.rtm"};
		magazines[] = {"WPEC_DC15XM_PlasmaMag", "WPEC_DC15XM_EnergyMag"};
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
	class WPEC_JLTS_DC15X_scoped: WPEC_JLTS_DC15X
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
	class WPEC_JLTS_DC15X_fried: WPEC_JLTS_DC15X
	{
		baseWeapon = "WPEC_JLTS_DC15X_fried";
		displayName = "$STR_JLTS_names_DC15XFried";
		descriptionShort = "$STR_JLTS_descs_BlasterFried";
		scope = 1;
		picture = "\MRC\JLTS\weapons\DC15X\data\ui\DC15X_fried_ui_ca.paa";
		muzzles[] = {"this"};
		magazines[] = {};
		JLTS_isFried = 1;
		drySound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mx\dry_Mx.wss",0.562341,1,10};
	};
