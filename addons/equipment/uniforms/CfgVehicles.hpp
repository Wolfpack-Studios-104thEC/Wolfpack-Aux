class CfgVehicles {
	class wps_uniforms_unit_P2;
    class wps_uniforms_unit_arc;
    class wps_uniforms_unit_command;

	class GUNIT(Phase_2_Unit_CT): wps_uniforms_unit_P2
	{
		scope = 2;
		scopeCurator = 2;
		uniformClass = QGUNIFORM(Phase_2_Uniform_CT);
		linkedItems[] = {QEGHELMET(helmets,phase2_CT)};
		respawnLinkedItems[] = {QEGHELMET(helmets,phase2_CT)};
		displayName = "[104th/WPS] Phase 2 Trooper";
		hiddenSelectionsTextures[] = {QPATHTOF(data\WPEC_Phase_2_CT_Upper_co.paa),QPATHTOF(data\WPEC_Phase_2_CT_Lower_co.paa),"\WPS\WPS_Uniforms\Phase2\data\Phase2ArmorUndersuit_co.paa"};
	};

    RANKUNITS(2,VCT);
    RANKUNITS(2,CSP1);
    RANKUNITS(2,CSP2);
    RANKUNITS(2,CSP1_Medic);
    RANKUNITS(2,CSP2_Medic);
	RANKUNITS(2,CP);
    RANKUNITS(2,CS);

	class GUNIT(Phase_2_Unit_Trooper_ARC): wps_uniforms_unit_arc
	{
		scope = 2;
		scopeCurator = 2;
		uniformClass = "WPEC_Phase_2_ARC_Uniform_Base";
		linkedItems[] = {QEGHELMET(helmets,phase2_CT)};
		respawnLinkedItems[] = {QEGHELMET(helmets,phase2_CT)};
		displayName = "[104th/WPS] Phase 2 ARC";
		hiddenSelectionsTextures[] = {QPATHTOF(data\WPEC_Phase_2_ARC_Upper_co.paa),QPATHTOF(data\WPEC_Phase_2_ARC_Lower_co.paa),"\WPS\WPS_Uniforms\Phase2\data\Phase2ArmorUndersuit_co.paa"};
	};
	class GUNIT(Phase_2_Unit_Trooper_Command): wps_uniforms_unit_command
	{
		scope = 2;
		scopeCurator = 2;
		uniformClass = "WPS_Phase_2_Command_Uniform_Base";
		linkedItems[] = {QEGHELMET(helmets,phase2_CT)};
		respawnLinkedItems[] = {QEGHELMET(helmets,phase2_CT)};
		displayName = "[104th/WPS] Phase 2 Command";
		hiddenSelectionsTextures[] = {QPATHTOF(data\WPEC_Phase_2_Command_Upper_co.paa),QPATHTOF(data\WPEC_Phase_2_Command_Lower_co.paa),"\WPS\WPS_Uniforms\Phase2\data\Phase2ArmorUndersuit_co.paa"};
	};

	//event stuff below

	class GUNIT(Phase_2_Unit_Trooper_Halloween): wps_uniforms_unit_P2
	{
		scope = 2;
		scopeCurator = 2;
		uniformClass = "WPEC_Phase_2_Uniform_Base_Halloween";
		linkedItems[] = {QEGHELMET(helmets,phase2_CT)};
		respawnLinkedItems[] = {QEGHELMET(helmets,phase2_CT)};
		displayName = "[104th/WPS] Phase 2 SNCO";
		hiddenSelectionsTextures[] = {QPATHTOF(data\WPEC_Phase_2_Halloween_Upper_co.paa),QPATHTOF(data\WPEC_Phase_2_Halloween_Lower_co.paa),"\WPS\WPS_Uniforms\Phase2\data\Phase2ArmorUndersuit_co.paa"};
	};
    #include "groundholders.hpp"
};
