//Inventory for the Vehicle.  Make sure this is all correct otherwise you will get a .model error!
		//TransportMagazines includes anything defined in CfgMagazines you want in the inventory, including grenades.
		//class TransportMagazines
		//{
		//	class _xx_104th_MK1_PistolMag
		//	{
		//		magazine="104th_MK1_PistolMag";
		//		count=50;
		//	};
		//};
		//TransportWeapons includes anything defined in CfgWeapons you want in the inventory.
		//class TransportWeapons
		//{
		//	class _xx_104th_3AS_DC15A
		//	{
		//		weapon="104th_3AS_DC15A";
		//		count=10;
		//	};{
		//		weapon="104th_JLTS_DC17SA";
		//		count=5;
		//	};
		//};
		//TransportMAGs includes anything not defined in CfgWeapons, CfgMagazines, and CfgVehicles that you want in the inventory.  Do not include Weapons or Magazines in here!
		//class TransportMAGs
		//{
		//	class _xx_ACE_packingBandage
		//	{
		//		name="ACE_packingBandage";
		//		count=100;
		//	};
		//};
		//TransportBackpacks includes any defined backpack you want in the inventory.
		//class TransportBackpacks
		//{
		//	class _xx_B_Parachute
		//	{
		//		backpack="B_Parachute";
		//		count=4;
		//	};
		//};

#define LAAT_INVENTORY \
        class TransportMagazines { \
            MAG_XX(104th_MK1_PistolMag,100);\
            MAG_XX(104th_3AS_DC15A_Mag,100);\
            MAG_XX(104th_3AS_DC15S_Mag,100);\
            MAG_XX(104th_3AS_DC15L_Mag,30);\
            MAG_XX(104th_3AS_DC15C_Mag,50);\
            MAG_XX(104th_3AS_WestarM5_Mag,40);\
            MAG_XX(104th_3AS_DC17M_Mag,25);\
            MAG_XX(104th_MK2_PistolMag_Long,30);\
            MAG_XX(104th_3AS_Chaingun_Mag,5);\
            MAG_XX(104th_MK4_PistolMag,5);\
            MAG_XX(104th_MK2_AT_Mag,10);\
            MAG_XX(3AS_JLTS_MK43_AT,5);\
            MAG_XX(3AS_JLTS_MK39_AA,5);\
            MAG_XX(OPTRE_M8_Flare_Green,10);\
            MAG_XX(OPTRE_M8_Flare_Blue,10);\
            MAG_XX(3Rnd_Smoke_Grenade_shell,10);\
            MAG_XX(3Rnd_SmokeBlue_Grenade_shell,10);\
            MAG_XX(3Rnd_SmokeRed_Grenade_shell,10);\
            MAG_XX(_xx_3Rnd_SmokeYellow_Grenade_shell,10);\
            MAG_XX(3Rnd_SmokePurple_Grenade_shell,10);\
            MAG_XX(3Rnd_SmokeOrange_Grenade_shell,10);\
            MAG_XX(3Rnd_UGL_FlareWhite_F,5);\
            MAG_XX(3Rnd_UGL_FlareGreen_F,5);\
            MAG_XX(3Rnd_UGL_FlareRed_F,5);\
            MAG_XX(3Rnd_UGL_FlareYellow_F,5);\
            MAG_XX(3Rnd_UGL_FlareCIR_F,5);\
            MAG_XX(ACE_HuntIR_M203,5);\
            MAG_XX(3Rnd_HE_Grenade_shell,10);\
            MAG_XX(3AS_6Rnd_HE_Grenade_Shell,20);\
            MAG_XX(104th_3AS_WestarLightAT,20);\
            MAG_XX(104th_3AS_ThermalDetonator_Mag,30);\
            MAG_XX(ACE_M84,10);\
            MAG_XX(104th_PersonalShield_Republic_Mag,15);\
            MAG_XX(104th_SquadShield_Republic_Mag,5);\
		};\
		class TransportWeapons\
		{\
            WEAP_XX(104th_3AS_DC15A,10);\
            WEAP_XX(104th_3AS_DC15AGL,5);\
            WEAP_XX(104th_3AS_DC15L,5);\
            WEAP_XX(104th_3AS_DC15C,10);\
            WEAP_XX(104th_3AS_DC15CGL,5);\
            WEAP_XX(104th_3AS_DC15S,10);\
            WEAP_XX(104th_RPS6_K,2);\
            WEAP_XX(104th_3AS_RPS6_F,3);\
            WEAP_XX(104th_3AS_RPS6_G,3);\
            WEAP_XX(104th_JLTS_DC17SA,5);\
		};\
        class TransportItems\
		{\
            ITEM_XX(ACE_packingBandage,100);\
            ITEM_XX(ACE_elasticBandage,100);\
            ITEM_XX(ACE_quikclot,150);\
            ITEM_XX(ACE_salineIV_250,20);\
            ITEM_XX(ACE_salineIV_500,15);\
            ITEM_XX(ACE_salineIV,15);\
            ITEM_XX(ACE_CableTie,50);\
            ITEM_XX(ACE_tourniquet,20);\
            ITEM_XX(ACE_morphine,20);\
            ITEM_XX(ACE_epinephrine,20);\
            ITEM_XX(ACE_splint,10);\
            ITEM_XX(ToolKit,1);\
		};\
        class TransportBackpacks\
		{\
            PACK_XX(B_Parachute,4);\
		};
