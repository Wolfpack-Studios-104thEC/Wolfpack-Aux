class CfgWeapons {
    class wps_vests_vest_arc{
        class ItemInfo;
    };
    class GVEST(ARC_Trooper_A): wps_vests_vest_arc
    {
        scope = 2;
        scopecurator = 2;
        displayName = " [104th] ARC Attachmments (A)";
        hiddenSelections[] = {"Camo1","Camo2"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\ARCVestTopTrooper_co.paa), QPATHTOF(data\ARCKamaA_co.paa)};
        class ItemInfo: ItemInfo
        {
            containerClass = "Supply200";
            ARC_VEST_PROTRECTIONS;
        };
        class XtdGearInfo {
            model = QGVAR(Arc_rank_vests);
            role = "Standard";
            camo = "A";
        };
    };
    class GVEST(ARC_Trooper_B): GVEST(ARC_Trooper_A)
    {
        scope = 2;
        scopecurator = 2;
        displayName = " [104th] ARC Attachmments (B)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\ARCVestTopTrooper_co.paa), QPATHTOF(data\ARCKamaB_co.paa)};
        class XtdGearInfo {
            model = QGVAR(Arc_rank_vests);
            role = "Standard";
            camo = "B";
        };
    };
    class GVEST(ARC_Trooper_C): GVEST(ARC_Trooper_A)
    {
        scope = 2;
        scopecurator = 2;
        displayName = " [104th] ARC Attachmments (C)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\ARCVestTopTrooper_co.paa), QPATHTOF(data\ARCKamaC_co.paa)};
        class XtdGearInfo {
            model = QGVAR(Arc_rank_vests);
            role = "Standard";
            camo = "C";
        };
    };
    class GVEST(ARC_Trooper_D): GVEST(ARC_Trooper_A)
    {
        scope = 2;
        scopecurator = 2;
        displayName = " [104th] ARC Attachmments (D)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\ARCVestTopTrooper_co.paa), QPATHTOF(data\ARCKamaD_co.paa)};
        class XtdGearInfo {
            model = QGVAR(Arc_rank_vests);
            role = "Standard";
            camo = "D";
        };
    };
    class GVEST(ARC_Trooper_E): GVEST(ARC_Trooper_A)
    {
        scope = 2;
        scopecurator = 2;
        displayName = " [104th] ARC Attachmments (E)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\ARCVestTopTrooper_co.paa), QPATHTOF(data\ARCKamaE_co.paa)};
        class XtdGearInfo {
            model = QGVAR(Arc_rank_vests);
            role = "Standard";
            camo = "E";
        };
    };

    class GVEST(ARC_EOD_A): GVEST(ARC_Trooper_A)
    {
        scope = 2;
        scopecurator = 2;
        displayName = "[104th] ARC Attachmments [EOD] (A)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\ARCVestTopEOD_co.paa), QPATHTOF(data\ARCKamaA_co.paa)};
        class XtdGearInfo {
            model = QGVAR(Arc_rank_vests);
            role = "EOD";
            camo = "A";
        };
    };
    class GVEST(ARC_EOD_B): GVEST(ARC_Trooper_A)
    {
        scope = 2;
        scopecurator = 2;
        displayName = "[104th] ARC Attachmments [EOD] (B)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\ARCVestTopEOD_co.paa), QPATHTOF(data\ARCKamaB_co.paa)};
        class XtdGearInfo {
            model = QGVAR(Arc_rank_vests);
            role = "EOD";
            camo = "B";
        };
    };
    class GVEST(ARC_EOD_C): GVEST(ARC_Trooper_A)
    {
        scope = 2;
        scopecurator = 2;
        displayName = "[104th] ARC Attachmments [EOD] (C)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\ARCVestTopEOD_co.paa), QPATHTOF(data\ARCKamaC_co.paa)};
        class XtdGearInfo {
            model = QGVAR(Arc_rank_vests);
            role = "EOD";
            camo = "C";
        };
    };
    class GVEST(ARC_EOD_D): GVEST(ARC_Trooper_A)
    {
        scope = 2;
        scopecurator = 2;
        displayName = "[104th] ARC Attachmments [EOD] (D)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\ARCVestTopEOD_co.paa), QPATHTOF(data\ARCKamaD_co.paa)};
        class XtdGearInfo {
            model = QGVAR(Arc_rank_vests);
            role = "EOD";
            camo = "D";
        };
    };
    class GVEST(ARC_EOD_E): GVEST(ARC_Trooper_A)
    {
        scope = 2;
        scopecurator = 2;
        displayName = "[104th] ARC Attachmments [EOD] (E)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\ARCVestTopEOD_co.paa), QPATHTOF(data\ARCKamaE_co.paa)};
        class XtdGearInfo {
            model = QGVAR(Arc_rank_vests);
            role = "EOD";
            camo = "E";
        };
    };

    class GVEST(ARC_Medic_A): GVEST(ARC_Trooper_A)
    {
        scope = 2;
        scopecurator = 2;
        displayName = "[104th] ARC Attachmments [Medic] (A)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\ARCVestTopMedic_co.paa), QPATHTOF(data\ARCKamaA_co.paa)};
        class XtdGearInfo {
            model = QGVAR(Arc_rank_vests);
            role = "Medic";
            camo = "A";
        };
    };
    class GVEST(ARC_Medic_B): GVEST(ARC_Trooper_A)
    {
        scope = 2;
        scopecurator = 2;
        displayName = "[104th] ARC Attachmments [Medic] (B)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\ARCVestTopMedic_co.paa), QPATHTOF(data\ARCKamaB_co.paa)};
        class XtdGearInfo {
            model = QGVAR(Arc_rank_vests);
            role = "Medic";
            camo = "B";
        };
    };
    class GVEST(ARC_Medic_C): GVEST(ARC_Trooper_A)
    {
        scope = 2;
        scopecurator = 2;
        displayName = "[104th] ARC Attachmments [Medic] (C)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\ARCVestTopMedic_co.paa), QPATHTOF(data\ARCKamaC_co.paa)};
        class XtdGearInfo {
            model = QGVAR(Arc_rank_vests);
            role = "Medic";
            camo = "C";
        };
    };
    class GVEST(ARC_Medic_D): GVEST(ARC_Trooper_A)
    {
        scope = 2;
        scopecurator = 2;
        displayName = "[104th] ARC Attachmments [Medic] (D)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\ARCVestTopMedic_co.paa), QPATHTOF(data\ARCKamaD_co.paa)};
        class XtdGearInfo {
            model = QGVAR(Arc_rank_vests);
            role = "Medic";
            camo = "D";
        };
    };
    class GVEST(ARC_Medic_E): GVEST(ARC_Trooper_A)
    {
        scope = 2;
        scopecurator = 2;
        displayName = "[104th] ARC Attachmments [Medic] (E)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\ARCVestTopMedic_co.paa), QPATHTOF(data\ARCKamaE_co.paa)};
        class XtdGearInfo {
            model = QGVAR(Arc_rank_vests);
            role = "Medic";
            camo = "E";
        };
    };

    class GVEST(ARC_TL_A): GVEST(ARC_Trooper_A)
    {
        scope = 2;
        scopecurator = 2;
        displayName = "[104th] ARC Attachmments [Team Lead] (A)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\ARCVestTopTL_co.paa), QPATHTOF(data\ARCKamaA_co.paa)};
        class XtdGearInfo {
            model = QGVAR(Arc_rank_vests);
            role = "TL";
            camo = "A";
        };
    };
    class GVEST(ARC_TL_B): GVEST(ARC_Trooper_A)
    {
        scope = 2;
        scopecurator = 2;
        displayName = "[104th] ARC Attachmments [Team Lead] (B)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\ARCVestTopTL_co.paa), QPATHTOF(data\ARCKamaB_co.paa)};
        class XtdGearInfo {
            model = QGVAR(Arc_rank_vests);
            role = "TL";
            camo = "B";
        };
    };
    class GVEST(ARC_TL_C): GVEST(ARC_Trooper_A)
    {
        scope = 2;
        scopecurator = 2;
        displayName = "[104th] ARC Attachmments [Team Lead] (C)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\ARCVestTopTL_co.paa), QPATHTOF(data\ARCKamaC_co.paa)};
        class XtdGearInfo {
            model = QGVAR(Arc_rank_vests);
            role = "TL";
            camo = "C";
        };
    };
    class GVEST(ARC_TL_D): GVEST(ARC_Trooper_A)
    {
        scope = 2;
        scopecurator = 2;
        displayName = "[104th] ARC Attachmments [Team Lead] (D)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\ARCVestTopTL_co.paa), QPATHTOF(data\ARCKamaD_co.paa)};
        class XtdGearInfo {
            model = QGVAR(Arc_rank_vests);
            role = "TL";
            camo = "D";
        };
    };
    class GVEST(ARC_TL_E): GVEST(ARC_Trooper_A)
    {
        scope = 2;
        scopecurator = 2;
        displayName = "[104th] ARC Attachmments [Team Lead] (E)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\ARCVestTopTL_co.paa), QPATHTOF(data\ARCKamaE_co.paa)};
        class XtdGearInfo {
            model = QGVAR(Arc_rank_vests);
            role = "TL";
            camo = "E";
        };
    };
};
