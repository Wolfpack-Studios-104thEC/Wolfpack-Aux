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
		};
	    class TransportWeapons
		{
		};
            class TransportItems\
		{
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
		};
        class TransportBackpacks\
		{
		};
