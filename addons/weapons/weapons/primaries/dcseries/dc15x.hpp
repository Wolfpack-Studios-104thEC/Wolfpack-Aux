
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
