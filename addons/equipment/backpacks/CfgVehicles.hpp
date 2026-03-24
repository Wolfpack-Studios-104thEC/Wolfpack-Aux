
class CfgVehicles {

	class WPS_backpacks_backpack_trooper;
	class WPS_backpacks_backpack_trooper_lr;
    class WPS_backpacks_backpack_engineer;
	class WPS_backpacks_backpack_mini_lr;
	class WPS_backpacks_backpack_arc;
	class GBACKPACK(Standard): WPS_backpacks_backpack_trooper
	{
		author = "Queue";
		scope = 2;
		scopeCurator = 2;
		displayName = "[104th] Clone Trooper Backpack";
        picture = QPATHTOF(data\icons\IconCloneTrooperBackpack_co.paa);
	};
    class GBACKPACK(Medic): GBACKPACK(Standard)
	{
		author = "Queue";
		scope = 2;
		scopeCurator = 2;
		displayName = "[104th] Clone Trooper Backpack [Medic]";
		maximumload = 800;
        picture = QPATHTOF(data\icons\IconCloneTrooperBackpackMedic_co.paa);
		hiddenSelectionsTextures[] = {QPATHTOF(data\clone\CloneTrooperBackpackMedic_co.paa)};
	};
	class GBACKPACK(Mechanized): GBACKPACK(Standard)
	{
		author = "Queue";
		scope = 2;
		scopeCurator = 2;
		displayName = "[104th] Clone Trooper Backpack [Mechanized]";
		maximumload = 800;
        picture = QPATHTOF(data\icons\IconCloneTrooperBackpack_co.paa);
		hiddenSelectionsTextures[] = {QPATHTOF(data\clone\CloneTrooperBackpackMechanized_co.paa)};
	};
	class GBACKPACK(LR): WPS_backpacks_backpack_trooper_lr
	{
		author = "Queue";
		scope = 2;
		scopeCurator = 2;
		displayName = "[104th] Clone Trooper LR Backpack";
		tf_dialog = "JLTS_clone_lr_programmer_radio_dialog"; //this is for LR
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = "tf_west_radio_code";
		tf_subtype = "digital_lr";
		tf_range = 35000;
		tf_hasLRradio = 1;
		maximumload = 800;
        picture = QPATHTOF(data\icons\IconLRBackpack_co.paa);
	};
	class GBACKPACK(Umbra): GBACKPACK(LR)
	{
		author = "Queue";
		scope = 2;
		scopeCurator = 2;
		displayName = "[104th] Clone Trooper Backpack [Umbra]";
        picture = QPATHTOF(data\icons\IconUmbraBackpack_co.paa);
		hiddenSelectionsTextures[] = {QPATHTOF(data\UmbraBackpack_co.paa),"\Z\wps\addons\backpacks\data\LRBackpackRadios_co.paa"};
	};
	class GBACKPACK(Void): WPS_backpacks_backpack_engineer
	{
		author = "Queue";
		scope = 2;
		scopeCurator = 2;
		displayName = "[104th] Clone Engineer Backpack";
		maximumload = 800;
        picture = QPATHTOF(data\icons\IconVoidBackpack_co.paa);
	};
	class GBACKPACK(Void_Sapper): GBACKPACK(Void)
	{
		author = "Queue";
		scope = 2;
		scopeCurator = 2;
		displayName = "[104th] Clone Engineer Backpack [Sapper]";
		maximumload = 800;
        picture = QPATHTOF(data\icons\IconVoidBackpackSapper_co.paa);
		hiddenSelectionsTextures[] = {QPATHTOF(data\void\VoidBackpackSapper_co.paa), QPATHTOF(data\void\VoidBackpackBagsUnmarked_co.paa)};
	};
	class GBACKPACK(Void_Shield): GBACKPACK(Void)
	{
		author = "Queue";
		scope = 2;
		scopeCurator = 2;
		displayName = "[104th] Clone Engineer Backpack [Shield]";
		maximumload = 800;
        picture = QPATHTOF(data\icons\IconVoidBackpackShield_co.paa);
		hiddenSelectionsTextures[] = {QPATHTOF(data\void\VoidBackpackShield_co.paa), QPATHTOF(data\void\VoidBackpackBagsUnmarked_co.paa)};
	};
	class GBACKPACK(Void_Turret): GBACKPACK(Void)
	{
		author = "Queue";
		scope = 2;
		scopeCurator = 2;
		displayName = "[104th] Clone Engineer Backpack [Turret]";
		maximumload = 800;
        picture = QPATHTOF(data\icons\IconVoidBackpackTurret_co.paa);
		hiddenSelectionsTextures[] = {QPATHTOF(data\void\VoidBackpackTurret_co.paa),QPATHTOF(data\void\VoidBackpackTurretBags_co.paa)};
	};
	class GBACKPACK(Void_LR): WPS_backpacks_backpack_mini_lr
	{
		author = "Queue";
		scope = 2;
		scopeCurator = 2;
		displayName = "[104th] Clone Engineer Backpack [LR]";
		tf_dialog = "JLTS_clone_lr_programmer_radio_dialog"; //this is for LR
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = "tf_west_radio_code";
		tf_subtype = "digital_lr";
		tf_range = 35000;
		tf_hasLRradio = 1;
		maximumload = 800;
	};
	class GBACKPACK(arc): WPS_backpacks_backpack_arc
	{
		author = "Queue";
		scope = 2;
		scopeCurator = 2;
		displayName = "[104th] ARC Backpack";
        picture = QPATHTOF(data\icons\IconARCBackpack_co.paa);
	};
    #include "groundholders.hpp"
};
