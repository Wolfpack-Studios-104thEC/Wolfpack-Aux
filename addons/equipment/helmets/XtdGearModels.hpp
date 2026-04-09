class XtdGearModels {
    class CfgWeapons {
        class GVAR(p2_rank_helm) {
            label = "[104th] Phase 2 Rank Helmets";
            author = AUTHOR;
            options[] = {"camo"};

            class camo {
                changeingame = 0;
                alwaysSelectable = 1;
                values[] = {"CR","CT","SCT","VCT","CLC","CSP1"};
            };
        };
        class GVAR(role_rank_helm) {
            label = "[104th] Role Rank Helmets";
            author = AUTHOR;
            options[] = {"role","camo"};
            class role {
                changeingame = 0;
                values[] = {"Airborne","ARC","ARF","BARC","Engineer","EVO","Pilot","Tanker"};
                alwaysSelectable = 1;
            };
            class camo {
                changeingame = 0;
                values[] = {"Unmarked","Trainee","Billet","Veteran"};
                alwaysSelectable = 1;
                class Billet { label = "Billeted"; };
            };
        };
        class GVAR(p1_rank_helm) {
            label = "[104th] Phase 1 Rank Helmets";
            author = AUTHOR;
            options[] = {"camo"};

            class camo {
                changeingame = 0;
                alwaysSelectable = 1;
                values[] = {"CT","SCT","VCT","CLC","CSP1","ARC","AlphaARC","NCO","Command"};
            };
        };
    };
};
