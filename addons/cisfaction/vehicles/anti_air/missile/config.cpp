class CfgPatches
{
	class WPEC_Vehicles_Anti_Air_Condor
	{
		author="WPEC Dev";
		requiredaddons[]=
		{
			"A3_Armor_F_Beta",
			"A3_Weapons_F",
			"A3_Data_F"
		};
		requiredVersion=2.2;
		units[]=
		{
			"WPEC_CIS_AA_Condor",
			"WPEC_CIS_Static_AA"
		};
		weapons[]={};
	};
};
class CfgAmmo
{
	class OPTRE_M_ASGM4_AA;
	class WPEC_CIS_AA_Condor_Ammo: OPTRE_M_ASGM4_AA
	{
		soundFly[]=
		{
			"swlw_rework\sounds\launcher\E60R_fly.wss",
			6,
			1.5,
			1000
		};
		hit=250;
		effectsMissile="3AS_Rocket_effect_Purple_fly";
		aiAmmoUsageFlags="256";
	};
};
class CfgMagazines
{
	class OPTRE_6Rnd_ASGM7_rockets;
	class WPEC_CIS_AA_Condor_Mag_6: OPTRE_6Rnd_ASGM7_rockets
	{
		displayName="CIS AA";
		ammo="WPEC_CIS_AA_Condor_Ammo";
	};
};
class CfgWeapons
{
	class OPTRE_M95;
	class WPEC_CIS_AA_Condor_Launcher: OPTRE_M95
	{
		magazineWell[]={};
		magazines[]=
		{
			"WPEC_CIS_AA_Condor_Mag_6"
		};
	};
};
class CfgVehicles
{
	class StaticMGWeapon;
	class AAA_System_01_base_F: StaticMGWeapon
	{
		class Turrets;
	};
	class OPTRE_lance: AAA_System_01_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};
	class WPEC_CIS_AA_Condor: OPTRE_lance
	{
		displayName="Condor Missile System";
		scope=2;
		scopeCurator=2;
		side=0;
		faction="WPEC_CIS";
		editorSubcategory="WPEC_CIS_AA";
		hiddenSelectionsTextures[]=
		{
			"\OPTRE_Weapons_Turrets\lance\data\aalance_Black_co.paa",
			"\OPTRE_Weapons_Turrets\base\aabase_Black_co.paa",
			"",
			""
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"WPEC_CIS_AA_Condor_Launcher"
				};
				magazines[]=
				{
					"WPEC_CIS_AA_Condor_Mag_6",
					"WPEC_CIS_AA_Condor_Mag_6",
					"WPEC_CIS_AA_Condor_Mag_6",
					"WPEC_CIS_AA_Condor_Mag_6",
					"WPEC_CIS_AA_Condor_Mag_6"
				};
			};
		};
	};
	class OPTRE_Static_AA: AAA_System_01_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};
	class WPEC_CIS_Static_AA: OPTRE_Static_AA
	{
		displayName="M79 Missile Turret (AA)";
		scope=2;
		scopeCurator=2;
		side=0;
		faction="WPEC_CIS";
		editorSubcategory="WPEC_CIS_AA";
		crew="WPEC_CIS_B1_Droid_Crew";
		hiddenSelectionsTextures[]=
		{
			"\OPTRE_Vehicles\Warthog\data\night\m79_turret_night_co.paa",
			"\OPTRE_Weapons_Turrets\static\staticturret\data\staticturretbase_night_co.paa"
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"WPEC_CIS_AA_Condor_Launcher"
				};
				magazines[]=
				{
					"WPEC_CIS_AA_Condor_Mag_6",
					"WPEC_CIS_AA_Condor_Mag_6",
					"WPEC_CIS_AA_Condor_Mag_6"
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
