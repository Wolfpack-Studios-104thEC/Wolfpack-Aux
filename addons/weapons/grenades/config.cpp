#include "script_component.hpp"

#include "config_lists.hpp"

class CfgPatches {
    class SUBADDON {
        addonRootClass = QADDON;
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
            QE_ADDON(weapons)
        };
        VERSION_CONFIG;
    };
};


#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
#include "CfgMagazines.hpp"
#include "CfgAmmo.hpp"
