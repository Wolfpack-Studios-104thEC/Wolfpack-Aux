#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        addonRootClass = QADDON;
        name = COMPONENT_NAME;
        units[] = {
            "WPEC_AntiTankTurret"
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
    class Land;
	class LandVehicle: Land
	{
		class ViewPilot;
		class NewTurret;
	};
	class StaticWeapon: LandVehicle
	{
		class AnimationSources;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewOptics;
				class HitPoints;
			};
		};
	};
	class OPTRE_Static_FG75: StaticWeapon
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics;
			};
		};
	};
	class WPEC_AntiTankTurret: OPTRE_Static_FG75
	{
		scope=2;
		scopeCurator=2;
		side=1;
		faction= QEGVAR(faction,eclipse);
        editorSubcategory=QEGVAR(edsubcat,groundvics);
		crew="3AS_Clone_ARF";
		displayName="[104th] The Anti Tank";

		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"3AS_Sabre_Cannons_Super"
				};
				magazines[]=
				{
					"3AS_25rnd_Sabre_Super_Mag",
					"3AS_25rnd_Sabre_Super_Mag",
					"3AS_25rnd_Sabre_Super_Mag"
				};
				viewGunnerInExternal=1;
				gunnerAction="Mortar_Gunner";
				gunnerInAction="Mortar_Gunner";
				forceHideGunner=1;
				ejectDeadGunner=1;
				minElev=-10;
				maxElev=20;
				minTurn=-20;
				maxTurn=20;
				gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_02_F";
				class ViewOptics: ViewOptics
				{
					initAngleX=0;
					minAngleX=-45;
					maxAngleX=75;
					initAngleY=0;
					minAngleY=-120;
					maxAngleY=120;
					initFov=0.40000001;
					minFov=0.041669998;
					maxFov=0.40000001;
					thermalMode[]={0,1};
					visionMode[]=
					{
						"Normal",
						"NVG"
					};
				};
				class ViewGunner
				{
					initAngleX=0;
					minAngleX=-45;
					maxAngleX=75;
					initAngleY=0;
					minAngleY=-120;
					maxAngleY=120;
					initFov=0.40000001;
					minFov=0.40000001;
					maxFov=0.40000001;
				};
			};
		};
	};
};
