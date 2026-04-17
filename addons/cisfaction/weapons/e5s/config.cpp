class CfgPatches
{
	class WPEC_CIS_E5S_Sniper
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
			"WPEC_CIS_E5S_Sniper",
			"WPEC_CIS_E5S_Sniper_Fried"
		};
		ammo[]={};
		magazines[]={};
	};
};
class CfgMagazines
{
	class JLTS_E5S_mag;
	class WPEC_CIS_E5S_Sniper_Mag: JLTS_E5S_mag
	{
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=0;
		author="WPEC Dev";
		count=20;
		displayName="[WPEC-CIS] E-5S Sniper Mag";
		displayNameShort="E-5S Sniper Mag";
		descriptionShort="CIS E-5S Sniper Mag";
		ammo="WPEC_CIS_Ammo_762";
		tracersEvery=1;
	};
};
class CowsSlot;
class UnderBarrelSlot;
class MuzzleSlot;
class PointerSlot;
class Mode_SemiAuto;
class Mode_FullAuto;
class WeaponSlotsInfo;
class GunParticles;
class CfgWeapons
{
	class JLTS_E5S;
	class WPEC_CIS_E5S_Sniper: JLTS_E5S
	{
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=0;
		JLTS_friedItem="WPEC_CIS_E5S_Sniper_Fried";
		JLTS_repairTime=33;
		author="WPEC Dev";
		scope=2;
		displayName="[CIS] E-5S Sniper Rifle";
		descriptionShort="E-5S Sniper Rifle";
		baseWeapon="WPEC_CIS_E5S_Sniper";
		magazines[]=
		{
			"WPEC_CIS_E5S_Sniper_Mag"
		};
		magazineWell[]={};
		modes[]=
		{
			"Single"
		};
		fireLightDiffuse[]={0,0,1};
		drySound[]=
		{
			"MRC\JLTS\weapons\Core\sounds\weapon_dry.wss",
			5,
			1,
			10
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
					"3AS_E5_Shot_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_E5_Shot_SoundSet"
				};
			};
			reloadTime=0.60000002;
			recoil="recoil_single_mx";
			recoilProne="recoil_single_prone_mx";
			dispersion=0.00073000003;
			minRange=2;
			minRangeProbab=0.5;
			midRange=250;
			midRangeProbab=0.69999999;
			maxRange=450;
			maxRangeProbab=0.30000001;
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
					"3AS_E5_Shot_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_E5_Shot_SoundSet"
				};
			};
			reloadTime=0.096000001;
			recoil="recoil_auto_mx";
			recoilProne="recoil_auto_prone_mx";
			dispersion=0.00073000003;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			aiRateOfFire=1e-006;
		};
		class fullauto_medium: FullAuto
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
					"3AS_E5_Shot_SoundSet"
				};
			};
			dispersion=0.00073000003;
			showToPlayer=0;
			burst=3;
			aiBurstTerminable=1;
			minRange=2;
			minRangeProbab=0.5;
			midRange=75;
			midRangeProbab=0.69999999;
			maxRange=150;
			maxRangeProbab=0.050000001;
			aiRateOfFire=2;
			aiRateOfFireDistance=200;
		};
		class single_medium_optics1: Single
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
					"3AS_E5_Shot_SoundSet"
				};
			};
			dispersion=0.00073000003;
			requiredOpticType=1;
			minRange=2;
			minRangeProbab=0.2;
			midRange=450;
			midRangeProbab=0.69999999;
			maxRange=650;
			maxRangeProbab=0.2;
			aiRateOfFire=6;
			aiRateOfFireDistance=600;
		};
		class single_far_optics2: single_medium_optics1
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
					"3AS_E5_Shot_SoundSet"
				};
			};
			dispersion=0.00073000003;
			requiredOpticType=2;
			minRange=100;
			minRangeProbab=0.2;
			midRange=550;
			midRangeProbab=0.69999999;
			maxRange=800;
			maxRangeProbab=0.050000001;
			aiRateOfFire=8;
			aiRateOfFireDistance=800;
		};
		modelOptics="\MRC\JLTS\weapons\E5S\E5S_reticle.p3d";
		class OpticsModes
		{
			class Snip
			{
				cameraDir="";
				discreteDistance[]={100};
				discreteDistanceInitIndex=0;
				discretefov[]={0.045000002,0.011};
				discreteInitIndex=0;
				distanceZoomMax=2400;
				distanceZoomMin=300;
				memoryPointCamera="opticView";
				modelOptics[]=
				{
					"\MRC\JLTS\weapons\E5S\E5S_reticle.p3d"
				};
				opticsDisablePeripherialVision=1;
				opticsDisplayName="WFOV";
				opticsFlare=1;
				opticsID=1;
				opticsPPEffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
				opticsZoomInit=0.045000002;
				opticsZoomMax=0.045000002;
				opticsZoomMin=0.011;
				useModelOptics=1;
				visionMode[]=
				{
					"Normal",
					"NVG",
					"TI"
				};
			};
			class Iron: Snip
			{
				opticsID=2;
				useModelOptics=0;
				opticsPPEffects[]=
				{
					"",
					""
				};
				opticsFlare=0;
				opticsDisablePeripherialVision=0;
				discreteDistance[]={200};
				discreteDistanceInitIndex=0;
				opticsZoomMin=0.25;
				opticsZoomMax=1.25;
				opticsZoomInit=0.75;
				memoryPointCamera="eye";
				visionMode[]={};
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=92;
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
	class JLTS_E5S_fried;
	class WPEC_CIS_E5S_Sniper_Fried: JLTS_E5S_fried
	{
		baseWeapon="WPEC_CIS_E5S_Sniper_Fried";
		displayName="[CIS] E-5S Sniper Rifle FRIED";
		descriptionShort="E-5S Sniper Rifle FRIED";
		scope=1;
		picture="\MRC\JLTS\weapons\E5S\data\ui\E5S_fried_ui_ca.paa";
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
