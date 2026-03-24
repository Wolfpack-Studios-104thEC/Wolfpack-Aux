class CfgWeapons {

    class WPEC_equipment_vests_vest_ARC_Trooper_A;
    class GVEST(ARC_Graves): WPEC_equipment_vests_vest_ARC_Trooper_A
    {
        scope = 2;
        scopecurator = 2;
        displayName = "[104th] ARC Attachmments (Graves)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\arc\ARCVestTopGraves_co.paa), QPATHTOF(data\arc\ARCVestBottomGraves_co.paa)};
        class XtdGearInfo {
            model = QGVAR(Custom_Arc_rank_vests);
            person = "Graves";
        };
    };
};
