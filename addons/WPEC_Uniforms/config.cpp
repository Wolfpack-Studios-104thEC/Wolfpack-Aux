#define _ARMA_

class CfgPatches
{
	class WPEC_Armor
	{
		author = "Queue";
		units[] = {"WPEC_Phase_2_Unit_Base_New","WPEC_Phase_2_Command_Unit_Base_New","WPEC_Phase_2_ARC_Unit_Base_New","WPEC_Phase_2_Unit_Trooper","WPEC_Phase_2_Unit_Trooper_VCT","WPEC_Phase_2_Unit_Trooper_Medic_CSP1","WPEC_Phase_2_Unit_Trooper_Medic_CSP2","WPEC_Phase_2_Unit_Trooper_CSP1","WPEC_Phase_2_Unit_Trooper_CSP2","WPEC_Phase_2_Unit_Trooper_CLC","WPEC_Phase_2_Unit_Trooper_CS","WPEC_Phase_2_Unit_Trooper_Command"};
		weapons[] = {"WPEC_Phase_2_Uniform_Base_New","WPEC_Phase_2_Command_Uniform_Base_New","WPEC_Phase_2_ARC_Uniform_Base_New","WPEC_Phase_2_Uniform_Base_New_CT","WPEC_Phase_2_Uniform_Base_New_VCT","WPEC_Phase_2_Uniform_Base_New_Medic_CSP1","WPEC_Phase_2_Uniform_Base_New_Medic_CSP2","WPEC_Phase_2_Uniform_Base_New_CSP1","WPEC_Phase_2_Uniform_Base_New_CSP2","WPEC_Phase_2_Uniform_Base_New_CLC","WPEC_Phase_2_Uniform_Base_New_NCO",};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_characters_f","WPS_Uniforms","WPEC_Core"};
	};
};
class CfgWeapons
{
	class ItemInfo;
	class WPS_Phase_2_Uniform_Base;
	class WPS_Phase_2_Command_Uniform_Base;
	class WPS_Phase_2_ARC_Uniform_Base;
	class WPEC_Phase_2_Uniform_Base_New: WPS_Phase_2_Uniform_Base
	{
		author = "Queue";
		scope = 1;
		scopecurator = 1;
		displayname = "[104th] Phase 2 Armor";
		class ItemInfo: ItemInfo
		{
			uniformmodel = "-";
			uniformclass = "WPEC_Phase_2_Unit_Base_New";
			uniformtype = "Neopren";
			containerclass = "supply150";
			mass = 40;
		};
	};
//start renaming uniforms to match units here
	class WPEC_Phase_2_Uniform_Base_New_CT: WPS_Phase_2_Uniform_Base
	{
		author = "Queue";
		scope = 2;
		scopecurator = 2;
		displayname = "[104th] Phase 2 CT";
		class ItemInfo: ItemInfo
		{
			uniformmodel = "-";
			uniformclass = "WPEC_Phase_2_Unit_Trooper";
			uniformtype = "Neopren";
			containerclass = "supply150";
			mass = 40;
		};
	};

	class WPEC_Phase_2_Uniform_Base_New_VCT: WPS_Phase_2_Uniform_Base
	{
		author = "Queue";
		scope = 2;
		scopecurator = 2;
		displayname = "[104th] Phase 2 VCT";
		class ItemInfo: ItemInfo
		{
			uniformmodel = "-";
			uniformclass = "WPEC_Phase_2_Unit_Trooper_VCT";
			uniformtype = "Neopren";
			containerclass = "supply150";
			mass = 40;
		};
	};

	class WPEC_Phase_2_Uniform_Base_New_CSP1: WPS_Phase_2_Uniform_Base
	{
		author = "Queue";
		scope = 2;
		scopecurator = 2;
		displayname = "[104th] Phase 2 CSP1";
		class ItemInfo: ItemInfo
		{
			uniformmodel = "-";
			uniformclass = "WPEC_Phase_2_Unit_Trooper_CSP1";
			uniformtype = "Neopren";
			containerclass = "supply150";
			mass = 40;
		};
	};

