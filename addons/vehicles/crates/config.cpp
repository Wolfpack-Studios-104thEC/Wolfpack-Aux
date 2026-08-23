#include "script_component.hpp"

class CfgPatches {
    class EclipseCrates {
        addonRootClass = QADDON;
        name = COMPONENT_NAME;
        units[] =
        {
			"WPEC_RepairCrate",
			"WPEC_AMMOCrate",
			"WPEC_MedicCrate",
			"WPEC_EODCrate",
            "WPEC_GrenadesCrate"
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
            MAG_XX(WPEC_DC15XM_EnergyMag,10);\
            MAG_XX(WPEC_DC15XM_PlasmaMag,10);\
            MAG_XX(WPEC_3AS_DC15S_Mag,50);\
            MAG_XX(WPEC_3AS_DC15C_Mag,50);\
            MAG_XX(WPEC_3AS_DC15C_OCMag,50);\
            MAG_XX(WPEC_3AS_DC15L_Mag,30);\
            MAG_XX(WPEC_3AS_DC15A_Mag,50);\
            MAG_XX(WPEC_3AS_DC17M_Mag,25);\
            MAG_XX(WPEC_3AS_WestarM5_Mag,50);\
            MAG_XX(WPEC_3AS_WestarLightAT,20);\
            MAG_XX(WPEC_3AS_DC17MLightAT,20);\
            MAG_XX(WPEC_3AS_Z6_Mag,30);\
            MAG_XX(WPEC_3AS_Valken38X_Mag,20);\
            MAG_XX(WPEC_MK1_PistolMag,50);\
            MAG_XX(WPEC_MK2_PistolMag_Long,50);\
            MAG_XX(WPEC_MK2_PistolMag_Short,50);\
            MAG_XX(WPEC_MK3_PistolMag,50);\
            MAG_XX(WPEC_MK4_PistolMag,50);\
            MAG_XX(WPEC_3AS_MK40_AT_Unguided,5);\
            MAG_XX(WPEC_3AS_MK40_AT_Guided,5);\
            MAG_XX(WPEC_MK1_AT_Mag,5);\
            MAG_XX(WPEC_MK2_AT_Mag,5);\
            MAG_XX(WPEC_MK3_AP_Mag,5);\
            MAG_XX(WPEC_MK4_AP_Mag,5);\
            MAG_XX(WPEC_3AS_Chaingun_Mag,5);\
            MAG_XX(3AS_JLTS_MK43_AT,4);\
            MAG_XX(3AS_JLTS_MK39_AA,4);\
			MAG_XX(3rnd_3GL_FlareWhite_Illumination_F,20);\
			MAG_XX(3AS_10Rnd_ESlug_Mag,30);\
			MAG_XX(3AS_10Rnd_EC30_Pellets,30);\
			MAG_XX(3AS_1Rnd_EC80_Flechette,30);\
			MAG_XX(ls_magazine_dc17s,30);\
			MAG_XX(WPEC_DC15LE_EnergyMag,30);\
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
			ITEM_XX(kat_IV_16,25);\
			ITEM_XX(kat_IO_FAST,50);\
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
			ITEM_XX(MineDetector,10);\
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
    class WPEC_GrenadesCrate: 3AS_Supply_Large_Prop
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
		displayName="Grenades Crate";
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
			"\Z\wpec\addons\vehicles\crates\data\supply_large_grenades_co.paa"
		};
		class TransportWeapons
		{
		};
		class TransportMagazines
		{
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

            MAG_XX(WPS_C7,20);\
            MAG_XX(WPS_C25,20);\
            MAG_XX(WPS_C31,20);\
            MAG_XX(WPS_D18,20);\
            MAG_XX(WPS_D19,20);\
            MAG_XX(WPS_MK1Detonator,20);\
            MAG_XX(WPS_MK1Eggonator,20);\
            MAG_XX(WPS_MK1Imploder,20);\
            MAG_XX(WPS_SMK1,20);\
            MAG_XX(WPS_SMK2_White,20);\
            MAG_XX(WPS_SMK2_Blue,20);\
            MAG_XX(WPS_SMK2_Green,20);\
            MAG_XX(WPS_SMK2_Purple,20);\
            MAG_XX(WPS_SMK2_Red,20);\
            MAG_XX(WPS_SMK3_White,20);\
            MAG_XX(WPS_SMK3_Blue,20);\
            MAG_XX(WPS_SMK3_Green,20);\
            MAG_XX(WPS_SMK3_Purple,20);\
            MAG_XX(WPS_SMK3_Red,20);\
            MAG_XX(WPS_SMK3_Orange,20);\
            MAG_XX(WPS_SMK3_Yellow,20);\
            MAG_XX(WPEC_PersonalShield_Republic_Mag,20);\
            MAG_XX(WPEC_PersonalShieldFull_Republic_Mag,20);\
            MAG_XX(WPEC_SquadShield_Republic_Mag,20);\
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
