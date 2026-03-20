
	class WPEC_3AS_DC15C: 3AS_DC15C_Base_F
	{
		scope=2;
		displayName="[104th] DC-15C";
		canShootInWater=1;
		JLTS_hasEMPProtection=1;
		baseWeapon="WPEC_3AS_DC15C";
		model="\3AS\3AS_Weapons\Republic\DC15C\3AS_DC15C_F.p3d";
		picture="\3AS\3AS_Weapons\Republic\DC15C\Data\UI\3as_dc15c.paa";
		UiPicture="\A3\weapons_f\data\UI\icon_regular_CA.paa";
		magazines[]=
		{
			"WPEC_3AS_DC15C_Mag",
			"WPEC_3AS_DC15C_OCMag"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=70;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]=
				{
					"3AS_optic_reflex_DC15C",
					"3AS_optic_acog_DC15C",
					"Aux501_cows_Holosight",
					"Aux501_cows_Holosight_2",
					"Aux501_cows_Holosight_3"
				};
			};
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[]=
				{
				};
			};
		};
	};
	class WPEC_3AS_DC15CGL: 3AS_DC15C_Base_F
	{
		scope=2;
		displayName="[104th] DC-15C/GL";
		canShootInWater=1;
		JLTS_hasEMPProtection=1;
		baseWeapon="WPEC_3AS_DC15CGL";
		model="\3AS\3AS_Weapons\Republic\DC15C\3AS_DC15C_GL.p3d";
		picture="\3AS\3AS_Weapons\Republic\DC15C\Data\UI\3as_dc15cgl.paa";
		UiPicture="\A3\weapons_f\data\UI\icon_regular_CA.paa";
		muzzles[]=
		{
			"this",
			"GL_3GL_F"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"3as\3AS_Weapons\Republic\DC15C\Data\Anim\New_DC15CGL_Handanim.rtm"
		};
		magazines[]=
		{
			"WPEC_3AS_DC15C_Mag"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot
			{
				compatibleItems[]=
				{
					"Aux501_cows_Holosight",
					"Aux501_cows_Holosight_2",
					"Aux501_cows_Holosight_3"
				};
			};
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[]=
				{
				};
			};
		};
	};