	class WPEC_Phase_2_Uniform_Base_New_CSP2: WPS_Phase_2_Uniform_Base
	{
		author = "Queue";
		scope = 2;
		scopecurator = 2;
		displayname = "[104th] Phase 2 CSP2";
		class ItemInfo: ItemInfo
		{
			uniformmodel = "-";
			uniformclass = "WPEC_Phase_2_Unit_Trooper_CSP2";
			uniformtype = "Neopren";
			containerclass = "supply150";
			mass = 40;
		};
	};

	class WPEC_Phase_2_Uniform_Base_New_Medic_CSP1: WPS_Phase_2_Uniform_Base
	{
		author = "Queue";
		scope = 2;
		scopecurator = 2;
		displayname = "[104th] Phase 2 Medic CSP1";
		class ItemInfo: ItemInfo
		{
			uniformmodel = "-";
			uniformclass = "WPEC_Phase_2_Unit_Trooper_Medic_CSP1";
			uniformtype = "Neopren";
			containerclass = "supply150";
			mass = 40;
		};
	};

	class WPEC_Phase_2_Uniform_Base_New_Medic_CSP2: WPS_Phase_2_Uniform_Base
	{
		author = "Queue";
		scope = 2;
		scopecurator = 2;
		displayname = "[104th] Phase 2 Medic CSP2";
		class ItemInfo: ItemInfo
		{
			uniformmodel = "-";
			uniformclass = "WPEC_Phase_2_Unit_Trooper_Medic_CSP2";
			uniformtype = "Neopren";
			containerclass = "supply150";
			mass = 40;
		};
	};

	class WPEC_Phase_2_Uniform_Base_New_CLC: WPS_Phase_2_Uniform_Base
	{
		author = "Queue";
		scope = 2;
		scopecurator = 2;
		displayname = "[104th] Phase 2 Team Lead";
		class ItemInfo: ItemInfo
		{
			uniformmodel = "-";
			uniformclass = "WPEC_Phase_2_Unit_Trooper_CLC";
			uniformtype = "Neopren";
			containerclass = "supply150";
			mass = 40;
		};
	};

	class WPEC_Phase_2_Uniform_Base_New_CS: WPS_Phase_2_Uniform_Base
	{
		author = "Queue";
		scope = 2;
		scopecurator = 2;
		displayname = "[104th] Phase 2 NCO";
		class ItemInfo: ItemInfo
		{
			uniformmodel = "-";
			uniformclass = "WPEC_Phase_2_Unit_Trooper_CS";
			uniformtype = "Neopren";
			containerclass = "supply150";
			mass = 40;
		};
	};

	class WPEC_Phase_2_Command_Uniform_Base_New: WPS_Phase_2_Command_Uniform_Base
	{
		author = "Queue";
		scope = 2;
		scopecurator = 2;
		displayname = "[104th] Phase 2 Command Armor";
		class ItemInfo: ItemInfo
		{
			uniformmodel = "-";
			uniformclass = "WPEC_Phase_2_Unit_trooper_Command";
			uniformtype = "Neopren";
			containerclass = "supply150";
			mass = 40;
		};
	};

	class WPEC_Phase_2_ARC_Uniform_Base_New: WPS_Phase_2_ARC_Uniform_Base
	{
		author = "Queue";
		scope = 2;
		scopecurator = 2;
		displayname = "[104th] Phase 2 ARC Armor";
		class ItemInfo: ItemInfo
		{
			uniformmodel = "-";
			uniformclass = "WPEC_Phase_2_Unit_Trooper_ARC";
			uniformtype = "Neopren";
			containerclass = "supply150";
			mass = 40;
		};
	};

	//Event Stuff Below

