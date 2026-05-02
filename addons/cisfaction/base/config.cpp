class cfgPatches
{
	class WPEC_CIS
	{
		name="WPEC_CIS";
		author="WPEC Dev";
		requiredVersion=2.2;
		requiredAddons[]=
		{
			"JLTS_Core"
		};
		weapons[]=
		{
			"WPEC_CIS_Base_B1_Droid_U",
			"WPEC_CIS_B1_Droid_AT_U",
			"WPEC_CIS_B1_Droid_AA_U",
			"WPEC_CIS_B1_Droid_Shield_U",
			"WPEC_CIS_B1_Droid_Sniper_U",
			"WPEC_CIS_B1_Droid_Shotgun_U",
			"WPEC_CIS_B1_Droid_Heavy_U",
			"WPEC_CIS_B1_Droid_Grenadier_U",
			"WPEC_CIS_B1_Droid_Security_U",
			"WPEC_CIS_B1_Droid_Crew_U",
			"WPEC_CIS_B1_Droid_Commander_U",
			"WPEC_CIS_BX_U_Base",
			"WPEC_CIS_BX_Lead_U_Base",
			"WPEC_CIS_BX_Vest"
		};
		units[]=
		{
			"WPEC_CIS_B1_backpack",
			"WPEC_CIS_B1_Droid_Shield",
			"WPEC_CIS_B1_antenna_backpack",
			"WPEC_CIS_Base_B1_Droid",
			"WPEC_CIS_B1_Droid_AT",
			"WPEC_CIS_B1_Droid_AA",
			"WPEC_CIS_B1_Droid_Heavy_AA",
			"WPEC_CIS_B1_Droid_Sniper",
			"WPEC_CIS_B1_Droid_Shotgun",
			"WPEC_CIS_B1_Droid_Heavy",
			"WPEC_CIS_B1_Droid_Grenadier",
			"WPEC_CIS_B1_Droid_Security",
			"WPEC_CIS_B1_Droid_Crew",
			"WPEC_CIS_B1_Droid_Commander",
			"WPEC_CIS_TSeries",
			"WPEC_CIS_B2_Droid",
			"WPEC_CIS_B2_Droid_Super",
			"WPEC_CIS_B2_Droid_Super_Blaster",
			"WPEC_CIS_BX_Base",
			"WPEC_CIS_BX_Lead",
			"WPEC_CIS_BX_Sniper",
			"WPEC_CIS_BX_Heavy",
			"WPEC_CIS_BX_AT",
			"WPEC_CIS_BX_Melee",
			"WPEC_CIS_BX_Melee_Heavy",
			"WPEC_CIS_BX_Shield"
		};
	};
};
class CfgFactionClasses
{
	class WPEC_CIS
	{
		displayName="[WPEC] CIS Faction";
		author="WPEC Dev";
		flag="\a3\Data_f\Flags\flag_nato_co.paa";
		icon="";
		priority=1;
		side=0;
	};
};
class CfgEditorSubcategories
{
	class WPEC_CIS_inf
	{
		displayName=" B1 Infantry";
	};
	class WPEC_CIS_B2
	{
		displayName=" B2 Infantry";
	};
	class WPEC_CIS_aircraft
	{
		displayName=" Aircraft";
	};
	class WPEC_CIS_helicopter
	{
		displayName=" Helicopter";
	};
	class WPEC_CIS_armoured
	{
		displayName=" Armoured";
	};
	class WPEC_CIS_Mercenary
	{
		displayName=" Mercenary Division";
	};
	class WPEC_CIS_AA
	{
		displayName=" Anti-Air";
	};
	class WPEC_CIS_HVT
	{
		displayName=" HVT";
	};
	class WPEC_CIS_Turrets
	{
		displayName=" Turrets";
	};
	class WPEC_CIS_Special
	{
		displayName=" Special Forces";
	};
};
class CfgWeapons
{
	class U_I_CombatUniform;
	class UniformItem;
	class JLTS_DroidB1;
	class WPEC_CIS_Base_B1_Droid_U: JLTS_DroidB1
	{
		JLTS_isDroid=1;
		JLTS_hasEMPProtection=0;
		JLTS_deathSounds="DeathDroid";
		author="WPEC Dev";
		scope=2;
		displayName="[WPEC CIS] B1 Uniform";
		picture="\MRC\JLTS\characters\DroidArmor\data\ui\b1_uniform_ui_ca.paa";
		model="\MRC\JLTS\characters\DroidArmor\DroidUniformB1.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="WPEC_CIS_Base_B1_Droid";
			containerClass="Supply150";
			mass=100;
		};
	};
	class WPEC_CIS_B1_Droid_AT_U: WPEC_CIS_Base_B1_Droid_U
	{
		displayName="[WPEC CIS] B1 AT Uniform";
		class ItemInfo: ItemInfo
		{
			uniformClass="WPEC_CIS_B1_Droid_AT";
		};
	};
	class WPEC_CIS_B1_Droid_AA_U: WPEC_CIS_Base_B1_Droid_U
	{
		displayName="[WPEC CIS] B1 AA Uniform";
		class ItemInfo: ItemInfo
		{
			uniformClass="WPEC_CIS_B1_Droid_Shield";
		};
	};
	class WPEC_CIS_B1_Droid_Shield_U: WPEC_CIS_Base_B1_Droid_U
	{
		displayName="[WPEC CIS] B1 AA Uniform";
		class ItemInfo: ItemInfo
		{
			uniformClass="WPEC_CIS_B1_Droid_AA";
		};
	};
	class WPEC_CIS_B1_Droid_Sniper_U: WPEC_CIS_Base_B1_Droid_U
	{
		displayName="[WPEC CIS] B1 Sniper Uniform";
		class ItemInfo: ItemInfo
		{
			uniformClass="WPEC_CIS_B1_Droid_Sniper";
		};
	};
	class WPEC_CIS_B1_Droid_Shotgun_U: WPEC_CIS_Base_B1_Droid_U
	{
		displayName="[WPEC CIS] B1 Shotgun Uniform";
		class ItemInfo: ItemInfo
		{
			uniformClass="WPEC_CIS_B1_Droid_Shotgun";
		};
	};
	class WPEC_CIS_B1_Droid_Heavy_U: WPEC_CIS_Base_B1_Droid_U
	{
		displayName="[WPEC CIS] B1 Heavy Uniform";
		class ItemInfo: ItemInfo
		{
			uniformClass="WPEC_CIS_B1_Droid_Heavy";
		};
	};
	class WPEC_CIS_B1_Droid_Grenadier_U: WPEC_CIS_Base_B1_Droid_U
	{
		displayName="[WPEC CIS] B1 Grenadier Uniform";
		class ItemInfo: ItemInfo
		{
			uniformClass="WPEC_CIS_B1_Droid_Grenadier";
		};
	};
	class WPEC_CIS_B1_Droid_Security_U: WPEC_CIS_Base_B1_Droid_U
	{
		displayName="[WPEC CIS] B1 Security Uniform";
		class ItemInfo: ItemInfo
		{
			uniformClass="WPEC_CIS_B1_Droid_Security";
		};
	};
	class WPEC_CIS_B1_Droid_Crew_U: WPEC_CIS_Base_B1_Droid_U
	{
		displayName="[WPEC CIS] B1 Crew Uniform";
		class ItemInfo: ItemInfo
		{
			uniformClass="WPEC_CIS_B1_Droid_Crew";
		};
	};
	class WPEC_CIS_B1_Droid_Commander_U: WPEC_CIS_Base_B1_Droid_U
	{
		displayName="[WPEC CIS] B1 Commander Uniform";
		class ItemInfo: ItemInfo
		{
			uniformClass="WPEC_CIS_B1_Droid_Commander";
		};
	};
	class V_PlateCarrier1_rgr;
	class ls_vest_base: V_PlateCarrier1_rgr
	{
		class ItemInfo;
	};
	class ls_droidVest_bx: ls_vest_base
	{
		class ItemInfo;
	};
	class WPEC_CIS_BX_Vest: ls_droidVest_bx
	{
		scope=2;
		scopeArsenal=2;
		displayName="[WPEC CIS] BX Vest";
		model="\ls\core\addons\characters_droid\vests\bx\ls_vest_droid_bx.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel="\ls\core\addons\characters_droid\vests\bx\ls_vest_droid_bx.p3d";
			containerClass="Supply40";
			hiddenSelections[]={};
			mass=1;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=6;
					PassThrough=0.30000001;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=6;
					passThrough=0.30000001;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=4;
					passThrough=0.30000001;
				};
			};
		};
	};
};
class CfgVehicles
{
	class JLTS_B1_backpack;
	class JLTS_B1_backpack_prototype;
	class JLTS_B1_antenna;
	class WPEC_CIS_B1_backpack: JLTS_B1_backpack
	{
		author="WPEC Dev";
		scope=2;
		scopeArsenal=2;
		displayName="[WPEC CIS] Droid B1 Backpack ";
		maximumload=600;
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\characters\DroidArmor\data\b1_backpack_co.paa"
		};
		class TransportItems
		{
			class _xx_ACE_packingBandage
			{
				name="ACE_packingBandage";
				count=15;
			};
		};
		class TransportMagazines
		{
			class _xx_rps6mag
			{
				magazine="JLTS_RPS6_mag";
				count=2;
			};
			class _xx_aa_mag
			{
				count=2;
				magazine="Titan_AA";
			};
		};
	};
	class WPEC_CIS_B1_antenna_backpack: JLTS_B1_antenna
	{
		author="WPEC Dev";
		scope=2;
		scopeArsenal=2;
		displayName="[WPEC CIS] B1 Backpack NCO";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\characters\DroidArmor\data\b1_antenna_co.paa"
		};
		class TransportItems
		{
			class _xx_ACE_packingBandage
			{
				name="ACE_packingBandage";
				count=10;
			};
		};
	};
	class O_soldier_base_F;
	class O_Soldier_02_F;
	class O_Soldier_sniper_base_F;
	class O_Soldier_F: O_soldier_base_F
	{
		class HitPoints;
	};
	class O_Soldier_LAT_f: O_soldier_base_F
	{
		class HitPoints;
	};
	class O_Soldier_AT_F: O_soldier_base_F
	{
		class HitPoints;
	};
	class O_soldier_AR_F: O_soldier_base_F
	{
		class HitPoints;
	};
	class O_Crew_f: O_soldier_base_F
	{
		class HitPoints;
	};
	class O_Helipilot_F: O_Soldier_02_F
	{
		class HitPoints;
	};
	class O_Officer_f: O_soldier_base_F
	{
		class HitPoints;
	};
	class O_Sniper_f: O_Soldier_sniper_base_F
	{
		class HitPoints;
	};
	class O_soldier_UAV_F: O_soldier_base_F
	{
		class HitPoints;
	};
	class JLTS_Droid_B1_E5: O_Soldier_F
	{
		class HitPoints;
	};
	class JLTS_Droid_B1_Marine;
	class JLTS_Droid_B1_Security;
	class JLTS_Droid_B1_Commander;
	class JLTS_Droid_B1_Pilot;
	class JLTS_Droid_B1_Crew;
	class JLTS_Droid_B1_Sniper;
	class JLTS_Droid_B1_Prototype;
	class JLTS_Droid_B1_SBB3;
	class WPEC_CIS_Base_B1_Droid: JLTS_Droid_B1_E5
	{
		author="WPEC Dev";
		scope=2;
		faction="WPEC_CIS";
		editorSubcategory="WPEC_CIS_inf";
		editorPreview="\MRC\JLTS\characters\DroidArmor\data\ui\editorPreviews\JLTS_Droid_B1_E5.jpg";
		displayName="B1 Droid";
		backpack="WPEC_CIS_B1_backpack";
		uniformClass="WPEC_CIS_Base_B1_Droid_U";
		identityTypes[]=
		{
			"lsd_voice_b1Droid"
		};
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\characters\DroidArmor\data\b1_co.paa"
		};
		LinkedItems[]=
		{
			"ItemMap",
			"WPEC_NVG_chip",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		Weapons[]=
		{
			"WPEC_CIS_E5",
			"WPEC_CIS_RG4D_Pistol",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"WPEC_CIS_E5",
			"WPEC_CIS_RG4D_Pistol",
			"Throw",
			"Put"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"WPEC_NVG_chip",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		Magazines[]=
		{
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_RG4D_Pistol_mag",
			"WPEC_CIS_RG4D_Pistol_mag",
			"WPEC_CIS_RG4D_Pistol_mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};
		respawnMagazines[]=
		{
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_RG4D_Pistol_mag",
			"WPEC_CIS_RG4D_Pistol_mag",
			"WPEC_CIS_RG4D_Pistol_mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};
		class HitPoints: HitPoints
		{
			class HitFace
			{
				armor=2;
				material=-1;
				name="face_hub";
				passThrough=0.80000001;
				radius=0.079999998;
				explosionShielding=0.1;
				minimalHit=0.0099999998;
			};
			class HitNeck: HitFace
			{
				armor=2;
				material=-1;
				name="neck";
				passThrough=0.80000001;
				radius=0.1;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
			};
			class HitHead: HitNeck
			{
				armor=2;
				material=-1;
				name="head";
				passThrough=0.80000001;
				radius=0.2;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
				depends="HitFace max HitNeck";
			};
			class HitPelvis: HitHead
			{
				armor=8;
				material=-1;
				name="pelvis";
				passThrough=0.80000001;
				radius=0.23999999;
				explosionShielding=3;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="";
			};
			class HitAbdomen: HitPelvis
			{
				armor=6;
				material=-1;
				name="spine1";
				passThrough=0.80000001;
				radius=0.16;
				explosionShielding=3;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor=6;
				material=-1;
				name="spine2";
				passThrough=0.33000001;
				radius=0.18000001;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitChest: HitDiaphragm
			{
				armor=8;
				material=-1;
				name="spine3";
				passThrough=0.33000001;
				radius=0.18000001;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitBody: HitChest
			{
				armor=1000;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms: HitBody
			{
				armor=6;
				material=-1;
				name="arms";
				passThrough=1;
				radius=0.1;
				explosionShielding=3;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="0";
			};
			class HitHands: HitArms
			{
				armor=6;
				material=-1;
				name="hands";
				passThrough=1;
				radius=0.1;
				explosionShielding=1;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="HitArms";
			};
			class HitLegs: HitHands
			{
				armor=6;
				material=-1;
				name="legs";
				passThrough=1;
				radius=0.14;
				explosionShielding=3;
				visual="injury_legs";
				minimalHit=0.0099999998;
				depends="0";
			};
			class Incapacitated: HitLegs
			{
				armor=1000;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding=3;
				visual="";
				minimalHit=0;
				depends="(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
			class HitLeftArm
			{
				armor=6;
				material=-1;
				name="hand_l";
				passThrough=1;
				radius=0.079999998;
				explosionShielding=3;
				visual="injury_hands";
				minimalHit=0.0099999998;
			};
			class HitRightArm: HitLeftArm
			{
				name="hand_r";
			};
			class HitLeftLeg
			{
				armor=6;
				material=-1;
				name="leg_l";
				passThrough=1;
				radius=0.1;
				explosionShielding=3;
				visual="injury_legs";
				minimalHit=0.0099999998;
			};
			class HitRightLeg: HitLeftLeg
			{
				name="leg_r";
			};
		};
		armor=2;
		armorStructural=4;
		explosionShielding=0.40000001;
		minTotalDamageThreshold=0.001;
		impactDamageMultiplier=0.5;
	};
	class WPEC_CIS_B1_Droid_AA: WPEC_CIS_Base_B1_Droid
	{
		author="WPEC Dev";
		scope=2;
		displayName="B1 Anti-Air Droid";
		editorPreview="\MRC\JLTS\characters\DroidArmor\data\ui\editorPreviews\JLTS_Droid_B1_Marine.jpg";
		faction="WPEC_CIS";
		editorSubcategory="WPEC_CIS_inf";
		identityTypes[]=
		{
			"lsd_voice_b1Droid"
		};
		uniformClass="WPEC_CIS_B1_Droid_AA_U";
		backpack="WPEC_CIS_B1_backpack";
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\characters\DroidArmor\data\b1_co.paa"
		};
		linkedItems[]=
		{
			"ItemMap",
			"WPEC_NVG_chip",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"WPEC_NVG_chip",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"WPEC_CIS_E5",
			"WPEC_CIS_E60R_AA",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"WPEC_CIS_E5",
			"WPEC_CIS_E60R_AA",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_mag_E60R_AA",
			"SmokeShell",
			"SmokeShellGreen"
		};
		respawnMagazines[]=
		{
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_mag_E60R_AA",
			"SmokeShell",
			"SmokeShellGreen"
		};
	};
	class WPEC_CIS_B1_Droid_Heavy_AA: WPEC_CIS_Base_B1_Droid
	{
		author="WPEC Dev";
		scope=2;
		displayName="B1 Heavy AA Droid";
		editorPreview="\MRC\JLTS\characters\DroidArmor\data\ui\editorPreviews\JLTS_Droid_B1_Marine.jpg";
		faction="WPEC_CIS";
		editorSubcategory="WPEC_CIS_inf";
		identityTypes[]=
		{
			"lsd_voice_b1Droid"
		};
		uniformClass="WPEC_CIS_B1_Droid_AA_U";
		backpack="WPEC_CIS_B1_backpack";
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\characters\DroidArmor\data\b1_co.paa"
		};
		linkedItems[]=
		{
			"ItemMap",
			"WPEC_NVG_chip",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"WPEC_NVG_chip",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"WPEC_CIS_E5",
			"WPEC_CIS_E60R_AA",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"WPEC_CIS_E5",
			"WPEC_CIS_E60R_AA",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_mag_E60R_Heavy_AA",
			"SmokeShell",
			"SmokeShellGreen"
		};
		respawnMagazines[]=
		{
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_mag_E60R_Heavy_AA",
			"SmokeShell",
			"SmokeShellGreen"
		};
	};
	class WPEC_CIS_B1_Droid_AT: WPEC_CIS_Base_B1_Droid
	{
		author="WPEC Dev";
		scope=2;
		displayName="B1 AT Droid";
		editorPreview="\MRC\JLTS\characters\DroidArmor\data\ui\editorPreviews\JLTS_Droid_B1_Marine.jpg";
		faction="WPEC_CIS";
		editorSubcategory="WPEC_CIS_inf";
		uniformClass="WPEC_CIS_B1_Droid_AT_U";
		identityTypes[]=
		{
			"lsd_voice_b1Droid"
		};
		backpack="WPEC_CIS_B1_backpack";
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\characters\DroidArmor\data\b1_co.paa"
		};
		linkedItems[]=
		{
			"ItemMap",
			"WPEC_NVG_chip",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"WPEC_NVG_chip",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"WPEC_CIS_E5",
			"WPEC_CIS_E60R_AT",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"WPEC_CIS_E5",
			"WPEC_CIS_E60R_AT",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_mag_E60R_AT",
			"SmokeShell",
			"SmokeShellGreen"
		};
		respawnMagazines[]=
		{
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_mag_E60R_AT",
			"SmokeShell",
			"SmokeShellGreen"
		};
	};
	class WPEC_CIS_B1_Droid_Sniper: WPEC_CIS_Base_B1_Droid
	{
		author="WPEC Dev";
		scope=2;
		displayName="B1 Sniper Droid";
		editorPreview="\MRC\JLTS\characters\DroidArmor\data\ui\editorPreviews\JLTS_Droid_B1_Sniper.jpg";
		icon="JLTS_iconManSniper";
		faction="WPEC_CIS";
		editorSubcategory="WPEC_CIS_inf";
		identityTypes[]=
		{
			"lsd_voice_b1Droid"
		};
		uniformClass="WPEC_CIS_B1_Droid_Sniper_U";
		backpack="WPEC_CIS_B1_backpack";
		model="\MRC\JLTS\characters\DroidArmor\DroidUniformB1.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\characters\DroidArmor\data\b1_co.paa"
		};
		linkedItems[]=
		{
			"ItemMap",
			"WPEC_NVG_chip",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"WPEC_NVG_chip",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"WPEC_CIS_E5S_Sniper",
			"WPEC_CIS_RG4D_Pistol",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"WPEC_CIS_E5S_Sniper",
			"WPEC_CIS_RG4D_Pistol",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"WPEC_CIS_E5S_Sniper_Mag",
			"WPEC_CIS_E5S_Sniper_Mag",
			"WPEC_CIS_E5S_Sniper_Mag",
			"WPEC_CIS_E5S_Sniper_Mag",
			"WPEC_CIS_E5S_Sniper_Mag",
			"WPEC_CIS_RG4D_Pistol_mag",
			"WPEC_CIS_RG4D_Pistol_mag",
			"WPEC_CIS_RG4D_Pistol_mag",
			"SmokeShell",
			"SmokeShellGreen"
		};
		respawnMagazines[]=
		{
			"WPEC_CIS_E5S_Sniper_Mag",
			"WPEC_CIS_E5S_Sniper_Mag",
			"WPEC_CIS_E5S_Sniper_Mag",
			"WPEC_CIS_E5S_Sniper_Mag",
			"WPEC_CIS_E5S_Sniper_Mag",
			"WPEC_CIS_RG4D_Pistol_mag",
			"WPEC_CIS_RG4D_Pistol_mag",
			"WPEC_CIS_RG4D_Pistol_mag",
			"SmokeShell",
			"SmokeShellGreen"
		};
	};
	class WPEC_CIS_B1_Droid_Shotgun: WPEC_CIS_Base_B1_Droid
	{
		author="WPEC Dev";
		scope=2;
		faction="WPEC_CIS";
		editorSubcategory="WPEC_CIS_inf";
		displayName="B1 Shotgun Droid";
		backpack="WPEC_CIS_B1_backpack";
		uniformClass="WPEC_CIS_B1_Droid_Shotgun_U";
		editorPreview="\MRC\JLTS\characters\DroidArmor\data\ui\editorPreviews\JLTS_Droid_B1_SBB3.jpg";
		identityTypes[]=
		{
			"lsd_voice_b1Droid"
		};
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\characters\DroidArmor\data\b1_co.paa"
		};
		LinkedItems[]=
		{
			"ItemMap",
			"WPEC_NVG_chip",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"WPEC_NVG_chip",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"JLTS_SBB3",
			"WPEC_CIS_RG4D_Pistol",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"JLTS_SBB3",
			"WPEC_CIS_RG4D_Pistol",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"JLTS_SBB3_mag",
			"JLTS_SBB3_mag",
			"JLTS_SBB3_mag",
			"JLTS_SBB3_mag",
			"JLTS_SBB3_mag",
			"JLTS_SBB3_mag",
			"JLTS_SBB3_mag",
			"JLTS_SBB3_mag",
			"JLTS_SBB3_mag",
			"JLTS_SBB3_mag",
			"WPEC_CIS_RG4D_Pistol_mag",
			"WPEC_CIS_RG4D_Pistol_mag",
			"WPEC_CIS_RG4D_Pistol_mag",
			"SmokeShell",
			"SmokeShellGreen"
		};
		respawnMagazines[]=
		{
			"JLTS_SBB3_mag",
			"JLTS_SBB3_mag",
			"JLTS_SBB3_mag",
			"JLTS_SBB3_mag",
			"JLTS_SBB3_mag",
			"JLTS_SBB3_mag",
			"JLTS_SBB3_mag",
			"JLTS_SBB3_mag",
			"JLTS_SBB3_mag",
			"JLTS_SBB3_mag",
			"WPEC_CIS_RG4D_Pistol_mag",
			"WPEC_CIS_RG4D_Pistol_mag",
			"WPEC_CIS_RG4D_Pistol_mag",
			"SmokeShell",
			"SmokeShellGreen"
		};
	};
	class WPEC_CIS_B1_Droid_Heavy: WPEC_CIS_Base_B1_Droid
	{
		author="WPEC Dev";
		scope=2;
		faction="WPEC_CIS";
		editorSubcategory="WPEC_CIS_inf";
		editorPreview="\MRC\JLTS\characters\DroidArmor\data\ui\editorPreviews\JLTS_Droid_B1_E5.jpg";
		displayName="B1 Heavy Droid";
		uniformClass="WPEC_CIS_B1_Droid_Heavy_U";
		backpack="WPEC_CIS_B1_backpack";
		identityTypes[]=
		{
			"lsd_voice_b1Droid"
		};
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\characters\DroidArmor\data\b1_co.paa"
		};
		LinkedItems[]=
		{
			"ItemMap",
			"WPEC_NVG_chip",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"WPEC_NVG_chip",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"WPEC_CIS_E5C_Auto",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"WPEC_CIS_E5C_Auto",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"WPEC_CIS_E5C_Auto_mag",
			"WPEC_CIS_E5C_Auto_mag",
			"WPEC_CIS_E5C_Auto_mag",
			"WPEC_CIS_E5C_Auto_mag",
			"WPEC_CIS_E5C_Auto_mag",
			"WPEC_CIS_E5C_Auto_mag",
			"WPEC_CIS_E5C_Auto_mag",
			"WPEC_CIS_E5C_Auto_mag"
		};
		respawnMagazines[]=
		{
			"WPEC_CIS_E5C_Auto_mag",
			"WPEC_CIS_E5C_Auto_mag",
			"WPEC_CIS_E5C_Auto_mag",
			"WPEC_CIS_E5C_Auto_mag",
			"WPEC_CIS_E5C_Auto_mag",
			"WPEC_CIS_E5C_Auto_mag",
			"WPEC_CIS_E5C_Auto_mag",
			"WPEC_CIS_E5C_Auto_mag"
		};
	};
	class WPEC_CIS_B1_Droid_Grenadier: WPEC_CIS_Base_B1_Droid
	{
		author="WPEC Dev";
		scope=2;
		faction="WPEC_CIS";
		editorSubcategory="WPEC_CIS_inf";
		editorPreview="\MRC\JLTS\characters\DroidArmor\data\ui\editorPreviews\JLTS_Droid_B1_E5.jpg";
		displayName="B1 Grenadier Droid";
		uniformClass="WPEC_CIS_B1_Droid_Grenadier_U";
		backpack="WPEC_CIS_B1_backpack";
		identityTypes[]=
		{
			"lsd_voice_b1Droid"
		};
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\characters\DroidArmor\data\b1_co.paa"
		};
		LinkedItems[]=
		{
			"ItemMap",
			"WPEC_NVG_chip",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"WPEC_NVG_chip",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"JLTS_EPL2",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"JLTS_EPL2",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"3AS_6Rnd_RocketGrenades_HE",
			"3AS_6Rnd_RocketGrenades_HE",
			"3AS_6Rnd_RocketGrenades_HE",
			"3AS_6Rnd_RocketGrenades_HE",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
			"HandGrenade",
			"HandGrenade"
		};
		respawnMagazines[]=
		{
			"3AS_6Rnd_RocketGrenades_HE",
			"3AS_6Rnd_RocketGrenades_HE",
			"3AS_6Rnd_RocketGrenades_HE",
			"3AS_6Rnd_RocketGrenades_HE",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
			"HandGrenade",
			"HandGrenade"
		};
	};
	class WPEC_CIS_B1_Droid_Commander: WPEC_CIS_Base_B1_Droid
	{
		author="WPEC Dev";
		scope=2;
		faction="WPEC_CIS";
		editorSubcategory="WPEC_CIS_inf";
		displayName="B1 Commander Droid";
		editorPreview="\MRC\JLTS\characters\DroidArmor\data\ui\editorPreviews\JLTS_Droid_B1_Commander.jpg";
		uniformClass="WPEC_CIS_B1_Droid_Commander_U";
		backpack="WPEC_CIS_B1_antenna_backpack";
		identityTypes[]=
		{
			"lsd_voice_b1Droid"
		};
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\characters\DroidArmor\data\b1_commander_co.paa"
		};
		linkedItems[]=
		{
			"ItemMap",
			"WPEC_NVG_chip",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		Weapons[]=
		{
			"WPEC_CIS_E5",
			"WPEC_CIS_RG4D_Pistol",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"WPEC_CIS_E5",
			"WPEC_CIS_RG4D_Pistol",
			"Throw",
			"Put"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"WPEC_NVG_chip",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		Magazines[]=
		{
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_RG4D_Pistol_mag",
			"WPEC_CIS_RG4D_Pistol_mag",
			"WPEC_CIS_RG4D_Pistol_mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};
		respawnMagazines[]=
		{
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_RG4D_Pistol_mag",
			"WPEC_CIS_RG4D_Pistol_mag",
			"WPEC_CIS_RG4D_Pistol_mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};
	};
	class WPEC_CIS_B1_Droid_Crew: JLTS_Droid_B1_Crew
	{
		author="WPEC Dev";
		scope=2;
		faction="WPEC_CIS";
		editorSubcategory="WPEC_CIS_inf";
		displayName="B1 Crew Droid";
		editorPreview="\MRC\JLTS\characters\DroidArmor\data\ui\editorPreviews\JLTS_Droid_B1_Crew.jpg";
		identityTypes[]=
		{
			"lsd_voice_b1Droid"
		};
		uniformClass="WPEC_CIS_B1_Droid_Crew_U";
		backpack="WPEC_CIS_B1_backpack";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\characters\DroidArmor\data\b1_crew_co.paa"
		};
		linkedItems[]=
		{
			"ItemMap",
			"WPEC_NVG_chip",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"WPEC_NVG_chip",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"WPEC_CIS_E5",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"WPEC_CIS_E5",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};
		respawnMagazines[]=
		{
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};
		items[]={};
		respawnItems[]={};
	};
	class WPEC_CIS_B1_Droid_Security: WPEC_CIS_Base_B1_Droid
	{
		author="WPEC Dev";
		scope=2;
		faction="WPEC_CIS";
		editorSubcategory="WPEC_CIS_inf";
		displayName="B1 Security Droid";
		editorPreview="\MRC\JLTS\characters\DroidArmor\data\ui\editorPreviews\JLTS_Droid_B1_Security.jpg";
		backpack="WPEC_CIS_B1_backpack";
		uniformClass="WPEC_CIS_B1_Droid_Security_U";
		identityTypes[]=
		{
			"lsd_voice_b1Droid"
		};
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\characters\DroidArmor\data\b1_security_co.paa"
		};
		LinkedItems[]=
		{
			"ItemMap",
			"WPEC_NVG_chip",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		Weapons[]=
		{
			"WPEC_CIS_E5",
			"WPEC_CIS_RG4D_Pistol",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"WPEC_CIS_E5",
			"WPEC_CIS_RG4D_Pistol",
			"Throw",
			"Put"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"WPEC_NVG_chip",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		Magazines[]=
		{
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_RG4D_Pistol_mag",
			"WPEC_CIS_RG4D_Pistol_mag",
			"WPEC_CIS_RG4D_Pistol_mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};
		respawnMagazines[]=
		{
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_RG4D_Pistol_mag",
			"WPEC_CIS_RG4D_Pistol_mag",
			"WPEC_CIS_RG4D_Pistol_mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};
	};
	class 3AS_CIS_TS_Base;
	class WPEC_CIS_TSeries: 3AS_CIS_TS_Base
	{
		scope=2;
		displayName="T-Series Droid";
		faction="WPEC_CIS";
		editorSubcategory="WPEC_CIS_HVT";
		uniformClass="3AS_U_CIS_TS";
		weapons[]=
		{
			"WPEC_CIS_RG4D_Pistol",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"WPEC_CIS_RG4D_Pistol",
			"Throw",
			"Put"
		};
		Items[]=
		{
			""
		};
		RespawnItems[]=
		{
			""
		};
		magazines[]=
		{
			"WPEC_CIS_RG4D_Pistol_mag",
			"WPEC_CIS_RG4D_Pistol_mag",
			"WPEC_CIS_RG4D_Pistol_mag",
			"WPEC_CIS_RG4D_Pistol_mag",
			"WPEC_CIS_RG4D_Pistol_mag",
			"WPEC_CIS_RG4D_Pistol_mag",
			"WPEC_CIS_RG4D_Pistol_mag",
			"WPEC_CIS_RG4D_Pistol_mag",
			"WPEC_CIS_RG4D_Pistol_mag"
		};
		respawnMagazines[]=
		{
			"WPEC_CIS_RG4D_Pistol_mag",
			"WPEC_CIS_RG4D_Pistol_mag",
			"WPEC_CIS_RG4D_Pistol_mag",
			"WPEC_CIS_RG4D_Pistol_mag",
			"WPEC_CIS_RG4D_Pistol_mag",
			"WPEC_CIS_RG4D_Pistol_mag",
			"WPEC_CIS_RG4D_Pistol_mag",
			"WPEC_CIS_RG4D_Pistol_mag",
			"WPEC_CIS_RG4D_Pistol_mag"
		};
		linkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemGPS",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemGPS",
			"ItemRadio"
		};
	};
	class 3AS_CIS_B2_Base;
	class 3AS_CIS_B2_F: 3AS_CIS_B2_Base
	{
		class HitPoints;
	};
	class WPEC_CIS_B2_Droid: 3AS_CIS_B2_F
	{
		author="WPEC Dev";
		scope=2;
		faction="WPEC_CIS";
		displayName="B2 Standard Droid";
		editorSubcategory="WPEC_CIS_B2";
		uniformClass="3AS_U_CIS_B2";
		model="\3AS\3AS_Characters\Droids\B2\3AS_AB2.p3d";
		linkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"WPEC_NVG_chip",
			"ItemWatch",
			"SWLB_comlink_droid"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"WPEC_NVG_chip",
			"ItemWatch",
			"SWLB_comlink_droid"
		};
		weapons[]=
		{
			"WPEC_CIS_B2_Wrist_Blaster",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"WPEC_CIS_B2_Wrist_Blaster",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"WPEC_CIS_B2_Blaster_Mag",
			"WPEC_CIS_B2_Blaster_Mag",
			"WPEC_CIS_B2_Blaster_Mag",
			"WPEC_CIS_B2_Blaster_Mag",
			"Chemlight_green",
			"Chemlight_green"
		};
		respawnMagazines[]=
		{
			"WPEC_CIS_B2_Blaster_Mag",
			"WPEC_CIS_B2_Blaster_Mag",
			"WPEC_CIS_B2_Blaster_Mag",
			"WPEC_CIS_B2_Blaster_Mag",
			"Chemlight_green",
			"Chemlight_green"
		};
		class HitPoints: HitPoints
		{
			class HitFace
			{
				armor=20;
				material=-1;
				name="face_hub";
				passThrough=0.1;
				radius=0.079999998;
				explosionShielding=1.5;
				minimalHit=0.0099999998;
			};
			class HitNeck: HitFace
			{
				armor=20;
				material=-1;
				name="neck";
				passThrough=0.1;
				radius=0.1;
				explosionShielding=1.5;
				minimalHit=0.0099999998;
			};
			class HitHead: HitNeck
			{
				armor=20;
				material=-1;
				name="head";
				passThrough=0.1;
				radius=0.2;
				explosionShielding=1.5;
				minimalHit=0.0099999998;
				depends="HitFace max HitNeck";
			};
			class HitPelvis
			{
				armor=20;
				material=-1;
				name="pelvis";
				passThrough=0.1;
				radius=0.2;
				explosionShielding=2;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitAbdomen: HitPelvis
			{
				armor=20;
				material=-1;
				name="spine1";
				passThrough=0.1;
				radius=0.15000001;
				explosionShielding=2;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor=20;
				material=-1;
				name="spine2";
				passThrough=0.1;
				radius=0.15000001;
				explosionShielding=2;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitChest: HitDiaphragm
			{
				armor=20;
				material=-1;
				name="spine3";
				passThrough=0.1;
				radius=0.15000001;
				explosionShielding=2;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitBody: HitChest
			{
				armor=2000;
				material=-1;
				name="body";
				passThrough=0.1;
				radius=0.16;
				explosionShielding=2;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms
			{
				armor=40;
				material=-1;
				name="arms";
				passThrough=0.1;
				radius=0.1;
				explosionShielding=2;
				visual="injury_hands";
				minimalHit=0.0099999998;
			};
			class HitHands: HitArms
			{
				armor=40;
				material=-1;
				name="hands";
				passThrough=0.1;
				radius=0.1;
				explosionShielding=2;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="HitArms";
			};
			class HitLegs
			{
				armor=40;
				material=-1;
				name="legs";
				passThrough=0.1;
				radius=0.12;
				explosionShielding=2;
				visual="injury_legs";
				minimalHit=0.0099999998;
			};
			class HitLeftArm
			{
				armor=40;
				material=-1;
				name="hand_l";
				passThrough=0.1;
				radius=0.1;
				explosionShielding=2;
				visual="injury_hands";
				minimalHit=0.0099999998;
			};
			class HitRightArm: HitLeftArm
			{
				armor=40;
				name="hand_r";
			};
			class HitLeftLeg
			{
				armor=40;
				material=-1;
				name="leg_l";
				passThrough=0.1;
				radius=0.1;
				explosionShielding=2;
				visual="injury_hands";
				minimalHit=0.0099999998;
			};
			class HitRightLeg: HitLeftLeg
			{
				armor=40;
				name="leg_r";
			};
		};
		armor=150;
		armorStructural=4;
		explosionShielding=4;
		minTotalDamageThreshold=0.001;
		impactDamageMultiplier=0.5;
	};
	class ls_droid_b2;
	class WBK_B2_Mod_Standart: ls_droid_b2
	{
		class HitPoints;
	};
	class WPEC_CIS_B2_Droid_Super: WBK_B2_Mod_Standart
	{
		author="WPEC Dev";
		scope=2;
		faction="WPEC_CIS";
		displayName="B2 Super Droid (GL)";
		editorSubcategory="WPEC_CIS_B2";
		uniformClass="lsd_cis_b2Droid_uniform";
		model="\lsd_armor_redfor\uniform\cis\b2\lsd_cis_b2_uniform.p3d";
		linkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"WPEC_NVG_chip",
			"ItemWatch",
			"SWLB_comlink_droid"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"WPEC_NVG_chip",
			"ItemWatch",
			"SWLB_comlink_droid"
		};
		weapons[]=
		{
			"WPEC_CIS_B2_Wrist_Blaster",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"WPEC_CIS_B2_Wrist_Blaster",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"WPEC_CIS_B2_R_Mag",
			"WPEC_CIS_B2_R_Mag",
			"WPEC_CIS_B2_Blaster_Mag",
			"WPEC_CIS_B2_Blaster_Mag",
			"WPEC_CIS_B2_Blaster_Mag",
			"WPEC_CIS_B2_Blaster_Mag",
			"Chemlight_green",
			"Chemlight_green"
		};
		respawnMagazines[]=
		{
			"WPEC_CIS_B2_R_Mag",
			"WPEC_CIS_B2_R_Mag",
			"WPEC_CIS_B2_Blaster_Mag",
			"WPEC_CIS_B2_Blaster_Mag",
			"WPEC_CIS_B2_Blaster_Mag",
			"WPEC_CIS_B2_Blaster_Mag",
			"Chemlight_green",
			"Chemlight_green"
		};
		items[]={};
		respawnItems[]={};
		hiddenSelections[]=
		{
			"camo_arms",
			"legs",
			"torso"
		};
		hiddenSelectionsTextures[]=
		{
			"lsd_armor_redfor\uniform\cis\b2\data\arms_co.paa",
			"lsd_armor_redfor\uniform\cis\b2\data\legs_co.paa",
			"lsd_armor_redfor\uniform\cis\b2\data\torso_co.paa"
		};
		class HitPoints: HitPoints
		{
			class HitFace
			{
				armor=150;
				material=-1;
				name="face_hub";
				passThrough=0.80000001;
				radius=0.079999998;
				explosionShielding=0.1;
				minimalHit=0.0099999998;
			};
			class HitNeck: HitFace
			{
				armor=150;
				material=-1;
				name="neck";
				passThrough=0.80000001;
				radius=0.1;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
			};
			class HitHead: HitNeck
			{
				armor=120;
				material=-1;
				name="head";
				passThrough=0.80000001;
				radius=0.2;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
				depends="HitFace max HitNeck";
			};
			class HitPelvis: HitHead
			{
				armor=120;
				material=-1;
				name="pelvis";
				passThrough=0.80000001;
				radius=0.23999999;
				explosionShielding=1;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="0";
			};
			class HitAbdomen: HitPelvis
			{
				armor=150;
				material=-1;
				name="spine1";
				passThrough=0.80000001;
				radius=0.2;
				explosionShielding=1;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor=150;
				material=-1;
				name="spine2";
				passThrough=0.80000001;
				radius=0.30000001;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitChest: HitDiaphragm
			{
				armor=150;
				material=-1;
				name="spine3";
				passThrough=0.80000001;
				radius=0.5;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitSensor: HitChest
			{
				armor=150;
				radius=0.1;
				name="sensor_hit";
			};
			class HitBody: HitChest
			{
				armor=240;
				material=-1;
				name="body";
				passThrough=1;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms: HitBody
			{
				armor=150;
				material=-1;
				name="arms";
				passThrough=1;
				radius=0.1;
				explosionShielding=1;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="0";
			};
			class HitHands: HitArms
			{
				armor=300;
				material=-1;
				name="hands";
				passThrough=1;
				radius=0.1;
				explosionShielding=1;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="HitArms";
			};
			class HitLegs: HitHands
			{
				armor=300;
				material=-1;
				name="legs";
				passThrough=1;
				radius=0.14;
				explosionShielding=1;
				visual="injury_legs";
				minimalHit=0.0099999998;
				depends="0";
			};
			class Incapacitated: HitLegs
			{
				armor=3000;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding=1;
				visual="";
				minimalHit=0;
				depends="(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
			class HitLeftArm
			{
				armor=150;
				material=-1;
				name="hand_l";
				passThrough=1;
				radius=0.079999998;
				explosionShielding=1;
				visual="injury_hands";
				minimalHit=0.0099999998;
			};
			class HitRightArm: HitLeftArm
			{
				name="hand_r";
				armor=150;
			};
			class HitLeftLeg
			{
				armor=150;
				material=-1;
				name="leg_l";
				passThrough=1;
				radius=0.1;
				explosionShielding=1;
				visual="injury_legs";
				minimalHit=0.0099999998;
			};
			class HitRightLeg: HitLeftLeg
			{
				name="leg_r";
			};
			armor=400;
			armorStructural=6;
			explosionShielding=0.40000001;
			minTotalDamageThreshold=0.001;
			impactDamageMultiplier=0.5;
			impactEffectsNoBlood="ImpactMetal";
			impactEffectsBlood="ImpactMetal";
		};
	};
	class WPEC_CIS_B2_Droid_Super_Blaster: WBK_B2_Mod_Standart
	{
		author="WPEC Dev";
		scope=2;
		faction="WPEC_CIS";
		displayName="B2 Super Droid (Standard)";
		editorSubcategory="WPEC_CIS_B2";
		uniformClass="lsd_cis_b2Droid_uniform";
		model="\lsd_armor_redfor\uniform\cis\b2\lsd_cis_b2_uniform.p3d";
		linkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"WPEC_NVG_chip",
			"ItemWatch",
			"SWLB_comlink_droid"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"WPEC_NVG_chip",
			"ItemWatch",
			"SWLB_comlink_droid"
		};
		weapons[]=
		{
			"WPEC_CIS_B2_Wrist_Blaster",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"WPEC_CIS_B2_Wrist_Blaster",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"WPEC_CIS_B2_Blaster_Mag",
			"WPEC_CIS_B2_Blaster_Mag",
			"WPEC_CIS_B2_Blaster_Mag",
			"WPEC_CIS_B2_Blaster_Mag",
			"Chemlight_green",
			"Chemlight_green"
		};
		respawnMagazines[]=
		{
			"WPEC_CIS_B2_Blaster_Mag",
			"WPEC_CIS_B2_Blaster_Mag",
			"WPEC_CIS_B2_Blaster_Mag",
			"WPEC_CIS_B2_Blaster_Mag",
			"Chemlight_green",
			"Chemlight_green"
		};
		items[]={};
		respawnItems[]={};
		hiddenSelections[]=
		{
			"camo_arms",
			"legs",
			"torso"
		};
		hiddenSelectionsTextures[]=
		{
			"lsd_armor_redfor\uniform\cis\b2\data\arms_co.paa",
			"lsd_armor_redfor\uniform\cis\b2\data\legs_co.paa",
			"lsd_armor_redfor\uniform\cis\b2\data\torso_co.paa"
		};
		class HitPoints: HitPoints
		{
			class HitFace
			{
				armor=150;
				material=-1;
				name="face_hub";
				passThrough=0.80000001;
				radius=0.079999998;
				explosionShielding=0.1;
				minimalHit=0.0099999998;
			};
			class HitNeck: HitFace
			{
				armor=150;
				material=-1;
				name="neck";
				passThrough=0.80000001;
				radius=0.1;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
			};
			class HitHead: HitNeck
			{
				armor=120;
				material=-1;
				name="head";
				passThrough=0.80000001;
				radius=0.2;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
				depends="HitFace max HitNeck";
			};
			class HitPelvis: HitHead
			{
				armor=120;
				material=-1;
				name="pelvis";
				passThrough=0.80000001;
				radius=0.23999999;
				explosionShielding=1;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="0";
			};
			class HitAbdomen: HitPelvis
			{
				armor=150;
				material=-1;
				name="spine1";
				passThrough=0.80000001;
				radius=0.2;
				explosionShielding=1;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor=150;
				material=-1;
				name="spine2";
				passThrough=0.80000001;
				radius=0.30000001;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitChest: HitDiaphragm
			{
				armor=150;
				material=-1;
				name="spine3";
				passThrough=0.80000001;
				radius=0.5;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitSensor: HitChest
			{
				armor=150;
				radius=0.1;
				name="sensor_hit";
			};
			class HitBody: HitChest
			{
				armor=240;
				material=-1;
				name="body";
				passThrough=1;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms: HitBody
			{
				armor=150;
				material=-1;
				name="arms";
				passThrough=1;
				radius=0.1;
				explosionShielding=1;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="0";
			};
			class HitHands: HitArms
			{
				armor=300;
				material=-1;
				name="hands";
				passThrough=1;
				radius=0.1;
				explosionShielding=1;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="HitArms";
			};
			class HitLegs: HitHands
			{
				armor=300;
				material=-1;
				name="legs";
				passThrough=1;
				radius=0.14;
				explosionShielding=1;
				visual="injury_legs";
				minimalHit=0.0099999998;
				depends="0";
			};
			class Incapacitated: HitLegs
			{
				armor=3000;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding=1;
				visual="";
				minimalHit=0;
				depends="(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
			class HitLeftArm
			{
				armor=150;
				material=-1;
				name="hand_l";
				passThrough=1;
				radius=0.079999998;
				explosionShielding=1;
				visual="injury_hands";
				minimalHit=0.0099999998;
			};
			class HitRightArm: HitLeftArm
			{
				name="hand_r";
				armor=150;
			};
			class HitLeftLeg
			{
				armor=150;
				material=-1;
				name="leg_l";
				passThrough=1;
				radius=0.1;
				explosionShielding=1;
				visual="injury_legs";
				minimalHit=0.0099999998;
			};
			class HitRightLeg: HitLeftLeg
			{
				name="leg_r";
			};
			armor=400;
			armorStructural=6;
			explosionShielding=0.40000001;
			minTotalDamageThreshold=0.001;
			impactDamageMultiplier=0.5;
			impactEffectsNoBlood="ImpactMetal";
			impactEffectsBlood="ImpactMetal";
		};
	};
	class ls_redforDroid_base;
	class lsd_cis_bxDroid_base: ls_redforDroid_base
	{
		class HitPoints;
	};
	class lsd_cis_bxdroid_specops: lsd_cis_bxDroid_base
	{
		class HitPoints;
	};
	class lsd_cis_bxCaptain_specops: lsd_cis_bxdroid_specops
	{
		class HitPoints;
	};
	class lsd_cis_bxAssassin_specops: lsd_cis_bxdroid_specops
	{
		class HitPoints;
	};
	class lsd_cis_bxSecurity_specops: lsd_cis_bxdroid_specops
	{
		class HitPoints;
	};
	class WBK_BX_Assasin_1: lsd_cis_bxdroid_specops
	{
		class HitPoints;
	};
	class WPEC_CIS_BX_Base: WBK_BX_Assasin_1
	{
		scope=2;
		scopeCurator=2;
		displayName="BX Droid Commando";
		editorSubcategory="WPEC_CIS_Special";
		vehicleClass="WPEC_CIS_Special";
		side=0;
		faction="WPEC_CIS";
		identityTypes[]=
		{
			"LanguageENG_F",
			"ls_head_bxDroid"
		};
		facewear="";
		backpack="";
		uniformClass="lsd_cis_bxDroid_uniform";
		LinkedItems[]=
		{
			"ItemMap",
			"WPEC_CIS_BX_Vest",
			"WPEC_NVG_chip",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"WPEC_CIS_BX_Vest",
			"WPEC_NVG_chip",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"WPEC_CIS_E5",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"WPEC_CIS_E5",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag"
		};
		respawnMagazines[]=
		{
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag"
		};
		items[]={};
		respawnItems[]={};
		class HitPoints: HitPoints
		{
			class HitFace
			{
				armor=10;
				material=-1;
				name="face_hub";
				passThrough=0.90000004;
				radius=0.079999998;
				explosionShielding=0.1;
				minimalHit=0.0099999998;
			};
			class HitNeck: HitFace
			{
				armor=10;
				material=-1;
				name="neck";
				passThrough=0.90000004;
				radius=0.1;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
			};
			class HitHead: HitNeck
			{
				armor=10;
				material=-1;
				name="head";
				passThrough=0.90000004;
				radius=0.2;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
				depends="HitFace max HitNeck";
			};
			class HitPelvis: HitHead
			{
				armor=75;
				material=-1;
				name="pelvis";
				passThrough=0.80000001;
				radius=0.23999999;
				explosionShielding=3;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="";
			};
			class HitAbdomen: HitPelvis
			{
				armor=75;
				material=-1;
				name="spine1";
				passThrough=0.80000001;
				radius=0.16;
				explosionShielding=3;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor=75;
				material=-1;
				name="spine2";
				passThrough=0.33000001;
				radius=0.18000001;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitChest: HitDiaphragm
			{
				armor=75;
				material=-1;
				name="spine3";
				passThrough=0.33000001;
				radius=0.18000001;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitBody: HitChest
			{
				armor=2000;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding=86;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms: HitBody
			{
				armor=75;
				material=-1;
				name="arms";
				passThrough=1;
				radius=0.1;
				explosionShielding=3;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="0";
			};
			class HitHands: HitArms
			{
				armor=75;
				material=-1;
				name="hands";
				passThrough=1;
				radius=0.1;
				explosionShielding=1;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="HitArms";
			};
			class HitLegs: HitHands
			{
				armor=75;
				material=-1;
				name="legs";
				passThrough=1;
				radius=0.14;
				explosionShielding=3;
				visual="injury_legs";
				minimalHit=0.0099999998;
				depends="0";
			};
			class Incapacitated: HitLegs
			{
				armor=2000;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding=3;
				visual="";
				minimalHit=0;
				depends="(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
			class HitLeftArm
			{
				armor=75;
				material=-1;
				name="hand_l";
				passThrough=1;
				radius=0.079999998;
				explosionShielding=3;
				visual="injury_hands";
				minimalHit=0.0099999998;
			};
			class HitRightArm: HitLeftArm
			{
				name="hand_r";
			};
			class HitLeftLeg
			{
				armor=75;
				material=-1;
				name="leg_l";
				passThrough=1;
				radius=0.1;
				explosionShielding=3;
				visual="injury_legs";
				minimalHit=0.0099999998;
			};
			class HitRightLeg: HitLeftLeg
			{
				name="leg_r";
			};
		};
		armor=5;
		armorStructural=5;
		explosionShielding=0.60000002;
		minTotalDamageThreshold=0.001;
		impactDamageMultiplier=0.5;
		impactEffectsBlood="ImpactMetal";
		impactEffectsNoBlood="ImpactPlastic";
		canBleed=0;
	};
	class WPEC_CIS_BX_Lead: WPEC_CIS_BX_Base
	{
		scope=2;
		scopeCurator=2;
		displayName="BX Droid Commander";
		editorSubcategory="WPEC_CIS_Special";
		vehicleClass="WPEC_CIS_Special";
		side=0;
		faction="WPEC_CIS";
		uniformClass="lsd_cis_bxCaptainDroid_uniform";
		identityTypes[]=
		{
			"LanguageENG_F",
			"ls_head_bxDroid"
		};
		facewear="";
		LinkedItems[]=
		{
			"ItemMap",
			"WPEC_CIS_BX_Vest",
			"WPEC_NVG_chip",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"WPEC_CIS_BX_Vest",
			"WPEC_NVG_chip",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"WPEC_CIS_E5",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"WPEC_CIS_E5",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
		};
		respawnMagazines[]=
		{
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
		};
		items[]={};
		respawnItems[]={};
	};
	class WPEC_CIS_B1_Droid_Shield: WPEC_CIS_Base_B1_Droid
	{
		author="WPEC Dev";
		scope=2;
		displayName="B1 E5 Shield";
		editorPreview="\MRC\JLTS\characters\DroidArmor\data\ui\editorPreviews\JLTS_Droid_B1_Marine.jpg";
		faction="WPEC_CIS";
		editorSubcategory="WPEC_CIS_inf";
		identityTypes[]=
		{
			"lsd_voice_b1Droid"
		};
		uniformClass="WPEC_CIS_B1_Droid_Shield_U";
		backpack="WPEC_CIS_B1_backpack";
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\characters\DroidArmor\data\b1_co.paa"
		};
		linkedItems[]=
		{
			"ItemMap",
			"WPEC_NVG_chip",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"WPEC_NVG_chip",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"WPEC_CIS_E5_Shield",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"WPEC_CIS_E5_Shield",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"SmokeShell",
			"SmokeShellGreen"
		};
		respawnMagazines[]=
		{
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"SmokeShell",
			"SmokeShellGreen"
		};
	};
	class WPEC_CIS_BX_Sniper: WPEC_CIS_BX_Base
	{
		scope=2;
		scopeCurator=2;
		displayName="BX Droid Sniper";
		editorSubcategory="WPEC_CIS_Special";
		vehicleClass="WPEC_CIS_Special";
		side=0;
		faction="WPEC_CIS";
		identityTypes[]=
		{
			"LanguageENG_F",
			"ls_head_bxDroid"
		};
		facewear="";
		uniformClass="lsd_cis_bxDroid_uniform";
		LinkedItems[]=
		{
			"ItemMap",
			"WPEC_CIS_BX_Vest",
			"WPEC_NVG_chip",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"WPEC_CIS_BX_Vest",
			"WPEC_NVG_chip",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"WPEC_CIS_E5S_Sniper",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"WPEC_CIS_E5S_Sniper",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"WPEC_CIS_E5S_Sniper_Mag",
			"WPEC_CIS_E5S_Sniper_Mag",
			"WPEC_CIS_E5S_Sniper_Mag",
			"WPEC_CIS_E5S_Sniper_Mag",
			"WPEC_CIS_E5S_Sniper_Mag"
		};
		respawnMagazines[]=
		{
			"WPEC_CIS_E5S_Sniper_Mag",
			"WPEC_CIS_E5S_Sniper_Mag",
			"WPEC_CIS_E5S_Sniper_Mag",
			"WPEC_CIS_E5S_Sniper_Mag",
			"WPEC_CIS_E5S_Sniper_Mag"
		};
		items[]={};
		respawnItems[]={};
	};
	class WPEC_CIS_BX_Heavy: WPEC_CIS_BX_Base
	{
		scope=2;
		scopeCurator=2;
		displayName="BX Droid Heavy";
		editorSubcategory="WPEC_CIS_Special";
		vehicleClass="WPEC_CIS_Special";
		side=0;
		faction="WPEC_CIS";
		identityTypes[]=
		{
			"LanguageENG_F",
			"ls_head_bxDroid"
		};
		facewear="";
		uniformClass="lsd_cis_bxDroid_uniform";
		LinkedItems[]=
		{
			"ItemMap",
			"WPEC_CIS_BX_Vest",
			"WPEC_NVG_chip",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"WPEC_CIS_BX_Vest",
			"WPEC_NVG_chip",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"WPEC_CIS_E5C_Auto",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"WPEC_CIS_E5C_Auto",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"WPEC_CIS_E5C_Auto_mag",
			"WPEC_CIS_E5C_Auto_mag",
			"WPEC_CIS_E5C_Auto_mag",
			"WPEC_CIS_E5C_Auto_mag",
			"WPEC_CIS_E5C_Auto_mag",
			"WPEC_CIS_E5C_Auto_mag",
			"WPEC_CIS_E5C_Auto_mag",
			"WPEC_CIS_E5C_Auto_mag"
		};
		respawnMagazines[]=
		{
			"WPEC_CIS_E5C_Auto_mag",
			"WPEC_CIS_E5C_Auto_mag",
			"WPEC_CIS_E5C_Auto_mag",
			"WPEC_CIS_E5C_Auto_mag",
			"WPEC_CIS_E5C_Auto_mag",
			"WPEC_CIS_E5C_Auto_mag",
			"WPEC_CIS_E5C_Auto_mag",
			"WPEC_CIS_E5C_Auto_mag"
		};
	};
	class WPEC_CIS_BX_AT: WPEC_CIS_BX_Base
	{
		scope=2;
		scopeCurator=2;
		displayName="BX Droid AT";
		editorSubcategory="WPEC_CIS_Special";
		vehicleClass="WPEC_CIS_Special";
		side=0;
		faction="WPEC_CIS";
		identityTypes[]=
		{
			"LanguageENG_F",
			"ls_head_bxDroid"
		};
		facewear="";
		uniformClass="lsd_cis_bxDroid_uniform";
		linkedItems[]=
		{
			"ItemMap",
			"WPEC_CIS_BX_Vest",
			"WPEC_NVG_chip",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"WPEC_CIS_BX_Vest",
			"WPEC_NVG_chip",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"WPEC_CIS_E5",
			"WPEC_CIS_E60R_AT",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"WPEC_CIS_E5",
			"WPEC_CIS_E60R_AT",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_mag_E60R_AT",
			"SmokeShell",
			"SmokeShellGreen"
		};
		respawnMagazines[]=
		{
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_mag_E60R_AT",
			"SmokeShell",
			"SmokeShellGreen"
		};
	};
	class O_soldier_Melee;
	class O_soldier_Melee_RUSH: O_soldier_Melee
	{
		class HitPoints;
	};
	class WPEC_CIS_BX_Melee: O_soldier_Melee_RUSH
	{
		scope=2;
		scopeCurator=2;
		displayName="BX Droid Melee";
		editorSubcategory="WPEC_CIS_Special";
		vehicleClass="WPEC_CIS_Special";
		side=0;
		faction="WPEC_CIS";
		identityTypes[]=
		{
			"LanguageENG_F",
			"ls_head_bxDroid"
		};
		facewear="";
		backpack="";
		uniformClass="lsd_cis_bxDroid_uniform";
		LinkedItems[]=
		{
			"ItemMap",
			"WPEC_CIS_BX_Vest",
			"WPEC_NVG_chip",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"WPEC_CIS_BX_Vest",
			"WPEC_NVG_chip",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"WBK_Vibroblade_New",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"WBK_Vibroblade_New",
			"Throw",
			"Put"
		};
		magazines[]={};
		respawnMagazines[]={};
		items[]={};
		respawnItems[]={};
		class HitPoints: HitPoints
		{
			class HitFace
			{
				armor=10;
				material=-1;
				name="face_hub";
				passThrough=0.90000004;
				radius=0.079999998;
				explosionShielding=0.1;
				minimalHit=0.0099999998;
			};
			class HitNeck: HitFace
			{
				armor=10;
				material=-1;
				name="neck";
				passThrough=0.90000004;
				radius=0.1;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
			};
			class HitHead: HitNeck
			{
				armor=10;
				material=-1;
				name="head";
				passThrough=0.90000004;
				radius=0.2;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
				depends="HitFace max HitNeck";
			};
			class HitPelvis: HitHead
			{
				armor=75;
				material=-1;
				name="pelvis";
				passThrough=0.80000001;
				radius=0.23999999;
				explosionShielding=3;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="";
			};
			class HitAbdomen: HitPelvis
			{
				armor=75;
				material=-1;
				name="spine1";
				passThrough=0.80000001;
				radius=0.16;
				explosionShielding=3;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor=75;
				material=-1;
				name="spine2";
				passThrough=0.33000001;
				radius=0.18000001;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitChest: HitDiaphragm
			{
				armor=75;
				material=-1;
				name="spine3";
				passThrough=0.33000001;
				radius=0.18000001;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitBody: HitChest
			{
				armor=2000;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding=86;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms: HitBody
			{
				armor=75;
				material=-1;
				name="arms";
				passThrough=1;
				radius=0.1;
				explosionShielding=3;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="0";
			};
			class HitHands: HitArms
			{
				armor=75;
				material=-1;
				name="hands";
				passThrough=1;
				radius=0.1;
				explosionShielding=1;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="HitArms";
			};
			class HitLegs: HitHands
			{
				armor=75;
				material=-1;
				name="legs";
				passThrough=1;
				radius=0.14;
				explosionShielding=3;
				visual="injury_legs";
				minimalHit=0.0099999998;
				depends="0";
			};
			class Incapacitated: HitLegs
			{
				armor=2000;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding=3;
				visual="";
				minimalHit=0;
				depends="(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
			class HitLeftArm
			{
				armor=75;
				material=-1;
				name="hand_l";
				passThrough=1;
				radius=0.079999998;
				explosionShielding=3;
				visual="injury_hands";
				minimalHit=0.0099999998;
			};
			class HitRightArm: HitLeftArm
			{
				name="hand_r";
			};
			class HitLeftLeg
			{
				armor=75;
				material=-1;
				name="leg_l";
				passThrough=1;
				radius=0.1;
				explosionShielding=3;
				visual="injury_legs";
				minimalHit=0.0099999998;
			};
			class HitRightLeg: HitLeftLeg
			{
				name="leg_r";
			};
		};
		armor=5;
		armorStructural=5;
		explosionShielding=0.60000002;
		minTotalDamageThreshold=0.001;
		impactDamageMultiplier=0.5;
		impactEffectsBlood="ImpactMetal";
		impactEffectsNoBlood="ImpactPlastic";
		canBleed=0;
	};
	class WPEC_CIS_BX_Melee_Heavy: O_soldier_Melee_RUSH
	{
		scope=2;
		scopeCurator=2;
		displayName="BX Droid Melee Heavy ";
		editorSubcategory="WPEC_CIS_Special";
		vehicleClass="WPEC_CIS_Special";
		side=0;
		faction="WPEC_CIS";
		identityTypes[]=
		{
			"LanguageENG_F",
			"ls_head_bxDroid"
		};
		facewear="";
		backpack="";
		uniformClass="lsd_cis_bxDroid_uniform";
		LinkedItems[]=
		{
			"ItemMap",
			"WPEC_CIS_BX_Vest",
			"WPEC_NVG_chip",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"WPEC_CIS_BX_Vest",
			"WPEC_NVG_chip",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"demi_sv",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"demi_sv",
			"Throw",
			"Put"
		};
		magazines[]={};
		respawnMagazines[]={};
		items[]={};
		respawnItems[]={};
		class HitPoints: HitPoints
		{
			class HitFace
			{
				armor=10;
				material=-1;
				name="face_hub";
				passThrough=0.90000004;
				radius=0.079999998;
				explosionShielding=0.1;
				minimalHit=0.0099999998;
			};
			class HitNeck: HitFace
			{
				armor=10;
				material=-1;
				name="neck";
				passThrough=0.90000004;
				radius=0.1;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
			};
			class HitHead: HitNeck
			{
				armor=10;
				material=-1;
				name="head";
				passThrough=0.90000004;
				radius=0.2;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
				depends="HitFace max HitNeck";
			};
			class HitPelvis: HitHead
			{
				armor=75;
				material=-1;
				name="pelvis";
				passThrough=0.80000001;
				radius=0.23999999;
				explosionShielding=3;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="";
			};
			class HitAbdomen: HitPelvis
			{
				armor=75;
				material=-1;
				name="spine1";
				passThrough=0.80000001;
				radius=0.16;
				explosionShielding=3;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor=75;
				material=-1;
				name="spine2";
				passThrough=0.33000001;
				radius=0.18000001;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitChest: HitDiaphragm
			{
				armor=75;
				material=-1;
				name="spine3";
				passThrough=0.33000001;
				radius=0.18000001;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitBody: HitChest
			{
				armor=2000;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding=86;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms: HitBody
			{
				armor=75;
				material=-1;
				name="arms";
				passThrough=1;
				radius=0.1;
				explosionShielding=3;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="0";
			};
			class HitHands: HitArms
			{
				armor=75;
				material=-1;
				name="hands";
				passThrough=1;
				radius=0.1;
				explosionShielding=1;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="HitArms";
			};
			class HitLegs: HitHands
			{
				armor=75;
				material=-1;
				name="legs";
				passThrough=1;
				radius=0.14;
				explosionShielding=3;
				visual="injury_legs";
				minimalHit=0.0099999998;
				depends="0";
			};
			class Incapacitated: HitLegs
			{
				armor=2000;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding=3;
				visual="";
				minimalHit=0;
				depends="(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
			class HitLeftArm
			{
				armor=75;
				material=-1;
				name="hand_l";
				passThrough=1;
				radius=0.079999998;
				explosionShielding=3;
				visual="injury_hands";
				minimalHit=0.0099999998;
			};
			class HitRightArm: HitLeftArm
			{
				name="hand_r";
			};
			class HitLeftLeg
			{
				armor=75;
				material=-1;
				name="leg_l";
				passThrough=1;
				radius=0.1;
				explosionShielding=3;
				visual="injury_legs";
				minimalHit=0.0099999998;
			};
			class HitRightLeg: HitLeftLeg
			{
				name="leg_r";
			};
		};
		armor=5;
		armorStructural=5;
		explosionShielding=0.60000002;
		minTotalDamageThreshold=0.001;
		impactDamageMultiplier=0.5;
		impactEffectsBlood="ImpactMetal";
		impactEffectsNoBlood="ImpactPlastic";
		canBleed=0;
	};
	class WPEC_CIS_BX_Shield: WPEC_CIS_BX_Base
	{
		scope=2;
		scopeCurator=2;
		displayName="BX Droid Shield ";
		editorSubcategory="WPEC_CIS_Special";
		vehicleClass="WPEC_CIS_Special";
		side=0;
		faction="WPEC_CIS";
		identityTypes[]=
		{
			"LanguageENG_F",
			"ls_head_bxDroid"
		};
		facewear="";
		backpack="";
		uniformClass="lsd_cis_bxDroid_uniform";
		LinkedItems[]=
		{
			"ItemMap",
			"WPEC_CIS_BX_Vest",
			"WPEC_NVG_chip",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"WPEC_CIS_BX_Vest",
			"WPEC_NVG_chip",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"WPEC_CIS_E5_Shield",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"WPEC_CIS_E5_Shield",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"SmokeShell",
			"SmokeShellGreen"
		};
		respawnMagazines[]=
		{
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"WPEC_CIS_E5_Mag",
			"SmokeShell",
			"SmokeShellGreen"
		};
		items[]={};
		respawnItems[]={};
		class HitPoints: HitPoints
		{
			class HitFace
			{
				armor=10;
				material=-1;
				name="face_hub";
				passThrough=0.90000004;
				radius=0.079999998;
				explosionShielding=0.1;
				minimalHit=0.0099999998;
			};
			class HitNeck: HitFace
			{
				armor=10;
				material=-1;
				name="neck";
				passThrough=0.90000004;
				radius=0.1;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
			};
			class HitHead: HitNeck
			{
				armor=10;
				material=-1;
				name="head";
				passThrough=0.90000004;
				radius=0.2;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
				depends="HitFace max HitNeck";
			};
			class HitPelvis: HitHead
			{
				armor=75;
				material=-1;
				name="pelvis";
				passThrough=0.80000001;
				radius=0.23999999;
				explosionShielding=3;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="";
			};
			class HitAbdomen: HitPelvis
			{
				armor=75;
				material=-1;
				name="spine1";
				passThrough=0.80000001;
				radius=0.16;
				explosionShielding=3;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor=75;
				material=-1;
				name="spine2";
				passThrough=0.33000001;
				radius=0.18000001;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitChest: HitDiaphragm
			{
				armor=75;
				material=-1;
				name="spine3";
				passThrough=0.33000001;
				radius=0.18000001;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitBody: HitChest
			{
				armor=2000;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding=86;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms: HitBody
			{
				armor=75;
				material=-1;
				name="arms";
				passThrough=1;
				radius=0.1;
				explosionShielding=3;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="0";
			};
			class HitHands: HitArms
			{
				armor=75;
				material=-1;
				name="hands";
				passThrough=1;
				radius=0.1;
				explosionShielding=1;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="HitArms";
			};
			class HitLegs: HitHands
			{
				armor=75;
				material=-1;
				name="legs";
				passThrough=1;
				radius=0.14;
				explosionShielding=3;
				visual="injury_legs";
				minimalHit=0.0099999998;
				depends="0";
			};
			class Incapacitated: HitLegs
			{
				armor=2000;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding=3;
				visual="";
				minimalHit=0;
				depends="(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
			class HitLeftArm
			{
				armor=75;
				material=-1;
				name="hand_l";
				passThrough=1;
				radius=0.079999998;
				explosionShielding=3;
				visual="injury_hands";
				minimalHit=0.0099999998;
			};
			class HitRightArm: HitLeftArm
			{
				name="hand_r";
			};
			class HitLeftLeg
			{
				armor=75;
				material=-1;
				name="leg_l";
				passThrough=1;
				radius=0.1;
				explosionShielding=3;
				visual="injury_legs";
				minimalHit=0.0099999998;
			};
			class HitRightLeg: HitLeftLeg
			{
				name="leg_r";
			};
		};
		armor=5;
		armorStructural=5;
		explosionShielding=0.60000002;
		minTotalDamageThreshold=0.001;
		impactDamageMultiplier=0.5;
		impactEffectsBlood="ImpactMetal";
		impactEffectsNoBlood="ImpactPlastic";
		canBleed=0;
	};
	
};
class CfgGroups
{
	class East
	{
		class WPEC_CIS_faction
		{
			name="[WPEC] CIS Groups";
			class B1Infantry
			{
				name="B1 Groups";
				class WPEC_CIS_Command
				{
					name="B1 Command Team";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					faction="WPEC_CIS";
					class Unit0
					{
						side=0;
						vehicle="WPEC_CIS_B1_Droid_Commander";
						rank="MAJOR";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="WPEC_CIS_B1_Droid_Security";
						rank="PRIVATE";
						position[]={0,-3,0};
					};
					class Unit2
					{
						side=0;
						vehicle="WPEC_CIS_B1_Droid_Security";
						rank="PRIVATE";
						position[]={-3,0,0};
					};
				};
				class WPEC_CIS_Base_Duo
				{
					name="B1 Duo";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					faction="WPEC_CIS";
					class Unit0
					{
						side=0;
						vehicle="WPEC_CIS_Base_B1_Droid";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="WPEC_CIS_Base_B1_Droid";
						rank="PRIVATE";
						position[]={0,-3,0};
					};
				};
				class WPEC_CIS_Fireteam
				{
					name="B1 Fire Team";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					faction="WPEC_CIS";
					class Unit0
					{
						side=0;
						vehicle="WPEC_CIS_Base_B1_Droid";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="WPEC_CIS_Base_B1_Droid";
						rank="PRIVATE";
						position[]={0,-3,0};
					};
					class Unit2
					{
						side=0;
						vehicle="WPEC_CIS_Base_B1_Droid";
						rank="PRIVATE";
						position[]={-3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="WPEC_CIS_B1_Droid_Heavy";
						rank="PRIVATE";
						position[]={-6,0,0};
					};
				};
				class WPEC_CIS_Firesquad
				{
					name="B1 Squad";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					faction="WPEC_CIS";
					class Unit0
					{
						side=0;
						vehicle="WPEC_CIS_Base_B1_Droid";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="WPEC_CIS_Base_B1_Droid";
						rank="PRIVATE";
						position[]={0,-3,0};
					};
					class Unit2
					{
						side=0;
						vehicle="WPEC_CIS_Base_B1_Droid";
						rank="PRIVATE";
						position[]={-3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="WPEC_CIS_B1_Droid_Heavy";
						rank="PRIVATE";
						position[]={-6,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="WPEC_CIS_Base_B1_Droid";
						rank="CORPORAL";
						position[]={0,-6,0};
					};
					class Unit5
					{
						side=0;
						vehicle="WPEC_CIS_Base_B1_Droid";
						rank="PRIVATE";
						position[]={0,-9,0};
					};
					class Unit6
					{
						side=0;
						vehicle="WPEC_CIS_Base_B1_Droid";
						rank="PRIVATE";
						position[]={-9,0,0};
					};
					class Unit7
					{
						side=0;
						vehicle="WPEC_CIS_B1_Droid_Heavy";
						rank="PRIVATE";
						position[]={-12,0,0};
					};
				};
				class WPEC_CIS_AT
				{
					name="B1 AT Team";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					faction="WPEC_CIS";
					class Unit0
					{
						side=0;
						vehicle="WPEC_CIS_Base_B1_Droid";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="WPEC_CIS_B1_Droid_AT";
						rank="PRIVATE";
						position[]={-3,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="WPEC_CIS_Base_B1_Droid";
						rank="PRIVATE";
						position[]={-6,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="WPEC_CIS_Base_B1_Droid";
						rank="PRIVATE";
						position[]={0,-3,0};
					};
				};
				class WPEC_CIS_AA
				{
					name="B1 AA Team";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					faction="WPEC_CIS";
					class Unit0
					{
						side=0;
						vehicle="WPEC_CIS_Base_B1_Droid";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="WPEC_CIS_B1_Droid_AA";
						rank="PRIVATE";
						position[]={-3,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="WPEC_CIS_B1_Droid_AA";
						rank="PRIVATE";
						position[]={-6,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="WPEC_CIS_Base_B1_Droid";
						rank="PRIVATE";
						position[]={0,-3,0};
					};
				};
				class WPEC_Heavy_CIS_AA
				{
					name="B1 Heavy Anti-Air Team";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					faction="WPEC_CIS";
					class Unit0
					{
						side=0;
						vehicle="WPEC_CIS_Base_B1_Droid";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="WPEC_CIS_B1_Droid_Heavy_AA";
						rank="PRIVATE";
						position[]={-3,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="WPEC_CIS_B1_Droid_Heavy_AA";
						rank="PRIVATE";
						position[]={-6,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="WPEC_CIS_Base_B1_Droid";
						rank="PRIVATE";
						position[]={0,-3,0};
					};
				};
				class WPEC_CIS_Assault
				{
					name="Assault Squad";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					faction="WPEC_CIS";
					class Unit0
					{
						side=0;
						vehicle="WPEC_CIS_B1_Droid_Commander";
						rank="MAJOR";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="WPEC_CIS_Base_B1_Droid";
						rank="PRIVATE";
						position[]={0,-3,0};
					};
					class Unit2
					{
						side=0;
						vehicle="WPEC_CIS_B2_Droid";
						rank="PRIVATE";
						position[]={-3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="WPEC_CIS_B1_Droid_Heavy";
						rank="PRIVATE";
						position[]={-6,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="WPEC_CIS_Base_B1_Droid";
						rank="CORPORAL";
						position[]={0,-6,0};
					};
					class Unit5
					{
						side=0;
						vehicle="WPEC_CIS_B1_Droid_Sniper";
						rank="PRIVATE";
						position[]={0,-9,0};
					};
					class Unit6
					{
						side=0;
						vehicle="WPEC_CIS_Base_B1_Droid";
						rank="PRIVATE";
						position[]={-9,0,0};
					};
					class Unit7
					{
						side=0;
						vehicle="WPEC_CIS_B1_Droid_Heavy";
						rank="PRIVATE";
						position[]={-12,0,0};
					};
				};
			};
			class B2Infantry
			{
				name="B2 Groups";
				class WPEC_CIS_B2_Assault
				{
					name="B2 Assault Team";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					faction="WPEC_CIS";
					class Unit0
					{
						side=0;
						vehicle="WPEC_CIS_B2_Droid_Super_Blaster";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="WPEC_CIS_B2_Droid";
						rank="PRIVATE";
						position[]={0,-3,0};
					};
					class Unit2
					{
						side=0;
						vehicle="WPEC_CIS_B2_Droid";
						rank="PRIVATE";
						position[]={-3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="WPEC_CIS_B2_Droid";
						rank="PRIVATE";
						position[]={-6,0,0};
					};
				};
				class WPEC_CIS_B2_Duo
				{
					name="B2 Duo";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					faction="WPEC_CIS";
					class Unit0
					{
						side=0;
						vehicle="WPEC_CIS_B2_Droid";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="WPEC_CIS_B2_Droid";
						rank="PRIVATE";
						position[]={0,-3,0};
					};
				};
				class WPEC_CIS_B2_Super_Duo
				{
					name="B2 Super Duo";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					faction="WPEC_CIS";
					class Unit0
					{
						side=0;
						vehicle="WPEC_CIS_B2_Droid_Super_Blaster";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="WPEC_CIS_B2_Droid_Super_Blaster";
						rank="PRIVATE";
						position[]={0,-3,0};
					};
				};
			};
			class BXInfantry
			{
				name="BX Groups";
				class WPEC_CIS_BX_Assault
				{
					name="BX Assault Team";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					faction="WPEC_CIS";
					class Unit0
					{
						side=0;
						vehicle="WPEC_CIS_BX_Lead";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="WPEC_CIS_BX_Base";
						rank="PRIVATE";
						position[]={0,-3,0};
					};
					class Unit2
					{
						side=0;
						vehicle="WPEC_CIS_BX_Base";
						rank="PRIVATE";
						position[]={-3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="WPEC_CIS_BX_Base";
						rank="PRIVATE";
						position[]={-6,0,0};
					};
				};
				class WPEC_CIS_BX_Team
				{
					name="BX Team";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					faction="WPEC_CIS";
					class Unit0
					{
						side=0;
						vehicle="WPEC_CIS_BX_Lead";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="WPEC_CIS_BX_Base";
						rank="PRIVATE";
						position[]={0,-3,0};
					};
					class Unit2
					{
						side=0;
						vehicle="WPEC_CIS_BX_Heavy";
						rank="PRIVATE";
						position[]={-3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="WPEC_CIS_BX_AT";
						rank="PRIVATE";
						position[]={-6,0,0};
					};
				};
				class WPEC_CIS_BX_Sniper_Duo
				{
					name="BX Sniper Duo";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					faction="WPEC_CIS";
					class Unit0
					{
						side=0;
						vehicle="WPEC_CIS_BX_Lead";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="WPEC_CIS_BX_Sniper";
						rank="PRIVATE";
						position[]={0,-3,0};
					};
					class Unit2
					{
						side=0;
						vehicle="WPEC_CIS_BX_Sniper";
						rank="PRIVATE";
						position[]={-3,0,0};
					};
				};
				class WPEC_CIS_BX_Squad
				{
					name="BX Squad";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					faction="WPEC_CIS";
					class Unit0
					{
						side=0;
						vehicle="WPEC_CIS_BX_Lead";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="WPEC_CIS_BX_Base";
						rank="PRIVATE";
						position[]={0,-3,0};
					};
					class Unit2
					{
						side=0;
						vehicle="WPEC_CIS_BX_Base";
						rank="PRIVATE";
						position[]={-3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="WPEC_CIS_BX_Heavy";
						rank="PRIVATE";
						position[]={-6,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="WPEC_CIS_BX_AT";
						rank="CORPORAL";
						position[]={0,-6,0};
					};
					class Unit5
					{
						side=0;
						vehicle="WPEC_CIS_BX_Base";
						rank="PRIVATE";
						position[]={0,-9,0};
					};
					class Unit6
					{
						side=0;
						vehicle="WPEC_CIS_BX_Sniper";
						rank="PRIVATE";
						position[]={-9,0,0};
					};
					class Unit7
					{
						side=0;
						vehicle="WPEC_CIS_BX_Heavy";
						rank="PRIVATE";
						position[]={-12,0,0};
					};
				};
				class WPEC_CIS_BX_Melee_Squad
				{
					name="BX Melee Team";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					faction="WPEC_CIS";
					class Unit0
					{
						side=0;
						vehicle="WPEC_CIS_BX_Melee";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="WPEC_CIS_BX_Melee";
						rank="PRIVATE";
						position[]={0,-3,0};
					};
					class Unit2
					{
						side=0;
						vehicle="WPEC_CIS_BX_Melee";
						rank="PRIVATE";
						position[]={-3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="WPEC_CIS_BX_Melee_Heavy";
						rank="PRIVATE";
						position[]={-6,0,0};
					};
				};
			};
			class MercInfantry
			{
				name="Mercenary Infantry";
				class WPEC_CIS_MercTeam
				{
					name="Mercenary Team";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					faction="WPEC_CIS";
					class Unit0
					{
						side=0;
						vehicle="WPEC_CIS_MercNCO_Unit";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="WPEC_CIS_MercTrooper_Unit";
						rank="PRIVATE";
						position[]={0,-3,0};
					};
					class Unit2
					{
						side=0;
						vehicle="WPEC_CIS_MercTrooper_Unit";
						rank="PRIVATE";
						position[]={-3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="WPEC_CIS_MercHeavy_Unit";
						rank="PRIVATE";
						position[]={-6,0,0};
					};
				};
				class WPEC_CIS_MercCQBTeam
				{
					name="Mercenary CQB Team";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					faction="WPEC_CIS";
					class Unit0
					{
						side=0;
						vehicle="WPEC_CIS_MercNCO_Unit";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="WPEC_CIS_MercLight_Unit";
						rank="PRIVATE";
						position[]={0,-3,0};
					};
					class Unit2
					{
						side=0;
						vehicle="WPEC_CIS_MercLight_Unit";
						rank="PRIVATE";
						position[]={-3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="WPEC_CIS_MercLight_Unit";
						rank="PRIVATE";
						position[]={-6,0,0};
					};
				};
				class WPEC_CIS_MercSniperDuo
				{
					name="Mercenary Sniper Duo";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					faction="WPEC_CIS";
					class Unit0
					{
						side=0;
						vehicle="WPEC_CIS_MercNCO_Unit";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="WPEC_CIS_MercSniper_Unit";
						rank="PRIVATE";
						position[]={0,-3,0};
					};
					class Unit2
					{
						side=0;
						vehicle="WPEC_CIS_MercSniper_Unit";
						rank="PRIVATE";
						position[]={-3,0,0};
					};
				};
				class WPEC_CIS_Mercsquad
				{
					name="Mercenary Squad";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					faction="WPEC_CIS";
					class Unit0
					{
						side=0;
						vehicle="WPEC_CIS_MercNCO_Unit";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="WPEC_CIS_MercLight_Unit";
						rank="PRIVATE";
						position[]={0,-3,0};
					};
					class Unit2
					{
						side=0;
						vehicle="WPEC_CIS_MercTrooper_Unit";
						rank="PRIVATE";
						position[]={-3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="WPEC_CIS_MercHeavy_Unit";
						rank="PRIVATE";
						position[]={-6,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="WPEC_CIS_MercTrooper_Unit";
						rank="CORPORAL";
						position[]={0,-6,0};
					};
					class Unit5
					{
						side=0;
						vehicle="WPEC_CIS_MercTrooper_Unit";
						rank="PRIVATE";
						position[]={0,-9,0};
					};
					class Unit6
					{
						side=0;
						vehicle="WPEC_CIS_MercSniper_Unit";
						rank="PRIVATE";
						position[]={-9,0,0};
					};
					class Unit7
					{
						side=0;
						vehicle="WPEC_CIS_MercHeavy_Unit";
						rank="PRIVATE";
						position[]={-12,0,0};
					};
				};
				class WPEC_CIS_MercHeavyTeam
				{
					name="Mercenary Heavy Team";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					faction="WPEC_CIS";
					class Unit0
					{
						side=0;
						vehicle="WPEC_CIS_MercNCO_Unit";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="WPEC_CIS_MercTrooper_Unit";
						rank="PRIVATE";
						position[]={0,-3,0};
					};
					class Unit2
					{
						side=0;
						vehicle="WPEC_CIS_MercHeavy_Unit";
						rank="PRIVATE";
						position[]={-3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="WPEC_CIS_MercHeavy_Unit";
						rank="PRIVATE";
						position[]={-6,0,0};
					};
				};
			};
			class VultureTeams
			{
				name="Vulture Flights";
				class WPEC_CIS_Vulture_Form
				{
					name="Vulture Formation";
					side=0;
					faction="WPEC_CIS";
					class Unit0
					{
						side=0;
						vehicle="WPEC_CIS_Vulture_Standard";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="WPEC_CIS_Vulture_Standard";
						rank="PRIVATE";
						position[]={0,-20,-20};
					};
					class Unit2
					{
						side=0;
						vehicle="WPEC_CIS_Vulture_Standard";
						rank="PRIVATE";
						position[]={-20,0,-20};
					};
					class Unit3
					{
						side=0;
						vehicle="WPEC_CIS_Vulture_Standard";
						rank="PRIVATE";
						position[]={0,-40,-40};
					};
					class Unit4
					{
						side=0;
						vehicle="WPEC_CIS_Vulture_Standard";
						rank="PRIVATE";
						position[]={-40,0,-40};
					};
				};
				class WPEC_CIS_Vulture_CAS
				{
					name="Vulture Formation CAS";
					side=0;
					faction="WPEC_CIS";
					class Unit0
					{
						side=0;
						vehicle="WPEC_CIS_Vulture_CAS";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="WPEC_CIS_Vulture_CAS";
						rank="PRIVATE";
						position[]={0,-20,-20};
					};
					class Unit2
					{
						side=0;
						vehicle="WPEC_CIS_Vulture_CAS";
						rank="PRIVATE";
						position[]={-20,0,-20};
					};
					class Unit3
					{
						side=0;
						vehicle="WPEC_CIS_Vulture_CAS";
						rank="PRIVATE";
						position[]={0,-40,-40};
					};
					class Unit4
					{
						side=0;
						vehicle="WPEC_CIS_Vulture_CAS";
						rank="PRIVATE";
						position[]={-40,0,-40};
					};
				};
				class WPEC_CIS_Vulture_Hell
				{
					name="Large Vulture Formation";
					side=0;
					faction="WPEC_CIS";
					class Unit0
					{
						side=0;
						vehicle="WPEC_CIS_Vulture_Elite";
						rank="CORPORAL";
						position[]={0,0,50};
					};
					class Unit1
					{
						side=0;
						vehicle="WPEC_CIS_Vulture_Elite";
						rank="PRIVATE";
						position[]={0,20,50};
					};
					class Unit2
					{
						side=0;
						vehicle="WPEC_CIS_Vulture_Standard";
						rank="PRIVATE";
						position[]={20,0,50};
					};
					class Unit3
					{
						side=0;
						vehicle="WPEC_CIS_Vulture_Standard";
						rank="PRIVATE";
						position[]={0,-20,50};
					};
					class Unit4
					{
						side=0;
						vehicle="WPEC_CIS_Vulture_Standard";
						rank="PRIVATE";
						position[]={-20,0,50};
					};
					class Unit5
					{
						side=0;
						vehicle="WPEC_CIS_Vulture_Elite";
						rank="PRIVATE";
						position[]={-20,20,80};
					};
					class Unit6
					{
						side=0;
						vehicle="WPEC_CIS_Vulture_Elite";
						rank="PRIVATE";
						position[]={-20,40,100};
					};
					class Unit7
					{
						side=0;
						vehicle="WPEC_CIS_Vulture_Elite";
						rank="PRIVATE";
						position[]={-20,60,120};
					};
					class Unit8
					{
						side=0;
						vehicle="WPEC_CIS_Vulture_Standard";
						rank="PRIVATE";
						position[]={-20,80,140};
					};
					class Unit9
					{
						side=0;
						vehicle="WPEC_CIS_Vulture_Standard";
						rank="PRIVATE";
						position[]={-20,100,160};
					};
					class Unit10
					{
						side=0;
						vehicle="WPEC_CIS_Vulture_Standard";
						rank="PRIVATE";
						position[]={-40,120,50};
					};
					class Unit11
					{
						side=0;
						vehicle="WPEC_CIS_Vulture_Standard";
						rank="PRIVATE";
						position[]={-60,0,50};
					};
					class Unit12
					{
						side=0;
						vehicle="WPEC_CIS_Vulture_Standard";
						rank="PRIVATE";
						position[]={-80,0,50};
					};
					class Unit13
					{
						side=0;
						vehicle="WPEC_CIS_Vulture_Standard";
						rank="PRIVATE";
						position[]={-100,0,50};
					};
					class Unit14
					{
						side=0;
						vehicle="WPEC_CIS_Vulture_Standard";
						rank="PRIVATE";
						position[]={-120,0,-50};
					};
					class Unit15
					{
						side=0;
						vehicle="WPEC_CIS_Vulture_Standard";
						rank="PRIVATE";
						position[]={-120,30,-100};
					};
					class Unit16
					{
						side=0;
						vehicle="WPEC_CIS_Vulture_Standard";
						rank="PRIVATE";
						position[]={-120,60,-150};
					};
					class Unit17
					{
						side=0;
						vehicle="WPEC_CIS_Vulture_Standard";
						rank="PRIVATE";
						position[]={-120,-30,-200};
					};
					class Unit18
					{
						side=0;
						vehicle="WPEC_CIS_Vulture_Standard";
						rank="PRIVATE";
						position[]={-120,150,-250};
					};
				};
			};
			class ArmouredTeams
			{
				name="Armoured Groups";
				class WPEC_CIS_KAAT_Section
				{
					name="King AAT Section";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_armor.paa";
					faction="WPEC_CIS";
					class Unit0
					{
						side=0;
						vehicle="WPEC_CIS_AAT_Red";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="WPEC_CIS_AAT_CIS";
						rank="PRIVATE";
						position[]={0,-20,-10};
					};
					class Unit2
					{
						side=0;
						vehicle="WPEC_CIS_AAT_CIS";
						rank="PRIVATE";
						position[]={0,20,10};
					};
				};
				class WPEC_CIS_AAT_Section
				{
					name="AAT Platoon";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_armor.paa";
					faction="WPEC_CIS";
					class Unit0
					{
						side=0;
						vehicle="WPEC_CIS_AAT";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="WPEC_CIS_AAT";
						rank="PRIVATE";
						position[]={0,-20,-20};
					};
					class Unit2
					{
						side=0;
						vehicle="WPEC_CIS_AAT";
						rank="CORPORAL";
						position[]={-20,-20,0};
					};
					class Unit3
					{
						side=0;
						vehicle="WPEC_CIS_AAT";
						rank="PRIVATE";
						position[]={20,-20,-20};
					};
				};
				class WPEC_CIS_MIXED_PLATOON
				{
					name="AAT Mixed Platoon";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_armor.paa";
					faction="WPEC_CIS";
					class Unit0
					{
						side=0;
						vehicle="WPEC_CIS_AAT";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="WPEC_CIS_AAT";
						rank="PRIVATE";
						position[]={0,-20,-20};
					};
					class Unit2
					{
						side=0;
						vehicle="WPEC_CIS_GAT";
						rank="CORPORAL";
						position[]={-20,-20,0};
					};
					class Unit3
					{
						side=0;
						vehicle="WPEC_CIS_GAT_Light";
						rank="PRIVATE";
						position[]={20,-20,-20};
					};
				};
				class WPEC_CIS_Snail_Section
				{
					name="Snail Tank Section";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_armor.paa";
					faction="WPEC_CIS";
					class Unit0
					{
						side=0;
						vehicle="WPEC_CIS_Snail";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="WPEC_CIS_Snail";
						rank="PRIVATE";
						position[]={0,-20,-10};
					};
				};
				class WPEC_CIS_HAIL_Platoon
				{
					name="Hailfire Mixed Platoon";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_armor.paa";
					faction="WPEC_CIS";
					class Unit0
					{
						side=0;
						vehicle="WPEC_CIS_AAT";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="WPEC_CIS_GAT_Light";
						rank="PRIVATE";
						position[]={0,-20,-20};
					};
					class Unit2
					{
						side=0;
						vehicle="WPEC_CIS_Hailfire_Standard";
						rank="CORPORAL";
						position[]={-20,-20,0};
					};
					class Unit3
					{
						side=0;
						vehicle="WPEC_CIS_Hailfire_Standard";
						rank="PRIVATE";
						position[]={20,-20,-20};
					};
				};
			};
		};
	};
};
class cfgMods
{
	author="ChaosViking";
	timepacked="1677279925";
};
