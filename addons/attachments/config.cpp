class CfgPatches
{
	class WPEC_Attachments
	{
        author = "Queue";
		units[] = {"WPEC_CC_Visor_3_Ghoul",
		"WPEC_CC_Visor_4_Odin",
		"WPEC_CC_Visor_4_Ryan",
		"WPEC_ARF_Christmas",
		"WPEC_ARC_Christmas",
		"WPEC_P2_Christmas",
		"WPEC_Rudolph"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_characters_f"};
	};
};

class CfgWeapons
{
    class NVGoggles;

	
	class WPEC_CC_Visor_3_Ghoul: NVGoggles
	{
		author = "Queue";
		displayName = "[104th] Command Visor (Ghoul)";
		model = "\WPEC\WPEC_Attachments\CCVisor3Ghoul.p3d";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\WPEC\WPEC_Attachments\data\CCVisor3Ghoul_co.paa"};
		hiddenSelectionsMaterials[] = {"\WPEC\WPEC_Attachments\data\CCVisor3.rvmat"};
		picture = "\WPEC\WPEC_Attachments\icons\IconCCVisor3_co.paa";
		visionMode[] = {"Normal","NVG","TI"};
		thermalMode[] = {1,6};
		class ItemInfo
		{
			type = 616;
			uniformModel = "\WPEC\WPEC_Attachments\CCVisor3Ghoul.p3d";
			modelOff = "\WPEC\WPEC_Attachments\CCVisor3Ghoul.p3d";
			mass = 20;
			hiddenSelections[] = {"camo1"};
		};
	};
	class WPEC_CC_Visor_4_Odin: NVGoggles
	{
		author = "Queue";
		displayName = "[104th] Command Visor (Odin)";
		model = "\WPEC\WPEC_Attachments\CCVisor4Odin.p3d";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\WPEC\WPEC_Attachments\data\CCVisor3Odin_co.paa"};
		hiddenSelectionsMaterials[] = {"\WPEC\WPEC_Attachments\data\CCVisor4.rvmat"};
		picture = "\WPEC\WPEC_Attachments\icons\IconCCVisor4_co.paa";
		visionMode[] = {"Normal","NVG","TI"};
		thermalMode[] = {1,6};
		class ItemInfo
		{
			type = 616;
			uniformModel = "\WPEC\WPEC_Attachments\CCVisor4Odin.p3d";
			modelOff = "\WPEC\WPEC_Attachments\CCVisor4Odin.p3d";
			mass = 20;
			hiddenSelections[] = {"camo1"};
		};
	};
	class WPEC_CC_Visor_4_Ryan: NVGoggles
	{
		author = "Queue";
		displayName = "[104th] Command Visor (Ryan)";
		model = "\WPEC\WPEC_Attachments\CCVisor4Ryan.p3d";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\WPEC\WPEC_Attachments\data\CCVisor4Ryan_co.paa"};
		hiddenSelectionsMaterials[] = {"\WPEC\WPEC_Attachments\data\CCvisor4.rvmat"};
		picture = "\WPEC\WPEC_Attachments\icons\IconCCVisor4_co.paa";
		visionMode[] = {"Normal","NVG","TI"};
		thermalMode[] = {1,6};
		class ItemInfo
		{
			type = 616;
			uniformModel = "\WPEC\WPEC_Attachments\CCVisor4Ryan.p3d";
			modelOff = "\WPEC\WPEC_Attachments\CCVisor4Ryan.p3d";
			mass = 20;
			hiddenSelections[] = {"camo1"};
		};
	};
	class WPEC_Ares_NVG_Chip: NVGoggles
	{
		author = "Queue";
		displayName = "[104th] Aries NVG Chip";
		model = "";//"\WPS\WPS_Attachments\NVGVisor.p3d";
		//hiddenSelections[] = {"Visor"};
		//hiddenSelectionsTextures[] = {"\WPS\WPS_Attachments\data\VisorGlowGreen_co.paa"};
		//hiddenSelectionsMaterials[] = {"\WPS\WPS_Attachments\data\VisorGlowGreen.rvmat"};
		picture = "WPEC\WPEC_Attachments\icons\IconNVGChip_co.paa";
		visionMode[] = {"Normal","NVG","TI"};
		thermalMode[] = {1,6};
		class ItemInfo
		{
			type = 616;
			uniformModel = "";//"\WPS\WPS_Attachments\NVGVisor.p3d";
			//modelOff = {};
			mass = 20;
			hiddenSelections[] = {"Visor"};
		};
	};
};
	
class CfgGlasses
{
	class G_Combat;
	
	class WPEC_ARF_Christmas: G_Combat
    {
		author = "Queue";
        scope = 1;
        scopeCurator = 1;
        displayName = "[104th] ARF Antlers";
		model = "\WPEC\WPEC_Attachments\ARFChristmas.p3d";
        picture = "\WPEC\WPEC_Attachments\icons\logo_co.paa";
        hiddenSelectionsTextures[] = {"\WPEC\WPEC_Attachments\data\ARFChristmas_co.paa"};
		hiddenSelectionsMaterials[] = {"\WPEC\WPEC_Attachments\data\ARFChristmas.rvmat"};
		mass = 4;
		mode = 4;
	};

	class WPEC_ARC_Christmas: G_Combat
    {
		author = "Queue";
        scope = 1;
        scopeCurator = 1;
        displayName = "[104th] ARC Bells";
		model = "\WPEC\WPEC_Attachments\ARCChristmas.p3d";
        picture = "\WPEC\WPEC_Attachments\icons\logo_co.paa";
        hiddenSelectionsTextures[] = {"\WPEC\WPEC_Attachments\data\ARCChristmas_co.paa"};
		hiddenSelectionsMaterials[] = {"\WPEC\WPEC_Attachments\data\ARCChristmas.rvmat"};
		mass = 4;
		mode = 4;
	};

	class WPEC_P2_Christmas: G_Combat
    {
		author = "Queue";
        scope = 1;
        scopeCurator = 1;
        displayName = "[104th] Infantry Hat";
		model = "\WPEC\WPEC_Attachments\P2Christmas.p3d";
        picture = "\WPEC\WPEC_Attachments\icons\logo_co.paa";
        hiddenSelectionsTextures[] = {"\WPEC\WPEC_Attachments\data\P2Christmas_co.paa"};
		hiddenSelectionsMaterials[] = {"\WPEC\WPEC_Attachments\data\P2Christmas.rvmat"};
		mass = 4;
		mode = 4;
	};

	class WPEC_Rudolph: G_Combat
    {
		author = "Queue";
        scope = 1;
        scopeCurator = 1;
        displayName = "[104th] Rudolph";
		model = "\WPEC\WPEC_Attachments\Rudolph.p3d";
        picture = "\WPEC\WPEC_Attachments\icons\logo_co.paa";
        hiddenSelectionsTextures[] = {"\WPEC\WPEC_Attachments\data\Rudolph_co.paa"};
		hiddenSelectionsMaterials[] = {"\WPEC\WPEC_Attachments\data\Rudolph.rvmat", "\WPEC\WPEC_Attachments\data\RudolphNose.rvmat"};
		mass = 4;
		mode = 4;
	};
	
};