
	class WPEC_JLTS_DC17SA: JLTS_DC17SA
	{
		canShootInWater=1;
		scope=2;
		scopeArsenal=2;
		baseWeapon="WPEC_JLTS_DC17SA";
		displayName="[104th] DC17SA";
		fireLightIntensity=0.89999998;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=15;
			class CowsSlot: CowsSlot
			{
				displayName="Optics Slot";
				iconPicture="\A3\Weapons_F\Data\UI\attachment_top.paa";
				iconPinpoint="Bottom";
				iconPosition[]={0.5,0.34999999};
				iconScale=0.2;
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				scope=0;
				compatibleItems[]=
				{
					"WPEC_Holosight_blu",
					"Optre_Recon_Sight_Red"
				};
			};
			class PointerSlot: PointerSlot
			{
				compatibleItems[]=
				{
					"JLTS_DC17SA_flashlight"
				};
			};
			class MuzzleSlot: MuzzleSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[]={};
				iconPosition[]={0.23999999,0.34999999};
				iconScale=0.2;
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleItems[]={};
			};
		};
		magazines[]=
		{
			"WPEC_MK1_PistolMag",
			"WPEC_MK4_PistolMag"
		};
		muzzles[]=
		{
			"this",
			"Stun"
		};
		class Stun: JLTS_stun_muzzle
		{
			magazines[]=
			{
				"WPEC_MK2_PistolMag_Short",
				"WPEC_MK2_PistolMag_Long"
			};
			reloadAction="GestureReloadPistol";
		};
	};
