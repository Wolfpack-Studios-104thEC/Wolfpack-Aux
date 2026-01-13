class CfgWeapons {
    class WPS_Phase_2_Helmet_Base;
    class WPS_Phase_2_ARC_Helmet_Base;
    class WPS_ARF_Helmet_Base;
    class WPS_BARC_Helmet_Base;

    //P2
    P2_HELMET_RANK_MACRO(2,CR);
    P2_HELMET_RANK_MACRO(2,CT);
    P2_HELMET_RANK_MACRO(2,SCT);
    P2_HELMET_RANK_MACRO(2,VCT);
    P2_HELMET_RANK_MACRO(2,CLC);
    P2_HELMET_RANK_MACRO(2,CSP1);

    P2_HELMET_CUSTOM_MACRO(2,Ryan);
    P2_HELMET_CUSTOM_MACRO(2,Queue);
    P2_HELMET_CUSTOM_MACRO(2,Ghoul);
    P2_HELMET_CUSTOM_MACRO(2,Juicy);
    P2_HELMET_CUSTOM_MACRO(2,Kalo);
    P2_HELMET_CUSTOM_MACRO(2,Grandpa);
    P2_HELMET_CUSTOM_MACRO(2,Turq);
    P2_HELMET_CUSTOM_MACRO(2,Kona);
    P2_HELMET_CUSTOM_MACRO(2,Spiritual);
    P2_HELMET_CUSTOM_MACRO(2,Sasquatch);
    P2_HELMET_CUSTOM_MACRO(2,Bean);
    P2_HELMET_CUSTOM_MACRO(2,Lone);
    P2_HELMET_CUSTOM_MACRO(2,Hippo);
    P2_HELMET_CUSTOM_MACRO(2,Husky);
    P2_HELMET_CUSTOM_MACRO(2,Skitty);
    P2_HELMET_CUSTOM_MACRO(2,Orion);
    P2_HELMET_CUSTOM_MACRO(2,Impulse);
    P2_HELMET_CUSTOM_MACRO(2,Quake);
    P2_HELMET_CUSTOM_MACRO(2,Roach);
    P2_HELMET_CUSTOM_MACRO(2,CJ);
    P2_HELMET_CUSTOM_MACRO(2,Rodi);
    P2_HELMET_CUSTOM_MACRO(2,Apathy);
    P2_HELMET_CUSTOM_MACRO(2,Fallen);
    P2_HELMET_CUSTOM_MACRO(2,Paddy);
    P2_HELMET_CUSTOM_MACRO(2,Dutchmann);
    P2_HELMET_CUSTOM_MACRO(2,Topdog);
    P2_HELMET_CUSTOM_MACRO(2,Swift);
    P2_HELMET_CUSTOM_MACRO(2,Shadow);
    P2_HELMET_CUSTOM_MACRO(2,Sleepy);
    P2_HELMET_CUSTOM_MACRO(2,Alpha);

    P2_HELMET_CUSTOM_GLOW_MACRO(2,Odin,Glow);
    P2_HELMET_CUSTOM_GLOW_MACRO(2,Ricebowl,White);

    //ARC
    class GHELMET(Phase2_ARC): WPS_Phase_2_ARC_Helmet_Base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[104th] Phase 2 ARC";
        picture = "\WPEC\WPEC_Helmets\icons\IconARC_co.paa";
        hiddenSelectionsTextures[] = {QPATHTOF(helmets\data\arc\rank\Phase2ARC_co.paa), QPATHTOF(helmets\data\arc\light\ARCLight_co.paa), QPATHTOF(helmets\data\visor\visor_co.paa)};
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
    class GHELMET(Phase2_ARF): WPS_ARF_Helmet_Base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[104th] ARF Helmet [Unmarked]";
        picture = "\WPEC\WPEC_Helmets\icons\IconARFUnmarked_co.paa";
        hiddenSelectionsTextures[] = {QPATHTOF(helmets\data\arf\rank\Phas2ARF_co.paa),QPATHTOF(helmets\data\visor\visor_co.paa)};
    };

    ARF_HELMET_RANK_MACRO(2,Billeted);

    ARF_HELMET_CUSTOM_MACRO(2,Drom);
    ARF_HELMET_CUSTOM_MACRO(2,Spec);
    ARF_HELMET_CUSTOM_MACRO(2,Subbie);

    //BARC
    class GHELMET(Phase2_BARC): WPS_BARC_Helmet_Base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[104th] BARC Helmet (Unmarked)";
        picture = "\WPEC\WPEC_Helmets\icons\IconBARC_co.paa";
        hiddenSelectionsTextures[] = {QPATHTOF(helmets\data\barc\rank\Phase2BARC_co.paa), QPATHTOF(helmets\data\visor\visor_co.paa)};

        class XtdGearInfo { 
            model = QGVAR(barc_rank); 
            camo = QUOTE(name); 
	}; 
    };

    BARC_HELMET_RANK_MACRO(2,Billeted);

    BARC_HELMET_CUSTOM_MACRO(2,Gus);
    BARC_HELMET_CUSTOM_MACRO(2,CJ);
    BARC_HELMET_CUSTOM_MACRO(2,Firehawk);
};
