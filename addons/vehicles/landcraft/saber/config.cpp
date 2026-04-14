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
			"WPEC_AMMOCrate",
			"WPEC_MedicCrate",
			"WPEC_EODCrate"
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
	class 3AS_Supply_Large_Prop;
	class WPEC_RepairCrate: 3AS_Supply_Large_Prop
	{
		ace_dragging_canDrag = 1;
		ace_Dragging_canCarry = 1;
		ace_dragging_ignoreWeightCarry = 1;
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
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="Field Repair Crate";
		icon="iconCrateAmmo";
		editorCategory=QEGVAR(edcat,aux);
		editorSubcategory=QEGVAR(edsubcat,crate);
		maximumLoad=50000;
		model="3as\3as_props\crates\models\supply_Large.p3d";
		editorPreview="\3as\3as_props\Crates\EditorPreviews\3AS_Supply_Large_Black_Prop.jpg";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"3AS\3AS_Props\Crates\Data\Supply_Large_Black\Supply_Large_Black_co.paa"
		};
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
	class WPEC_AMMOCrate: 3AS_Supply_Large_Prop
	{
		ace_dragging_canDrag = 1;
		ace_Dragging_canCarry = 1;
		ace_dragging_ignoreWeightCarry = 1;
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
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="Ammo Crate";
		icon="iconCrateAmmo";
		editorCategory=QEGVAR(edcat,aux);
		editorSubcategory=QEGVAR(edsubcat,crate);
		maximumLoad=50000;
		model="3as\3as_props\crates\models\supply_Large.p3d";
		editorPreview="\3as\3as_props\Crates\EditorPreviews\3AS_Supply_Large_Black_Prop.jpg";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"3AS\3AS_Props\Crates\Data\Supply_Large_Ammo\Supply_Large_Ammo_co.paa"
		};
		class TransportWeapons
		{
		};
		class TransportMagazines 
		{ 
            MAG_XX(WPEC_DC15XM_EnergyMag,50);\
            MAG_XX(WPEC_DC15XM_PlasmaMag,50);\
            MAG_XX(WPEC_3AS_DC15S_Mag,50);\
            MAG_XX(WPEC_3AS_DC15C_Mag,50);\
            MAG_XX(WPEC_3AS_DC15C_OCMag,50);\
            MAG_XX(WPEC_3AS_DC15L_Mag,50);\
            MAG_XX(WPEC_3AS_DC15A_Mag,50);\
            MAG_XX(WPEC_3AS_DC17M_Mag,50);\
            MAG_XX(WPEC_3AS_WestarM5_Mag,50);\
            MAG_XX(WPEC_3AS_WestarLightAT,50);\
            MAG_XX(WPEC_3AS_DC17MLightAT,50);\
            MAG_XX(WPEC_3AS_Z6_Mag,50);\
            MAG_XX(WPEC_3AS_Valken38X_Mag,50);\
            MAG_XX(WPEC_MK1_PistolMag,50);\
            MAG_XX(WPEC_MK2_PistolMag_Long,50);\
            MAG_XX(WPEC_MK2_PistolMag_Short,50);\
            MAG_XX(WPEC_MK3_PistolMag,50);\
            MAG_XX(WPEC_MK4_PistolMag,50);\
            MAG_XX(WPEC_3AS_MK40_AT_Unguided,50);\
            MAG_XX(WPEC_3AS_MK40_AT_Guided,50);\
            MAG_XX(WPEC_MK1_AT_Mag,50);\
            MAG_XX(WPEC_MK2_AT_Mag,50);\
            MAG_XX(WPEC_MK3_AP_Mag,50);\
            MAG_XX(WPEC_MK4_AP_Mag,50);\
            MAG_XX(Odins_Despair,50);\
            MAG_XX(WPEC_3AS_Chaingun_Mag,50);\
            MAG_XX(3AS_JLTS_MK43_AT,5);\
            MAG_XX(3AS_JLTS_MK39_AA,5);\

			MAG_XX(3AS_6Rnd_HE_Grenade_shell,20);\
			MAG_XX(3Rnd_UGL_FlareWhite_F,20);\
			MAG_XX(3Rnd_UGL_FlareGreen_F,20);\
			MAG_XX(3Rnd_UGL_FlareRed_F,20);\
			MAG_XX(3Rnd_UGL_FlareYellow_F,20);\
			MAG_XX(3Rnd_UGL_FlareCIR_F,20);\
			MAG_XX(3Rnd_Smoke_Grenade_shell,20);\
			MAG_XX(3Rnd_SmokeRed_Grenade_shell,20);\
			MAG_XX(3Rnd_SmokeGreen_Grenade_shell,20);\
			MAG_XX(3Rnd_SmokeYellow_Grenade_shell,20);\
			MAG_XX(3Rnd_SmokePurple_Grenade_shell,20);\
			MAG_XX(3Rnd_SmokeBlue_Grenade_shell,20);\
			MAG_XX(3Rnd_SmokeOrange_Grenade_shell,20);\
			MAG_XX(ACE_HuntIR_M203,20);\
		};
		class TransportBackpacks
		{
		};
		class TransportItems
		{
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
	class WPEC_MedicCrate: 3AS_Supply_Large_Prop
	{
		ace_dragging_canDrag = 1;
		ace_Dragging_canCarry = 1;
		ace_dragging_ignoreWeightCarry = 1;
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
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="Medical Crate";
		icon="iconCrateAmmo";
		editorCategory=QEGVAR(edcat,aux);
		editorSubcategory=QEGVAR(edsubcat,crate);
		maximumLoad=50000;
		model="3as\3as_props\crates\models\supply_Large.p3d";
		editorPreview="\3as\3as_props\Crates\EditorPreviews\3AS_Supply_Large_Black_Prop.jpg";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"3AS\3AS_Props\Crates\Data\Supply_Large_Medical\Supply_Large_Medical_co.paa"
		};
		class TransportWeapons
		{
		};
		class TransportMagazines { 

		};
		class TransportBackpacks
		{
		};
		class TransportItems
		{
			ITEM_XX(ACE_packingBandage,100);\
            ITEM_XX(ACE_elasticBandage,100);\
            ITEM_XX(ACE_quikclot,100);\
			ITEM_XX(kat_bloodIV_O_N,20);\
			ITEM_XX(kat_bloodIV_O_N_250,20);\
			ITEM_XX(kat_bloodIV_O_N_500,30);\
			ITEM_XX(kat_plate,10);\
			ITEM_XX(kat_chestSeal,40);\
			ITEM_XX(kat_Painkiller,20);\
			ITEM_XX(kat_EACA,10);\
			ITEM_XX(kat_flumazenil,10);\
			ITEM_XX(kat_lorazepam,10);\
			ITEM_XX(kat_lidocaine,10);\
			ITEM_XX(ACE_morphine,20);\
			ITEM_XX(kat_naloxone,10);\
			ITEM_XX(kat_nitroglycerin,10);\
			ITEM_XX(kat_norepenephrine,10);\
			ITEM_XX(ACE_salineIV_250,20);\
			ITEM_XX(ACE_splint,20);\
			ITEM_XX(ACE_tourniquet,30);\
			ITEM_XX(kat_TXA,10);\
			ITEM_XX(ACE_epinephrine,10);\
            ITEM_XX(ToolKit,1);\
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
	class WPEC_EODCrate: 3AS_Supply_Large_Prop
	{
		ace_dragging_canDrag = 1;
		ace_Dragging_canCarry = 1;
		ace_dragging_ignoreWeightCarry = 1;
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
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="Explosive Ordinance Box";
		icon="iconCrateAmmo";
		editorCategory=QEGVAR(edcat,aux);
		editorSubcategory=QEGVAR(edsubcat,crate);
		maximumLoad=50000;
		model="3as\3as_props\crates\models\supply_Large.p3d";
		editorPreview="\3as\3as_props\Crates\EditorPreviews\3AS_Supply_Large_Black_Prop.jpg";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"3AS\3AS_Props\Crates\Data\Supply_Large_orange\Supply_Large_orange_co.paa"
		};
		class TransportWeapons
		{
		};
		class TransportMagazines { 

		};
		class TransportBackpacks
		{
		};
		class TransportItems
		{
			ITEM_XX(3AS_DetPack,25);\
			ITEM_XX(EC01_RemoteMagazine,25);\
			ITEM_XX(HX_AT_Mine_Mag,25);\
			ITEM_XX(RTX_RemoteMagazine,25);\
			ITEM_XX(C7_Remote_Mag,60);\
			ITEM_XX(C12_Remote_Mag,70);\
			ITEM_XX(DemoCharge_Remote_Mag,30);\
			ITEM_XX(ATMine_Range_Mag,20);\
			ITEM_XX(ClaymoreDirectionalMine_Remote_Mag,20);\
			ITEM_XX(SLAMDirectionalMine_Wire_Mag,20);\
			ITEM_XX(APERSMine_Range_Mag,50);\
			ITEM_XX(ACE_APERSMine_ToePopper_Mag,50);\
			ITEM_XX(WPEC_3AS_BaridiumCore_Mag,20);\
			ITEM_XX(WPS_MK1Imploder,20);\
			ITEM_XX(OPTRE_c7_remote_throwable_sticky_mag,30);\
			ITEM_XX(ACE_SpraypaintRed,15);\
			ITEM_XX(ACE_DefusalKit,10);\
			ITEM_XX(ACE_Clacker,10);\
			ITEM_XX(ACE_M26_Clacker,10);\
			ITEM_XX(ACE_wirecutter,10);\
			ITEM_XX(MineDetector,10 );\
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
