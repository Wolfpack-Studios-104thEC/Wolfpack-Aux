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

    //P2
    P2_HELMET_RANK_MACRO(CR);
    P2_HELMET_RANK_MACRO(CT);
    P2_HELMET_RANK_MACRO(SCT);
    P2_HELMET_RANK_MACRO(VCT);
    P2_HELMET_RANK_MACRO(CLC);
    P2_HELMET_RANK_MACRO(CSP1);

    P2_HELMET_CUSTOM_MACRO(Alpha);
    P2_HELMET_CUSTOM_MACRO(Apathy);
    P2_HELMET_CUSTOM_MACRO(Bean);
    P2_HELMET_CUSTOM_MACRO(Bigfella);
    P2_HELMET_CUSTOM_MACRO(Blue);
    P2_HELMET_CUSTOM_MACRO(CJ);
    P2_HELMET_CUSTOM_MACRO(Crometheus);
    P2_HELMET_CUSTOM_MACRO(Dutchmann);
    P2_HELMET_CUSTOM_MACRO(Fallen);
    P2_HELMET_CUSTOM_MACRO(Ghoul);
    P2_HELMET_CUSTOM_MACRO(Grandpa);
    P2_HELMET_CUSTOM_MACRO(Hippo);
    P2_HELMET_CUSTOM_MACRO(Husky);
    P2_HELMET_CUSTOM_MACRO(Impulse);
    P2_HELMET_CUSTOM_MACRO(Juicy);
    P2_HELMET_CUSTOM_MACRO(Kalo);
    P2_HELMET_CUSTOM_MACRO(Kona);
    P2_HELMET_CUSTOM_MACRO(Lone);
    P2_HELMET_CUSTOM_MACRO(Orion);
    P2_HELMET_CUSTOM_MACRO(Paddy);
    P2_HELMET_CUSTOM_MACRO(Quake);
    P2_HELMET_CUSTOM_MACRO(Queue);
    P2_HELMET_CUSTOM_MACRO(Roach);
    P2_HELMET_CUSTOM_MACRO(Rodi);
    P2_HELMET_CUSTOM_MACRO(Ryan);
    P2_HELMET_CUSTOM_MACRO(Sasquatch);
    //P2_HELMET_CUSTOM_MACRO(Skitty);
    P2_HELMET_CUSTOM_MACRO(Shadow);
    P2_HELMET_CUSTOM_MACRO(Sleepy);
    P2_HELMET_CUSTOM_MACRO(Spiritual);
    P2_HELMET_CUSTOM_MACRO(Swift);
    P2_HELMET_CUSTOM_MACRO(Topdog);
    P2_HELMET_CUSTOM_MACRO(Turq);

    P2_HELMET_CUSTOM_GLOW_MACRO(Odin,Glow);
    P2_HELMET_CUSTOM_GLOW_MACRO(Ricebowl,White);

    //ARC
    class GHELMET(ARC): WPS_helmets_helmet_ARC
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[104th] Phase 2 ARC";
        picture = "\WPEC\WPEC_Helmets\icons\IconARC_co.paa";
        hiddenSelectionsTextures[] = {QPATHTOF(data\arc\Phase2ARC_co.paa), QPATHTOF(data\arc\light\ARCLight_co.paa), QPATHTOF(data\visor\visor_co.paa)};
        class XtdGearInfo {
            model = QGVAR(role_rank);
            role = QUOTE(ARC);
            camo = QUOTE(Unmarked);
        };
    };

    ARC_HELMET_RANK_MACRO(Trainee);
    ARC_HELMET_RANK_MACRO(Veteran);

    ARC_HELMET_CUSTOM_MACRO(Blue);
    ARC_HELMET_CUSTOM_MACRO(Nook);
    ARC_HELMET_CUSTOM_MACRO(Boxing);
    ARC_HELMET_CUSTOM_MACRO(Husky);
    ARC_HELMET_CUSTOM_MACRO(Firehawk);

    ARC_HELMET_CUSTOM_GLOW_MACRO(Graves,Chrome);

    //ARF
    class GHELMET(ARF): WPS_helmets_helmet_ARF
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[104th] ARF Helmet [Unmarked]";
        picture = "\WPEC\WPEC_Helmets\icons\IconARFUnmarked_co.paa";
        hiddenSelectionsTextures[] = {QPATHTOF(data\arf\Phas2ARF_co.paa),QPATHTOF(data\visor\visor_co.paa)};
        class XtdGearInfo {
            model = QGVAR(role_rank);
            role = QUOTE(ARF);
            camo = QUOTE(Unmarked);
        };
    };

    ARF_HELMET_RANK_MACRO(Billet);

    ARF_HELMET_CUSTOM_MACRO(Drom);
    ARF_HELMET_CUSTOM_MACRO(Spec);
    ARF_HELMET_CUSTOM_MACRO(Subbie);

    //BARC
    class GHELMET(BARC): WPS_helmets_helmet_BARC
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[104th] BARC Helmet (Unmarked)";
        picture = "\WPEC\WPEC_Helmets\icons\IconBARC_co.paa";
        hiddenSelectionsTextures[] = {QPATHTOF(data\barc\Phase2BARC_co.paa), QPATHTOF(data\visor\visor_co.paa)};

        class XtdGearInfo {
            model = QGVAR(role_rank);
            role = QUOTE(BARC);
            camo = QUOTE(Unmarked);
        };
    };

    BARC_HELMET_RANK_MACRO(Billet);

    BARC_HELMET_CUSTOM_MACRO(CJ);
    BARC_HELMET_CUSTOM_MACRO(Firehawk);
    BARC_HELMET_CUSTOM_MACRO(Gus);

