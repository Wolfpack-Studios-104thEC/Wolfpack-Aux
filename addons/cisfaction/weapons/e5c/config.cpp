class CfgPatches
{
	class WPEC_CIS_E5C_Auto
	{
		author="WPEC Dev";
		requiredAddons[]=
		{
			"A3_Data_F",
			"A3_Weapons_F"
		};
		requiredVersion=2.2;
		units[]={};
		weapons[]=
		{
			"WPEC_CIS_E5C_Auto",
			"WPEC_CIS_E5C_Auto_Fried"
		};
		ammo[]={};
		magazines[]={};
	};
};
class CfgMagazines
{
	class 100Rnd_65x39_caseless_mag;
	class WPEC_CIS_E5C_Auto_mag: 100Rnd_65x39_caseless_mag
	{
		author="WPEC Dev";
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=0;
		modelSpecial="";
		modelSpecialIsProxy=0;
		picture="\MRC\JLTS\weapons\e5c\data\ui\e5c_mag_ui_ca.paa";
		model="\MRC\JLTS\weapons\e5c\e5c_mag.p3d";
		count=300;
		displayName="[WPEC-CIS] E-5C Autorifle Mag";
		displayNameShort="$STR_JLTS_snames_EnergyCellStandard";
		descriptionShort="$STR_JLTS_descs_E5C_mag";
		ammo="WPEC_CIS_Ammo_556";
		tracersEvery=1;
		initSpeed=600;
		mass=32;
	};
};
class BaseSoundModeType;
class CowsSlot;
class MuzzleSlot;
class PointerSlot;
class UnderBarrelSlot;
class Mode_SemiAuto;
class Mode_FullAuto;
class CfgWeapons
{
	class Rifle_Long_Base_F;
	class LMG_Mk200_F: Rifle_Long_Base_F
	{
		class GunParticles;
		class GunClouds;
		class WeaponSlotsInfo;
	};
	class UGL_F;
	class WPEC_CIS_E5C_Auto: LMG_Mk200_F
	{
		author="WPEC Dev";
		scope=2;
		JLTS_friedItem="WPEC_CIS_E5C_Auto_Fried";
		baseWeapon="";
		displayName="[CIS] E-5C Autorifle";
		descriptionShort="$STR_JLTS_descs_BlasterRepeating";
		picture="\MRC\JLTS\weapons\e5c\data\ui\e5c_stock_ui_ca.paa";
		model="\MRC\JLTS\weapons\e5c\e5c_stock.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\weapons\e5c\data\e5c_co.paa"
		};
		maxZeroing=1200;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\MRC\JLTS\weapons\e5c\anims\e5c_stock_handanim.rtm"
		};
		magazines[]=
		{
			"WPEC_CIS_E5C_Auto_mag"
		};
		magazineWell[]={};
		fireLightDiffuse[]={0,0,1};
		drySound[]=
		{
			"MRC\JLTS\weapons\Core\sounds\weapon_dry.wss",
			5,
			1,
			10
		};
		modes[]=
		{
			"manual",
			"close",
			"short",
			"medium",
			"far_optic1",
			"far_optic2"
		};
		inertia=1;
		class manual: Mode_FullAuto
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
					"3AS_E5_Shot_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					""
				};
			};
			reloadTime=0.055;
			dispersion=0.0020000001;
			soundContinuous=0;
			soundBurst=0;
			minRange=0;
			aiBurstTerminable=1;
			minRangeProbab=0.30000001;
			midRange=5;
			midRangeProbab=0.69999999;
			maxRange=10;
			maxRangeProbab=0.039999999;
			showToPlayer=1;
		};
		class close: manual
		{
			burst=40;
			aiRateOfFire=0.055;
			aiRateOfFireDistance=50;
			minRange=10;
			minRangeProbab=0.050000001;
			midRange=20;
			midRangeProbab=0.69999999;
			maxRange=50;
			maxRangeProbab=0.039999999;
			showToPlayer=0;
		};
		class short: close
		{
			burst=40;
			aiRateOfFire=0.055;
			aiRateOfFireDistance=300;
			minRange=50;
			minRangeProbab=0.050000001;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=300;
			maxRangeProbab=0.039999999;
		};
		class medium: close
		{
			burst=40;
			aiRateOfFire=0.055;
			aiRateOfFireDistance=600;
			minRange=200;
			minRangeProbab=0.050000001;
			midRange=300;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.1;
		};
		class far_optic1: medium
		{
			showToPlayer=0;
			burst=40;
			aiRateOfFire=0.055;
			aiRateOfFireDistance=1000;
			minRange=300;
			minRangeProbab=0.050000001;
			midRange=500;
			midRangeProbab=0.40000001;
			maxRange=650;
			maxRangeProbab=0.0099999998;
		};
		class far_optic2: far_optic1
		{
			burst=40;
			minRange=400;
			minRangeProbab=0.050000001;
			midRange=750;
			midRangeProbab=0.69999999;
			maxRange=900;
			maxRangeProbab=0.0099999998;
			aiRateOfFire=0.75;
			aiRateOfFireDistance=900;
		};
		aiDispersionCoefY=3;
		aiDispersionCoefX=3;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=110;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]={};
			};
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[]={};
			};
			class PointerSlot: PointerSlot
			{
				compatibleItems[]={};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleItems[]={};
			};
		};
		class GunParticles
		{
			class FirstEffect
			{
				directionName="Konec hlavne";
				effectName="RifleAssaultCloud";
				positionName="Usti hlavne";
			};
		};
	};
	class JLTS_E5C_stock_fried;
	class WPEC_CIS_E5C_Auto_Fried: JLTS_E5C_stock_fried
	{
		baseWeapon="WPEC_CIS_E5C_Auto_Fried";
		displayName="[CIS] E-5C Autorifle FRIED";
		descriptionShort="Fried E-5C Autorifle";
		scope=1;
		picture="\MRC\JLTS\weapons\e5c\data\ui\e5c_stock_fried_ui_ca.paa";
		muzzles[]=
		{
			"this"
		};
		magazines[]={};
		JLTS_isFried=1;
		drySound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Rifles\Mx\dry_Mx",
			0.56234097,
			1,
			10
		};
	};
};
class cfgMods
{
	author="ChaosViking";
	timepacked="1677279925";
};
