
	class WPEC_3AS_Valken38X: 3AS_Valken38X_Base_F
	{
		JLTS_hasEMPProtection=1;
		canShootInWater=1;
		scope=2;
		displayName="[104th] Valken 38X";
		baseWeapon="WPEC_3AS_Valken38X";
		model="\3AS\3AS_Weapons\Republic\Valken38X\3AS_Valken38X_F.p3d";
		picture="\3AS\3AS_Weapons\Republic\Valken38X\Data\UI\3as_valken38x.paa";
		UiPicture="\A3\weapons_f\data\UI\icon_regular_CA.paa";
		magazines[]=
		{
			"WPEC_3AS_Valken38X_Mag"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=231;
			class MuzzleSlot: 3AS_MuzzleSlot_VK38X
			{
				iconPosition[]={0,0.44999999};
				iconScale=0.2;
			};
			class CowsSlot: CowsSlot
			{
				compatibleItems[]=
				{
					"3AS_Optic_VK38X",
					"Optre_M393_Scope"
				};
			};
			class UnderBarrelSlot: 3AS_UnderBarrelSlot_VK38X
			{
				iconPosition[]={0.23999999,0.69999999};
				iconScale=0.30000001;
			};
		};
	};