//Engineer

    ENGINEER_HELMET_RANK_MACRO(Billet);

    ENGINEER_HELMET_CUSTOM_MACRO(Hippo);
    ENGINEER_HELMET_CUSTOM_MACRO(Lone);
    ENGINEER_HELMET_CUSTOM_MACRO(Paddy);
    ENGINEER_HELMET_CUSTOM_MACRO(Shark);

    class GHELMET(Pilot_Unmarked): WPS_helmets_helmet_p2_pilot
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[104th] Phase 2 Pilot";
        hiddenSelectionsTextures[] = {QPATHTOF(data\pilot\Phase2PilotUpper_co.paa), QPATHTOF(data\pilot\Phase2PilotLower_co.paa), QPATHTOF(data\visor\visor_co.paa)};
        class XtdGearInfo {
            model = QGVAR(role_rank);
            role = QUOTE(Pilot);
            camo = QUOTE(Unmarked);
        };
    };
    class GHELMET(Pilot_Billeted): WPS_helmets_helmet_p2_pilot
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[104th] Phase 2 Pilot";
        hiddenSelectionsTextures[] = {QPATHTOF(data\pilot\Phase2PilotUpperBillet_co.paa), QPATHTOF(data\pilot\Phase2PilotLower_co.paa), QPATHTOF(data\visor\visor_co.paa)};
        class XtdGearInfo {
            model = QGVAR(role_rank);
            role = QUOTE(Pilot);
            camo = QUOTE(Billet);
        };
    };

    PILOT_HELMET_CUSTOM_MACRO(Bandit);
    PILOT_HELMET_CUSTOM_MACRO(Killa);
    PILOT_HELMET_CUSTOM_MACRO(Kurt);
    PILOT_HELMET_CUSTOM_MACRO(Lego);
    PILOT_HELMET_CUSTOM_MACRO(Odin);
    PILOT_HELMET_CUSTOM_MACRO(Pigs);
    PILOT_HELMET_CUSTOM_MACRO(Sleepy);
    PILOT_HELMET_CUSTOM_MACRO(Trash);

    class GHELMET(Tanker_Billet): WPS_helmets_helmet_Tanker
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[104th] Phase 2 Tanker";
        picture = "\WPEC\WPEC_Helmets\icons\logo_co.paa";
        hiddenSelectionsTextures[] = {QPATHTOF(data\tanker\Phase2TankerBillet_co.paa), QPATHTOF(data\visor\visor_co.paa)};
        class XtdGearInfo {
            model = QGVAR(role_rank);
            role = QUOTE(Tanker);
            camo = QUOTE(Billet);
        };
    };

    TANKER_HELMET_CUSTOM_MACRO(Dutchmann);
    TANKER_HELMET_CUSTOM_MACRO(Gambler);
    TANKER_HELMET_CUSTOM_MACRO(Lone);
    TANKER_HELMET_CUSTOM_MACRO(Maverick);

    class GHELMET(Airborne_Billet): WPS_helmets_helmet_Airborne
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[104th] Phase 2 Airborne";
        picture = "\WPEC\WPEC_Helmets\icons\logo_co.paa";
        hiddenSelectionsTextures[] = {QPATHTOF(data\airborne\Phase2AirborneBillet_co.paa), QPATHTOF(data\visor\visor_co.paa)};
        class XtdGearInfo {
            model = QGVAR(role_rank);
            role = QUOTE(Airborne);
            camo = QUOTE(Billeted);
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
