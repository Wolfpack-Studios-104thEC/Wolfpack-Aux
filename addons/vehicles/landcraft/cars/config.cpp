#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        addonRootClass = QADDON;
        name = COMPONENT_NAME;
        units[] = {
            QGVAR(Barc),
            QGVAR(Barc_Sidecar),
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
};