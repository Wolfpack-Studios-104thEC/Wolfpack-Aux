#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        addonRootClass = QADDON;
        name = COMPONENT_NAME;
        units[] = {
            QGVAR(VWing)
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            QE_ADDON(vehicles)
        };
        VERSION_CONFIG;
    };
};

class CfgVehicles {
    class Plane_Fighter_03_base_F;
	class 3AS_Vwing_base: Plane_Fighter_03_base_F {
        class ACE_SelfActions;
    };
    class GVAR(VWing): 3AS_Vwing_base
    {
        scope = 2;
		scopecurator = 2;
		displayName="[104th] V-wing";
		author="Wolfpack Studios";
		side = 1;
        faction= QEGVAR(faction,eclipse);
		//vehicleClass = "GAR_LAATCatNSub";
		editorSubcategory=QEGVAR(edsubcat,fixedwing);
        //editorPreview = "\z\NCA\addons\vehicles\aircraft\data\ui\editorPreviews\NCA_VWing.jpg";
		crew = "NCA_cloneArmor_unit_tauntaunEnlisted";
		cost = 1000000;
		threat[] = {0.2,0.7,0.92};
		insideSoundCoef = 0.2;
        HeadAimDown = -2.995;
		acceleration = 1600;
		maxSpeed = 1050;
		maxOmega = 7500;
		stallSpeed = 30;
		airBrakeFrictionCoef = 100;
		draconicForceXCoef = 6.5;
		draconicForceYCoef = 6.5;
		draconicForceZCoef = 6.5;
		elevatorSensitivity = 1.6;
		elevatorControlsSensitivityCoef = 1.4;
		aileronSensitivity = 1;
		aileronControlsSensitivityCoef = 2.5;
		rudderControlsSensitivityCoef = 2;
		rudderInfluence = 0.96599996;
		elevatorCoef[] = {0.40000001,0.60000002,0.76000005,0.61999998,0.69000003,0.56,0.63000003,0.6,0.64999999,0.60000001,0.34999999,0.28,0.27000001,0.25999999,0.25,0.25};
		aileronCoef[] = {0.60000002,0.89999998,0.94999999,1,1.05,1,1,0.94999999,0.94999999,0.92500001,0.89999998,0.85000002,0.82499999,0.80000001,0.80000001,0.75};
		rudderCoef[] = {0.5,1.8,2.5999999,2.75,2.8,2.8499999,2.9000001,2.95,2.98,3.01,2.7,1.1,0.89999998,0.69999999,0.5,0.30000001};
		thrustCoef[] = {5,5.5,6,5.1,4.9,4.8099999,3.89,3.95,2,2.1,2,1.4,1.2,1,0.80000001,0.2};
		airFriction0[] = {75,50,12};
		airFriction1[] = {75,50,12};
		airFriction2[] = {75,50,12};
		VTOLPitchInfluence = 4;
		VTOLRollInfluence = 5;
		VTOLYawInfluence = 12;
		gearsUpFrictionCoef = 0.60000002;
        weapons[] =
		{
			"Laserdesignator_pilotCamera",
			"WPEC_aircraft_green_CAP_plasma_weapon",
            "NCA_Talon_A2A_MissileSystem",
			"CMFlareLauncher"
		};
		magazines[] =
		{
			"Laserbatteries",
			"WPEC_aircraft_green_CAP_plasma_mag",
			"WPEC_aircraft_green_CAP_plasma_mag",
			"WPEC_aircraft_green_CAP_plasma_mag",
			"WPEC_aircraft_green_CAP_plasma_mag",
			"WPEC_Talons_A2A_missile_mag",
			"WPEC_Talons_A2A_missile_mag",
            "WPEC_Talons_A2A_missile_mag",
			"120Rnd_CMFlare_Chaff_Magazine",
			"120Rnd_CMFlare_Chaff_Magazine",
			"120Rnd_CMFlare_Chaff_Magazine",
			"120Rnd_CMFlare_Chaff_Magazine",
			"120Rnd_CMFlare_Chaff_Magazine"
		};
        soundSetSonicBoom[]=
		{
			"Plane_Fighter_SonicBoom_SoundSet"
		};

        // textureList[] = {};
        // class TextureSources {};

		class VehicleTransport
		{
			class Cargo
			{
				parachuteClass ="";
				parachuteHeightLimit = 8000;
				canBeTransported = 1;
				//dimensions[] = {{ 0,0,0 }, { 3,2,1.5 }};
				// dimensions[] = { { 0,0,0 }, { 3,2,1.5 } };
				rotation = -90;
			};
		};
    };
};
