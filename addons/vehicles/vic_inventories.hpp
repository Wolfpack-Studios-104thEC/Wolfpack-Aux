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
		//TransportItems includes anything not defined in CfgWeapons, CfgMagazines, and CfgVehicles that you want in the inventory.  Do not include Weapons or Magazines in here!
		//class TransportItems
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
            ITEM_XX(104th_MK1_PistolMag,100);\
            ITEM_XX(104th_3AS_DC15A_Mag,100);\
            ITEM_XX(104th_3AS_DC15S_Mag,100);\
            ITEM_XX(104th_3AS_DC15L_Mag,30);\
            ITEM_XX(104th_3AS_DC15C_Mag,50);\
            ITEM_XX(104th_3AS_WestarM5_Mag,40);\
            ITEM_XX(104th_3AS_DC17M_Mag,25);\
            ITEM_XX(104th_MK2_PistolMag_Long,30);\
            ITEM_XX(104th_3AS_Chaingun_Mag,5);\
            ITEM_XX(104th_MK4_PistolMag,5);\
            ITEM_XX(104th_MK2_AT_Mag,10);\
            ITEM_XX(3AS_JLTS_MK43_AT,5);\
            ITEM_XX(3AS_JLTS_MK39_AA,5);\
            ITEM_XX(OPTRE_M8_Flare_Green,10);\
            ITEM_XX(OPTRE_M8_Flare_Blue,10);\
            ITEM_XX(3Rnd_Smoke_Grenade_shell,10);\
            ITEM_XX(3Rnd_SmokeBlue_Grenade_shell,10);\
            ITEM_XX(3Rnd_SmokeRed_Grenade_shell,10);\
            ITEM_XX(_xx_3Rnd_SmokeYellow_Grenade_shell,10);\
            ITEM_XX(3Rnd_SmokePurple_Grenade_shell,10);\
            ITEM_XX(3Rnd_SmokeOrange_Grenade_shell,10);\
            ITEM_XX(3Rnd_UGL_FlareWhite_F,5);\
            ITEM_XX(3Rnd_UGL_FlareGreen_F,5);\
            ITEM_XX(3Rnd_UGL_FlareRed_F,5);\
            ITEM_XX(3Rnd_UGL_FlareYellow_F,5);\
            ITEM_XX(3Rnd_UGL_FlareCIR_F,5);\
            ITEM_XX(ACE_HuntIR_M203,5);\
            ITEM_XX(3Rnd_HE_Grenade_shell,10);\
            ITEM_XX(3AS_6Rnd_HE_Grenade_Shell,20);\
            ITEM_XX(104th_3AS_WestarLightAT,20);\
            ITEM_XX(104th_3AS_ThermalDetonator_Mag,30);\
            ITEM_XX(ACE_M84,10);\
            ITEM_XX(104th_PersonalShield_Republic_Mag,15);\
            ITEM_XX(104th_SquadShield_Republic_Mag,5);\
		};\
		class TransportWeapons\
		{\
			class _xx_104th_3AS_DC15A\
			{\
				weapon="104th_3AS_DC15A";\
				count=10;\
			};\
			class _xx_104th_3AS_DC15AGL\
			{\
				weapon="104th_3AS_DC15AGL";\
				count=5;\
			};\
			class _xx_104th_3AS_DC15L\
			{\
				weapon="104th_3AS_DC15L";\
				count=5;\
			};\
			class _xx_104th_3AS_DC15C\
			{\
				weapon="104th_3AS_DC15C";\
				count=10;\
			};\
			class _xx_104th_3AS_DC15CGL\
			{\
				weapon="104th_3AS_DC15CGL";\
				count=5;\
			};\
			class _xx_104th_3AS_DC15S\
			{\
				weapon="104th_3AS_DC15S";\
				count=10;\
			};\
			class _xx_104th_RPS6_K\
			{\
				weapon="104th_RPS6_K";\
				count=2;\
			};\
            class _xx_104th_3AS_RPS6_F\
			{\
				weapon="104th_3AS_RPS6_F";\
				count=3;\
			};\
            class _xx_104th_3AS_RPS6_G\
			{\
				weapon="104th_3AS_RPS6_G";\
				count=3;\
			};\
			class _xx_104th_JLTS_DC17SA\
			{\
				weapon="104th_JLTS_DC17SA";\
				count=5;\
			};\
		};\
        class TransportItems\
		{\
			class _xx_ACE_packingBandage\
			{\
				name="ACE_packingBandage";\
				count=100;\
			};\
			class _xx_ACE_elasticBandage\
			{\
				name="ACE_elasticBandage";\
				count=100;\
			};\
			class _xx_ACE_quikclot\
			{\
				name="ACE_quikclot";\
				count=150;\
			};\
			class _xx_ACE_salineIV_250\
			{\
				name="ACE_salineIV_250";\
				count=20;\
			};\
			class _xx_ACE_salineIV_500\
			{\
				name="ACE_salineIV_500";\
				count=15;\
			};\
			class _xx_ACE_salineIV\
			{\
				name="ACE_salineIV";\
				count=15;\
			};\
			class _xx_ACE_CableTie\
			{\
				name="ACE_CableTie";\
				count=50;\
			};\
			class _xx_ACE_tourniquet\
			{\
				name="ACE_tourniquet";\
				count=20;\
			};\
			class _xx_ACE_morphine\
			{\
				name="ACE_morphine";\
				count=20;\
			};\
			class _xx_ACE_epinephrine\
			{\
				name="ACE_epinephrine";\
				count=20;\
			};\
			class _xx_ACE_splint\
			{\
				name="ACE_splint";\
				count=10;\
			};\
			class _xx_ToolKit\
			{\
				name="ToolKit";\
				count=1;\
			};\
		};\
        class TransportBackpacks\
		{\
			class _xx_B_Parachute\
			{\
				backpack="B_Parachute";\
				count=4;\
			};\
		};
