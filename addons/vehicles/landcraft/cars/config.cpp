#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        addonRootClass = QADDON;
        name = COMPONENT_NAME;
        units[] = {
            "WPEC_BARC",
            "WPEC_BARCSIDECAR",
			"WPEC_GV_DEWBACK"
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
    class 3AS_Barc;
    class 3AS_BarcSideCar;
    class WPEC_BARC: 3AS_Barc
	{
		scope=2;
		scopecurator=2;
		author="WPEC Dev Team";
		side=1;
		canFloat=1;
		enableGPS=1;
		faction= QEGVAR(faction,eclipse);
        editorSubcategory=QEGVAR(edsubcat,groundvics);
		crew="3AS_Clone_ARF";
		crewCrashProtection=0.1;
		ace_cargo_hasCargo=1;
		displayName="[WPEC] BARC Speeder";
		ace_cargo_canLoad = 1;
		ace_cargo_space=10;
		ace_cargo_size=1;
		maxSpeed = 300;
		enginePower = 5000;
		peakTorque = 5200;
		armor = 1000;
	};
	class WPEC_BARCSIDECAR: 3AS_BarcSideCar
	{
		scope=2;
		scopecurator=2;
		author="WPEC Dev Team";
		side=1;
		canFloat=1;
		enableGPS=1;
		faction= QEGVAR(faction,eclipse);
        editorSubcategory=QEGVAR(edsubcat,groundvics);
		crew="3AS_Clone_ARF";
		crewCrashProtection=0.1;
		ace_cargo_hasCargo=1;
		displayName="[WPEC] BARC Speeder(Sidecar)";
		ace_cargo_canLoad = 1;
		ace_cargo_space=10;
		ace_cargo_size=1;
		maxSpeed = 300;
		enginePower = 5000;
		peakTorque = 5200;
		armor = 1000;
	};
	class MRAP_03_base_F;
	class WPEC_GV_DEWBACK: MRAP_03_base_F
	{
		scope=2;
		scopeCurator=2;
		author="104th Aux Dev bois";
		displayName="[WPEC] Dewback";
		faction= QEGVAR(faction,eclipse);
        editorSubcategory=QEGVAR(edsubcat,groundvics);
		crew="3AS_Clone_ARF";
		side=1;
		armor=250;
		ace_cargo_canLoad = 1;
		ace_cargo_space=10;
		ace_cargo_size=1;
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\a3\soft_f_beta\MRAP_03\Data\mrap_03_ext_co.paa",
		};
		class TransportItems
		{
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportBackpacks
		{
		};
	};
	class Wheeled_APC_F;
	class APC_Wheeled_01_base_F: Wheeled_APC_F
	{
		class Turrets;
	};
	class 3AS_ITT_Base: APC_Wheeled_01_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret;
			class CommanderTurret;
			class CargoTurret_01;
			class CargoTurret_02;
			class CargoTurret_03;
			class CargoTurret_04;
			class CargoTurret_05;
			class CargoTurret_06;
			class CargoTurret_07;
			class CargoTurret_08;
			class CargoTurret_09;
			class CargoTurret_10;
			class CargoTurret_11;
			class CargoTurret_12;
			class CargoTurret_13;
			class CargoTurret_14;
		};
	};
	class WPEC_GV_ITT: 3AS_ITT_Base
	{
		scope=2;
		scopeCurator=2;
		author="104th Wolfpack Dev bois";
		displayName="[WPEC] ITT";
		side=1;
		faction= QEGVAR(faction,eclipse);
        editorSubcategory=QEGVAR(edsubcat,groundvics);
		crew="3AS_Clone_ARF";
		ace_cargo_canLoad = 1;
		ace_cargo_space=10;
		ace_cargo_size=1;
	};
};
