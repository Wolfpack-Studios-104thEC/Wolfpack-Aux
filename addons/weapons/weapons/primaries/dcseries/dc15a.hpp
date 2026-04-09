class CfgRecoils
{
    class recoil_default;
    class Aux501_Recoil_Z6: recoil_default
    {
        muzzleOuter[] = {0.4,0.5,0.6,0.2};
        kickBack[] = {0.03,0.045};
        temporary = 0.01;
    };
};
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
		recoil = "recoil_lim";
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
					"WPEC_HRCO_blu",
					"3AS_optic_DC15LE_F",
					"WPEC_HMRCO_blu",
					"WPEC_Holosight_blu",
					"WPEC_Holosight_2xblu"
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
					"WPEC_HRCO_blu",
					"WPEC_HMRCO_blu",
					"WPEC_Holosight_blu",
					"WPEC_Holosight_2xblu"
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
