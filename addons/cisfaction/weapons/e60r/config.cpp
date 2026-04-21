class CfgPatches
{
	class WPEC_CIS_E60R
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
			"WPEC_CIS_E60R_AT",
			"WPEC_CIS_E60R_AA"
		};
		ammo[]={};
		magazines[]={};
	};
};
class CfgAmmo
{
	class M_Titan_AA;
	class WPEC_CIS_ammo_E60R_AARocket: M_Titan_AA
	{
		hit=200;
		effectsMissile="3AS_Rocket_effect_Purple_fly";
		missileLockMaxDistance=3000;
		manueuvrability=25;
		sideAirFriction=0.02;
		missileKeepLockedCone=360;
		cmImmunity=0.0099999998;
		aiAmmoUsageFlags=256;
	};
	class WPEC_CIS_ammo_E60R_Heavy_AARocket: WPEC_CIS_ammo_E60R_AARocket
	{
		hit=800;
		effectsMissile="3AS_Rocket_effect_Purple_fly";
		missileLockMaxDistance=5000;
		manueuvrability=25;
		sideAirFriction=0.02;
		missileKeepLockedCone=360;
		cmImmunity=0.0099999998;
		aiAmmoUsageFlags=256;
	};
	class M_Titan_AT;
	class WPEC_CIS_ammo_E60R_ATRocket: M_Titan_AT
	{
		hit=300;
		indirectHit=200;
		indirectHitRange=15;
		irLock=0;
		effectsMissile="3AS_Rocket_effect_Purple_fly";
		flightProfiles[]=
		{
			"Direct"
		};
		manualControl=0;
		aiAmmoUsageFlags=128 + 512;
	};
};
class CowsSlot;
class MuzzleSlot;
class PointerSlot;
class UnderBarrelSlot;
class Mode_SemiAuto;
class Mode_FullAuto;
class CfgMagazines
{
	class JLTS_PLX1_AT_mag;
	class WPEC_CIS_mag_E60R_AT: JLTS_PLX1_AT_mag
	{
		ammo="WPEC_CIS_ammo_E60R_ATRocket";
		displayName="E60R - AT mag, 1rnd";
		scope=2;
		count=1;
		initSpeed=60;
		mass=62;
	};
	class WPEC_CIS_mag_E60R_AA: WPEC_CIS_mag_E60R_AT
	{
		ammo="WPEC_CIS_ammo_E60R_AARocket";
		displayName="E60R - AA mag, 1rnd";
		mass=31;
	};
	class WPEC_CIS_mag_E60R_Heavy_AA: WPEC_CIS_mag_E60R_AA
	{
		ammo="WPEC_CIS_ammo_E60R_Heavy_AARocket";
		displayName="E60R - Heavy AA mag, 1rnd";
		mass=50;
	};
};
class CfgWeapons
{
	class launch_Titan_short_base;
	class JLTS_E60R_AT: launch_Titan_short_base
	{
		class GunParticles;
		class GunClouds;
		class WeaponSlotsInfo;
	};
	class Launcher_Base_F;
	class launch_RPG32_F: Launcher_Base_F
	{
		class WeaponSlotsInfo;
	};
	class WPEC_CIS_E60R_AT: launch_RPG32_F
	{
		scope=2;
		displayName="[CIS) E60R AT";
		descriptionShort="AT Launcher for the CIS";
		baseWeapon="WPEC_CIS_E60R_AT";
		ace_overpressure_angle=30;
		ace_overpressure_damage=0.5;
		ace_overpresssure_priority=1;
		ace_overpressure_range=2;
		ace_reloadlaunchers_enabled=1;
		modes[]=
		{
			"Single"
		};
		canLock=0;
		airLock=0;
		weaponInfoType="RscOptics_titan";
		modelOptics[]=
		{
			"\A3\Weapons_F_Beta\acc\reticle_titan.p3d"
		};
		model="\MRC\JLTS\weapons\E60R\E60R.p3d";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\MRC\JLTS\weapons\E60R\anims\E60R_handanim.rtm"
		};
		hiddenSelections[]=
		{
			"camo1",
			"illum"
		};
		hiddenSelectionsMaterials[]=
		{
			"",
			"\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
		};
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\weapons\E60R\data\E60R_co.paa"
		};
		picture="\MRC\JLTS\weapons\E60R\data\ui\E60R_ui_ca.paa";
		magazineWell[]={};
		magazines[]=
		{
			"WPEC_CIS_mag_E60R_AT"
		};
		class OpticsModes
		{
			class sight
			{
				opticsID=1;
				useModelOptics=1;
				opticsPPEffects[]=
				{
					"OpticsCHAbera2",
					"OpticsBlur3"
				};
				opticsZoomMin=0.029999999;
				opticsZoomMax=0.125;
				opticsZoomInit=0.125;
				memoryPointCamera="optic_view";
				opticsFlare=1;
				opticsDisablePeripherialVision=1;
				visionMode[]=
				{
					"Normal",
					"NVG",
					"Ti"
				};
				thermalMode[]={0,1};
				discreteInitIndex=0;
				discreteDistanceInitIndex=0;
				discretefov[]={0.125,0.0625,0.030999999};
				distanceZoomMin=100;
				distanceZoomMax=500;
				cameraDir="";
			};
		};
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType
			{
				weaponSoundEffect="";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"swlw_rework\sounds\launcher\PLX_shot.wss",
					10,
					1,
					500
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			sounds[]=
			{
				"StandardSound"
			};
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
	};
	class WPEC_CIS_E60R_AA: JLTS_E60R_AT
	{
		scope=2;
		displayName="[CIS] E60R AA";
		descriptionShort="AA Launcher for the CIS";
		baseWeapon="WPEC_CIS_E60R_AA";
		ace_overpressure_angle=45;
		ace_overpressure_damage=0;
		ace_overpresssure_priority=1;
		ace_overpressure_range=10;
		ace_reloadlaunchers_enabled=1;
		modes[]=
		{
			"Single"
		};
		canLock=2;
		airLock=2;
		cmImmunity=0.0099999998;
		weaponInfoType="RscOptics_titan";
		modelOptics[]=
		{
			"\A3\Weapons_F_Beta\acc\reticle_titan.p3d"
		};
		model="\MRC\JLTS\weapons\E60R\E60R.p3d";
		cartridgePos="nabojnicestart";
		cartridgeVel="nabojniceend";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\MRC\JLTS\weapons\E60R\anims\E60R_handanim.rtm"
		};
		hiddenSelections[]=
		{
			"camo1",
			"illum"
		};
		hiddenSelectionsMaterials[]=
		{
			"",
			"\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
		};
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\weapons\E60R\data\E60R_co.paa"
		};
		picture="\MRC\JLTS\weapons\E60R\data\ui\E60R_ui_ca.paa";
		magazineWell[]={};
		magazines[]=
		{
			"WPEC_CIS_mag_E60R_AA",
			"WPEC_CIS_mag_E60R_Heavy_AA"
		};
		class OpticsModes
		{
			class sight
			{
				opticsID=1;
				useModelOptics=1;
				opticsPPEffects[]=
				{
					"OpticsCHAbera2",
					"OpticsBlur3"
				};
				opticsZoomMin=0.029999999;
				opticsZoomMax=0.125;
				opticsZoomInit=0.125;
				memoryPointCamera="optic_view";
				opticsFlare=1;
				opticsDisablePeripherialVision=1;
				visionMode[]=
				{
					"Normal",
					"NVG",
					"Ti"
				};
				thermalMode[]={0,1};
				discreteInitIndex=0;
				discreteDistanceInitIndex=0;
				discretefov[]={0.125,0.0625,0.030999999};
				distanceZoomMin=100;
				distanceZoomMax=500;
				cameraDir="";
			};
		};
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType
			{
				weaponSoundEffect="";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"swlw_rework\sounds\launcher\PLX_shot.wss",
					10,
					1,
					500
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			sounds[]=
			{
				"StandardSound"
			};
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
	};
};
class cfgMods
{
	author="ChaosViking";
	timepacked="1677279925";
};
