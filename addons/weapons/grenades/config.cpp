#include "script_component.hpp"
#include "config_lists.hpp"

class CfgPatches {
    class SUBADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {
            WEAPONS_LIST
        };
        magazines[] = {

            MAGAZINE_LIST
        };
        ammo[] = {
            AMMO_LIST
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "A3_Weapons_F",
            QE_ADDON(weapons)
        };
        VERSION_CONFIG;
    };
};

#include "CfgAmmo.hpp"
#include "CfgMagazines.hpp"
#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"


