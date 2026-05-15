class CfgWeapons {
    class WPS_helmets_helmet_phase2;
    class WPS_helmets_helmet_ARC;
    class WPS_helmets_helmet_ARF;
    class WPS_helmets_helmet_BARC;
    class WPS_helmets_helmet_Engineer;
    class WPS_helmets_helmet_p2_pilot;
    class WPS_helmets_helmet_Tanker;
    class WPS_helmets_helmet_Airborne;
    class WPS_helmets_helmet_phase1;
    class WPS_helmets_helmet_evo;
    class WPS_helmets_helmet_BARC_bacara;
    class WPS_helmets_helmet_phase2_bacara;

    //P2
    P2_HELMET_RANK_MACRO(CR);
    P2_HELMET_RANK_MACRO(CT);
    P2_HELMET_RANK_MACRO(SCT);
    P2_HELMET_RANK_MACRO(VCT);
    P2_HELMET_RANK_MACRO(CLC);
    P2_HELMET_RANK_MACRO(CSP1);

    //ARC
    class GHELMET(ARC): WPS_helmets_helmet_ARC
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[104th] Phase 2 ARC";
        hiddenSelectionsTextures[] = {QPATHTOF(data\arc\Phase2ARC_co.paa), QPATHTOF(data\arc\light\ARCLight_co.paa), QPATHTOF(data\visor\visor_co.paa)};
        class XtdGearInfo {
            model = QGVAR(role_rank_helm);
            role = QUOTE(ARC);
            camo = QUOTE(Unmarked);
        };
    };

    ARC_HELMET_RANK_MACRO(Trainee);
    ARC_HELMET_RANK_MACRO(Veteran);

    //ARF
    class GHELMET(ARF): WPS_helmets_helmet_ARF
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[104th] ARF Helmet [Unmarked]";
        hiddenSelectionsTextures[] = {QPATHTOF(data\arf\Phas2ARF_co.paa),QPATHTOF(data\visor\visor_co.paa)};
        class XtdGearInfo {
            model = QGVAR(role_rank_helm);
            role = QUOTE(ARF);
            camo = QUOTE(Unmarked);
        };
    };

    ARF_HELMET_RANK_MACRO(Billet);

    //BARC
    class GHELMET(BARC): WPS_helmets_helmet_BARC
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[104th] BARC Helmet (Unmarked)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\barc\Phase2BARC_co.paa), QPATHTOF(data\visor\visor_co.paa)};

        class XtdGearInfo {
            model = QGVAR(role_rank_helm);
            role = QUOTE(BARC);
            camo = QUOTE(Unmarked);
        };
    };

    BARC_HELMET_RANK_MACRO(Billet);

    //Bacara
    class GHELMET(p2barc_bacara): WPS_helmets_helmet_BARC_bacara
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[104th] Bacara BARC Helmet (Unmarked)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\barc\Phase2BARC_co.paa),QPATHTOF(data\bacara\Phase2BARC_Bacara_wpec_co), QPATHTOF(data\visor\visor_co.paa)};

        /*class XtdGearInfo {
            model = QGVAR(role_rank_helm);
            role = QUOTE(BARC);
            camo = QUOTE(Unmarked);
        };*/
    };
    class GHELMET(p2_bacara): WPS_helmets_helmet_phase2_bacara
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[104th] Bacara Phase 2 Helmet (Unmarked)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\phase2\Phase2CLC_co.paa),QPATHTOF(data\bacara\Bacara104th_co.paa), QPATHTOF(data\visor\visor_co.paa)}; 

        /*class XtdGearInfo {
            model = QGVAR(role_rank_helm);
            role = QUOTE(BARC);
            camo = QUOTE(Unmarked);
        };*/
    };
//Engineer

    ENGINEER_HELMET_RANK_MACRO(Billet);

    class GHELMET(Pilot_Unmarked): WPS_helmets_helmet_p2_pilot
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[104th] Phase 2 Pilot";
        hiddenSelectionsTextures[] = {QPATHTOF(data\pilot\Phase2PilotUpper_co.paa), QPATHTOF(data\pilot\Phase2PilotLower_co.paa), QPATHTOF(data\visor\visor_co.paa)};
        class XtdGearInfo {
            model = QGVAR(role_rank_helm);
            role = QUOTE(Pilot);
            camo = QUOTE(Unmarked);
        };
    };
    class GHELMET(Pilot_Billet): WPS_helmets_helmet_p2_pilot
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[104th] Phase 2 Pilot";
        hiddenSelectionsTextures[] = {QPATHTOF(data\pilot\Phase2PilotUpperBillet_co.paa), QPATHTOF(data\pilot\Phase2PilotLower_co.paa), QPATHTOF(data\visor\visor_co.paa)};
        class XtdGearInfo {
            model = QGVAR(role_rank_helm);
            role = QUOTE(Pilot);
            camo = QUOTE(Billet);
        };
    };

    class GHELMET(Tanker_Billet): WPS_helmets_helmet_Tanker
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[104th] Phase 2 Tanker";
        hiddenSelectionsTextures[] = {QPATHTOF(data\tanker\Phase2TankerBillet_co.paa), QPATHTOF(data\visor\visor_co.paa)};
        class XtdGearInfo {
            model = QGVAR(role_rank_helm);
            role = QUOTE(Tanker);
            camo = QUOTE(Billet);
        };
    };

    class GHELMET(Airborne_Billet): WPS_helmets_helmet_Airborne
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[104th] Phase 2 Airborne";
        hiddenSelectionsTextures[] = {QPATHTOF(data\airborne\Phase2AirborneBillet_co.paa), QPATHTOF(data\visor\visor_co.paa)};
        class XtdGearInfo {
            model = QGVAR(role_rank_helm);
            role = QUOTE(Airborne);
            camo = QUOTE(Billet);
        };
    };

    class GHELMET(EVO): WPS_helmets_helmet_evo
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[104th] Phase 2 EVO";
        hiddenSelectionsTextures[] = {QPATHTOF(data\evo\EVOBillet.paa), QPATHTOF(data\visor\visor_co.paa)};
        class XtdGearInfo {
            model = QGVAR(role_rank_helm);
            role = QUOTE(EVO);
            camo = QUOTE(Billet);
        };
    };


    P1_HELMET_RANK_MACRO(CT);
    P1_HELMET_RANK_MACRO(SCT);
    P1_HELMET_RANK_MACRO(VCT);
    P1_HELMET_RANK_MACRO(CLC);
    P1_HELMET_RANK_MACRO(CSP1);
    P1_HELMET_RANK_MACRO(ARC);
    P1_HELMET_RANK_MACRO(AlphaARC);
    P1_HELMET_RANK_MACRO(NCO);
    P1_HELMET_RANK_MACRO(Command);
};