	class WPEC_Phase_2_Uniform_Base_New_Halloween: WPS_Phase_2_Uniform_Base
	{
		author = "Queue";
		scope = 2;
		scopecurator = 2;
		displayname = "[104th] Phase 2 (Halloween)";
		class ItemInfo: ItemInfo
		{
			uniformmodel = "-";
			uniformclass = "WPEC_Phase_2_Unit_Trooper_Halloween";
			uniformtype = "Neopren";
			containerclass = "supply150";
			mass = 40;
		};
	};
};
class CfgVehicles
{
	class B_Soldier_Base_F;
	class B_Soldier_F: B_Soldier_Base_F
	{
		class Hitpoints;
	};
	class WPEC_Phase_2_Unit_Base_New: B_Soldier_F
	{
		author = "Queue";
		scope = 2;
		scopeCurator = 2;
		displayName = "Phase 2 Trooper";
		faction = "WPEC_Category_EclipseCompany";
		editorSubcategory = "WPEC_Subcategory_Trooper";
		genericNames = "WPEC_P2";
		role = "Rifleman";
		icon = "LSiconRifleman";
		backpack = "";
		uniformClass = "WPEC_Phase_2_Uniform_Base_New";
        WPS_isCloneTrooper = 1;
		model = "WPS\WPS_Uniforms\Phase2\WPS_Phase_2.p3d";
		linkedItems[] = {"WPS_Phase_2_Helmet_CT"};
		respawnLinkedItems[] = {"WPS_Phase_2_Helmet_CT"};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {};
		respawnMagazines[] = {};
		items[] = {};
		respawnItems[] = {};
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"\WPS\WPS_Uniforms\Phase2\data\Phase2ArmorUpper_co.paa","\WPS\WPS_Uniforms\Phase2\data\Phase2ArmorLower_co.paa","\WPS\WPS_Uniforms\Phase2\data\Phase2ArmorUndersuit_co.paa"};
		hiddenSelectionsMaterials[] = {"\WPS\WPS_Uniforms\Phase2\data\Phase2ArmorUpper.rvmat","\WPS\WPS_Uniforms\Phase2\data\Phase2ArmorLower.rvmat","\WPS\WPS_Uniforms\Phase2\data\Phase2ArmorUndersuit.rvmat"};
		class HitPoints: HitPoints
		{
			class HitFace
			{
				armor = 1;
				material = -1;
				name = "face_hub";
				passThrough = 0.8;
				radius = 0.08;
				explosionShielding = 0.1;
				minimalHit = 0.01;
			};
			class HitNeck: HitFace
			{
				armor = 6;
				material = -1;
				name = "neck";
				passThrough = 0.8;
				radius = 0.1;
				explosionShielding = 0.5;
				minimalHit = 0.01;
			};
			class HitHead: HitNeck
			{
				armor = 1;
				material = -1;
				name = "head";
				passThrough = 0.8;
				radius = 0.2;
				explosionShielding = 0.5;
				minimalHit = 0.01;
				depends = "HitFace max HitNeck";
			};
			class HitPelvis: HitHead
			{
				armor = 8;
				material = -1;
				name = "pelvis";
				passThrough = 0.33;
				radius = 0.24;
				explosionShielding = 1;
				visual = "injury_body";
				minimalHit = 0.01;
				depends = "";
			};
			class HitAbdomen: HitPelvis
			{
				armor = 8;
				material = -1;
				name = "spine1";
				passThrough = 0.33;
				radius = 0.16;
				explosionShielding = 1;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor = 8;
				material = -1;
				name = "spine2";
				passThrough = 0.33;
				radius = 0.18;
				explosionShielding = 1.5;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitChest: HitDiaphragm
			{
				armor = 8;
				material = -1;
				name = "spine3";
				passThrough = 0.33;
				radius = 0.18;
				explosionShielding = 1.5;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitBody: HitChest
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 0.5;
				radius = 0;
				explosionShielding = 1.5;
				visual = "injury_body";
				minimalHit = 0.01;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms: HitBody
			{
				armor = 8;
				material = -1;
				name = "arms";
				passThrough = 0.7;
				radius = 0.1;
				explosionShielding = 0.1;
				visual = "injury_hands";
				minimalHit = 0.01;
				depends = "";
			};
			class HitHands: HitArms
			{
				armor = 8;
				material = -1;
				name = "hands";
				passThrough = 0.7;
				radius = 0.1;
				explosionShielding = 0.1;
				visual = "injury_hands";
				minimalHit = 0.01;
				depends = "HitArms";
			};
			class HitLeftArm: HitHands
			{
				material = -1;
				name = "hand_l";
				passThrough = 0.7;
				radius = 0.08;
				visual = "injury_hands";
				minimalHit = 0.01;
				depends = "";
			};
			class HitRightArm: HitLeftArm
			{
				material = -1;
				name = "hand_r";
				passThrough = 0.7;
				radius = 0.08;
				minimalHit = 0.01;
				depends = "";
			};
			class HitLegs: HitHands
			{
				armor = 8;
				material = -1;
				name = "legs";
				passThrough = 0.7;
				radius = 0.14;
				explosionShielding = 0.1;
				visual = "injury_legs";
				minimalHit = 0.01;
				depends = "";
			};
			class HitLeftLeg: HitLegs
			{
				material = -1;
				name = "leg_l";
				radius = 0.1;
				visual = "injury_legs";
				minimalHit = 0.01;
				depends = "";
			};
			class HitRightLeg: HitLeftLeg
			{
				material = -1;
				name = "leg_r";
				passThrough = 0.7;
				radius = 0.08;
				visual = "injury_hands";
				minimalHit = 0.01;
				depends = "";
			};
			class Incapacitated: HitLegs
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 1;
				visual = "";
				minimalHit = 0;
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 1.45";
			};
		};
	};

