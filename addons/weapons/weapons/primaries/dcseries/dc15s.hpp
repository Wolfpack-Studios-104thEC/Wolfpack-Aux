
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
		modes[]=
		{
			"FullAuto",
			"Single",
			"single_medium_optics1",
			"single_far_optics2"
		};
		class FullAuto: Mode_FullAuto
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
			reloadTime=0.085000001;
			dispersion=0.00092999998;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=50;
			maxRangeProbab=0.050000001;
			aiRateOfFire=1e-006;
		};
		class Single: Mode_SemiAuto
		{
			reloadTime=0.1;
			dispersion=0.00066000002;
			minRange=2;
			minRangeProbab=0.5;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=350;
			maxRangeProbab=0.30000001;
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
		class single_medium_optics1: Single
		{
			requiredOpticType=1;
			showToPlayer=0;
			minRange=5;
			minRangeProbab=0.2;
			midRange=300;
			midRangeProbab=0.69999999;
			maxRange=450;
			maxRangeProbab=0.2;
			aiRateOfFire=6;
			aiRateOfFireDistance=500;
		};
		class single_far_optics2: Single
		{
			requiredOpticType=2;
			showToPlayer=0;
			minRange=100;
			minRangeProbab=0.2;
			midRange=400;
			midRangeProbab=0.69999999;
			maxRange=600;
			maxRangeProbab=0.050000001;
			aiRateOfFire=8;
			aiRateOfFireDistance=800;
		};
		class GL_1GL_F: UGL_F
		{
			displayName="$STR_A3_cfgweapons_3gl0";
			descriptionShort="$STR_A3_cfgweapons_3gl1";
			useModelOptics=0;
			useExternalOptic=0;
			magazines[]=
			{
				"3AS_1UGL_MK54_HE_shell"
			};
			magazineWell[]=
			{
				"UGL_40x36",
				"3AS_1UGL_Magwell"
			};
			cameraDir="OP_look";
			discreteDistance[]={50,75,100,150,200,250,300,350,400};
			discreteDistanceCameraPoint[]=
			{
				"OP_eye_50",
				"OP_eye_75",
				"OP_eye_100",
				"OP_eye_150",
				"OP_eye_200",
				"OP_eye_250",
				"OP_eye_300",
				"OP_eye_350",
				"OP_eye_400"
			};
			discreteDistanceInitIndex=1;
			reloadAction="GestureReloadMXUGL";
			reloadMagazineSound[]=
			{
				"A3\Sounds_F\arsenal\weapons\Rifles\MX\Mx_UGL_reload",
				1,
				1,
				10
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
					"WPEC_Holosight_blu",
					
					"WPEC_Holosight_2xblu",
					"Optre_Recon_Sight"
				};
			};
		};
	};
	class WPEC_3AS_DC15SGL: 3AS_DC15S_Base_F
	{
		baseWeapon="WPEC_3AS_DC15SGL";
		scope=2;
		displayName="[104th] DC-15S-GL";
		model="\3AS\3AS_Weapons\Republic\DC15S\3AS_DC15S_GL.p3d";
		picture="\3AS\3AS_Weapons\Republic\DC15S\Data\UI\3as_dc15sgl.paa";
		UiPicture="\A3\weapons_f\data\UI\icon_regular_CA.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"3as\3AS_Weapons\Republic\DC15S\Data\Anim\New_DC15SGL_Handanim.rtm"
		};
		muzzles[]=
		{
			"this",
			"GL_1GL_F"
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
					"WPEC_Holosight_blu",
					"Optre_Recon_Sight"
				};
			};
		};
	};
