class CfgPatches
{
	class WPEC_CIS_EWEB
	{
		author="WPEC Dev";
		requiredAddons[]=
		{
			"A3_Weapons_F",
			"A3_Anims_F_Config_Sdr",
			"A3_Data_F",
			"A3_Ui_F",
			"3AS_VehicleWeapons"
		};
		units[]=
		{
			"WPEC_CIS_E_Web_Noshield",
			"WPEC_CIS_E_Web_Shield"
		};
		weapons[]=
		{
			"WPEC_CIS_E5c_E_Web"
		};
	};
};
class CfgMagazines
{
	class WPEC_CIS_E5C_Auto_mag;
	class WPEC_CIS_E_Web_Mag_x2000: WPEC_CIS_E5C_Auto_mag
	{
		count=2000;
		displayName="[WPEC-CIS] E-Web Mag, 2000rnd";
	};
};
class CfgWeapons
{
	class WPEC_CIS_E5C_Auto;
	class WPEC_CIS_E5c_E_Web: WPEC_CIS_E5C_Auto
	{
		scopeArsenal=0;
		model="";
		magazineWell[]={};
		magazines[]=
		{
			"WPEC_CIS_E_Web_Mag_x2000"
		};
	};
};
class CfgVehicles
{
	class StaticMGWeapon;
	class 3AS_HeavyRepeater_Base: StaticMGWeapon
	{
		class Turrets;
	};
	class 3AS_HeavyRepeater_Unarmoured: 3AS_HeavyRepeater_Base
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};
	class 3AS_HeavyRepeater_Armoured: 3AS_HeavyRepeater_Base
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};
	class WPEC_CIS_E_Web_Noshield: 3AS_HeavyRepeater_Unarmoured
	{
		displayName="E-Web (No Shield)";
		scope=2;
		scopeCurator=2;
		side=0;
		faction="WPEC_CIS";
		editorSubcategory="WPEC_CIS_Turrets";
		crew="WPEC_CIS_Base_B1_Droid";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"WPEC_CIS_E5c_E_Web"
				};
				magazines[]=
				{
					"WPEC_CIS_E_Web_Mag_x2000",
					"WPEC_CIS_E_Web_Mag_x2000",
					"WPEC_CIS_E_Web_Mag_x2000",
					"WPEC_CIS_E_Web_Mag_x2000",
					"WPEC_CIS_E_Web_Mag_x2000"
				};
			};
		};
		class AnimationSources
		{
			class muzzle_source
			{
				source="reload";
				weapon="WPEC_CIS_E5c_E_Web";
			};
			class muzzle_source_rot
			{
				source="ammorandom";
				weapon="WPEC_CIS_E5c_E_Web";
			};
			class minigun
			{
				source="revolving";
				weapon="WPEC_CIS_E5c_E_Web";
			};
		};
	};
	class WPEC_CIS_E_Web_Shield: 3AS_HeavyRepeater_Armoured
	{
		displayName="E-Web (Shielded)";
		scope=2;
		scopeCurator=2;
		side=0;
		faction="WPEC_CIS";
		editorSubcategory="WPEC_CIS_Turrets";
		crew="WPEC_CIS_Base_B1_Droid";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"WPEC_CIS_E5c_E_Web"
				};
				magazines[]=
				{
					"WPEC_CIS_E_Web_Mag_x2000",
					"WPEC_CIS_E_Web_Mag_x2000",
					"WPEC_CIS_E_Web_Mag_x2000",
					"WPEC_CIS_E_Web_Mag_x2000",
					"WPEC_CIS_E_Web_Mag_x2000"
				};
			};
		};
		class AnimationSources
		{
			class muzzle_source
			{
				source="reload";
				weapon="WPEC_CIS_E5c_E_Web";
			};
			class muzzle_source_rot
			{
				source="ammorandom";
				weapon="WPEC_CIS_E5c_E_Web";
			};
			class minigun
			{
				source="revolving";
				weapon="WPEC_CIS_E5c_E_Web";
			};
		};
	};
};
class cfgMods
{
	author="ChaosViking";
	timepacked="1677279925";
};
