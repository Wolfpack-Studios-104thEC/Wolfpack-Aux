class CfgPatches
{
	class WPEC_CIS_Hailfire
	{
		requiredAddons[]=
		{
			"A3_Armor_F_Beta",
			"3AS_Main",
			"3AS_Weapons"
		};
		requiredVersion=2.2;
		units[]=
		{
			"WPEC_CIS_Hailfire_Standard",
			"WPEC_CIS_Hailfire_AA",
			"WPEC_CIS_Hailfire_Artillery"
		};
		weapons[]={};
	};
};
class CfgAmmo
{
	class 3AS_ammo_AMRAAM;
	class WPEC_CIS_Hailfire_AA_Ammo: 3AS_ammo_AMRAAM
	{
		initTime=0.40000001;
		proxyShape="\A3\Weapons_F\Ammo\Missile_AA_02_F.p3d";
		model="\A3\Weapons_F\Ammo\Missile_AA_02_fly_F.p3d";
		hit=150;
		effectsMissile="3AS_Rocket_effect_Purple_fly";
	};
	class M_PG_AT;
	class WPEC_CIS_Hailfire_AT_Ammo: M_PG_AT
	{
		initTime=0.40000001;
		hit=100;
		effectsMissile="3AS_Rocket_effect_Purple_fly";
	};
};
class CfgMagazines
{
	class 3AS_SAM_6Rnd_AMRAAM;
	class WPEC_CIS_Hailfire_AA_MAG: 3AS_SAM_6Rnd_AMRAAM
	{
		scope=2;
		displayName="AIM 120";
		count=6;
		initSpeed=30;
		ammo="WPEC_CIS_Hailfire_AA_Ammo";
	};
	class 24Rnd_PG_missiles;
	class WPEC_CIS_Hailfire_AT_MAG: 24Rnd_PG_missiles
	{
		scope=2;
		displayName="AT 120";
		count=24;
		initSpeed=30;
		ammo="WPEC_CIS_Hailfire_AA_Ammo";
	};
};
class CfgWeapons
{
	class 3AS_Hailfire_SAM_weapon;
	class WPEC_CIS_Hailfire_AA: 3AS_Hailfire_SAM_weapon
	{
		displayName="Hailfire SAM";
		reloadTime=10;
		magazineReloadTime=10;
		sounds[]=
		{
			"StandardSound"
		};
		class StandardSound
		{
			begin1[]=
			{
				"A3\Sounds_F\weapons\Rockets\missile_2",
				1.12202,
				1.3,
				1000
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			weaponSoundEffect="DefaultRifle";
		};
		magazines[]=
		{
			"WPEC_CIS_Hailfire_AA_MAG"
		};
		class GunParticles
		{
			class FirstEffect
			{
				effectName="MLRSFired";
				positionName="efecto_1_pos";
				directionName="efecto_1_dir";
			};
		};
	};
	class missiles_DAGR;
	class WPEC_CIS_Hailfire_AT: missiles_DAGR
	{
		displayName="Hailfire AT";
		reloadTime=10;
		magazineReloadTime=10;
		sounds[]=
		{
			"StandardSound"
		};
		class StandardSound
		{
			begin1[]=
			{
				"A3\Sounds_F\weapons\Rockets\missile_2",
				1.12202,
				1.3,
				1000
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			weaponSoundEffect="DefaultRifle";
		};
		magazines[]=
		{
			"WPEC_CIS_Hailfire_AT_MAG"
		};
		class GunParticles
		{
			class FirstEffect
			{
				effectName="MLRSFired";
				positionName="efecto_1_pos";
				directionName="efecto_1_dir";
			};
		};
	};
};
class CfgVehicles
{
	class LandVehicle;
	class Tank: LandVehicle
	{
		class NewTurret;
	};
	class Tank_F: Tank
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewGunner;
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
	};
	class 3AS_AAT_base_F: Tank_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
					};
				};
			};
		};
	};
	class MBT_01_mlrs_base_F;
	class 3AS_Hailfire_base: 3AS_AAT_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
					};
				};
			};
		};
	};
	class WPEC_CIS_Hailfire_Standard: 3AS_Hailfire_base
	{
		scope=2;
		side=0;
		scopeCurator=2;
		forceInGarage=1;
		faction="WPEC_CIS";
		editorSubcategory="WPEC_CIS_armoured";
		vehicleClass="WPEC_CIS_armoured";
		crew="WPEC_CIS_B1_Droid_Crew";
		displayname="Hailfire Droid Tank (AT)";
		hiddenSelectionsTextures[]=
		{
			"3AS\3AS_hailfire\data\headblue_co.paa",
			"3AS\3AS_hailfire\data\wheelsblue_co.paa"
		};
		class Turrets: Turrets
		{
			class Mainturret: MainTurret
			{
				weapons[]=
				{
					"WPEC_CIS_Hailfire_AT",
					"SmokeLauncher"
				};
				magazines[]=
				{
					"WPEC_CIS_Hailfire_AT_MAG",
					"WPEC_CIS_Hailfire_AT_MAG",
					"SmokeLauncherMag"
				};
			};
		};
	};
	class WPEC_CIS_Hailfire_AA: 3AS_Hailfire_base
	{
		scope=2;
		scopecurator=2;
		faction="WPEC_CIS";
		editorSubcategory="WPEC_CIS_armoured";
		vehicleClass="WPEC_CIS_armoured";
		side=0;
		displayName="Hailfire Droid Tank (AA)";
		crew="WPEC_CIS_B1_Droid_Crew";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"3AS\3AS_hailfire\data\headgrey_co.paa",
			"3AS\3AS_hailfire\data\wheelsgrey_co.paa"
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"WPEC_CIS_Hailfire_AA",
					"SmokeLauncher"
				};
				magazines[]=
				{
					"WPEC_CIS_Hailfire_AA_MAG",
					"WPEC_CIS_Hailfire_AA_MAG",
					"SmokeLauncherMag"
				};
			};
		};
	};
	class WPEC_CIS_Hailfire_Artillery: 3AS_Hailfire_base
	{
		scope=2;
		side=0;
		scopeCurator=2;
		forceInGarage=1;
		faction="WPEC_CIS";
		editorSubcategory="WPEC_CIS_armoured";
		vehicleClass="WPEC_CIS_armoured";
		crew="WPEC_CIS_B1_Droid_Crew";
		displayname="Hailfire Droid Tank (Artillery)";
		availableForSupportTypes[]=
		{
			"Artillery"
		};
		artilleryScanner=1;
		hiddenSelectionsTextures[]=
		{
			"3AS\3AS_hailfire\data\headred_co.paa",
			"3AS\3AS_hailfire\data\wheelsred_co.paa"
		};
		class Turrets: Turrets
		{
			class Mainturret: MainTurret
			{
				weapons[]=
				{
					"rockets_230mm_GAT",
					"SmokeLauncher"
				};
				magazines[]=
				{
					"12Rnd_230mm_rockets",
					"12Rnd_230mm_rockets",
					"SmokeLauncherMag"
				};
			};
		};
	};
};
class cfgMods
{
	author="ChaosViking";
	timepacked="1677279925";
};
