class CfgVehicles {
    class wps_uniforms_unit_P2;
    class wps_uniforms_unit_arc;
    class wps_uniforms_unit_command;
    class GUNIT(Phase_2_Unit_Trooper_Sasquatch): wps_uniforms_unit_P2
    {
        scope = 2;
        scopeCurator = 2;
        uniformClass = "Phase_2_Uniform_Custom_Sasquatch";
        linkedItems[] = {QEGHELMET(helmets,Sasquatch)};
        respawnLinkedItems[] = {QEGHELMET(helmets,Sasquatch)};
        displayName = "[104th/WPS Custom] Sasquatch";
        hiddenSelectionsTextures[] = {QPATHTOF(data\Sasquatch_Upper.paa),QPATHTOF(data\Sasquatch_Lower.paa),"\WPS\WPS_Uniforms\Phase2\data\Phase2ArmorUndersuit_co.paa"};
    };
    #include "groundholders.hpp"
    #include "groundholders.hpp"
};
