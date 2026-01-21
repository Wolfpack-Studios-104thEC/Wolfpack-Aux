class CfgPatches
{
	class WPEC_Helmets
	{
        author = "Queue";
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_characters_f", "WPS_Helmets"};
	};
};

class CfgWeapons
{
    class WPS_Phase_2_Helmet_Base{
        class itemInfo;
    };
    class WPS_Phase_15_Helmet_Base;
    class WPS_Phase_2_ARC_Helmet_Base;
    class WPS_ARF_Helmet_Base;
    class WPS_BARC_Helmet_Base;
    class WPS_Engineer_Helmet_Base;
    class WPS_Phase_2_Pilot_Base;
    class WPS_Phase_2_EVO_Helmet_Base;
    class WPS_Phase_1_Helmet_Base;
    class WPS_Phase_2_Tanker_Helmet_Base;
    class WPS_Phase_2_Airborne_Helmet_Base;
    class HeadgearItem;

    class WPEC_Phase_2_Helmet_CR: WPS_Phase_2_Helmet_Base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[104th] Phase 2 [CR]";
        picture = "\WPEC\WPEC_Helmets\icons\IconCR_co.paa";
        hiddenSelectionsTextures[] = {"\WPEC\WPEC_Helmets\data\Phase2CR_co.paa", "WPEC\WPEC_Helmets\data\visor_co.paa"};
    };
    class WPEC_Phase_2_Helmet_CT: WPS_Phase_2_Helmet_Base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[104th] Phase 2 [CT]";
        picture = "\WPEC\WPEC_Helmets\icons\IconCT_co.paa";
        hiddenSelectionsTextures[] = {"\WPEC\WPEC_Helmets\data\Phase2CT_co.paa", "WPEC\WPEC_Helmets\data\visor_co.paa"};
    };
    class WPEC_Phase_2_Helmet_SCT: WPS_Phase_2_Helmet_Base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[104th] Phase 2 [SCT]";
        picture = "\WPEC\WPEC_Helmets\icons\IconSCT_co.paa";
        hiddenSelectionsTextures[] = {"\WPEC\WPEC_Helmets\data\Phase2SCT_co.paa", "WPEC\WPEC_Helmets\data\visor_co.paa"};
    };
    class WPEC_Phase_2_Helmet_VCT: WPS_Phase_2_Helmet_Base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[104th] Phase 2 [VCT]";
        picture = "\WPEC\WPEC_Helmets\icons\IconVCT_co.paa";
        hiddenSelectionsTextures[] = {"\WPEC\WPEC_Helmets\data\Phase2VCT_co.paa", "WPEC\WPEC_Helmets\data\visor_co.paa"};
    };
    class WPEC_Phase_2_Helmet_CLC: WPS_Phase_2_Helmet_Base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[104th] Phase 2 [CLC]";
        picture = "\WPEC\WPEC_Helmets\icons\IconCLC_co.paa";
        hiddenSelectionsTextures[] = {"\WPEC\WPEC_Helmets\data\Phase2CLC_co.paa", "WPEC\WPEC_Helmets\data\visor_co.paa"};
    };
    class WPEC_Phase_2_Helmet_CSP1: WPS_Phase_2_Helmet_Base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[104th] Phase 2 [CSP]";
        picture = "\WPEC\WPEC_Helmets\icons\IconCSP_co.paa";
        hiddenSelectionsTextures[] = {"\WPEC\WPEC_Helmets\data\Phase2CSP1_co.paa", "WPEC\WPEC_Helmets\data\visor_co.paa"};
    };
    class WPEC_Phase_2_Helmet_SCT_old: WPS_Phase_2_Helmet_Base
    {
        scope = 1;
        scopeCurator = 1;
        displayName = "[104th] Phase 2 [VCT]";
        picture = "\WPEC\WPEC_Helmets\icons\IconVCT_co.paa";
        hiddenSelectionsTextures[] = {"\WPEC\WPEC_Helmets\data\Phase2SCTold_co.paa", "WPEC\WPEC_Helmets\data\visor_co.paa"};
    };
    class WPEC_Phase_2_Helmet_VCT_old: WPS_Phase_2_Helmet_Base
    {
        scope = 1;
        scopeCurator = 1;
        displayName = "[104th] Phase 2 [VCT]";
        picture = "\WPEC\WPEC_Helmets\icons\IconVCT_co.paa";
        hiddenSelectionsTextures[] = {"\WPEC\WPEC_Helmets\data\Phase2VCTold_co.paa", "WPEC\WPEC_Helmets\data\visor_co.paa"};
    };
    class WPEC_Phase_2_Helmet_Ryan: WPS_Phase_2_Helmet_Base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[104th] Phase 2 (Ryan)";
        picture = "\WPEC\WPEC_Helmets\icons\IconRyan_co.paa";
        hiddenSelectionsTextures[] = {"\WPEC\WPEC_Helmets\data\Phase2Ryan_co.paa", "WPEC\WPEC_Helmets\data\visor_co.paa"};
        //hiddenSelectionsMaterials[] = {"\WPEC\WPEC_Helmets\data\Phase2.rvmat", "WPEC\WPEC_Helmets\data\visorGold.rvmat"};
        subItems[] = {};
    };
    class WPEC_Phase_2_Helmet_Odin: WPS_Phase_2_Helmet_Base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[104th] Phase 2 (Odin)";
        picture = "\WPEC\WPEC_Helmets\icons\IconOdin_co.paa";
        hiddenSelectionsTextures[] = {"\WPEC\WPEC_Helmets\data\Phase2Odin_co.paa", "WPEC\WPEC_Helmets\data\VisorGlow_co.paa"};
        hiddenSelectionsMaterials[] = {"\WPEC\WPEC_Helmets\data\Phase2.rvmat", "WPEC\WPEC_Helmets\data\VisorGlow.rvmat"};
        subItems[] = {};
    };
    class WPEC_Phase_2_Helmet_Queue: WPS_Phase_2_Helmet_Base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[104th] Phase 2 (Queue)";
        picture = "\WPEC\WPEC_Helmets\icons\IconQueue_co.paa";
        hiddenSelectionsTextures[] = {"\WPEC\WPEC_Helmets\data\Phase2Queue_co.paa", "WPEC\WPEC_Helmets\data\visor_co.paa"};
        //hiddenSelectionsMaterials[] = {"\WPEC\WPEC_Helmets\data\Phase2.rvmat", "WPEC\WPEC_Helmets\data\visorChrome.rvmat"};
        subItems[] = {};
    };
    class WPEC_Phase_15_Helmet_Queue: WPS_Phase_15_Helmet_Base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[104th] Phase 1.5 (Queue)";
        picture = "\WPEC\WPEC_Helmets\icons\IconQueue15_co.paa";
        hiddenSelectionsTextures[] = {"\WPEC\WPEC_Helmets\data\Phase15Queue_co.paa", "WPEC\WPEC_Helmets\data\visor_co.paa"};
        hiddenSelectionsMaterials[] = {"\WPS\WPS_Helmets\data\Phase15.rvmat", "WPEC\WPEC_Helmets\data\visorGold.rvmat"};
        subItems[] = {};
    };
    class WPEC_Phase_2_Helmet_Ghoul: WPS_Phase_2_Helmet_Base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[104th] Phase 2 (Ghoul)";
        picture = "\WPEC\WPEC_Helmets\icons\IconGhoul_co.paa";
        hiddenSelectionsTextures[] = {"\WPEC\WPEC_Helmets\data\Phase2Ghoul_co.paa", "WPEC\WPEC_Helmets\data\Visor_co.paa"};
        hiddenSelectionsMaterials[] = {"\WPS\WPS_Helmets\data\Phase2.rvmat", "WPEC\WPEC_Helmets\data\Visor.rvmat"};
        subItems[] = {};
    };
    class WPEC_Phase_2_Helmet_Ricebowl: WPS_Phase_2_Helmet_Base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[104th] Phase 2 (Ricebowl)";
        picture = "\WPEC\WPEC_Helmets\icons\IconRicebowl_co.paa";
        hiddenSelectionsTextures[] = {"\WPEC\WPEC_Helmets\data\Phase2Ricebowl_co.paa", "WPEC\WPEC_Helmets\data\VisorWhite_co.paa"};
        hiddenSelectionsMaterials[] = {"\WPS\WPS_Helmets\data\Phase2.rvmat", "WPEC\WPEC_Helmets\data\VisorWhite.rvmat"};
    };
    class WPEC_Phase_2_Helmet_Juicy: WPS_Phase_2_Helmet_Base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[104th] Phase 2 (Juicy)";
        picture = "\WPEC\WPEC_Helmets\icons\IconJuicy_co.paa";
        hiddenSelectionsTextures[] = {"\WPEC\WPEC_Helmets\data\Phase2Juicy_co.paa", "WPEC\WPEC_Helmets\data\visor_co.paa"};
    };
    class WPEC_Phase_2_Helmet_Kalo: WPS_Phase_2_Helmet_Base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[104th] Phase 2 (Kalo)";
        picture = "\WPEC\WPEC_Helmets\icons\IconKalo_co.paa";
        hiddenSelectionsTextures[] = {"\WPEC\WPEC_Helmets\data\Phase2Kalo_co.paa", "WPEC\WPEC_Helmets\data\visor_co.paa"};
    };
    class WPEC_Phase_2_Helmet_Grandpa: WPS_Phase_2_Helmet_Base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[104th] Phase 2 (Grandpa)";
        picture = "\WPEC\WPEC_Helmets\icons\IconGrandpa_co.paa";
        hiddenSelectionsTextures[] = {"\WPEC\WPEC_Helmets\data\Phase2Grandpa_co.paa", "WPEC\WPEC_Helmets\data\visor_co.paa"};
    };
    class WPEC_Phase_2_Helmet_Turq: WPS_Phase_2_Helmet_Base
    {
        scope = 1;
        scopeCurator = 2;
        displayName = "[104th] Phase 2 (Turq)";
        picture = "\WPEC\WPEC_Helmets\icons\IconTurq_co.paa";
        hiddenSelectionsTextures[] = {"\WPEC\WPEC_Helmets\data\Phase2Turq_co.paa", "WPEC\WPEC_Helmets\data\visor_co.paa"};
    };
    class WPEC_Phase_2_Helmet_Kona: WPS_Phase_2_Helmet_Base
    {
        scope = 1;
        scopeCurator = 2;
        displayName = "[104th] Phase 2 (Kona)";
        picture = "\WPEC\WPEC_Helmets\icons\IconKona_co.paa";
        hiddenSelectionsTextures[] = {"\WPEC\WPEC_Helmets\data\Phase2Kona_co.paa", "WPEC\WPEC_Helmets\data\visor_co.paa"};
    };
    class WPEC_Phase_2_Helmet_Spiritual: WPS_Phase_2_Helmet_Base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[104th] Phase 2 (Spiritual)";
        picture = "\WPEC\WPEC_Helmets\icons\IconSpiritual_co.paa";
        hiddenSelectionsTextures[] = {"\WPEC\WPEC_Helmets\data\Phase2Spiritual_co.paa", "WPEC\WPEC_Helmets\data\visor_co.paa"};
    };
    class WPEC_Phase_2_Helmet_Sasquatch: WPS_Phase_2_Helmet_Base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[104th] Phase 2 (Sasquatch)";
        picture = "\WPEC\WPEC_Helmets\icons\IconSasquatch_co.paa";
        hiddenSelectionsTextures[] = {"\WPEC\WPEC_Helmets\data\Phase2Sasquatch_co.paa", "WPEC\WPEC_Helmets\data\visor_co.paa"};
    };
    class WPEC_Phase_2_Helmet_Bean: WPS_Phase_2_Helmet_Base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[104th] Phase 2 (Bean)";
        picture = "\WPEC\WPEC_Helmets\icons\IconBean_co.paa";
        hiddenSelectionsTextures[] = {"\WPEC\WPEC_Helmets\data\Phase2Bean_co.paa", "WPEC\WPEC_Helmets\data\visor_co.paa"};
    };
    class WPEC_Phase_2_Helmet_Lone: WPS_Phase_2_Helmet_Base
    {
        scope = 1;
        scopeCurator = 1;
        displayName = "[104th] Phase 2 (Lone)";
        picture = "\WPEC\WPEC_Helmets\icons\IconLone_co.paa";
        hiddenSelectionsTextures[] = {"\WPEC\WPEC_Helmets\data\Phase2Lone_co.paa", "WPEC\WPEC_Helmets\data\visor_co.paa"};
    };
    class WPEC_Phase_2_Helmet_Hippo: WPS_Phase_2_Helmet_Base
    {
        scope = 1;
        scopeCurator = 2;
        displayName = "[104th] Phase 2 (Hippo)";
        picture = "\WPEC\WPEC_Helmets\icons\IconHippo_co.paa";
        hiddenSelectionsTextures[] = {"\WPEC\WPEC_Helmets\data\Phase2Hippo_co.paa", "WPEC\WPEC_Helmets\data\visor_co.paa"};
    };
    class WPEC_Phase_2_Helmet_Husky: WPS_Phase_2_Helmet_Base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[104th] Phase 2 (Husky)";
        picture = "\WPEC\WPEC_Helmets\icons\IconHusky_co.paa";
        hiddenSelectionsTextures[] = {"\WPEC\WPEC_Helmets\data\Phase2Husky_co.paa", "WPEC\WPEC_Helmets\data\visor_co.paa"};
    };
    class WPEC_Phase_2_Helmet_Skitty: WPS_Phase_2_Helmet_Base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[104th] Phase 2 (Skitty)";
        picture = "\WPEC\WPEC_Helmets\icons\IconSkitty_co.paa";
        hiddenSelectionsTextures[] = {"\WPEC\WPEC_Helmets\data\Phase2Skitty_co.paa", "WPEC\WPEC_Helmets\data\visor_co.paa"};
    };
    class WPEC_Phase_2_Helmet_Orion: WPS_Phase_2_Helmet_Base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[104th] Phase 2 (Orion)";
        picture = "\WPEC\WPEC_Helmets\icons\IconOrion_co.paa";
        hiddenSelectionsTextures[] = {"\WPEC\WPEC_Helmets\data\Phase2Orion_co.paa", "WPEC\WPEC_Helmets\data\visor_co.paa"};
    };
    class WPEC_Phase_2_Helmet_Impulse: WPS_Phase_2_Helmet_Base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[104th] Phase 2 (Impulse)";
        picture = "\WPEC\WPEC_Helmets\icons\IconImpulse_co.paa";
        hiddenSelectionsTextures[] = {"\WPEC\WPEC_Helmets\data\Phase2Impulse_co.paa", "WPEC\WPEC_Helmets\data\visor_co.paa"};
    };
    class WPEC_Phase_2_Helmet_Quake: WPS_Phase_2_Helmet_Base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[104th] Phase 2 (Quake)";
        picture = "\WPEC\WPEC_Helmets\icons\IconQuake_co.paa";
        hiddenSelectionsTextures[] = {"\WPEC\WPEC_Helmets\data\Phase2Quake_co.paa", "WPEC\WPEC_Helmets\data\visor_co.paa"};
    };
    class WPEC_Phase_2_Helmet_Roach: WPS_Phase_2_Helmet_Base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[104th] Phase 2 (Roach)";
        picture = "\WPEC\WPEC_Helmets\icons\IconCR_co.paa";
        hiddenSelectionsTextures[] = {"\WPEC\WPEC_Helmets\data\Phase2Roach_co.paa", "WPEC\WPEC_Helmets\data\visor_co.paa"};
    };
    class WPEC_Phase_2_Helmet_CJ: WPS_Phase_2_Helmet_Base
    {
        scope = 1;
        scopeCurator = 2;
        displayName = "[104th] Phase 2 (Gambler)";
        picture = "\WPEC\WPEC_Helmets\icons\IconCR_co.paa";
        hiddenSelectionsTextures[] = {"\WPEC\WPEC_Helmets\data\Phase2CJ_co.paa", "WPEC\WPEC_Helmets\data\visor_co.paa"};
    };
    class WPEC_Phase_2_Helmet_Rodi: WPS_Phase_2_Helmet_Base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[104th] Phase 2 (Rodi)";
        picture = "\WPEC\WPEC_Helmets\icons\IconRodi_co.paa";
        hiddenSelectionsTextures[] = {"\WPEC\WPEC_Helmets\data\Phase2Rodi_co.paa", "WPEC\WPEC_Helmets\data\visor_co.paa"};
    };
    class WPEC_Phase_2_Helmet_Apathy: WPS_Phase_2_Helmet_Base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[104th] Phase 2 (Apathy)";
        picture = "\WPEC\WPEC_Helmets\icons\IconApathy_co.paa";
        hiddenSelectionsTextures[] = {"\WPEC\WPEC_Helmets\data\Phase2Apathy_co.paa", "WPEC\WPEC_Helmets\data\visor_co.paa"};
    };
    class WPEC_Phase_2_Helmet_Fallen: WPS_Phase_2_Helmet_Base
    {
        scope = 1;
        scopeCurator = 1;
        displayName = "[104th] Phase 2 (Fallen)";
        picture = "\WPEC\WPEC_Helmets\icons\IconFallen_co.paa";
        hiddenSelectionsTextures[] = {"\WPEC\WPEC_Helmets\data\Phase2Fallen_co.paa", "WPEC\WPEC_Helmets\data\visor_co.paa"};
    };
    class WPEC_Phase_2_Helmet_Paddy: WPS_Phase_2_Helmet_Base
    {
        scope = 1;
        scopeCurator = 1;
        displayName = "[104th] Phase 2 (Paddy)";
        picture = "\WPEC\WPEC_Helmets\icons\IconPaddy_co.paa";
        hiddenSelectionsTextures[] = {"\WPEC\WPEC_Helmets\data\Phase2Paddy_co.paa", "WPEC\WPEC_Helmets\data\visor_co.paa"};
    };
    class WPEC_Phase_2_Helmet_Dutchmann: WPS_Phase_2_Helmet_Base
    {
        scope = 1;
        scopeCurator = 1;
        displayName = "[104th] Phase 2 (Dutchmann)";
        picture = "\WPEC\WPEC_Helmets\icons\IconDutchmann_co.paa";
        hiddenSelectionsTextures[] = {"\WPEC\WPEC_Helmets\data\Phase2Dutchmann_co.paa", "WPEC\WPEC_Helmets\data\visor_co.paa"};
    };
    class WPEC_Phase_2_Helmet_Topdog: WPS_Phase_2_Helmet_Base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[104th] Phase 2 (TopDog)";
        picture = "\WPEC\WPEC_Helmets\icons\IconTopdog_co.paa";
        hiddenSelectionsTextures[] = {"\WPEC\WPEC_Helmets\data\Phase2Topdog_co.paa", "WPEC\WPEC_Helmets\data\visor_co.paa"};
    };
    class WPEC_Phase_2_Helmet_Swift: WPS_Phase_2_Helmet_Base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[104th] Phase 2 (Swift)";
        picture = "\WPEC\WPEC_Helmets\icons\IconSwift_co.paa";
        hiddenSelectionsTextures[] = {"\WPEC\WPEC_Helmets\data\Phase2Swift_co.paa", "WPEC\WPEC_Helmets\data\visor_co.paa"};
    };
    class WPEC_Phase_2_Helmet_Shadow: WPS_Phase_2_Helmet_Base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[104th] Phase 2 (Shadow)";
        picture = "\WPEC\WPEC_Helmets\icons\Logo_co.paa";
        hiddenSelectionsTextures[] = {"\WPEC\WPEC_Helmets\data\Phase2Shadow_co.paa", "WPEC\WPEC_Helmets\data\visor_co.paa"};
    };
    class WPEC_Phase_2_Helmet_Sleepy: WPS_Phase_2_Helmet_Base
    {
        scope = 1;
        scopeCurator = 1;
        displayName = "[104th] Phase 2 (Sleepy)";
        picture = "\WPEC\WPEC_Helmets\icons\Logo_co.paa";
        hiddenSelectionsTextures[] = {"\WPEC\WPEC_Helmets\data\Phase2Sleepy_co.paa", "WPEC\WPEC_Helmets\data\visor_co.paa"};
    };
    class WPEC_Phase_2_Helmet_Alpha: WPS_Phase_2_Helmet_Base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[104th] Phase 2 (Alpha)";
        picture = "\WPEC\WPEC_Helmets\icons\Logo_co.paa";
        hiddenSelectionsTextures[] = {"\WPEC\WPEC_Helmets\data\Phase2Alpha_co.paa", "WPEC\WPEC_Helmets\data\visor_co.paa"};
    };
    class WPEC_Phase_2_ARC_Helmet: WPS_Phase_2_ARC_Helmet_Base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[104th] Phase 2 ARC";
        picture = "\WPEC\WPEC_Helmets\icons\IconARC_co.paa";
        hiddenSelectionsTextures[] = {"\WPEC\WPEC_Helmets\data\Phase2ARCTrainee_co.paa", "\WPEC\WPEC_Helmets\data\ARCLight_co.paa", "WPEC\WPEC_Helmets\data\visor_co.paa"};
    };
    class WPEC_Phase_2_ARC_Helmet_Trainee: WPS_Phase_2_ARC_Helmet_Base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[104th] Phase 2 ARC [Trainee]";
        picture = "\WPEC\WPEC_Helmets\icons\IconARCUnmarked_co.paa";
        hiddenSelectionsTextures[] = {"\WPEC\WPEC_Helmets\data\Phase2ARC_co.paa", "\WPEC\WPEC_Helmets\data\ARCLight_co.paa", "WPEC\WPEC_Helmets\data\visor_co.paa"};
    };
    class WPEC_Phase_2_ARC_Helmet_Veteran: WPS_Phase_2_ARC_Helmet_Base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[104th] Phase 2 ARC [Veteran]";
        picture = "\WPEC\WPEC_Helmets\icons\IconARC_co.paa";
        hiddenSelectionsTextures[] = {"\WPEC\WPEC_Helmets\data\Phase2ARCVeteran_co.paa", "\WPEC\WPEC_Helmets\data\ARCLight_co.paa", "WPEC\WPEC_Helmets\data\visor_co.paa"};
    };
    class WPEC_Phase_2_ARC_Helmet_Graves: WPS_Phase_2_ARC_Helmet_Base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[104th] Phase 2 ARC (Graves)";
        picture = "\WPEC\WPEC_Helmets\icons\IconGraves_co.paa";
        hiddenSelectionsTextures[] = {"\WPEC\WPEC_Helmets\data\Phase2ARCGraves_co.paa", "\WPEC\WPEC_Helmets\data\ARCLight_co.paa", "WPEC\WPEC_Helmets\data\visor_co.paa"};
        hiddenSelectionsMaterials[] = {"\WPEC\WPEC_Helmets\data\Phase2ARC.rvmat", "WPEC\WPEC_Helmets\data\ARCLight.rvmat", "WPEC\WPEC_Helmets\data\visorChrome.rvmat"};
    };
    class WPEC_Phase_2_ARC_Helmet_Blue: WPS_Phase_2_ARC_Helmet_Base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[104th] Phase 2 ARC (Blue)";
        picture = "\WPEC\WPEC_Helmets\icons\IconBlue_co.paa";
        hiddenSelectionsTextures[] = {"\WPEC\WPEC_Helmets\data\Phase2ARCBlue_co.paa", "\WPEC\WPEC_Helmets\data\ARCLight_co.paa", "WPEC\WPEC_Helmets\data\visor_co.paa"};
    };
    class WPEC_Phase_2_ARC_Helmet_Nook: WPS_Phase_2_ARC_Helmet_Base
    {
        scope = 1;
        scopeCurator = 2;
        displayName = "[104th] Phase 2 ARC (Nook)";
        picture = "\WPEC\WPEC_Helmets\icons\IconBARC_co.paa";
        hiddenSelectionsTextures[] = {"\WPEC\WPEC_Helmets\data\Phase2ARCNook_co.paa", "\WPEC\WPEC_Helmets\data\ARCLight_co.paa", "WPEC\WPEC_Helmets\data\visor_co.paa"};
    };
    class WPEC_Phase_2_ARC_Helmet_Boxing: WPS_Phase_2_ARC_Helmet_Base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[104th] Phase 2 ARC (Boxing)";
        picture = "\WPEC\WPEC_Helmets\icons\IconBoxing_co.paa";
        hiddenSelectionsTextures[] = {"\WPEC\WPEC_Helmets\data\Phase2ARCBoxing_co.paa", "\WPEC\WPEC_Helmets\data\ARCLight_co.paa", "WPEC\WPEC_Helmets\data\visor_co.paa"};
    };
    class WPEC_Phase_2_ARC_Helmet_Husky: WPS_Phase_2_ARC_Helmet_Base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[104th] Phase 2 ARC (Husky)";
        picture = "\WPEC\WPEC_Helmets\icons\IconHusky_co.paa";
        hiddenSelectionsTextures[] = {"\WPEC\WPEC_Helmets\data\Phase2ARCHusky_co.paa", "\WPEC\WPEC_Helmets\data\ARCLight_co.paa", "WPEC\WPEC_Helmets\data\visor_co.paa"};
    };
    class WPEC_Phase_2_ARC_Helmet_Firehawk: WPS_Phase_2_ARC_Helmet_Base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[104th] Phase 2 ARC (Firehawk)";
        picture = "\WPEC\WPEC_Helmets\icons\logo_co.paa";
        hiddenSelectionsTextures[] = {"\WPEC\WPEC_Helmets\data\Phase2ARCFirehawk_co.paa", "\WPEC\WPEC_Helmets\data\ARCLight_co.paa", "WPEC\WPEC_Helmets\data\visor_co.paa"};
    };
    class WPEC_ARF_Helmet: WPS_ARF_Helmet_Base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[WPS] ARF Helmet [Unmarked]";
        picture = "\WPEC\WPEC_Helmets\icons\IconARFUnmarked_co.paa";
        hiddenSelectionsTextures[] = {"\WPEC\WPEC_Helmets\data\ARF_co.paa", "WPEC\WPEC_Helmets\data\visor_co.paa"};
    };
    class WPEC_ARF_Helmet_Billeted: WPS_ARF_Helmet_Base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[104th] ARF Helmet";
        picture = "\WPEC\WPEC_Helmets\icons\IconARF_co.paa";
        hiddenSelectionsTextures[] = {"\WPEC\WPEC_Helmets\data\ARFBillet_co.paa", "WPEC\WPEC_Helmets\data\visor_co.paa"};
    };
    class WPEC_ARF_Helmet_Drom: WPS_ARF_Helmet_Base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[104th] ARF Helmet (Drom)";
        picture = "\WPEC\WPEC_Helmets\icons\IconDrom_co.paa";
        hiddenSelectionsTextures[] = {"\WPEC\WPEC_Helmets\data\ARFDrom_co.paa", "WPEC\WPEC_Helmets\data\visor_co.paa"};
    };
    class WPEC_ARF_Helmet_Spec: WPS_ARF_Helmet_Base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[104th] ARF Helmet (Spec)";
        picture = "\WPEC\WPEC_Helmets\icons\IconSpec_co.paa";
        hiddenSelectionsTextures[] = {"\WPEC\WPEC_Helmets\data\ARFSpec_co.paa", "WPEC\WPEC_Helmets\data\visor_co.paa"};
    };
    class WPEC_ARF_Helmet_Subbie: WPS_ARF_Helmet_Base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[104th] ARF Helmet (Subbie)";
        picture = "\WPEC\WPEC_Helmets\icons\IconSubbie_co.paa";
        hiddenSelectionsTextures[] = {"\WPEC\WPEC_Helmets\data\ARFSubbie_co.paa", "WPEC\WPEC_Helmets\data\visor_co.paa"};
    };
    class WPEC_BARC_Helmet_Billeted: WPS_BARC_Helmet_Base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[104th] BARC Helmet";
        picture = "\WPEC\WPEC_Helmets\icons\IconBARC_co.paa";
        hiddenSelectionsTextures[] = {"\WPEC\WPEC_Helmets\data\Phase2BARCBillet_co.paa", "WPEC\WPEC_Helmets\data\visor_co.paa"};
    };
    class WPEC_BARC_Helmet_Gus: WPS_BARC_Helmet_Base
    {
        scope = 1;
        scopeCurator = 2;
        displayName = "[104th] BARC Helmet (Gus)";
        picture = "\WPEC\WPEC_Helmets\icons\IconGus_co.paa";
        hiddenSelectionsTextures[] = {"\WPEC\WPEC_Helmets\data\Phase2BARCGus_co.paa", "WPEC\WPEC_Helmets\data\visor_co.paa"};
    };
    class WPEC_BARC_Helmet_CJ: WPS_BARC_Helmet_Base
    {
        scope = 1;
        scopeCurator = 2;
        displayName = "[104th] BARC Helmet (Gambler)";
        picture = "\WPEC\WPEC_Helmets\icons\IconCJ_co.paa";
        hiddenSelectionsTextures[] = {"\WPEC\WPEC_Helmets\data\Phase2BARCCJ_co.paa", "WPEC\WPEC_Helmets\data\visor_co.paa"};
    };
    class WPEC_BARC_Helmet_Firehawk: WPS_BARC_Helmet_Base
    {
        scope = 1;
        scopeCurator = 1;
        displayName = "[104th] BARC Helmet (Firehawk)";
        picture = "\WPEC\WPEC_Helmets\icons\IconFirehawk_co.paa";
        hiddenSelectionsTextures[] = {"\WPEC\WPEC_Helmets\data\Phase2BARCFirehawk_co.paa", "WPEC\WPEC_Helmets\data\visor_co.paa"};
    };
    class WPEC_Engineer_Helmet_Billeted: WPS_Engineer_Helmet_Base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[104th] Engineer Helmet";
        picture = "\WPEC\WPEC_Helmets\icons\IconEngineer_co.paa";
        hiddenSelectionsTextures[] = {"\WPEC\WPEC_Helmets\data\EngineerBillet_co.paa", "WPEC\WPEC_Helmets\data\EngineerLight_co.paa", "WPEC\WPEC_Helmets\data\visor_co.paa"};
    };
    class WPEC_Phase_2_Pilot: WPS_Phase_2_Pilot_Base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[104th] Phase 2 Pilot";
        picture = "\WPEC\WPEC_Helmets\icons\IconPilot_co.paa";
        hiddenSelectionsTextures[] = {"\WPEC\WPEC_Helmets\data\Phase2PilotUpperRank_co.paa", "\WPEC\WPEC_Helmets\data\Phase2PilotLower_co.paa", "WPEC\WPEC_Helmets\data\visor_co.paa"};
        hiddenSelectionsMaterials[] = {"\WPS\WPS_Helmets\data\Phase2PilotUpper.rvmat", "\WPS\WPS_Helmets\data\Phase2PilotLower.rvmat", "\WPS\WPS_Helmets\data\visor.rvmat"};
    };
    class WPEC_Phase_2_Pilot_Lego: WPS_Phase_2_Pilot_Base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[104th] Phase 2 Pilot (Lego)";
        picture = "\WPEC\WPEC_Helmets\icons\IconLego_co.paa";
        hiddenSelectionsTextures[] = {"\WPEC\WPEC_Helmets\data\Phase2PilotLego_co.paa", "\WPEC\WPEC_Helmets\data\Phase2PilotLower_co.paa", "WPEC\WPEC_Helmets\data\visor_co.paa"};
        hiddenSelectionsMaterials[] = {"\WPS\WPS_Helmets\data\Phase2PilotUpper.rvmat", "\WPS\WPS_Helmets\data\Phase2PilotLower.rvmat", "\WPS\WPS_Helmets\data\visor.rvmat"};
    };
    class WPEC_Phase_2_Pilot_Pigs: WPS_Phase_2_Pilot_Base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[104th] Phase 2 Pilot (Pigs)";
        picture = "\WPEC\WPEC_Helmets\icons\IconPigs_co.paa";
        hiddenSelectionsTextures[] = {"\WPEC\WPEC_Helmets\data\Phase2PilotPigs_co.paa", "\WPEC\WPEC_Helmets\data\Phase2PilotLower_co.paa", "WPEC\WPEC_Helmets\data\visor_co.paa"};
        hiddenSelectionsMaterials[] = {"\WPS\WPS_Helmets\data\Phase2PilotUpper.rvmat", "\WPS\WPS_Helmets\data\Phase2PilotLower.rvmat", "\WPS\WPS_Helmets\data\visor.rvmat"};
    };
    class WPEC_Phase_2_Pilot_Sleepy: WPS_Phase_2_Pilot_Base
    {
        scope = 1;
        scopeCurator = 1;
        displayName = "[104th] Phase 2 Pilot (Sleepy)";
        picture = "\WPEC\WPEC_Helmets\icons\IconSleepy_co.paa";
        hiddenSelectionsTextures[] = {"\WPEC\WPEC_Helmets\data\Phase2PilotSleepy_co.paa", "\WPEC\WPEC_Helmets\data\Phase2PilotLower_co.paa", "WPEC\WPEC_Helmets\data\visor_co.paa"};
        hiddenSelectionsMaterials[] = {"\WPS\WPS_Helmets\data\Phase2PilotUpper.rvmat", "\WPS\WPS_Helmets\data\Phase2PilotLower.rvmat", "\WPS\WPS_Helmets\data\visor.rvmat"};
    };
    class WPEC_Phase_2_Pilot_Kurt: WPS_Phase_2_Pilot_Base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[104th] Phase 2 Pilot (Kurt)";
        picture = "\WPEC\WPEC_Helmets\icons\IconKurt_co.paa";
        hiddenSelectionsTextures[] = {"\WPEC\WPEC_Helmets\data\Phase2PilotKurt_co.paa", "\WPEC\WPEC_Helmets\data\Phase2PilotLower_co.paa", "WPEC\WPEC_Helmets\data\visor_co.paa"};
        hiddenSelectionsMaterials[] = {"\WPS\WPS_Helmets\data\Phase2PilotUpper.rvmat", "\WPS\WPS_Helmets\data\Phase2PilotLower.rvmat", "\WPS\WPS_Helmets\data\visor.rvmat"};
    };
    class WPEC_Phase_2_Pilot_Killa: WPS_Phase_2_Pilot_Base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[104th] Phase 2 Pilot (Killa)";
        picture = "\WPEC\WPEC_Helmets\icons\Logo_co.paa";
        hiddenSelectionsTextures[] = {"\WPEC\WPEC_Helmets\data\Phase2PilotKilla_co.paa", "\WPEC\WPEC_Helmets\data\Phase2PilotLower_co.paa", "WPEC\WPEC_Helmets\data\visor_co.paa"};
        hiddenSelectionsMaterials[] = {"\WPS\WPS_Helmets\data\Phase2PilotUpper.rvmat", "\WPS\WPS_Helmets\data\Phase2PilotLower.rvmat", "\WPS\WPS_Helmets\data\visor.rvmat"};
    };
    class WPEC_Phase_2_Pilot_Trash: WPS_Phase_2_Pilot_Base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[104th] Phase 2 Pilot (Trash)";
        picture = "\WPEC\WPEC_Helmets\icons\Logo_co.paa";
        hiddenSelectionsTextures[] = {"\WPEC\WPEC_Helmets\data\Phase2PilotTrash_co.paa", "\WPEC\WPEC_Helmets\data\Phase2PilotLower2_co.paa", "WPEC\WPEC_Helmets\data\visor_co.paa"};
        hiddenSelectionsMaterials[] = {"\WPS\WPS_Helmets\data\Phase2PilotUpper.rvmat", "\WPS\WPS_Helmets\data\Phase2PilotLower.rvmat", "\WPS\WPS_Helmets\data\visor.rvmat"};
    };
    class WPEC_Phase_2_Pilot_Odin: WPS_Phase_2_Pilot_Base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[104th] Phase 2 Pilot (Odin)";
        picture = "\WPEC\WPEC_Helmets\icons\Logo_co.paa";
        hiddenSelectionsTextures[] = {"\WPEC\WPEC_Helmets\data\Phase2PilotOdin_co.paa", "\WPEC\WPEC_Helmets\data\Phase2PilotLower_co.paa", "WPEC\WPEC_Helmets\data\visor_co.paa"};
        hiddenSelectionsMaterials[] = {"\WPS\WPS_Helmets\data\Phase2PilotUpper.rvmat", "\WPS\WPS_Helmets\data\Phase2PilotLower.rvmat", "\WPS\WPS_Helmets\data\visor.rvmat"};
    };
    class WPEC_Phase_2_EVO_Helmet: WPS_Phase_2_EVO_Helmet_Base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[104th] Phase 2 EVO";
        picture = "\WPEC\WPEC_Helmets\icons\IconEVO_co.paa";
        hiddenSelectionsTextures[] = {"\WPEC\WPEC_Helmets\data\Phase2EVOBillet_co.paa", "WPEC\WPEC_Helmets\data\visor_co.paa"};
    };
    class WPEC_Phase_2_Tanker_Helmet: WPS_Phase_2_Tanker_Helmet_Base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[104th] Phase 2 Tanker";
        picture = "\WPEC\WPEC_Helmets\icons\logo_co.paa";
        hiddenSelectionsTextures[] = {"\WPEC\WPEC_Helmets\data\Phase2TankerBillet_co.paa", "WPEC\WPEC_Helmets\data\visor_co.paa"};
    };
    class WPEC_Phase_2_Tanker_Helmet_Lone: WPS_Phase_2_Tanker_Helmet_Base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[104th] Phase 2 Tanker (Lone)";
        picture = "\WPEC\WPEC_Helmets\icons\logo_co.paa";
        hiddenSelectionsTextures[] = {"\WPEC\WPEC_Helmets\data\Phase2TankerLone_co.paa", "WPEC\WPEC_Helmets\data\visor_co.paa"};
    };
    class WPEC_Phase_2_Tanker_Helmet_Dutchmann: WPS_Phase_2_Tanker_Helmet_Base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[104th] Phase 2 Tanker (Dutchmann)";
        picture = "\WPEC\WPEC_Helmets\icons\logo_co.paa";
        hiddenSelectionsTextures[] = {"\WPEC\WPEC_Helmets\data\Phase2TankerDutchmann_co.paa", "WPEC\WPEC_Helmets\data\visor_co.paa"};
    };
    class WPEC_Phase_2_Tanker_Helmet_Gambler: WPS_Phase_2_Tanker_Helmet_Base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[104th] Phase 2 Tanker (Gambler)";
        picture = "\WPEC\WPEC_Helmets\icons\logo_co.paa";
        hiddenSelectionsTextures[] = {"\WPEC\WPEC_Helmets\data\Phase2TankerGambler_co.paa", "WPEC\WPEC_Helmets\data\visor_co.paa"};
    };
    class WPEC_Phase_2_Tanker_Helmet_Maverick: WPS_Phase_2_Tanker_Helmet_Base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[104th] Phase 2 Tanker (Maverick)";
        picture = "\WPEC\WPEC_Helmets\icons\logo_co.paa";
        hiddenSelectionsTextures[] = {"\WPEC\WPEC_Helmets\data\Phase2TankerMaverick_co.paa", "WPEC\WPEC_Helmets\data\visor_co.paa"};
    };
    class WPEC_Phase_2_Airborne_Helmet: WPS_Phase_2_Airborne_Helmet_Base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[104th] Phase 2 Airborne";
        picture = "\WPEC\WPEC_Helmets\icons\logo_co.paa";
        hiddenSelectionsTextures[] = {"\WPEC\WPEC_Helmets\data\Phase2AirborneBillet_co.paa", "WPEC\WPEC_Helmets\data\visor_co.paa"};
    };
    class WPEC_Phase_1_Helmet_CT: WPS_Phase_1_Helmet_Base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[104th] Phase 1 [CT]";
        picture = "\WPEC\WPEC_Helmets\icons\IconPhase1CT_co.paa";
        hiddenSelectionsTextures[] = {"\WPEC\WPEC_Helmets\data\Phase1CT_co.paa", "WPEC\WPEC_Helmets\data\visor_co.paa"};
    };
    class WPEC_Phase_1_Helmet_SCT: WPS_Phase_1_Helmet_Base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[104th] Phase 1 [SCT]";
        picture = "\WPEC\WPEC_Helmets\icons\IconPhase1SCT_co.paa";
        hiddenSelectionsTextures[] = {"\WPEC\WPEC_Helmets\data\Phase1SCT_co.paa", "WPEC\WPEC_Helmets\data\visor_co.paa"};
    };
    class WPEC_Phase_1_Helmet_VCT: WPS_Phase_1_Helmet_Base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[104th] Phase 1 [VCT]";
        picture = "\WPEC\WPEC_Helmets\icons\IconPhase1VCT_co.paa";
        hiddenSelectionsTextures[] = {"\WPEC\WPEC_Helmets\data\Phase1VCT_co.paa", "WPEC\WPEC_Helmets\data\visor_co.paa"};
    };
    class WPEC_Phase_1_Helmet_CLC: WPS_Phase_1_Helmet_Base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[104th] Phase 1 [CLC]";
        picture = "\WPEC\WPEC_Helmets\icons\IconPhase1CLC_co.paa";
        hiddenSelectionsTextures[] = {"\WPEC\WPEC_Helmets\data\Phase1CLC_co.paa", "WPEC\WPEC_Helmets\data\visor_co.paa"};
    };
    class WPEC_Phase_1_Helmet_CSP: WPS_Phase_1_Helmet_Base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[104th] Phase 1 [CSP]";
        picture = "\WPEC\WPEC_Helmets\icons\IconPhase1CSP_co.paa";
        hiddenSelectionsTextures[] = {"\WPEC\WPEC_Helmets\data\Phase1CSP1_co.paa", "WPEC\WPEC_Helmets\data\visor_co.paa"};
    };
    class WPEC_Phase_1_Helmet_ARC: WPS_Phase_1_Helmet_Base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[WPS] Phase 1 [ARC]";
        picture = "\WPEC\WPEC_Helmets\icons\IconPhase1ARC_co.paa";
        hiddenSelectionsTextures[] = {"\WPEC\WPEC_Helmets\data\Phase1ARC_co.paa", "WPEC\WPEC_Helmets\data\visor_co.paa"};
    };
    class WPEC_Phase_1_Helmet_Alpha_ARC: WPS_Phase_1_Helmet_Base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[WPS] Phase 1 [Alpha ARC]";
        picture = "\WPEC\WPEC_Helmets\icons\IconPhase1AlphaARC_co.paa";
        hiddenSelectionsTextures[] = {"\WPEC\WPEC_Helmets\data\Phase1AlphaARC_co.paa", "WPEC\WPEC_Helmets\data\visor_co.paa"};
    };
    class WPEC_Phase_1_Helmet_NCO: WPS_Phase_1_Helmet_Base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[104th] Phase 1 [NCO]";
        picture = "\WPEC\WPEC_Helmets\icons\IconPhase1NCO_co.paa";
        hiddenSelectionsTextures[] = {"\WPEC\WPEC_Helmets\data\Phase1NCO_co.paa", "WPEC\WPEC_Helmets\data\visor_co.paa"};
    };
    class WPEC_Phase_1_Helmet_Command: WPS_Phase_1_Helmet_Base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[104th] Phase 1 [Command]";
        picture = "\WPEC\WPEC_Helmets\icons\IconPhase1Command_co.paa";
        hiddenSelectionsTextures[] = {"\WPEC\WPEC_Helmets\data\Phase1Command_co.paa", "WPEC\WPEC_Helmets\data\visor_co.paa"};
        hiddenSelectionsMaterials[] = {"\WPS\WPS_Helmets\data\Phase1.rvmat", "WPS\WPS_Helmets\data\visorChrome.rvmat"};
    };

    //Event stuff below

    class WPEC_BARC_Helmet_Halloween: WPS_BARC_Helmet_Base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[104th] BARC Helmet (Halloween)";
        picture = "\WPEC\WPEC_Helmets\icons\logo_co.paa";
        hiddenSelectionsTextures[] = {"\WPEC\WPEC_Helmets\data\Phase2BARCHalloween_co.paa", "WPEC\WPEC_Helmets\data\visor_co.paa"};
    };
    /*class EC104_helmetExample_alt: EC104_helmetExample_base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[EC104] Helmet Example (Alt)";
        hiddenSelectionsTextures[] = {"nca\ec104_helmetexample\data\helmetexample_alt_co.paa"};
    };*/
};