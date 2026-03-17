class CfgWeapons {
    class wps_helmets_helmet_arc;
    class wps_helmets_helmet_arf;
    class wps_helmets_helmet_barc;
    class wps_helmets_helmet_engineer;
    class wps_helmets_helmet_p2_pilot;
    class wps_helmets_helmet_tanker;
    class wps_helmets_helmet_airbone;
    class wps_helmets_helmet_phase1;
    class WPS_helmets_helmet_phase2;

    //P2
    P2_HELMET_RANK_MACRO(2,CR);
    P2_HELMET_RANK_MACRO(2,CT);
    P2_HELMET_RANK_MACRO(2,SCT);
    P2_HELMET_RANK_MACRO(2,VCT);
    P2_HELMET_RANK_MACRO(2,CLC);
    P2_HELMET_RANK_MACRO(2,CSP1);

    P2_HELMET_CUSTOM_MACRO(2,Alpha);
    P2_HELMET_CUSTOM_MACRO(2,Apathy);
    P2_HELMET_CUSTOM_MACRO(2,Bean);
    P2_HELMET_CUSTOM_MACRO(2,Bigfella);
    P2_HELMET_CUSTOM_MACRO(2,Blue);
    P2_HELMET_CUSTOM_MACRO(2,CJ);
    P2_HELMET_CUSTOM_MACRO(2,Crometheus);
    P2_HELMET_CUSTOM_MACRO(2,Dutchmann);
    P2_HELMET_CUSTOM_MACRO(2,Fallen);
    P2_HELMET_CUSTOM_MACRO(2,Ghoul);
    P2_HELMET_CUSTOM_MACRO(2,Grandpa);
    P2_HELMET_CUSTOM_MACRO(2,Hippo);
    P2_HELMET_CUSTOM_MACRO(2,Husky);
    P2_HELMET_CUSTOM_MACRO(2,Impulse);
    P2_HELMET_CUSTOM_MACRO(2,Juicy);
    P2_HELMET_CUSTOM_MACRO(2,Kalo);
    P2_HELMET_CUSTOM_MACRO(2,Kona);
    P2_HELMET_CUSTOM_MACRO(2,Lone);
    P2_HELMET_CUSTOM_MACRO(2,Orion);
    P2_HELMET_CUSTOM_MACRO(2,Paddy);
    P2_HELMET_CUSTOM_MACRO(2,Quake);
    P2_HELMET_CUSTOM_MACRO(2,Queue);
    P2_HELMET_CUSTOM_MACRO(2,Roach);
    P2_HELMET_CUSTOM_MACRO(2,Rodi);
    P2_HELMET_CUSTOM_MACRO(2,Ryan);
    P2_HELMET_CUSTOM_MACRO(2,Sasquatch);
    //P2_HELMET_CUSTOM_MACRO(2,Skitty);
    P2_HELMET_CUSTOM_MACRO(2,Shadow);
    P2_HELMET_CUSTOM_MACRO(2,Sleepy);
    P2_HELMET_CUSTOM_MACRO(2,Spiritual);
    P2_HELMET_CUSTOM_MACRO(2,Swift);
    P2_HELMET_CUSTOM_MACRO(2,Topdog);
    P2_HELMET_CUSTOM_MACRO(2,Turq);

    P2_HELMET_CUSTOM_GLOW_MACRO(2,Odin,Glow);
    P2_HELMET_CUSTOM_GLOW_MACRO(2,Ricebowl,White);

    //ARC
    class GHELMET(ARC): wps_helmets_helmet_arc
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[104th] Phase 2 ARC";
        picture = "\WPEC\WPEC_Helmets\icons\IconARC_co.paa";
        hiddenSelectionsTextures[] = {QPATHTOF(data\arc\rank\Phase2ARC_co.paa), QPATHTOF(data\arc\light\ARCLight_co.paa), QPATHTOF(data\visor\visor_co.paa)};
    };

    ARC_HELMET_RANK_MACRO(2,Trainee);
    ARC_HELMET_RANK_MACRO(2,Veteran);

    ARC_HELMET_CUSTOM_MACRO(2,Blue);
    ARC_HELMET_CUSTOM_MACRO(2,Nook);
    ARC_HELMET_CUSTOM_MACRO(2,Boxing);
    ARC_HELMET_CUSTOM_MACRO(2,Husky);
    ARC_HELMET_CUSTOM_MACRO(2,Firehawk);

    ARC_HELMET_CUSTOM_GLOW_MACRO(2,Graves,Chrome);

    //ARF
    class GHELMET(ARF): wps_helmets_helmet_arf
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[104th] ARF Helmet [Unmarked]";
        picture = "\WPEC\WPEC_Helmets\icons\IconARFUnmarked_co.paa";
        hiddenSelectionsTextures[] = {QPATHTOF(data\arf\rank\Phas2ARF_co.paa),QPATHTOF(data\visor\visor_co.paa)};
    };

    ARF_HELMET_RANK_MACRO(2,Billeted);

    ARF_HELMET_CUSTOM_MACRO(2,Drom);
    ARF_HELMET_CUSTOM_MACRO(2,Spec);
    ARF_HELMET_CUSTOM_MACRO(2,Subbie);

    //BARC
    class GHELMET(BARC): wps_helmets_helmet_barc
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[104th] BARC Helmet (Unmarked)";
        picture = "\WPEC\WPEC_Helmets\icons\IconBARC_co.paa";
        hiddenSelectionsTextures[] = {QPATHTOF(data\barc\rank\Phase2BARC_co.paa), QPATHTOF(data\visor\visor_co.paa)};

        class XtdGearInfo {
            model = QGVAR(barc_rank);
            camo = QUOTE(name);
	};
    };

    BARC_HELMET_RANK_MACRO(2,Billet);

    BARC_HELMET_CUSTOM_MACRO(2,CJ);
    BARC_HELMET_CUSTOM_MACRO(2,Firehawk);
    BARC_HELMET_CUSTOM_MACRO(2,Gus);

