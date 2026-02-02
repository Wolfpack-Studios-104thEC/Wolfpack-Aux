class CfgVehicles {
	class B_Kitbag_rgr;
	class GBACKPACK(Backpack_Base): B_Kitbag_rgr
	{
		author = "Queue";
		scope = 1;
		picture = QPATHTOF(data\icons\IconCloneTrooperBackpack_co.paa);
		displayname = "[104thEC] Backpack (base)";
		model = "Z\wpec\addons\backpacks\CloneTrooperBackpack.p3d";
		maximumload = 800;
		hiddenSelections = "Camo";
		hiddenSelectionsTextures = QPATHTOF(data\clone\CloneTrooperBackpack_co.paa);
		hiddenSelectionsMaterials = QPATHTOF(data\clone\CloneTrooperBackpack.rvmat);
	};
	class GBACKPACK(Backpack): GBACKPACK(Backpack_Base)
	{
		author = "Queue";
		scope = 2;
		scopeCurator = 2;
		displayName = "[104th] Clone Trooper Backpack";
        picture = QPATHTOF(data\icons\IconCloneTrooperBackpack_co.paa);
		hiddenSelections = "Camo";
		hiddenSelectionsTextures = QPATHTOF(data\clone\CloneTrooperBackpack_co.paa);
		hiddenSelectionsMaterials = QPATHTOF(data\clone\CloneTrooperBackpack.rvmat);
	};
    class GBACKPACK(Backpack_Medic): B_Kitbag_rgr
	{
		author = "Queue";
		scope = 2;
		scopeCurator = 2;
		displayName = "[104th] Clone Trooper Backpack [Medic]";
		model = "Z\wpec\addons\backpacks\CloneTrooperBackpackMedic.p3d";
		maximumload = 800;
        picture = QPATHTOF(data\icons\IconCloneTrooperBackpackMedic_co.paa);
		hiddenSelections = "Camo";
		hiddenSelectionsTextures = QPATHTOF(data\clone\CloneTrooperBackpackMedic_co.paa);
		hiddenSelectionsMaterials = QPATHTOF(data\clone\CloneTrooperBackpack.rvmat);
	};
	class GBACKPACK(Backpack_Mechanized): B_Kitbag_rgr
	{
		author = "Queue";
		scope = 2;
		scopeCurator = 2;
		displayName = "[104th] Clone Trooper Backpack [Mechanized]";
		model = "Z\wpec\addons\backpacks\CloneTrooperBackpackMechanized.p3d";
		maximumload = 800;
        picture = QPATHTOF(data\icons\IconCloneTrooperBackpack_co.paa);
		hiddenSelections = "Camo";
		hiddenSelectionsTextures = QPATHTOF(data\clone\CloneTrooperBackpackMechanized_co.paa);
		hiddenSelectionsMaterials = QPATHTOF(data\clone\CloneTrooperBackpack.rvmat);
	};
	class GBACKPACK(Backpack_Umbra): B_Kitbag_rgr
	{
		author = "Queue";
		scope = 2;
		scopeCurator = 2;
		displayName = "[104th] Clone Trooper Backpack [Umbra]";
		model = "Z\wpec\addons\backpacks\UmbraBackpack.p3d";
		tf_dialog = "JLTS_clone_lr_programmer_radio_dialog"; //this is for LR
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = "tf_west_radio_code";
		tf_subtype = "digital_lr";
		tf_range = 35000;
		tf_hasLRradio = 1;
		maximumload = 800;
        picture = QPATHTOF(data\icons\IconUmbraBackpack_co.paa);
	};
	class GBACKPACK(Backpack_LR): B_Kitbag_rgr
	{
		author = "Queue";
		scope = 2;
		scopeCurator = 2;
		displayName = "[104th] Clone Trooper LR Backpack";
		model = "Z\wpec\addons\backpacks\LRBackpack.p3d";
		tf_dialog = "JLTS_clone_lr_programmer_radio_dialog"; //this is for LR
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = "tf_west_radio_code";
		tf_subtype = "digital_lr";
		tf_range = 35000;
		tf_hasLRradio = 1;
		maximumload = 800;
        picture = QPATHTOF(data\icons\IconLRBackpack_co.paa);
	};
	class GBACKPACK(Backpack_Void): B_Kitbag_rgr
	{
		author = "Queue";
		scope = 2;
		scopeCurator = 2;
		displayName = "[104th] Clone Engineer Backpack";
		model = "Z\wpec\addons\backpacks\VoidBackpack.p3d";
		maximumload = 800;
        picture = QPATHTOF(data\icons\IconVoidBackpack_co.paa);
	};
	class GBACKPACK(Backpack_Void_Sapper): B_Kitbag_rgr
	{
		author = "Queue";
		scope = 2;
		scopeCurator = 2;
		displayName = "[104th] Clone Engineer Backpack [Sapper]";
		model = "Z\wpec\addons\backpacks\VoidBackpackSapper.p3d";
		maximumload = 800;
        picture = QPATHTOF(data\icons\IconVoidBackpackSapper_co.paa);
	};
	class GBACKPACK(Backpack_Void_Shield): B_Kitbag_rgr
	{
		author = "Queue";
		scope = 2;
		scopeCurator = 2;
		displayName = "[104th] Clone Engineer Backpack [Shield]";
		model = "Z\wpec\addons\backpacks\VoidBackpackShield.p3d";
		maximumload = 800;
        picture = QPATHTOF(data\icons\IconVoidBackpackShield_co.paa);
	};
	class GBACKPACK(Backpack_Void_Turret): B_Kitbag_rgr
	{
		author = "Queue";
		scope = 2;
		scopeCurator = 2;
		displayName = "[104th] Clone Engineer Backpack [Turret]";
		model = "Z\wpec\addons\backpacks\VoidBackpackTurret.p3d";
		maximumload = 800;
        picture = QPATHTOF(data\icons\IconVoidBackpackTurret_co.paa);
	};
	class GBACKPACK(Backpack_Void_LR): B_Kitbag_rgr
	{
		author = "Queue";
		scope = 2;
		scopeCurator = 2;
		displayName = "[104th] Clone Engineer Backpack [LR]";
		model = "Z\wpec\addons\backpacks\VoidBackpackLR.p3d";
		tf_dialog = "JLTS_clone_lr_programmer_radio_dialog"; //this is for LR
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = "tf_west_radio_code";
		tf_subtype = "digital_lr";
		tf_range = 35000;
		tf_hasLRradio = 1;
		maximumload = 800;
        picture = QPATHTOF(data\icons\IconARCBackpack_co.paa);
	};
    #include "groundholders.hpp"
};
