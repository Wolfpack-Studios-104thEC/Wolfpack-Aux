#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {
            "WPEC_LAAT_Cannon_Low",
            "WPEC_LAAT_Cannon_High",
            "WPEC_aircraft_green_CAP_plasma_weapon"
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {};
        author = AUTHOR;
        authors[] = {""};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};
class Mode_SemiAuto;
class Mode_FullAuto;
class Mode_Burst;
class SensorTemplateIR;
class SensorTemplateNV;
class SensorTemplateLaser;
class SensorTemplateActiveRadar;
class SensorTemplatePassiveRadar;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateDataLink;
class CfgAmmo
{
	class B_20mm_Tracer_Red;
	class 60Rnd_30mm_APFSDS_shells_Tracer_Red;
	class B_127x99_Ball_Tracer_Green;
	class B_20mm;
	class ShellBase;
	class SubmunitionCore;
    class BulletBase;
	class B_35mm_AA_Tracer_Red;
	class M_Zephyr;
    class ammo_Missile_AA_R73;
	class M_Jian_AT;
	class M_AT;

    #include "ammo.hpp"
};
class CfgMagazines
{
	class VehicleMagazine;
	class 4Rnd_AAA_missiles;
	class 4Rnd_LG_Jian;
	class 7Rnd_Rocket_04_AP_F;
	class 4Rnd_GAA_missiles;

    #include "magazines.hpp"
};
class CfgWeapons
{
	class CannonCore;
	class Cannon_30mm_Plane_CAS_02_F: CannonCore
	{
		class LowROF;
	};
	class Gatling_30mm_Plane_CAS_01_F: CannonCore
	{
		class LowROF;
	};
	class missiles_ASRAAM;
    class weapon_R73Launcher;
	class missiles_Jian;
	class Rocket_04_AP_Plane_CAS_01_F;

    #include "weapons.hpp"
};
