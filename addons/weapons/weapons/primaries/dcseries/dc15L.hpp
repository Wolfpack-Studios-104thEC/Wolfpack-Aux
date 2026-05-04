
	class WPEC_3AS_DC15L: 3AS_DC15L_Base_F
	{
		scope=2;
		displayName="[104th] DC-15L";
		canShootInWater=1;
		JLTS_hasEMPProtection=1;
		model="\3AS\3AS_Weapons\Republic\DC15L\3AS_DC15L_F.p3d";
		picture="\3AS\3AS_Weapons\Republic\DC15L\Data\UI\3as_dc15l.paa";
		UiPicture="\A3\weapons_f\data\UI\icon_regular_CA.paa";
		magazines[]=
		{
			"WPEC_3AS_DC15L_Mag",
			"WPEC_3AS_DC15C_OCMag"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=170;
			class MuzzleSlot: 3AS_MuzzleSlot_DC15L
			{
				iconPosition[]={0,0.44999999};
				iconScale=0.2;
			};
			class CowsSlot: CowsSlot
			{
				compatibleItems[]=
				{
					"3AS_Optic_DC15L",
					"WPEC_HMRCO_blu",
					"WPEC_HRCO_blu",
					"WPEC_Holosight_2xblu"
				};
			};
			class UnderBarrelSlot: 3AS_UnderBarrelSlot_DC15L
			{
				iconPosition[]={0.23999999,0.69999999};
				iconScale=0.30000001;
			};
		};
	};
