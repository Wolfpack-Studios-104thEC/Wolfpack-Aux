class CfgWeapons {

    class WPEC_equipment_vests_vest_ARC_Trooper_A;
    class wps_vests_vest_Cmd1;
    class wps_vests_vest_Kama1;
    class GVEST(ARC_Graves): WPEC_equipment_vests_vest_ARC_Trooper_A
    {
        scope = 1;
        scopecurator = 1;
        displayName = "[104th] ARC Attachmments (Graves)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\arc\ARCVestTopGraves_co.paa), QPATHTOF(data\arc\ARCVestBottomGraves_co.paa)};
        class XtdGearInfo {
            model = QGVAR(Custom_Arc_rank_vests);
            person = "Graves";
        };
    };
    class GVEST(P2_Odin): wps_vests_vest_Cmd1
    {
        scope = 1;
        scopecurator = 1;
        displayName = "[104th] P2 Vest Attachmments (Odin)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\command\CMDVestTopOdin_co.paa), QPATHTOF(data\command\CMDVestBottomOdin_co.paa)};
        class XtdGearInfo {
            model = QGVAR(Custom_p2_rank_vests);
            person = "Odin";
        };
    };
    class GVEST(P2_Juicy): wps_vests_vest_Cmd1
    {
        scope = 1;
        scopecurator = 1;
        displayName = "[104th] P2 Vest Attachmments (Juicy)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\p2\P2VestTopJuicy_co.paa), QPATHTOF(data\p2\P2VestBottomJuicy_co.paa)};
        class XtdGearInfo {
            model = QGVAR(Custom_p2_rank_vests);
            person = "Juicy";
        };
    };
    class GVEST(P2_Queue): wps_vests_vest_Kama1
    {
        scope = 1;
        scopecurator = 1;
        displayName = "[104th] P2 Vest Attachmments (Juicy)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\command\CMDVestBottomQueue_co.paa)};
        class XtdGearInfo {
            model = QGVAR(Custom_p2_rank_vests);
            person = "Queue";
        };
    };
};
