
#define _ARMA_
#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"A3_Data_F_Enoch_Loadorder","CBA_MAIN"};
        author = AUTHOR;
        authors[] = {""};
        url = CSTRING(URL);
        VERSION_CONFIG;
    };
};
class CfgFactionClasses
{
	class WPEC_Category_EclipseCompany
	{
		displayName = "104th Eclipse Company";
		priority = 2;
		side = 1;
	};
};
class CfgEditorCategories
{
	class WPEC_categoryEmpty
	{
		displayName = "104th Auxiliary Assets";
	};
};
class CfgEditorSubcategories
{
	class WPEC_Subcategory_Trooper
	{
		displayName = "104th EC Trooper";
	};
	class WPEC_subcategoryAircraftRotary
	{
		displayName = "104th Aircraft (Rotary-Wing)";
	};
	class WPEC_Subcategory_Gonk
	{
		displayName = "Gonk Droids";
	};
	class WPEC_Subcategory_Aries
	{
		displayName = "104th Aries";
	};
};
class CfgFunctions
{
	class WPEC
	{
		tag = "WPEC";
		class ShieldGrenade104th
		{
			file = "WPEC\WPEC_Weapons\Functions";
			class setupEH104th
			{
				postInit = 1;
			};
			class onShieldGrenade104th{};
		};
	};
	class WPEC_Weapon
	{
		file = "\WPEC\WPEC_Weapons\Functions";
		class scripts
		{
			class onHit{};
			class onHitStun{};
			class onHitConcussion{};
		};
	};
};
class Extended_HitPart_EventHandlers
{
	class CAManBase
	{
		hitPart = "(_this select 0) call WPEC_Weapon_fnc_onHit";
	};
};
