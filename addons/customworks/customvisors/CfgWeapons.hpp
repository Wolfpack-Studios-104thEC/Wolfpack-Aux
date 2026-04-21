class CfgWeapons {
    class wps_attachments_nvg_commandvisor_3;
    class wps_attachments_nvg_commandvisor_4;


	class GNVG(cc_Visor_3_Ghoul): wps_attachments_nvg_commandvisor_3
	{
		author = "Queue";
		displayName = "[104th] Command Visor (Ghoul)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {QPATHTOF(data\CCVisor3Ghoul_co.paa)};
        class XtdGearInfo {
            model = QGVAR(p2_cc_Customs);
            Person = "Ghoul";
        };
	};
	class GNVG(cc_Visor_4_Odin): wps_attachments_nvg_commandvisor_4
	{
		author = "Queue";
		displayName = "[104th] Command Visor (Odin)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {QPATHTOF(data\CCVisor3Odin_co.paa)};
        class XtdGearInfo {
            model = QGVAR(p2_cc_Customs);
            Person = "Odin";
        };
	};
	class GNVG(cc_Visor_4_Ryan): wps_attachments_nvg_commandvisor_4
	{
		author = "Queue";
		displayName = "[104th] Command Visor (Ryan)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {QPATHTOF(data\CCVisor4Ryan_co.paa)};
        class XtdGearInfo {
            model = QGVAR(p2_cc_Customs);
            Person = "Ryan";
        };
	};
};
