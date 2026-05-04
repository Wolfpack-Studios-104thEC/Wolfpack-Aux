class CfgPatches
{
	class WPEC_CIS_GV_Disepenser
	{
		author="WPEC Dev Bois";
		name="104th Wolfpack Dispenser";
		addonRootClass="NCA_vehicles";
		requiredVersion=2.2;
		requiredAddons[]=
		{
			"WPEC_CIS"
		};
		units[]=
		{
			"WPEC_CIS_GV_Droids_Dispenser",
            "WPEC_Modules",
			"WPEC_moduleDroidDispenser_zeus",
			"WPEC_moduleDroidDispenser_zeus_B1FireTeam",
			"WPEC_moduleDroidDispenser_zeus_B1Riflemen",
			"WPEC_moduleDroidDispenser_zeus_AssaultTeam",
			"WPEC_moduleDroidDispenser_zeus_B2_Assault",
            "WPEC_moduleDroidDispenser_zeus_BX_Assault",
            "WPEC_moduleDroidDispenser_zeus_BX_Melee_Squad"
		};
		weapons[]={};
		version=2.3;
		versionStr="2.3.0.1";
		versionAr[]={2,3,0,1};
	};
};
class CfgFactionClasses
{
	class NO_CATEGORY;
    class WPEC_Modules: NO_CATEGORY 
	{
        displayName = "[104th] Modules";
    };
};
class CfgVehicles
{
	class ls_droidDispenser;
	class WPEC_CIS_GV_Droids_Dispenser: ls_droidDispenser
	{
		scope=2;
		author="WPEC Dev Bois";
		displayName="[WPEC] Droids Upon thee";
		faction="WPEC_CIS";
		editorSubcategory="WPEC_CIS_Turrets";
		armor=250;
		armorStructural=10;
		explosionShielding=0.25;
        ls_dispenser_group="";
	};
    class ls_moduleDroidDispenser_zeus;
    class WPEC_moduleDroidDispenser_zeus: ls_moduleDroidDispenser_zeus 
	{
        author = "LS & WPEC DevBois";
        category = "WPEC_Modules";
        ls_dispenser_vehicle = "WPEC_CIS_GV_Droids_Dispenser";
		ammo = "ls_dispenser_ordnance";
		ls_dispenser_limit = 50;
    };
	class WPEC_moduleDroidDispenser_zeus_B1FireTeam: WPEC_moduleDroidDispenser_zeus
	{
		author = "LS & WPEC DevBois";
		displayName = "Droid Dispenser (B1 Firesquad)";
        category = "WPEC_Modules";
		ls_dispenser_group="WPEC_CIS>>B1Infantry>>WPEC_CIS_Firesquad";
	};
	class WPEC_moduleDroidDispenser_zeus_B1Riflemen: WPEC_moduleDroidDispenser_zeus
	{
		author = "LS & WPEC DevBois";
		displayName = "Droid Dispenser (B1 Riflemen)";
        category = "WPEC_Modules";
		ls_dispenser_group="WPEC_CIS>>B1Infantry>>WPEC_CIS_Riflemen";
	};
	class WPEC_moduleDroidDispenser_zeus_AssaultTeam: WPEC_moduleDroidDispenser_zeus
	{
		author = "LS & WPEC DevBois";
		displayName = "Droid Dispenser (B1 Assault Team)";
        category = "WPEC_Modules";
		ls_dispenser_group="WPEC_CIS>>B1Infantry>>WPEC_CIS_AssaultTeam";
	};
	class WPEC_moduleDroidDispenser_zeus_B2_Assault: WPEC_moduleDroidDispenser_zeus
	{
		author = "LS & WPEC DevBois";
		displayName = "Droid Dispenser (B2 Assault)";
        category = "WPEC_Modules";
		ls_dispenser_group="WPEC_CIS>>B2Infantry>>WPEC_CIS_B2_Assault";
	};
    class WPEC_moduleDroidDispenser_zeus_BX_Assault: WPEC_moduleDroidDispenser_zeus
	{
		author = "LS & WPEC DevBois";
		displayName = "Droid Dispenser (BX Assault)";
        category = "WPEC_Modules";
		ls_dispenser_group[] = 
        {
            "WPEC_CIS_BX_Lead",
            "WPEC_CIS_BX_Base",
            "WPEC_CIS_BX_Base",
            "WPEC_CIS_BX_Heavy",
            "WPEC_CIS_BX_AT",
            "WPEC_CIS_BX_Sniper",
            
        };
	};
    class WPEC_moduleDroidDispenser_zeus_BX_Melee_Squad: WPEC_moduleDroidDispenser_zeus
	{
		author = "LS & WPEC DevBois";
		displayName = "Droid Dispenser (BX Melee)";
        category = "WPEC_Modules";
		ls_dispenser_group="WPEC_CIS>>BXInfantry>>WPEC_CIS_BX_Melee_Squad";
	};
};