	class WPEC_Phase_2_Command_Unit_Base_New: B_Soldier_F
	{
		author = "Queue";
		scope = 2;
		scopeCurator = 2;
		displayName = "Phase 2 Trooper Command";
		faction = "WPEC_Category_EclipseCompany";
		editorSubcategory = "WPEC_Subcategory_Trooper";
		genericNames = "WPEC_P2";
		role = "Rifleman";
		icon = "iconRifleman";
		backpack = "";
		uniformClass = "WPS_Phase_2_Command_Uniform_Base_New";
        WPS_isCloneTrooper = 1;
		model = "WPS\WPS_Uniforms\Command\WPS_Phase_2_Command.p3d";
		linkedItems[] = {"WPS_Phase_2_Helmet_CT"};
		respawnLinkedItems[] = {"WPS_Phase_2_Helmet_CT"};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {};
		respawnMagazines[] = {};
		items[] = {};
		respawnItems[] = {};
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"\WPS\WPS_Uniforms\Command\data\Phase2CommandArmorUpper_co.paa","\WPS\WPS_Uniforms\Command\data\Phase2CommandArmorLower_co.paa","\WPS\WPS_Uniforms\Command\data\Phase2CommandArmorUndersuit_co.paa"};
		hiddenSelectionsMaterials[] = {"\WPS\WPS_Uniforms\Command\data\Phase2CommandArmorUpper.rvmat","\WPS\WPS_Uniforms\Command\data\Phase2CommandArmorLower.rvmat","\WPS\WPS_Uniforms\Command\data\Phase2CommandArmorUndersuit.rvmat"};
		class HitPoints: HitPoints
		{
			class HitFace
			{
				armor = 1;
				material = -1;
				name = "face_hub";
				passThrough = 0.8;
				radius = 0.08;
				explosionShielding = 0.1;
				minimalHit = 0.01;
			};
			class HitNeck: HitFace
			{
				armor = 6;
				material = -1;
				name = "neck";
				passThrough = 0.8;
				radius = 0.1;
				explosionShielding = 0.5;
				minimalHit = 0.01;
			};
			class HitHead: HitNeck
			{
				armor = 1;
				material = -1;
				name = "head";
				passThrough = 0.8;
				radius = 0.2;
				explosionShielding = 0.5;
				minimalHit = 0.01;
				depends = "HitFace max HitNeck";
			};
			class HitPelvis: HitHead
			{
				armor = 8;
				material = -1;
				name = "pelvis";
				passThrough = 0.33;
				radius = 0.24;
				explosionShielding = 1;
				visual = "injury_body";
				minimalHit = 0.01;
				depends = "";
			};
			class HitAbdomen: HitPelvis
			{
				armor = 8;
				material = -1;
				name = "spine1";
				passThrough = 0.33;
				radius = 0.16;
				explosionShielding = 1;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor = 8;
				material = -1;
				name = "spine2";
				passThrough = 0.33;
				radius = 0.18;
				explosionShielding = 1.5;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitChest: HitDiaphragm
			{
				armor = 8;
				material = -1;
				name = "spine3";
				passThrough = 0.33;
				radius = 0.18;
				explosionShielding = 1.5;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitBody: HitChest
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 0.5;
				radius = 0;
				explosionShielding = 1.5;
				visual = "injury_body";
				minimalHit = 0.01;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms: HitBody
			{
				armor = 8;
				material = -1;
				name = "arms";
				passThrough = 0.7;
				radius = 0.1;
				explosionShielding = 0.1;
				visual = "injury_hands";
				minimalHit = 0.01;
				depends = "";
			};
			class HitHands: HitArms
			{
				armor = 8;
				material = -1;
				name = "hands";
				passThrough = 0.7;
				radius = 0.1;
				explosionShielding = 0.1;
				visual = "injury_hands";
				minimalHit = 0.01;
				depends = "HitArms";
			};
			class HitLeftArm: HitHands
			{
				material = -1;
				name = "hand_l";
				passThrough = 0.7;
				radius = 0.08;
				visual = "injury_hands";
				minimalHit = 0.01;
				depends = "";
			};
			class HitRightArm: HitLeftArm
			{
				material = -1;
				name = "hand_r";
				passThrough = 0.7;
				radius = 0.08;
				minimalHit = 0.01;
				depends = "";
			};
			class HitLegs: HitHands
			{
				armor = 8;
				material = -1;
				name = "legs";
				passThrough = 0.7;
				radius = 0.14;
				explosionShielding = 0.1;
				visual = "injury_legs";
				minimalHit = 0.01;
				depends = "";
			};
			class HitLeftLeg: HitLegs
			{
				material = -1;
				name = "leg_l";
				radius = 0.1;
				visual = "injury_legs";
				minimalHit = 0.01;
				depends = "";
			};
			class HitRightLeg: HitLeftLeg
			{
				material = -1;
				name = "leg_r";
				passThrough = 0.7;
				radius = 0.08;
				visual = "injury_hands";
				minimalHit = 0.01;
				depends = "";
			};
			class Incapacitated: HitLegs
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 1;
				visual = "";
				minimalHit = 0;
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 1.45";
			};
		};
	};

