class CfgPatches
{
	class WPEC_Backpacks
	{
		author = "Queue";
		requiredAddons[] = {"A3_characters_f","A3_data_f"};
		units[] = {"WPEC_Backpack_Base",
		"WPEC_Backpack",
		"WPEC_Backpack_LR",
		"WPEC_Backpack_Medic",
		"WPEC_Backpack_Mechanized",
		"WPEC_Backpack_Umbra",
		"WPEC_Backpack_Void",
		"WPEC_Backpack_Void_Sapper",
		"WPEC_Backpack_Void_Shield",
		"WPEC_Backpack_Void_Turret",
		"WPEC_Backpack_Void_LR"};
		weapons[] = {};
		requiredVersion = 0.1;
	};
};
class CfgWeapons{};
class CfgVehicles
{
	class B_Kitbag_rgr;
	class WPEC_Backpack_Base: B_Kitbag_rgr
	{
		author = "Queue";
		scope = 1;
		picture = "\WPEC\WPEC_Backpacks\icons\IconCloneTrooperBackpack_co.paa";
		displayname = "[104thEC] Backpack (base)";
		model = "\WPEC\WPEC_Backpacks\CloneTrooperBackpack.p3d";
		maximumload = 800;
		hiddenSelections = "Camo";
		hiddenSelectionsTextures = "\WPEC\WPEC_Backpacks\data\CloneTrooperBackpack_co.paa";
		hiddenSelectionsMaterials = "\WPEC\WPEC_Backpacks\data\CloneTrooperBackpack.rvmat";
	};
	class WPEC_Backpack: WPEC_Backpack_Base
	{
		author = "Queue";
		scope = 2;
		scopeCurator = 2;
		displayName = "[104th] Clone Trooper Backpack";
        picture = "\WPEC\WPEC_Backpacks\icons\IconCloneTrooperBackpack_co.paa";
		hiddenSelections = "Camo";
		hiddenSelectionsTextures = "\WPEC\WPEC_Backpacks\data\CloneTrooperBackpack_co.paa";
		hiddenSelectionsMaterials = "\WPEC\WPEC_Backpacks\data\CloneTrooperBackpack.rvmat";
	};
    class WPEC_Backpack_Medic: B_Kitbag_rgr
	{
		author = "Queue";
		scope = 2;
		scopeCurator = 2;
		displayName = "[104th] Clone Trooper Backpack [Medic]";
		model = "\WPEC\WPEC_Backpacks\CloneTrooperBackpackMedic.p3d";
		maximumload = 800;
        picture = "\WPEC\WPEC_Backpacks\icons\IconCloneTrooperBackpackMedic_co.paa";
		hiddenSelections = "Camo";
		hiddenSelectionsTextures = "\WPEC\WPEC_Backpacks\data\CloneTrooperBackpackMedic_co.paa";
		hiddenSelectionsMaterials = "\WPEC\WPEC_Backpacks\data\CloneTrooperBackpack.rvmat";
	};
	class WPEC_Backpack_Mechanized: B_Kitbag_rgr
	{
		author = "Queue";
		scope = 2;
		scopeCurator = 2;
		displayName = "[104th] Clone Trooper Backpack [Mechanized]";
		model = "\WPEC\WPEC_Backpacks\CloneTrooperBackpackMechanized.p3d";
		maximumload = 800;
        picture = "\WPEC\WPEC_Backpacks\icons\IconCloneTrooperBackpack_co.paa";
		hiddenSelections = "Camo";
		hiddenSelectionsTextures = "\WPEC\WPEC_Backpacks\data\CloneTrooperBackpackMechanized_co.paa";
		hiddenSelectionsMaterials = "\WPEC\WPEC_Backpacks\data\CloneTrooperBackpack.rvmat";
	};
	class WPEC_Backpack_Umbra: B_Kitbag_rgr
	{
		author = "Queue";
		scope = 2;
		scopeCurator = 2;
		displayName = "[104th] Clone Trooper Backpack [Umbra]";
		model = "\WPEC\WPEC_Backpacks\UmbraBackpack.p3d";
		tf_dialog = "JLTS_clone_lr_programmer_radio_dialog"; //this is for LR
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = "tf_west_radio_code";
		tf_subtype = "digital_lr";
		tf_range = 35000;
		tf_hasLRradio = 1;
		maximumload = 800;
        picture = "\WPEC\WPEC_Backpacks\icons\IconUmbraBackpack_co.paa";
	};
	class WPEC_Backpack_LR: B_Kitbag_rgr
	{
		author = "Queue";
		scope = 2;
		scopeCurator = 2;
		displayName = "[104th] Clone Trooper LR Backpack";
		model = "\WPEC\WPEC_Backpacks\LRBackpack.p3d";
		tf_dialog = "JLTS_clone_lr_programmer_radio_dialog"; //this is for LR
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = "tf_west_radio_code";
		tf_subtype = "digital_lr";
		tf_range = 35000;
		tf_hasLRradio = 1;
		maximumload = 800;
        picture = "\WPEC\WPEC_Backpacks\icons\IconLRBackpack_co.paa";
	};
	class WPEC_Backpack_Void: B_Kitbag_rgr
	{
		author = "Queue";
		scope = 2;
		scopeCurator = 2;
		displayName = "[104th] Clone Engineer Backpack";
		model = "\WPEC\WPEC_Backpacks\VoidBackpack.p3d";
		maximumload = 800;
        picture = "\WPEC\WPEC_Backpacks\icons\IconVoidBackpack_co.paa";
	};
	class WPEC_Backpack_Void_Sapper: B_Kitbag_rgr
	{
		author = "Queue";
		scope = 2;
		scopeCurator = 2;
		displayName = "[104th] Clone Engineer Backpack [Sapper]";
		model = "\WPEC\WPEC_Backpacks\VoidBackpackSapper.p3d";
		maximumload = 800;
        picture = "\WPEC\WPEC_Backpacks\icons\IconVoidBackpackSapper_co.paa";
	};
	class WPEC_Backpack_Void_Shield: B_Kitbag_rgr
	{
		author = "Queue";
		scope = 2;
		scopeCurator = 2;
		displayName = "[104th] Clone Engineer Backpack [Shield]";
		model = "\WPEC\WPEC_Backpacks\VoidBackpackShield.p3d";
		maximumload = 800;
        picture = "\WPEC\WPEC_Backpacks\icons\IconVoidBackpackShield_co.paa";
	};
	class WPEC_Backpack_Void_Turret: B_Kitbag_rgr
	{
		author = "Queue";
		scope = 2;
		scopeCurator = 2;
		displayName = "[104th] Clone Engineer Backpack [Turret]";
		model = "\WPEC\WPEC_Backpacks\VoidBackpackTurret.p3d";
		maximumload = 800;
        picture = "\WPEC\WPEC_Backpacks\icons\IconVoidBackpackTurret_co.paa";
	};
	class WPEC_Backpack_Void_LR: B_Kitbag_rgr
	{
		author = "Queue";
		scope = 2;
		scopeCurator = 2;
		displayName = "[104th] Clone Engineer Backpack [LR]";
		model = "\WPEC\WPEC_Backpacks\VoidBackpackLR.p3d";
		tf_dialog = "JLTS_clone_lr_programmer_radio_dialog"; //this is for LR
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = "tf_west_radio_code";
		tf_subtype = "digital_lr";
		tf_range = 35000;
		tf_hasLRradio = 1;
		maximumload = 800;
        picture = "\WPEC\WPEC_Backpacks\icons\IconVoidBackpackLR_co.paa";
	};

};
