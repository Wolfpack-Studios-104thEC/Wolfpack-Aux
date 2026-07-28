class cfgPatches
{
	class WPEC_CIS_Geonosian_Addon
	{
		name="WPEC_CIS_Geonosis";
		author="WPEC Dev";
		requiredVersion=2.2;
        addonRootClass="WPEC_CIS";
		requiredAddons[]=
		{
			"JLTS_Core",
			"ls_loadorder",
            "WPEC_CIS",
            "SFA_Core",
		};
		weapons[]=
		{
            "WPEC_Geonosian_Security_Uniform",
			"WPEC_Geonosian_Scientist_Uniform",
			"WPEC_Geonosian_SonicBlaster_Uniform",
			"WPEC_Geonosian_E5_Uniform",
		};
		units[]=
		{
            "WPEC_Geonosian_Security_Unit",
			"WPEC_Geonosian_Scientist_Unit",
			"WPEC_Geonosian_SonicBlaster_Unit",
			"WPEC_Geonosian_E5_Unit",
		};
	};
};
class CfgEditorSubcategories
{
	class WPEC_CIS_Geonosians
	{
		displayName= "Geonosians Mercs";
	};
};

class CfgWeapons
{
    class HeadgearItem;
	class H_HelmetB;
	class UniformItem;
	class InventoryItem_Base_F;
	class ItemCore;
	class VestItem;
	class V_PlateCarrier1_rgr;
	class NVGoggles;
	class U_I_CombatUniform;
    class SFA_Geo_Drone_Uniform;

    class WPEC_Geonosian_Security_Uniform: SFA_Geo_Drone_Uniform
    {
        scope=2;
		scopeArsenal=2;
		displayName="[WPEC] Geonosis Security Body Shell";
        class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="WPEC_Geonosian_Security_Unit";
			containerClass="Supply150";
			mass=40;
		};
    };
	class WPEC_Geonosian_Scientist_Uniform: SFA_Geo_Drone_Uniform
    {
        scope=2;
		scopeArsenal=2;
		displayName="[WPEC] Geonosis Scientist Body Shell";
        class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="WPEC_Geonosian_Scientist_Unit";
			containerClass="Supply150";
			mass=40;
		};
    };
	class WPEC_Geonosian_SonicBlaster_Uniform: SFA_Geo_Drone_Uniform
    {
        scope=2;
		scopeArsenal=2;
		displayName="[WPEC] Geonosis Special Body Shell";
        class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="WPEC_Geonosian_SonicBlaster_Unit";
			containerClass="Supply150";
			mass=40;
		};
    };
	class WPEC_Geonosian_E5_Uniform: SFA_Geo_Drone_Uniform
    {
        scope=2;
		scopeArsenal=2;
		displayName="[WPEC] Geonosis Special Body Shell";
        class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="WPEC_Geonosian_E5_Unit";
			containerClass="Supply150";
			mass=40;
		};
    };

};

class CfgVehicles
{
	class B_Soldier_base_f;
	class B_Soldier_f: B_Soldier_base_f
	{
		class HitPoints;
	};
	class B_Officer_f;
	class B_Kitbag_rgr;
    class SFA_Geonosian_Drone;
    class WPEC_Geonosian_Security_Unit: SFA_Geonosian_Drone
    {
        scope=2;
		side=0;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="[WPEC] Geonosian Security";
        faction="WPEC_CIS";
		editorCategory="WPEC_CIS_GEO";
		editorSubcategory="WPEC_CIS_Geonosians";
		uniformClass="WPEC_Geonosian_Security_Uniform";
		backpack="";
        identityTypes[]=
		{
			"LanguageENG_F",
			"SFAIdentityBase"
		};
		hiddenSelections[]=
		{
			"camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"SFA_Main\SFA_Equipment_Geo\data\Geonosian_CO.paa"
		};
		linkedItems[]=
		{
			
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"SFA_HP_Rifle",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"SFA_HP_Rifle",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"SFA_HP_mag",
			"SFA_HP_mag",
			"SFA_HP_mag",
			"SFA_HP_mag",
			"SFA_HP_mag",
			"SFA_HP_mag",
			"SFA_HP_mag",
			"SFA_HP_mag",
			"SmokeShell",
			"SmokeShellGreen"
		};
		respawnMagazines[]=
		{
			"SFA_HP_mag",
			"SFA_HP_mag",
			"SFA_HP_mag",
			"SFA_HP_mag",
			"SFA_HP_mag",
			"SFA_HP_mag",
			"SFA_HP_mag",
			"SFA_HP_mag",
			"SmokeShell",
			"SmokeShellGreen"
		};
		items[]=
		{
			"FirstAidKit"
		};
		respawnItems[]=
		{
			"FirstAidKit"
		};
    };
	class WPEC_Geonosian_Scientist_Unit: WPEC_Geonosian_Security_Unit
    {
		faction="WPEC_CIS";
		editorCategory="WPEC_CIS_GEO";
		editorSubcategory="WPEC_CIS_Geonosians";
		uniformClass="WPEC_Geonosian_Scientist_Uniform";
		displayName="[WPEC] Geonosian Scientist";
		linkedItems[]=
		{
			
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"SFA_Holepuncher_p",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"SFA_Holepuncher_p",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"SFA_HP_Pistol_mag",
			"SFA_HP_Pistol_mag",
			"SFA_HP_Pistol_mag",
			"SmokeShell",
			"SmokeShellGreen"
		};
		respawnMagazines[]=
		{
			"SFA_HP_Pistol_mag",
			"SFA_HP_Pistol_mag",
			"SFA_HP_Pistol_mag",
			"SmokeShell",
			"SmokeShellGreen"
		};
	};
	class WPEC_Geonosian_SonicBlaster_Unit: WPEC_Geonosian_Security_Unit
    {
		faction="WPEC_CIS";
		editorCategory="WPEC_CIS_GEO";
		editorSubcategory="WPEC_CIS_Geonosians";
		uniformClass="WPEC_Geonosian_SonicBlaster_Uniform";
		displayName="[WPEC] Geonosian Special Weapon";
		linkedItems[]=
		{
			
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"SFA_SonicBlaster",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"SFA_SonicBlaster",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"SFA_SonicBlaster_Mag",
			"SFA_SonicBlaster_Mag",
			"SFA_SonicBlaster_Mag",
			"SFA_SonicBlaster_Mag",
			"SmokeShell",
			"SmokeShellGreen"
		};
		respawnMagazines[]=
		{
			"SFA_SonicBlaster_Mag",
			"SFA_SonicBlaster_Mag",
			"SFA_SonicBlaster_Mag",
			"SFA_SonicBlaster_Mag",
			"SmokeShell",
			"SmokeShellGreen"
		};
	};
	class WPEC_Geonosian_E5_Unit: WPEC_Geonosian_Security_Unit
    {
		faction="WPEC_CIS";
		editorCategory="WPEC_CIS_GEO";
		editorSubcategory="WPEC_CIS_Geonosians";
		uniformClass="WPEC_Geonosian_E5_Uniform";
		displayName="[WPEC] Geonosian E5";
		linkedItems[]=
		{
			
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"WPEC_CIS_E5",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"WPEC_CIS_E5",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"SmokeShell",
			"SmokeShellGreen"
		};
		respawnMagazines[]=
		{
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"SmokeShell",
			"SmokeShellGreen"
		};
	};
};