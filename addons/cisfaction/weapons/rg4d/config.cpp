class CfgPatches
{
	class WPEC_CIS_RG4D_Pistol
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
			"WPEC_CIS_RG4D_Pistol",
			"WPEC_CIS_RG4D_Pistol_Fried"
		};
		ammo[]={};
		magazines[]={};
	};
};
class CfgMagazines
{
	class JLTS_RG4D_mag;
	class WPEC_CIS_RG4D_Pistol_mag: JLTS_RG4D_mag
	{
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=0;
		author="WPEC Dev";
		displayName="[WPEC-CIS] RG4D Pistol Mag";
		displayNameShort="RG4D Pistol Mag";
		count=15;
		ammo="WPEC_CIS_Ammo_45acp";
		descriptionShort="RG4D Mag";
		tracersEvery=1;
	};
};
class Mode_SemiAuto;
class MuzzleSlot;
class PointerSlot;
class UnderBarrelSlot;
class WeaponSlotsInfo;
class CfgWeapons
{
	class JLTS_RG4D;
	class WPEC_CIS_RG4D_Pistol: JLTS_RG4D
	{
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=0;
		JLTS_friedItem="WPEC_CIS_RG4D_Pistol_Fried";
		JLTS_repairTime=20;
		author="WPEC Dev";
		displayName="[CIS] RG4D Droid Pistol";
		descriptionShort="RG4D Droid Pistol";
		scope=2;
		baseWeapon="WPEC_CIS_RG4D_Pistol";
		picture="\MRC\JLTS\weapons\RG4D\data\ui\RG4D_ui_ca.paa";
		model="\MRC\JLTS\weapons\RG4D\RG4D.p3d";
		magazines[]=
		{
			"WPEC_CIS_RG4D_Pistol_mag"
		};
		magazineWell[]={};
		fireLightDiffuse[]={1,0,0};
		drySound[]=
		{
			"MRC\JLTS\weapons\Core\sounds\weapon_dry.wss",
			5,
			1,
			10
		};
		muzzles[]=
		{
			"this"
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[]=
				{
					"MRC\JLTS\weapons\RG4D\sounds\RG4D_fire",
					3,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			recoil="recoil_pistol_light";
			recoilProne="recoil_prone_pistol_light";
			reloadTime=0.12;
			dispersion=0.0029;
			minRange=5;
			minRangeProbab=0.30000001;
			midRange=25;
			midRangeProbab=0.60000002;
			maxRange=50;
			maxRangeProbab=0.1;
			aiRateOfFire=2;
			aiRateOfFireDistance=25;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=20;
			class CowsSlot
			{
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
		weaponInfoType="RscOptics_nightstalker";
		modelOptics="\a3\weapons_f\acc\reticle_nightstalker_f.p3d";
		class OpticModes
		{
			class Scope
			{
				opticsID=1;
				useModelOptics=1;
				opticsPPEffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
				opticsZoomMin=0.025;
				opticsZoomMax=0.0625;
				opticsZoomInit=0.0625;
				discreteDistance[]={100,200,300,400,500,600,700,800,900,1000};
				discreteDistanceInitIndex=1;
				distanceZoomMin=100;
				distanceZoomMax=1000;
				memoryPointCamera="opticView";
				visionMode[]=
				{
					"Normal",
					"NVG",
					"Ti"
				};
				thermalMode[]={5,6};
				opticsFlare=1;
				opticsDisablePeripherialVision=1;
				cameraDir="";
			};
		};
	};
	class JLTS_RG4D_fried;
	class WPEC_CIS_RG4D_Pistol_Fried: JLTS_RG4D_fried
	{
		JLTS_isFried=1;
		baseWeapon="WPEC_CIS_RG4D_Pistol_Fried";
		displayName="[CIS] RG4D Pistol FRIED";
		descriptionShort="RG4D Pistol FRIED";
		scope=1;
		picture="\MRC\JLTS\weapons\RG4D\data\ui\RG4D_fried_ui_ca.paa";
		magazines[]={};
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