//Engineer

    ENGINEER_HELMET_RANK_MACRO(2,Billet);

    ENGINEER_HELMET_CUSTOM_MACRO(2,Hippo);
    ENGINEER_HELMET_CUSTOM_MACRO(2,Lone);
    ENGINEER_HELMET_CUSTOM_MACRO(2,Paddy);
    ENGINEER_HELMET_CUSTOM_MACRO(2,Shark);

    class GHELMET(Pilot_Billeted): wps_helmets_helmet_p2_pilot
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[104th] Phase 2 Pilot";
        hiddenSelectionsTextures[] = {QPATHTOF(data\pilot\rank\Phase2PilotUpper_co.paa), QPATHTOF(data\pilot\rank\Phase2PilotLower_co.paa), QPATHTOF(data\visor\visor_co.paa)};
        hiddenSelectionsMaterials[] = {QPATHTOF(data\pilot\rank\Phase2PilotUpper.rvmat), QPATHTOF(data\pilot\rank\Phase2PilotLower.rvmat), QPATHTOF(data\visor\visor.rvmat)};
    };

    PILOT_HELMET_CUSTOM_MACRO(2,Bandit);
    PILOT_HELMET_CUSTOM_MACRO(2,Killa);
    PILOT_HELMET_CUSTOM_MACRO(2,Kurt);
    PILOT_HELMET_CUSTOM_MACRO(2,Lego);
    PILOT_HELMET_CUSTOM_MACRO(2,Odin);
    PILOT_HELMET_CUSTOM_MACRO(2,Pigs);
    PILOT_HELMET_CUSTOM_MACRO(2,Sleepy);
    PILOT_HELMET_CUSTOM_MACRO(2,Trash);

    class GHELMET(Tanker_Billeted): wps_helmets_helmet_tanker
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[104th] Phase 2 Tanker";
        picture = "\WPEC\WPEC_Helmets\icons\logo_co.paa";
        hiddenSelectionsTextures[] = {QPATHTOF(data\tanker\rank\Phase2TankerBillet_co.paa), QPATHTOF(data\visor\visor_co.paa)};
    };

    TANKER_HELMET_CUSTOM_MACRO(2,Dutchmann);
    TANKER_HELMET_CUSTOM_MACRO(2,Gambler);
    TANKER_HELMET_CUSTOM_MACRO(2,Lone);
    TANKER_HELMET_CUSTOM_MACRO(2,Maverick);

    class GHELMET(Airborne_billeted): wps_helmets_helmet_airbone
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[104th] Phase 2 Airborne";
        picture = "\WPEC\WPEC_Helmets\icons\logo_co.paa";
        hiddenSelectionsTextures[] = {QPATHTOF(data\airborne\Phase2AirborneBillet_co.paa), QPATHTOF(data\visor\visor_co.paa)};
    };

    P1_HELMET_RANK_MACRO(2,CT);
    P1_HELMET_RANK_MACRO(2,SCT);
    P1_HELMET_RANK_MACRO(2,VCT);
    P1_HELMET_RANK_MACRO(2,CLC);
    P1_HELMET_RANK_MACRO(2,CSP1);
    P1_HELMET_RANK_MACRO(2,ARC);
    P1_HELMET_RANK_MACRO(2,AlphaARC);
    P1_HELMET_RANK_MACRO(2,NCO);
    P1_HELMET_RANK_MACRO(2,Command);
};
