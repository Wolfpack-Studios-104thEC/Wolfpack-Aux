#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        addonRootClass = QADDON;
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            QE_ADDON(vehicles)
        };
		skipWhenMissingDependencies = 1;
        VERSION_CONFIG;
    };
};

class SensorTemplatePassiveRadar;
class SensorTemplateAntiRadiation;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class SensorTemplateDataLink;
class DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class VehicleSystemsTemplateLeftPilot: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightPilot: DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class DefaultEventhandlers;
class CfgVehicles
{
	class LandVehicle;
	class Tank: LandVehicle
	{
		class NewTurret;
		class Sounds;
		class HitPoints;
	};
	class Tank_F: Tank
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
		class CargoTurret;
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitEngine;
			class HitLTrack;
			class HitRTrack;
			class HitFuel;
		};
	};
	class 3as_saber_01_Base: Tank_F
	{
		class ACE_SelfActions;
		class Turrets: Turrets
		{
			class MainTurret_bottom: NewTurret{};
			class Mainturret_top: MainTurret_bottom{};
			class CargoTurret_01: CargoTurret{};
			class CargoTurret_02: CargoTurret_01{};
			class CargoTurret_03: CargoTurret_02{};
			class CargoTurret_04: CargoTurret_01{};
		};
		class HitPoints: HitPoints
		{
			class HitHull: HitHull{};
			class HitEngine: HitEngine{};
			class HitLTrack: HitLTrack{};
			class HitRTrack: HitRTrack{};
			class HitFuel: HitFuel{};
		};
	};
	class 3as_saber_Base: 3as_saber_01_Base
	{
		class Turrets: Turrets
		{
			class MainTurret_bottom: MainTurret_bottom{};
			class Mainturret_top: Mainturret_top{};
			class CargoTurret_01: CargoTurret_01{};
			class CargoTurret_02: CargoTurret_02{};
			class CargoTurret_03: CargoTurret_03{};
			class CargoTurret_04: CargoTurret_04{};
		};
		class HitPoints: HitPoints
		{
			class HitHull: HitHull{};
			class HitEngine: HitEngine{};
			class HitLTrack: HitLTrack{};
			class HitRTrack: HitRTrack{};
			class HitFuel: HitFuel{};
		};
	};
	class 3as_saber_m1: 3as_saber_Base
	{
		class Turrets: Turrets
		{
			class MainTurret_bottom: MainTurret_bottom{};
			class Mainturret_top: Mainturret_top{};
			class CargoTurret_01: CargoTurret_01{};
			class CargoTurret_02: CargoTurret_02{};
			class CargoTurret_03: CargoTurret_03{};
			class CargoTurret_04: CargoTurret_04{};
		};
		class HitPoints: HitPoints
		{
			class HitHull: HitHull{};
			class HitEngine: HitEngine{};
			class HitLTrack: HitLTrack{};
			class HitRTrack: HitRTrack{};
			class HitFuel: HitFuel{};
		};
	};
	class 3as_saber_super_base: 3as_saber_01_Base
	{
		class Turrets: Turrets
		{
			class Mainturret_super: MainTurret_bottom{};
			class CargoTurret_01: CargoTurret_01{};
			class CargoTurret_02: CargoTurret_02{};
			class CargoTurret_03: CargoTurret_03{};
			class CargoTurret_04: CargoTurret_04{};
		};
	};
	class 3as_saber_super: 3as_saber_super_base
	{
		class Turrets: Turrets
		{
			class Mainturret_super: Mainturret_super{};
			class CargoTurret_01: CargoTurret_01{};
			class CargoTurret_02: CargoTurret_02{};
			class CargoTurret_03: CargoTurret_03{};
			class CargoTurret_04: CargoTurret_04{};
		};
	};
	class WPEC_Saber: 3as_saber_m1
	{
		scope = 2;
		displayname = "[104th] TX-130";
		faction="WPEC_Category_EclipseCompany";
		vehicleClass="WPEC_subcategory_Aries";
		editorSubcategory="WPEC_subcategory_Aries";
		hiddenSelections[] = {"Camo1","Camo2"};
		editorPreview = "\3AS\3AS_Saber\images\3AS_Saber_M1.jpg";
		hiddenSelectionsTextures[] = {"WPEC\WPEC_Vehicles\WPEC_Saber\data\WPEC_Saber_hull_co.paa","3AS\3AS_Saber\data\Saber_weapons_co.paa"};
		accuracy = 1000;
	};
	class WPEC_Saber_AshHound: 3as_saber_m1
	{
		scope = 2;
		displayname = "[104th] TX-130 (Ash Hound)";
		faction="WPEC_Category_EclipseCompany";
		vehicleClass="WPEC_subcategory_Aries";
		editorSubcategory="WPEC_subcategory_Aries";
		hiddenSelections[] = {"Camo1","Camo2"};
		editorPreview = "\3AS\3AS_Saber\images\3AS_Saber_M1.jpg";
		hiddenSelectionsTextures[] = {"WPEC\WPEC_Vehicles\WPEC_Saber\data\WPEC_Saber_Hull_AshHound_co.paa","3AS\3AS_Saber\data\Saber_weapons_co.paa"};
		accuracy = 1000;
	};
	class WPEC_Saber_BloodHowl: 3as_saber_m1
	{
		scope = 2;
		displayname = "[104th] TX-130 (Blood Howl)";
		faction="WPEC_Category_EclipseCompany";
		vehicleClass="WPEC_subcategory_Aries";
		editorSubcategory="WPEC_subcategory_Aries";
		hiddenSelections[] = {"Camo1","Camo2"};
		editorPreview = "\3AS\3AS_Saber\images\3AS_Saber_M1.jpg";
		hiddenSelectionsTextures[] = {"WPEC\WPEC_Vehicles\WPEC_Saber\data\WPEC_Saber_Hull_BloodHowl_co.paa","3AS\3AS_Saber\data\Saber_weapons_co.paa"};
		accuracy = 1000;
	};
	class WPEC_Super_Saber: 3as_saber_super
	{
		scope = 2;
		displayname = "[104th] TX-130 Super";
		faction="WPEC_Category_EclipseCompany";
		vehicleClass="WPEC_subcategory_Aries";
		editorSubcategory="WPEC_subcategory_Aries";
		hiddenSelections[] = {"Camo1","Camo2"};
		editorPreview = "\3AS\3AS_Saber\images\3AS_Saber_Super.jpg";
		hiddenSelectionsTextures[] = {"WPEC\WPEC_Vehicles\WPEC_Saber\data\WPEC_Saber_Hull_co.paa","3AS\3AS_Saber\data\Saber_weapons_co.paa"};
		accuracy = 1000;
	};
	class WPEC_Super_Saber_AshHound: 3as_saber_super
	{
		scope = 2;
		displayname = "[104th] TX-130 Super (Ash Hound)";
		faction="WPEC_Category_EclipseCompany";
		vehicleClass="WPEC_subcategory_Aries";
		editorSubcategory="WPEC_subcategory_Aries";
		hiddenSelections[] = {"Camo1","Camo2"};
		editorPreview = "\3AS\3AS_Saber\images\3AS_Saber_Super.jpg";
		hiddenSelectionsTextures[] = {"WPEC\WPEC_Vehicles\WPEC_Saber\data\WPEC_Saber_Hull_AshHound_co.paa","3AS\3AS_Saber\data\Saber_weapons_co.paa"};
		accuracy = 1000;
	};
	class WPEC_Super_Saber_BloodHowl: 3as_saber_super
	{
		scope = 2;
		displayname = "[104th] TX-130 Super (Blood Howl)";
		faction="WPEC_Category_EclipseCompany";
		vehicleClass="WPEC_subcategory_Aries";
		editorSubcategory="WPEC_subcategory_Aries";
		hiddenSelections[] = {"Camo1","Camo2"};
		editorPreview = "\3AS\3AS_Saber\images\3AS_Saber_Super.jpg";
		hiddenSelectionsTextures[] = {"WPEC\WPEC_Vehicles\WPEC_Saber\data\WPEC_Saber_Hull_BloodHowl_co.paa","3AS\3AS_Saber\data\Saber_weapons_co.paa"};
		accuracy = 1000;
	};
};