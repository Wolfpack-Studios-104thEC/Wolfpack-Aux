
class CfgWeapons
{
    class WPS_vests_vest_Arc;

    ARCBASEVESTMACRO(Trooper,A);
    ARCBASEVESTMACRO(Trooper,B);
    ARCBASEVESTMACRO(Trooper,C);
    ARCBASEVESTMACRO(Trooper,D);
    ARCBASEVESTMACRO(Trooper,E);

    ARCBASEVESTMACRO(EOD,A);
    ARCBASEVESTMACRO(EOD,B);
    ARCBASEVESTMACRO(EOD,C);
    ARCBASEVESTMACRO(EOD,D);
    ARCBASEVESTMACRO(EOD,E);

    ARCBASEVESTMACRO(Medic,A);
    ARCBASEVESTMACRO(Medic,B);
    ARCBASEVESTMACRO(Medic,C);
    ARCBASEVESTMACRO(Medic,D);
    ARCBASEVESTMACRO(Medic,E);

    ARCBASEVESTMACRO(TL,A);
    ARCBASEVESTMACRO(TL,B);
    ARCBASEVESTMACRO(TL,C);
    ARCBASEVESTMACRO(TL,D);
    ARCBASEVESTMACRO(TL,E);

    //Customs
    ARCCUSTOMVESTMACRO(Graves);

    /*class WPEC_Vest_ARC_Graves: WPEC_Vest_Base
    {
        scope = 2;
        scopecurator = 2;
        displayName = "[104th] ARC Attachmments (Graves)";
        model = "\WPEC\WPEC_Vests\ARCVestGraves.p3d";
        uniformModel = "\WPEC\WPEC_Vests\ARCVestGraves.p3d";
        hiddenSelections[] = {"Camo1","Camo2"};
        hiddenSelectionsTextures[] = {"WPEC\WPEC_Vests\data\ARCVestTopGraves_co.paa", "WPEC\WPEC_Vests\data\ARCVestBottomGraves_co.paa"};
        hiddenSelectionsMaterials[] = {"WPEC\WPEC_Vests\data\ARCVestTop.rvmat", "WPEC\WPEC_Vests\data\ARCVestBottom.rvmat"};
        class ItemInfo: ItemInfo
        {
            uniformModel = "WPEC\WPEC_Vests\ARCVestGraves.p3d";
            containerClass = "Supply200";
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 6;
                    passThrough	= 0.3;
                };
            };
        };
    };*/
};
