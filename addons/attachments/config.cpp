#include "script_component.hpp"
#include "XtdGearModels.hpp"

class CfgPatches
{
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
        };
        weapons[] = {
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {};
        author = AUTHOR;
        authors[] = {""};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

class CfgWeapons
{
    class NVGoggles;

	class GNVG(Ares_NVG_Chip): NVGoggles
	{
		author = "Queue";
		displayName = "[104th] Aries NVG Chip";
		model = "";//"\WPS\WPS_Attachments\NVGVisor.p3d";
		//hiddenSelections[] = {"Visor"};
		//hiddenSelectionsTextures[] = {"\WPS\WPS_Attachments\data\VisorGlowGreen_co.paa)};
		//hiddenSelectionsMaterials[] = {"\WPS\WPS_Attachments\data\VisorGlowGreen.rvmat"};
		picture = QPATHTOF(icons\IconNVGChip_co.paa);
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
        class XtdGearInfo {};
	};
};

class CfgGlasses
{
	class G_Combat;

	class WPEC_attachments_ARF_Christmas: G_Combat
    {
		author = "Queue";
        scope = 1;
        scopeCurator = 1;
        displayName = "[104th] ARF Antlers";
		model = QPATHTOF(ARFChristmas.p3d);
        picture = QPATHTOF(icons\logo_co.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\christmas\arf\ARFChristmas_co.paa)};
		hiddenSelectionsMaterials[] = {QPATHTOF(data\christmas\arf\ARFChristmas.rvmat)};
		mass = 4;
		mode = 4;
	};

	class WPEC_attachments_ARC_Christmas: G_Combat
    {
		author = "Queue";
        scope = 1;
        scopeCurator = 1;
        displayName = "[104th] ARC Bells";
		model = QPATHTOF(ARCChristmas.p3d);
        picture = QPATHTOF(icons\logo_co.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\christmas\arc\ARCChristmas_co.paa)};
		hiddenSelectionsMaterials[] = {QPATHTOF(data\christmas\arc\ARCChristmas.rvmat)};
		mass = 4;
		mode = 4;
	};

	class WPEC_attachments_P2_Christmas: G_Combat
    {
		author = "Queue";
        scope = 1;
        scopeCurator = 1;
        displayName = "[104th] Infantry Hat";
		model = QPATHTOF(P2Christmas.p3d);
        picture = QPATHTOF(icons\logo_co.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\christmas\p2\P2Christmas_co.paa)};
		hiddenSelectionsMaterials[] = {QPATHTOF(data\christmas\p2\P2Christmas.rvmat)};
		mass = 4;
		mode = 4;
	};

	class WPEC_attachments_Rudolph: G_Combat
    {
		author = "Queue";
        scope = 1;
        scopeCurator = 1;
        displayName = "[104th] Rudolph";
		model = QPATHTOF(Rudolph.p3d);
        picture = QPATHTOF(icons\logo_co.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\christmas\rudolph\Rudolph_co.paa)};
		hiddenSelectionsMaterials[] = {QPATHTOF(data\christmas\rudolph\Rudolph.rvmat), QPATHTOF(data\christmas\rudolph\RudolphNose.rvmat)};
		mass = 4;
		mode = 4;
	};

};
