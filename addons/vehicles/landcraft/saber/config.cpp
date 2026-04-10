#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        addonRootClass = QADDON;
        name = COMPONENT_NAME;
        units[] = {
            QGVAR(Saber),
            QGVAR(Saber_AshHound),
            QGVAR(Saber_BloodHowl),
            QGVAR(Super_Saber),
            QGVAR(Super_Saber_AshHound),
            QGVAR(Super_Saber_BloodHowl),
			"WPEC_RepairCrate",
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            QE_ADDON(vehicles)
        };
		skipWhenMissingDependencies = 1;
        VERSION_CONFIG;
    };
};

class CfgVehicles
{
	class 3as_saber_m1;
	class 3as_saber_super;
	class GVAR(Saber): 3as_saber_m1
	{
		scope = 2;
		displayname = "[104th] TX-130";
        faction= QEGVAR(faction,eclipse);
		//="WPEC_subcategory_Aries";
		editorSubcategory=QEGVAR(edsubcat,aries);
		hiddenSelections[] = {"Camo1","Camo2"};
		editorPreview = "\3AS\3AS_Saber\images\3AS_Saber_M1.jpg";
		hiddenSelectionsTextures[] = {"\Z\wpec\addons\vehicles\landcraft\saber\data\WPEC_Saber_hull_co.paa","3AS\3AS_Saber\data\Saber_weapons_co.paa"};
		accuracy = 1000;
	};
	class GVAR(Saber_AshHound): GVAR(Saber)
	{
		scope = 2;
		displayname = "[104th] TX-130 (Ash Hound)";
		hiddenSelectionsTextures[] = {"\Z\wpec\addons\vehicles\landcraft\saber\data\WPEC_Saber_Hull_AshHound_co.paa","3AS\3AS_Saber\data\Saber_weapons_co.paa"};
	};
	class GVAR(Saber_BloodHowl): GVAR(Saber)
	{
		scope = 2;
		displayname = "[104th] TX-130 (Blood Howl)";
		hiddenSelectionsTextures[] = {"\Z\wpec\addons\vehicles\landcraft\saber\data\WPEC_Saber_Hull_BloodHowl_co.paa","3AS\3AS_Saber\data\Saber_weapons_co.paa"};
	};
	class GVAR(Super_Saber): 3as_saber_super
	{
		scope = 2;
		displayname = "[104th] TX-130 Super";
        faction= QEGVAR(faction,eclipse);
		//vehicleClass="WPEC_subcategory_Aries";
		editorSubcategory=QEGVAR(edsubcat,aries);
		hiddenSelections[] = {"Camo1","Camo2"};
		editorPreview = "\3AS\3AS_Saber\images\3AS_Saber_Super.jpg";
		hiddenSelectionsTextures[] = {"\Z\wpec\addons\vehicles\landcraft\saber\data\WPEC_Saber_hull_co.paa","3AS\3AS_Saber\data\Saber_weapons_co.paa"};
		accuracy = 1000;
	};
	class GVAR(Super_Saber_AshHound): GVAR(Super_Saber)
	{
		scope = 2;
		displayname = "[104th] TX-130 Super (Ash Hound)";
		hiddenSelectionsTextures[] = {"\Z\wpec\addons\vehicles\landcraft\saber\data\WPEC_Saber_Hull_AshHound_co.paa","3AS\3AS_Saber\data\Saber_weapons_co.paa"};
	};
	class GVAR(Super_Saber_BloodHowl): GVAR(Super_Saber)
	{
		scope = 2;
		displayname = "[104th] TX-130 Super (Blood Howl)";
		hiddenSelectionsTextures[] = {"\Z\wpec\addons\vehicles\landcraft\saber\data\WPEC_Saber_Hull_BloodHowl_co.paa","3AS\3AS_Saber\data\Saber_weapons_co.paa"};
	};
	class JLTS_Ammobox_weapons_GAR;
	class WPEC_RepairCrate: JLTS_Ammobox_weapons_GAR
	{
		ace_refuel_fuelCargo=75000;
		ace_repair_canRepair=1;
		ACE_maxWeightCarry=10000;
		ACE_maxWeightDrag=10000;
		author="104th Eclipse";
		class SimpleObject
		{
			eden=1;
			animate[]=
			{
				
				{
					"ammo_hide",
					0
				},
				
				{
					"ammoord_hide",
					1
				},
				
				{
					"grenades_hide",
					1
				},
				
				{
					"support_hide",
					1
				}
			};
			hide[]={};
			verticalOffset=0.28400001;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\MRC\JLTS\weapons\Crates\data\ui\editorPreviews\JLTS_Ammobox_weapons_GAR.jpg";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="Field Repair Crate";
		icon="iconCrateAmmo";
		editorCategory=QEGVAR(edcat,aux);
		editorSubcategory=QEGVAR(edsubcat,crate);
		maximumLoad=50000;
		model="\MRC\JLTS\weapons\Crates\crate_1.p3d";
		class TransportWeapons
		{
		};
		class TransportMagazines
		{
		};
		class TransportBackpacks
		{
		};
		class TransportItems
		{
			class _xx_ToolKit
			{
				name="ToolKit";
				count=2;
			};
		};
		class AnimationSources
		{
			class Ammo_source
			{
				source="user";
				animPeriod=1;
				initPhase=1;
			};
			class AmmoOrd_source
			{
				source="user";
				animPeriod=1;
				initPhase=1;
			};
			class Grenades_source
			{
				source="user";
				animPeriod=1;
				initPhase=1;
			};
			class Support_source
			{
				source="user";
				animPeriod=1;
				initPhase=1;
			};
		};
	};
};
