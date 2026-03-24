class XtdGearModels {
    class CfgWeapons{
        class GVAR(Arc_rank_vests) {
            label = "[104th] ARC Rank Vests";
            author = AUTHOR;
            options[] = {"role","camo"};
            class role {
                changeingame = 0;
                values[] = {"Standard","EOD","Medic","TL"};
                alwaysSelectable = 1;
            };
            class camo {
                changeingame = 0;
                values[] = {"A","B","C","D","E"};
                alwaysSelectable = 1;
            };
        };
    };
};
