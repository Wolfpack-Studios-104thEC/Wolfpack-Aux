#include "script_component.hpp"


class CfgPatches {
    class SUBADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {
        };
        magazines[] = {
            "WPEC_3AS_ThermalDetonator_Mag",
            "WPEC_3AS_BaridiumCore_Mag",
            "WPEC_3AS_SmokeGrenade_White",
            "WPEC_3AS_SmokeGrenade_Red",
            "WPEC_3AS_SmokeGrenade_Orange",
            "WPEC_3AS_SmokeGrenade_Yellow",
            "WPEC_3AS_SmokeGrenade_Blue",
            "WPEC_3AS_SmokeGrenade_Green",
            "WPEC_3AS_SmokeGrenade_Purple",
            "WPEC_ThermalDisruptor",
            "WPEC_ThermalDisruptorImpact",
            "WPEC_PersonalShield_Republic_Mag",
            "WPEC_PersonalShieldFull_Republic_Mag",
            "WPEC_SquadShield_Republic_Mag"
        };
        ammo[] = {
            "WPEC_SmokeShellBase",
            "WPEC_SmokeShellRed",
            "WPEC_SmokeShellOrange",
            "WPEC_SmokeShellYellow",
            "WPEC_SmokeShellBlue",
            "WPEC_SmokeShellGreen",
            "WPEC_SmokeShellPurple",
            "WPEC_ThermalDisruptor_Ammo",
            "WPEC_ThermalDisruptorImpact_Ammo",
            "WPEC_PersonalShield_Republic_Ammo",
            "WPEC_PersonalShieldFull_Republic_Ammo",
            "WPEC_SquadShield_Republic_Ammo",
            "WPEC_3AS_DCMid_OCPlasmaAmmo"
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            QE_ADDON(weapons)
        };
        VERSION_CONFIG;
    };
};

#include "CfgAmmo.hpp"
#include "CfgMagazines.hpp"
#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"