	class WPEC_Phase_2_ARC_Unit_Base_New: B_Soldier_F
	{
		author = "Queue";
		scope = 2;
		scopeCurator = 2;
		displayName = "Phase 2 ARC";
		faction = "WPEC_Category_EclipseCompany";
		editorSubcategory = "WPEC_Subcategory_Trooper";
		genericNames = "WPEC_P2";
		role = "Rifleman";
		icon = "LSiconRifleman";
		backpack = "";
		uniformClass = "WPS_Phase_2_ARC_Uniform_Base_New";
        WPS_isCloneTrooper = 1;
		model = "WPS\WPS_Uniforms\ARC\WPS_Phase_2_ARC.p3d";
		linkedItems[] = {"WPS_Phase_2_Helmet_CT"};
		respawnLinkedItems[] = {"WPS_Phase_2_Helmet_CT"};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {};
		respawnMagazines[] = {};
		items[] = {};
		respawnItems[] = {};
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"\WPS\WPS_Uniforms\ARC\data\Phase2ARCArmorUpper_co.paa","\WPS\WPS_Uniforms\ARC\data\Phase2ARCArmorLower_co.paa","\WPS\WPS_Uniforms\ARC\data\Phase2ARCArmorUndersuit_co.paa"};
		hiddenSelectionsMaterials[] = {"\WPS\WPS_Uniforms\ARC\data\Phase2ARCArmorUpper.rvmat","\WPS\WPS_Uniforms\ARC\data\Phase2ARCArmorLower.rvmat","\WPS\WPS_Uniforms\ARC\data\Phase2ARCArmorUndersuit.rvmat"};
		class HitPoints: HitPoints
		{
			class HitFace
			{
				armor = 1;
				material = -1;
				name = "face_hub";
				passThrough = 0.8;
				radius = 0.08;
				explosionShielding = 0.1;
				minimalHit = 0.01;
			};
			class HitNeck: HitFace
			{
				armor = 6;
				material = -1;
				name = "neck";
				passThrough = 0.8;
				radius = 0.1;
				explosionShielding = 0.5;
				minimalHit = 0.01;
			};
			class HitHead: HitNeck
			{
				armor = 1;
				material = -1;
				name = "head";
				passThrough = 0.8;
				radius = 0.2;
				explosionShielding = 0.5;
				minimalHit = 0.01;
				depends = "HitFace max HitNeck";
			};
			class HitPelvis: HitHead
			{
				armor = 8;
				material = -1;
				name = "pelvis";
				passThrough = 0.33;
				radius = 0.24;
				explosionShielding = 1;
				visual = "injury_body";
				minimalHit = 0.01;
				depends = "";
			};
			class HitAbdomen: HitPelvis
			{
				armor = 8;
				material = -1;
				name = "spine1";
				passThrough = 0.33;
				radius = 0.16;
				explosionShielding = 1;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor = 8;
				material = -1;
				name = "spine2";
				passThrough = 0.33;
				radius = 0.18;
				explosionShielding = 1.5;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitChest: HitDiaphragm
			{
				armor = 8;
				material = -1;
				name = "spine3";
				passThrough = 0.33;
				radius = 0.18;
				explosionShielding = 1.5;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitBody: HitChest
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 0.5;
				radius = 0;
				explosionShielding = 1.5;
				visual = "injury_body";
				minimalHit = 0.01;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms: HitBody
			{
				armor = 8;
				material = -1;
				name = "arms";
				passThrough = 0.7;
				radius = 0.1;
				explosionShielding = 0.1;
				visual = "injury_hands";
				minimalHit = 0.01;
				depends = "";
			};
			class HitHands: HitArms
			{
				armor = 8;
				material = -1;
				name = "hands";
				passThrough = 0.7;
				radius = 0.1;
				explosionShielding = 0.1;
				visual = "injury_hands";
				minimalHit = 0.01;
				depends = "HitArms";
			};
			class HitLeftArm: HitHands
			{
				material = -1;
				name = "hand_l";
				passThrough = 0.7;
				radius = 0.08;
				visual = "injury_hands";
				minimalHit = 0.01;
				depends = "";
			};
			class HitRightArm: HitLeftArm
			{
				material = -1;
				name = "hand_r";
				passThrough = 0.7;
				radius = 0.08;
				minimalHit = 0.01;
				depends = "";
			};
			class HitLegs: HitHands
			{
				armor = 8;
				material = -1;
				name = "legs";
				passThrough = 0.7;
				radius = 0.14;
				explosionShielding = 0.1;
				visual = "injury_legs";
				minimalHit = 0.01;
				depends = "";
			};
			class HitLeftLeg: HitLegs
			{
				material = -1;
				name = "leg_l";
				radius = 0.1;
				visual = "injury_legs";
				minimalHit = 0.01;
				depends = "";
			};
			class HitRightLeg: HitLeftLeg
			{
				material = -1;
				name = "leg_r";
				passThrough = 0.7;
				radius = 0.08;
				visual = "injury_hands";
				minimalHit = 0.01;
				depends = "";
			};
			class Incapacitated: HitLegs
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 1;
				visual = "";
				minimalHit = 0;
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 1.45";
			};
		};
	};

