#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {
            "WPEC_LAAT_Cannon_Low",
            "WPEC_LAAT_Cannon_High",
            "WPEC_aircraft_green_CAP_plasma_weapon",
            "WPEC_coaxium_plasma_weapon"
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
	class B_20mm;
	class ShellBase;
    class BulletBase;
	class B_35mm_AA_Tracer_Red;
	class M_Zephyr;
    class ammo_Missile_AA_R73;
	class M_Jian_AT;
	class M_AT;
    class Bo_Mk82;
    class ammo_Bomb_SDB;

    #include "ammo.hpp"
};
class CfgMagazines
{
	class VehicleMagazine;
	class 4Rnd_AAA_missiles;
	class 4Rnd_LG_Jian;
	class 7Rnd_Rocket_04_AP_F;
	class 4Rnd_GAA_missiles;
	class 2Rnd_Mk82_MI08;
    class magazine_Bomb_SDB_x1;

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
    class Mk82BombLauncher;
    class weapon_SDBLauncher;

    #include "weapons.hpp"
};
