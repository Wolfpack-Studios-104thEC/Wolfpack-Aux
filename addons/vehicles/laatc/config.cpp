#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        addonRootClass = QADDON;
        name = COMPONENT_NAME;
        units[] = {
            QGVAR(LAATC)
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            QE_ADDON(vehicles)
        };
        VERSION_CONFIG;
    };
};

class WPEC_impulsor_base;

class CfgVehicles {
    class 3as_laat_base;
    class 3AS_LAAT_Cargo_Base: 3as_laat_base {
        class UserActions;
        class Components;
    };
    class 3as_LAATC: 3AS_LAAT_Cargo_Base {
    };
    class GVAR(LAATC): 3as_LAATC
	{
		author="Wolfpack Studios";
		displayName = "[104th] LAAT/C";
		scope = 2;
		scopeCurator = 2;

        //editorPreview = "\z\NCA\addons\vehicles\aircraft\data\ui\editorPreviews\NCA_LAATC.jpg";

        tas_can_impulse = 0;
        class ls_impulsor: WPEC_impulsor_base {};
		epeImpulseDamageCoef = 0;

		side = 1;
		//crew = "NCA_cloneArmor_unit_tauntaunEnlisted";
        faction= QEGVAR(faction,eclipse);
		//vehicleClass = "GAR_LAATCatNSub";
		editorSubcategory = QEGVAR(edsubcat,heli);//Vehicle Threat Level to AI:
		threat[] = {0.750001,0.8500001, 0.8500001}; //Threat to Soft Targets (Soldiers), Armor, and Air assets in that order.
		cost = 1000; //Higher cost means AI are more likely to target it.
		camouflage = 15; //How hard the vehicle is to see. Higher value means it is easier to see.  1 is default.
		audible = 8; //How easy it is to hear. Higher means it is easier to hear by AI. 1 is Default.
		smokeLauncherAngle=360;
        //Weapons
        weapons[]=
		{
			"Laserdesignator_pilotCamera",
			"CMFlareLauncher",
			"WPEC_SmokeLauncher",
			"WPEC_LAAT_Cannon_High",
			"WPEC_Maramu_A2A_MissileSystem",
            "WPEC_Hoska_A2A_MissileSystem",
			"WPEC_Dianoga_WGM_MissileSystem",
            "WPEC_Kaada_DF_MissileSystem"
		};
		magazines[]=
		{
			"Laserbatteries",
			"300Rnd_CMFlare_Chaff_Magazine",
			"300Rnd_CMFlare_Chaff_Magazine",
			"300Rnd_CMFlare_Chaff_Magazine",
			"WPEC_SmokeLauncherMag",
			"WPEC_SmokeLauncherMag",
			"WPEC_SmokeLauncherMag",
			"WPEC_LAAT_Cannon_HighPower_Magazine",
			"WPEC_LAAT_Cannon_HighPower_Magazine",
			"WPEC_Maramu_6Rnd_A2A_mag",
            "WPEC_Hoska_6Rnd_A2A_mag",
            "WPEC_Dianoga_4Rnd_WGM_mag",
            "WPEC_Kaada_10Rnd_Unguided_Rocket_mag"
		};
		class Exhausts
		{
			class Exhaust1
			{
				position = "exhaust1";
				direction = "exhaust1_dir";
				effect = "ExhaustsEffectHeliBig";
			};
			class Exhaust2
			{
				position = "exhaust2";
				direction = "exhaust2_dir";
				effect = "ExhaustsEffectHeliBig";
			};
		};

        class UserActions: UserActions {
            // Remove 3AS impulse, I can imagine 3AS removing / renaming these actions at some point
            class afterburnerMk1_turn_on {
                displayName = "Impulse";
                position = "pilotview";
                radius = 5;
                onlyForPlayer = 0;
                statement = "false";
                condition = "false";
            };
            class afterburnerMk1_turn_off: afterburnerMk1_turn_on {};

            class NCA_impulse {
                displayName = "Impulse";
                position = "pilotview";
                radius = 5;
                onlyForPlayer = 0;
                condition = "ace_player == currentPilot this && {this call ls_impulsor_fnc_canImpulse}";
                statement = "[this, 1] call ls_impulsor_fnc_impulse";
            };
            class NCA_repulse: NCA_impulse {
                displayName = "Repulse";
                statement = "[this, -1] call ls_impulsor_fnc_impulse";
            };
        };
        class Components: Components
        {
            class TransportPylonsComponent
			{
				UIPicture="3as\3AS_LAAT\LAATI\data\ui\pylon_laat.paa";
				class pylons
				{
					class pylons1
					{
						hardpoints[]=
						{
						};
						attachment="";
						priority=10;
						maxweight=300;
						UIposition[]={0.5,0.25};
					};
					class pylons2: pylons1
					{
						UIposition[]={0.15000001,0.25};
						mirroredMissilePos=1;
					};
					class pylons3: pylons1
					{
						hardpoints[]=
						{
						};
						attachment="";
						priority=9;
						maxweight=2500;
						UIposition[]={0.55000001,0.34999999};
					};
					class pylons4: pylons3
					{
						UIposition[]={0.1,0.34999999};
						mirroredMissilePos=3;
					};
				};
				class presets
				{
					class empty
					{
						displayName="$STR_empty";
						attachment[]={};
					};
				};
			};
        };

		class TransportItems{};
		class TransportMagazines{};
		class TransportWeapons{};
    };
};