	class WPEC_Phase_2_Unit_Trooper: WPEC_Phase_2_Unit_Base_New
	{
		scope = 2;
		scopeCurator = 2;
		uniformClass = "WPEC_Phase_2_Uniform_Base_New_CT";
		linkedItems[] = {"WPEC_Phase_2_Helmet_CT"};
		respawnLinkedItems[] = {"WPEC_Phase_2_Helmet_CT"};
		displayName = "[104th/WPS] Phase 2 Trooper";
		hiddenSelectionsTextures[] = {"\WPEC\WPEC_Uniforms\data\WPS_104th_Phase_2_CT_Upper_co.paa","\WPEC\WPEC_Uniforms\data\WPS_104th_Phase_2_CT_Lower_co.paa","\WPS\WPS_Uniforms\Phase2\data\Phase2ArmorUndersuit_co.paa"};
	};
	class WPEC_Phase_2_Unit_Trooper_Medic_CSP1: WPEC_Phase_2_Unit_Base_New
	{
		scope = 2;
		scopeCurator = 2;
		uniformClass = "WPEC_Phase_2_Uniform_Base_New_Medic_CSP1";
		linkedItems[] = {"WPEC_Phase_2_Helmet_CT"};
		respawnLinkedItems[] = {"WPEC_Phase_2_Helmet_CT"};
		displayName = "[104th/WPS] Phase 2 Medic CSP1";
		hiddenSelectionsTextures[] = {"\WPEC\WPEC_Uniforms\data\WPS_104th_Phase_2_CSP1_Medic_Upper_co.paa","\WPEC\WPEC_Uniforms\data\WPS_104th_Phase_2_CSP1_Medic_Lower_co.paa","\WPS\WPS_Uniforms\Phase2\data\Phase2ArmorUndersuit_co.paa"};
	};
	class WPEC_Phase_2_Unit_Trooper_Medic_CSP2: WPEC_Phase_2_Unit_Base_New
	{
		scope = 2;
		scopeCurator = 2;
		uniformClass = "WPEC_Phase_2_Uniform_Base_New_Medic_CSP2";
		linkedItems[] = {"WPEC_Phase_2_Helmet_CT"};
		respawnLinkedItems[] = {"WPEC_Phase_2_Helmet_CT"};
		displayName = "[104th/WPS] Phase 2 Medic CSP2";
		hiddenSelectionsTextures[] = {"\WPEC\WPEC_Uniforms\data\WPS_104th_Phase_2_CSP2_Medic_Upper_co.paa","\WPEC\WPEC_Uniforms\data\WPS_104th_Phase_2_CSP2_Medic_Lower_co.paa","\WPS\WPS_Uniforms\Phase2\data\Phase2ArmorUndersuit_co.paa"};
	};
	class WPEC_Phase_2_Unit_Trooper_VCT: WPEC_Phase_2_Unit_Base_New
	{
		scope = 2;
		scopeCurator = 2;
		uniformClass = "WPEC_Phase_2_Uniform_Base_New_VCT";
		linkedItems[] = {"WPEC_Phase_2_Helmet_CT"};
		respawnLinkedItems[] = {"WPEC_Phase_2_Helmet_CT"};
		displayName = "[104th/WPS] Phase 2 VCT";
		hiddenSelectionsTextures[] = {"\WPEC\WPEC_Uniforms\data\WPS_104th_Phase_2_VCT_Upper_co.paa","\WPEC\WPEC_Uniforms\data\WPS_104th_Phase_2_VCT_Lower_co.paa","\WPS\WPS_Uniforms\Phase2\data\Phase2ArmorUndersuit_co.paa"};
	};
	class WPEC_Phase_2_Unit_Trooper_CSP1: WPEC_Phase_2_Unit_Base_New
	{
		scope = 2;
		scopeCurator = 2;
		uniformClass = "WPEC_Phase_2_Uniform_Base_New_CSP1";
		linkedItems[] = {"WPEC_Phase_2_Helmet_CT"};
		respawnLinkedItems[] = {"WPEC_Phase_2_Helmet_CT"};
		displayName = "[104th/WPS] Phase 2 CSP1";
		hiddenSelectionsTextures[] = {"\WPEC\WPEC_Uniforms\data\WPS_104th_Phase_2_CSP1_Upper_co.paa","\WPEC\WPEC_Uniforms\data\WPS_104th_Phase_2_CSP1_Lower_co.paa","\WPS\WPS_Uniforms\Phase2\data\Phase2ArmorUndersuit_co.paa"};
	};
	class WPEC_Phase_2_Unit_Trooper_CSP2: WPEC_Phase_2_Unit_Base_New
	{
		scope = 2;
		scopeCurator = 2;
		uniformClass = "WPEC_Phase_2_Uniform_Base_New_CSP2";
		linkedItems[] = {"WPEC_Phase_2_Helmet_CT"};
		respawnLinkedItems[] = {"WPEC_Phase_2_Helmet_CT"};
		displayName = "[104th/WPS] Phase 2 CSP2";
		hiddenSelectionsTextures[] = {"\WPEC\WPEC_Uniforms\data\WPS_104th_Phase_2_CSP2_Upper_co.paa","\WPEC\WPEC_Uniforms\data\WPS_104th_Phase_2_CSP2_Lower_co.paa","\WPS\WPS_Uniforms\Phase2\data\Phase2ArmorUndersuit_co.paa"};
	};
	class WPEC_Phase_2_Unit_Trooper_CLC: WPEC_Phase_2_Unit_Base_New
	{
		scope = 2;
		scopeCurator = 2;
		uniformClass = "WPEC_Phase_2_Uniform_Base_New_CLC";
		linkedItems[] = {"WPEC_Phase_2_Helmet_CT"};
		respawnLinkedItems[] = {"WPEC_Phase_2_Helmet_CT"};
		displayName = "[104th/WPS] Phase 2 NCO";
		hiddenSelectionsTextures[] = {"\WPEC\WPEC_Uniforms\data\WPS_104th_Phase_2_CLC_Upper_co.paa","\WPEC\WPEC_Uniforms\data\WPS_104th_Phase_2_CLC_Lower_co.paa","\WPS\WPS_Uniforms\Phase2\data\Phase2ArmorUndersuit_co.paa"};
	};
	class WPEC_Phase_2_Unit_Trooper_CS: WPEC_Phase_2_Unit_Base_New
	{
		scope = 2;
		scopeCurator = 2;
		uniformClass = "WPEC_Phase_2_Uniform_Base_New_CS";
		linkedItems[] = {"WPEC_Phase_2_Helmet_CT"};
		respawnLinkedItems[] = {"WPEC_Phase_2_Helmet_CT"};
		displayName = "[104th/WPS] Phase 2 SNCO";
		hiddenSelectionsTextures[] = {"\WPEC\WPEC_Uniforms\data\WPS_104th_Phase_2_CS_Upper_co.paa","\WPEC\WPEC_Uniforms\data\WPS_104th_Phase_2_CS_Lower_co.paa","\WPS\WPS_Uniforms\Phase2\data\Phase2ArmorUndersuit_co.paa"};
	};
	class WPEC_Phase_2_Unit_Trooper_ARC: WPEC_Phase_2_ARC_Unit_Base_New
	{
		scope = 2;
		scopeCurator = 2;
		uniformClass = "WPEC_Phase_2_ARC_Uniform_Base_New";
		linkedItems[] = {"WPEC_Phase_2_Helmet_CT"};
		respawnLinkedItems[] = {"WPEC_Phase_2_Helmet_CT"};
		displayName = "[104th/WPS] Phase 2 ARC";
		hiddenSelectionsTextures[] = {"\WPEC\WPEC_Uniforms\data\WPS_104th_Phase_2_ARC_Upper_co.paa","\WPEC\WPEC_Uniforms\data\WPS_104th_Phase_2_ARC_Lower_co.paa","\WPS\WPS_Uniforms\Phase2\data\Phase2ArmorUndersuit_co.paa"};
	};
	class WPEC_Phase_2_Unit_Trooper_Command: WPEC_Phase_2_Command_Unit_Base_New
	{
		scope = 2;
		scopeCurator = 2;
		uniformClass = "WPS_Phase_2_Command_Uniform_Base_New";
		linkedItems[] = {"WPEC_Phase_2_Helmet_CT"};
		respawnLinkedItems[] = {"WPEC_Phase_2_Helmet_CT"};
		displayName = "[104th/WPS] Phase 2 Command";
		hiddenSelectionsTextures[] = {"\WPEC\WPEC_Uniforms\data\WPS_104th_Phase_2_Command_Upper_co.paa","\WPEC\WPEC_Uniforms\data\WPS_104th_Phase_2_Command_Lower_co.paa","\WPS\WPS_Uniforms\Phase2\data\Phase2ArmorUndersuit_co.paa"};
	};

	//event stuff below
			
	class WPEC_Phase_2_Unit_Trooper_Halloween: WPEC_Phase_2_Unit_Base_New
	{
		scope = 2;
		scopeCurator = 2;
		uniformClass = "WPEC_Phase_2_Uniform_Base_New_Halloween";
		linkedItems[] = {"WPEC_Phase_2_Helmet_CT"};
		respawnLinkedItems[] = {"WPEC_Phase_2_Helmet_CT"};
		displayName = "[104th/WPS] Phase 2 SNCO";
		hiddenSelectionsTextures[] = {"\WPEC\WPEC_Uniforms\data\WPS_104th_Phase_2_Halloween_Upper_co.paa","\WPEC\WPEC_Uniforms\data\WPS_104th_Phase_2_Halloween_Lower_co.paa","\WPS\WPS_Uniforms\Phase2\data\Phase2ArmorUndersuit_co.paa"};
	};

};
