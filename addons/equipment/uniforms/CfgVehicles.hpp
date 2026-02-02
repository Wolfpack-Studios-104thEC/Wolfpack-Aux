class CfgVehicles {
	class B_Soldier_Base_F;
	class B_Soldier_F: B_Soldier_Base_F
	{
		class Hitpoints;
	};
	class GUNIT(Phase_2_Unit_Base): B_Soldier_F
	{
		author = "Queue";
		scope = 2;
		scopeCurator = 2;
		displayName = "Phase 2 Trooper";
		faction = QEGVAR(faction,eclipse);
		editorSubcategory = QEGVAR(edsubcat,trooper);
		genericNames = "WPEC_P2";
		role = "Rifleman";
		icon = "LSiconRifleman";
		backpack = "";
		uniformClass = QGUNIFORM(Phase_2_Uniform_Base);
        WPS_isCloneTrooper = 1;
		model = "WPS\WPS_Uniforms\Phase2\WPS_Phase_2.p3d";
		linkedItems[] = {QEGHELMET(helmets,phase2_CT)};
		respawnLinkedItems[] = {QEGHELMET(helmets,phase2_CT)};
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

	class GUNIT(Phase_2_Command_Unit_Base): B_Soldier_F
	{
		author = "Queue";
		scope = 2;
		scopeCurator = 2;
		displayName = "Phase 2 Trooper Command";
		faction = QEGVAR(faction,eclipse);
		editorSubcategory = QEGVAR(edsubcat,trooper);
		genericNames = "WPEC_P2";
		role = "Rifleman";
		icon = "iconRifleman";
		backpack = "";
		uniformClass = QGUNIFORM(Phase_2_Command_Uniform_Base);
        WPS_isCloneTrooper = 1;
		model = "WPS\WPS_Uniforms\Command\WPS_Phase_2_Command.p3d";
		linkedItems[] = {QEGHELMET(helmets,phase2_CT)};
		respawnLinkedItems[] = {QEGHELMET(helmets,phase2_CT)};
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

	class GUNIT(Phase_2_ARC_Unit_Base): B_Soldier_F
	{
		author = "Queue";
		scope = 2;
		scopeCurator = 2;
		displayName = "Phase 2 ARC";
		faction = QEGVAR(faction,eclipse);
		editorSubcategory = QEGVAR(edsubcat,trooper);
		genericNames = "WPEC_P2";
		role = "Rifleman";
		icon = "LSiconRifleman";
		backpack = "";
		uniformClass = QGUNIFORM(Phase_2_ARC_Uniform_Base);
        WPS_isCloneTrooper = 1;
		model = "WPS\WPS_Uniforms\ARC\WPS_Phase_2_ARC.p3d";
		linkedItems[] = {QEGHELMET(helmets,phase2_CT)};
		respawnLinkedItems[] = {QEGHELMET(helmets,phase2_CT)};
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

	class GUNIT(Phase_2_Unit_Trooper): GUNIT(Phase_2_Unit_Base)
	{
		scope = 2;
		scopeCurator = 2;
		uniformClass = QGUNIFORM(Phase_2_Uniform_CT);
		linkedItems[] = {QEGHELMET(helmets,phase2_CT)};
		respawnLinkedItems[] = {QEGHELMET(helmets,phase2_CT)};
		displayName = "[104th/WPS] Phase 2 Trooper";
		hiddenSelectionsTextures[] = {QPATHTOF(data\WPS_104th_Phase_2_CT_Upper_co.paa),QPATHTOF(data\WPS_104th_Phase_2_CT_Lower_co.paa),"\WPS\WPS_Uniforms\Phase2\data\Phase2ArmorUndersuit_co.paa"};
	};

    RANKUNITS(2,VCT);
    RANKUNITS(2,CSP1);
    RANKUNITS(2,CSP2);
    RANKUNITS(2,Medic_CSP1);
    RANKUNITS(2,Medic_CSP2);
    RANKUNITS(2,CS);

	class GUNIT(Phase_2_Unit_Trooper_ARC): GUNIT(Phase_2_ARC_Unit_Base)
	{
		scope = 2;
		scopeCurator = 2;
		uniformClass = "WPEC_Phase_2_ARC_Uniform_Base";
		linkedItems[] = {QEGHELMET(helmets,phase2_CT)};
		respawnLinkedItems[] = {QEGHELMET(helmets,phase2_CT)};
		displayName = "[104th/WPS] Phase 2 ARC";
		hiddenSelectionsTextures[] = {QPATHTOF(data\WPS_104th_Phase_2_ARC_Lower_co.paa),QPATHTOF(data\WPS_104th_Phase_2_ARC_Lower_co.paa),"\WPS\WPS_Uniforms\Phase2\data\Phase2ArmorUndersuit_co.paa"};
	};
	class GUNIT(Phase_2_Unit_Trooper_Command): GUNIT(Phase_2_Command_Unit_Base)
	{
		scope = 2;
		scopeCurator = 2;
		uniformClass = "WPS_Phase_2_Command_Uniform_Base";
		linkedItems[] = {QEGHELMET(helmets,phase2_CT)};
		respawnLinkedItems[] = {QEGHELMET(helmets,phase2_CT)};
		displayName = "[104th/WPS] Phase 2 Command";
		hiddenSelectionsTextures[] = {QPATHTOF(data\WPS_104th_Phase_2_Command_Upper_co.paa),QPATHTOF(data\WPS_104th_Phase_2_Command_Lower_co.paa),"\WPS\WPS_Uniforms\Phase2\data\Phase2ArmorUndersuit_co.paa"};
	};

	//event stuff below

	class GUNIT(Phase_2_Unit_Trooper_Halloween): GUNIT(Phase_2_Unit_Base)
	{
		scope = 2;
		scopeCurator = 2;
		uniformClass = "WPEC_Phase_2_Uniform_Base_Halloween";
		linkedItems[] = {QEGHELMET(helmets,phase2_CT)};
		respawnLinkedItems[] = {QEGHELMET(helmets,phase2_CT)};
		displayName = "[104th/WPS] Phase 2 SNCO";
		hiddenSelectionsTextures[] = {QPATHTOF(data\WPS_104th_Phase_2_Halloween_Upper_co.paa),QPATHTOF(data\WPS_104th_Phase_2_Halloween_Lower_co.paa),"\WPS\WPS_Uniforms\Phase2\data\Phase2ArmorUndersuit_co.paa"};
	};
    #include "groundholders.hpp"
};
