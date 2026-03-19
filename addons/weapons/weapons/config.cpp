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

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class CowsSlot;
class MuzzleSlot;
class PointerSlot;
class UnderBarrelSlot;
class 3AS_UnderBarrelSlot_DC15A;
class 3AS_MuzzleSlot_DC15S;
class 3AS_MuzzleSlot_DC15L;
class 3AS_UnderBarrelSlot_DC15L;
class 3AS_MuzzleSlot_VK38X;
class 3AS_UnderBarrelSlot_VK38X;

class CBA_DisposableLaunchers
{
	WPEC_3AS_RPS6_Unguided[]=
	{
		"WPEC_3AS_RPS6_F",
		"3AS_RPS6_Used"
	};
	WPEC_3AS_RPS6_Guided[]=
	{
		"WPEC_3AS_RPS6_G",
		"3AS_RPS6_Guided_Used"
	};
};

#include "CfgWeapons.hpp"
#include "CfgMagazines.hpp"
#include "CfgAmmo.hpp"
