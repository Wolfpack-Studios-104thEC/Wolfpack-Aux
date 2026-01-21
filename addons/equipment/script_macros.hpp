//Config macro's go here
//P2
#define P2_HELMET_RANK_MACRO(scope,name)\
	class GHELMET(phase2_##name##): WPS_Phase_2_Helmet_Base {\
	scope = scope;\
	displayName = QUOTE([104th] Phase 2 Helmet (name));\
	hiddenSelectionsTextures[] = {QPATHTOF(helmets\data\phase2\rank\Phase2##name##_co.paa),QPATHTOF(helmets\data\visor\visor_co.paa)};\
	class XtdGearInfo { \
		model = QGVAR(p2_rank); \
		camo = QUOTE(name); \
	}; \
	}

#define P2_HELMET_CUSTOM_MACRO(scope,name)\
	class GHELMET(phase2_##name##): WPS_Phase_2_Helmet_Base {\
	scope = scope;\
	displayName = QUOTE([104th] Phase 2 Helmet (name));\
	hiddenSelectionsTextures[] = {QPATHTOF(helmets\data\phase2\custom\Phase2##name##_co.paa),QPATHTOF(helmets\data\visor\visor_co.paa)};\
	class XtdGearInfo { \
		model = QGVAR(p2_custom); \
		camo = QUOTE(name); \
	}; \
	}

	#define P2_HELMET_CUSTOM_GLOW_MACRO(scope,name,color)\
	class GHELMET(phase2_##name##): WPS_Phase_2_Helmet_Base {\
	scope = scope;\
	displayName = QUOTE([104th] Phase 2 Helmet (name));\
	hiddenSelectionsTextures[] = {QPATHTOF(helmets\data\phase2\custom\Phase2##name##_co.paa),QPATHTOF(helmets\data\visor\##color#\visor##color##_co.paa)};\
	hiddenSelectionsMaterials[] = {"\WPS\WPS_Helmets\data\Phase2.rvmat", QPATHTOF(helmets\data\visor\##color##\Visor##color##.rvmat)};\
	class XtdGearInfo { \
		model = QGVAR(p2_custom); \
		camo = QUOTE(name); \
	}; \
	}

//ARC
	#define ARC_HELMET_RANK_MACRO(scope,name)\
	class GHELMET(arc_##name##): WPS_Phase_2_ARC_Helmet_Base {\
	scope = scope;\
	displayName = QUOTE([104th] Phase 2 ARC (name));\
	hiddenSelectionsTextures[] = {QPATHTOF(helmets\data\ARC\rank\Phase2ARC##name##_co.paa),QPATHTOF(helmets\data\arc\light\ARCLight_co.paa),QPATHTOF(helmets\data\visor\visor_co.paa)};\
	class XtdGearInfo { \
		model = QGVAR(arc_rank); \
		camo = QUOTE(name); \
	}; \
	}

	#define ARC_HELMET_CUSTOM_MACRO(scope,name)\
	class GHELMET(arc_##name##): WPS_Phase_2_ARC_Helmet_Base {\
	scope = scope;\
	displayName = QUOTE([104th] Phase 2 ARC (name));\
	hiddenSelectionsTextures[] = {QPATHTOF(helmets\data\ARC\custom\Phase2ARC##name##_co.paa),QPATHTOF(helmets\data\arc\light\ARCLight_co.paa),QPATHTOF(helmets\data\visor\visor_co.paa)};\
	class XtdGearInfo { \
		model = QGVAR(arc_custom); \
		camo = QUOTE(name); \
	}; \
	}

	#define ARC_HELMET_CUSTOM_GLOW_MACRO(scope,name,color)\
	class GHELMET(arc_##name##): WPS_Phase_2_ARC_Helmet_Base {\
	scope = scope;\
	displayName = QUOTE([104th] Phase 2 ARC (name));\
	hiddenSelectionsTextures[] = {QPATHTOF(helmets\data\ARC\custom\Phase2ARC##name##_co.paa),QPATHTOF(helmets\data\arc\light\ARCLight_co.paa),QPATHTOF(helmets\data\visor\##color#\visor##color##_co.paa)};\
	hiddenSelectionsMaterials[] = {QPATHTOF(helmets\data\arc\Phase2ARC.rvmat), QPATHTOF(helmets\data\arc\light\ARCLight.rvmat),QPATHTOF(helmets\data\visor\##color##\Visor##color##.rvmat)};\
	class XtdGearInfo { \
		model = QGVAR(arc_custom); \
		camo = QUOTE(name); \
	}; \
	}

//ARF
	#define ARF_HELMET_RANK_MACRO(scope,name)\
	class GHELMET(arf_##name##): WPS_ARF_Helmet_Base {\
	scope = scope;\
	displayName = QUOTE([104th] ARF Helmet(name));\
	hiddenSelectionsTextures[] = {QPATHTOF(helmets\data\ARF\rank\Phase2ARF##name##_co.paa),QPATHTOF(helmets\data\visor\visor_co.paa)};\
	class XtdGearInfo { \
		model = QGVAR(arf_rank); \
		camo = QUOTE(name); \
	}; \
	}

	#define ARF_HELMET_CUSTOM_MACRO(scope,name)\
	class GHELMET(arf_##name##): WPS_ARF_Helmet_Base {\
	scope = scope;\
	displayName = QUOTE([104th] ARF Helmet (name));\
	hiddenSelectionsTextures[] = {QPATHTOF(helmets\data\ARF\custom\Phase2ARF##name##_co.paa),QPATHTOF(helmets\data\visor\visor_co.paa)};\
	class XtdGearInfo { \
		model = QGVAR(arf_custom); \
		camo = QUOTE(name); \
	}; \
	}

	#define ARF_HELMET_CUSTOM_GLOW_MACRO(scope,name,color)\
	class GHELMET(arf_##name##): WPS_ARF_Helmet_Base {\
	scope = scope;\
	displayName = QUOTE([104th] ARF Helmet (name));\
	hiddenSelectionsTextures[] = {QPATHTOF(helmets\data\ARC\custom\Phase2ARC##name##_co.paa),QPATHTOF(helmets\data\visor\##color#\visor##color##_co.paa)};\
	hiddenSelectionsMaterials[] = {QPATHTOF(helmets\data\arf\rank\ARF.rvmat),QPATHTOF(helmets\data\visor\##color##\Visor##color##.rvmat)};\
	class XtdGearInfo { \
		model = QGVAR(arf_custom); \
		camo = QUOTE(name); \
	}; \
	}

//BARC
#define BARC_HELMET_RANK_MACRO(scope,name)\
	class GHELMET(barc_##name##): WPS_BARC_Helmet_Base {\
	scope = scope;\
	displayName = QUOTE([104th] BARC Helmet(name));\
	hiddenSelectionsTextures[] = {QPATHTOF(helmets\data\barc\rank\Phase2BARC##name##_co.paa),QPATHTOF(helmets\data\visor\visor_co.paa)};\
	class XtdGearInfo { \
		model = QGVAR(barc_rank); \
		camo = QUOTE(name); \
	}; \
	}

	#define BARC_HELMET_CUSTOM_MACRO(scope,name)\
	class GHELMET(barc_##name##): WPS_BARC_Helmet_Base {\
	scope = scope;\
	displayName = QUOTE([104th] BARC Helmet(name));\
	hiddenSelectionsTextures[] = {QPATHTOF(helmets\data\barc\custom\Phase2BARC##name##_co.paa),QPATHTOF(helmets\data\visor\visor_co.paa)};\
	class XtdGearInfo { \
		model = QGVAR(barc_custom); \
		camo = QUOTE(name); \
	}; \
	}

	#define BARC_HELMET_CUSTOM_GLOW_MACRO(scope,name,color)\
	class GHELMET(barc_##name##): WPS_BARC_Helmet_Base {\
	scope = scope;\
	displayName = QUOTE([104th] BARC Helmet(name));\
	hiddenSelectionsTextures[] = {QPATHTOF(helmets\data\barc\custom\Phase2BARC##name##_co.paa),QPATHTOF(helmets\data\visor\##color#\visor##color##_co.paa)};\
	hiddenSelectionsMaterials[] = {QPATHTOF(helmets\data\barc\rank\Phase2BARC.rvmat),QPATHTOF(helmets\data\visor\##color##\Visor##color##.rvmat)};\
	class XtdGearInfo { \
		model = QGVAR(barc_custom); \
		camo = QUOTE(name); \
	}; \
	}

//Engineer
#define ENGINEER_HELMET_RANK_MACRO(scope,name)\
	class GHELMET(engineer_##name##): WPS_Engineer_Helmet_Base {\
	scope = scope;\
	displayName = QUOTE([104th] Engineer Helmet(name));\
	hiddenSelectionsTextures[] = {QPATHTOF(helmets\data\engineer\rank\Phase2Engineer##name##_co.paa),QPATHTOF(helmets\data\engineer\light\EngineerLight_co.paa),QPATHTOF(helmets\data\visor\visor_co.paa)};\
	class XtdGearInfo { \
		model = QGVAR(engineer_rank); \
		camo = QUOTE(name); \
	}; \
	}

	#define ENGINEER_HELMET_CUSTOM_MACRO(scope,name)\
	class GHELMET(ENGINEER_##name##): WPS_Engineer_Helmet_Base {\
	scope = scope;\
	displayName = QUOTE([104th] Engineer Helmet(name));\
	hiddenSelectionsTextures[] = {QPATHTOF(helmets\data\engineer\custom\Phase2Engineer##name##_co.paa),QPATHTOF(helmets\data\engineer\light\EngineerLight_co.paa),QPATHTOF(helmets\data\visor\visor_co.paa)};\
	class XtdGearInfo { \
		model = QGVAR(engineer_custom); \
		camo = QUOTE(name); \
	}; \
	}

	#define ENGINEER_HELMET_CUSTOM_GLOW_MACRO(scope,name,color)\
	class GHELMET(ENGINEER_##name##): WPS_Engineer_Helmet_Base {\
	scope = scope;\
	displayName = QUOTE([104th] Engineer Helmet(name));\
	hiddenSelectionsTextures[] = {QPATHTOF(helmets\data\engineer\custom\Phase2Engineer##name##_co.paa),QPATHTOF(helmets\data\engineer\light\EngineerLight_co.paa),QPATHTOF(helmets\data\visor\##color#\visor##color##_co.paa)};\
	hiddenSelectionsMaterials[] = {QPATHTOF(helmets\data\engineer\rank\Phase2Engineer.rvmat),QPATHTOF(helmets\data\engineer\light\EngineerLight_co.paa),QPATHTOF(helmets\data\visor\##color##\Visor##color##.rvmat)};\
	class XtdGearInfo { \
		model = QGVAR(engineer_custom); \
		camo = QUOTE(name); \
	}; \
	}

//Pilot
	#define PILOT_HELMET_RANK_MACRO(scope,name)\
	class GHELMET(pilot_##name##): WPS_Phase_2_Pilot_Base {\
	scope = scope;\
	displayName = QUOTE([104th] Pilot Helmet(name));\
	hiddenSelectionsTextures[] = {QPATHTOF(helmets\data\pilot\rank\Phase2PilotUpper##name##_co.paa), QPATHTOF(helmets\data\pilot\rank\Phase2PilotLower##name##_co.paa), QPATHTOF(helmets\data\visor\visor_co.paa)};\
	class XtdGearInfo { \
		model = QGVAR(pilot_rank); \
		camo = QUOTE(name); \
	}; \
	}

	#define PILOT_HELMET_CUSTOM_MACRO(scope,name)\
	class GHELMET(pilot_##name##): WPS_Phase_2_Pilot_Base {\
	scope = scope;\
	displayName = QUOTE([104th] Pilot Helmet(name));\
	hiddenSelectionsTextures[] = {QPATHTOF(helmets\data\pilot\custom\Phase2PilotUpper##name##_co.paa), QPATHTOF(helmets\data\pilot\rank\Phase2PilotLower_co.paa), QPATHTOF(helmets\data\visor\visor_co.paa)};\
	class XtdGearInfo { \
		model = QGVAR(pilot_custom); \
		camo = QUOTE(name); \
	}; \
	}

	#define PILOT_HELMET_CUSTOM_GLOW_MACRO(scope,name,color)\
	class GHELMET(pilot_##name##): WPS_Phase_2_Pilot_Base {\
	scope = scope;\
	displayName = QUOTE([104th] Pilot Helmet(name));\
	hiddenSelectionsTextures[] = {QPATHTOF(helmets\data\pilot\custom\Phase2PilotUpper##name##_co.paa), QPATHTOF(helmets\data\pilot\rank\Phase2PilotLower_co.paa), QPATHTOF(helmets\data\visor\##color#\visor##color##_co.paa)};\
	hiddenSelectionsMaterials[] = {QPATHTOF(helmets\data\pilot\rank\Phase2PilotUpper.rvmat), QPATHTOF(helmets\data\pilot\rank\Phase2PilotLower.rvmat), QPATHTOF(helmets\data\visor\##color##\Visor##color##.rvmat)};\
	class XtdGearInfo { \
		model = QGVAR(pilot_custom); \
		camo = QUOTE(name); \
	}; \
	}

	//Tanker

	#define TANKER_HELMET_RANK_MACRO(scope,name)\
	class GHELMET(tanker_##name##): WPS_Phase_2_Tanker_Helmet_Base {\
	scope = scope;\
	displayName = QUOTE([104th] Tanker Helmet(name));\
	hiddenSelectionsTextures[] = {QPATHTOF(helmets\data\tanker\rank\Phase2Tanker##name##_co.paa), QPATHTOF(helmets\data\visor\visor_co.paa)};\
	class XtdGearInfo { \
		model = QGVAR(tanker_rank); \
		camo = QUOTE(name); \
	}; \
	}

	#define TANKER_HELMET_CUSTOM_MACRO(scope,name)\
	class GHELMET(tanker_##name##): WPS_Phase_2_Tanker_Helmet_Base {\
	scope = scope;\
	displayName = QUOTE([104th] Tanker Helmet(name));\
	hiddenSelectionsTextures[] = {QPATHTOF(helmets\data\tanker\custom\Phase2Tanker##name##_co.paa), QPATHTOF(helmets\data\visor\visor_co.paa)};\
	class XtdGearInfo { \
		model = QGVAR(tanker_custom); \
		camo = QUOTE(name); \
	}; \
	}

	//Airborne

	#define AIRBONE_HELMET_RANK_MACRO(scope,name)\
	class GHELMET(airborne_##name##): WPS_Phase_2_Airborne_Helmet_Base {\
	scope = scope;\
	displayName = QUOTE([104th] Airborne Helmet(name));\
	hiddenSelectionsTextures[] = {QPATHTOF(helmets\data\airborne\Phase2Airborne##name##_co.paa), QPATHTOF(helmets\data\visor\visor_co.paa)};\
	class XtdGearInfo { \
		model = QGVAR(airborne_rank); \
		camo = QUOTE(name); \
	}; \
	}

	#define AIRBORNE_HELMET_CUSTOM_MACRO(scope,name)\
	class GHELMET(airborne_##name##): WPS_Phase_2_Airborne_Helmet_Base {\
	scope = scope;\
	displayName = QUOTE([104th] Airborne Helmet(name));\
	hiddenSelectionsTextures[] = {QPATHTOF(helmets\data\airborne\custom\Phase2Airborne##name##_co.paa), QPATHTOF(helmets\data\visor\visor_co.paa)};\
	class XtdGearInfo { \
		model = QGVAR(airborne_custom); \
		camo = QUOTE(name); \
	}; \
	}

	//P1
	#define P1_HELMET_RANK_MACRO(scope,name)\
	class GHELMET(phase1_##name##): WPS_Phase_1_Helmet_Base {\
	scope = scope;\
	displayName = QUOTE([104th] Phase 1 Helmet(name));\
	hiddenSelectionsTextures[] = {QPATHTOF(helmets\data\phase1\rank\Phase1##name##_co.paa), QPATHTOF(helmets\data\visor\visor_co.paa)};\
	class XtdGearInfo { \
		model = QGVAR(phase1_rank); \
		camo = QUOTE(name); \
	}; \
	}

	#define P1_HELMET_CUSTOM_MACRO(scope,name)\
	class GHELMET(phase1_##name##): WPS_Phase_1_Helmet_Base {\
	scope = scope;\
	displayName = QUOTE([104th] Phase 1 Helmet(name));\
	hiddenSelectionsTextures[] = {QPATHTOF(helmets\data\phase1\custom\Phase1##name##_co.paa), QPATHTOF(helmets\data\visor\visor_co.paa)};\
	class XtdGearInfo { \
		model = QGVAR(phase1_custom); \
		camo = QUOTE(name); \
	}; \
	}

	#define P1_HELMET_CUSTOM_GLOW_MACRO(scope,name,color)\
	class GHELMET(phase1_##name##): WPS_Phase_1_Helmet_Base {\
	scope = scope;\
	displayName = QUOTE([104th] Phase 1 Helmet(name));\
	hiddenSelectionsTextures[] = {QPATHTOF(helmets\data\phase1\custom\Phase1##name##_co.paa), QPATHTOF(helmets\data\visor\visor_co.paa)};\\
	hiddenSelectionsMaterials[] = {QPATHTOF(helmets\data\phase1\rank\Phase1.rvmat), QPATHTOF(helmets\data\visor\##color##\Visor##color##.rvmat)};\
	class XtdGearInfo { \
		model = QGVAR(phase1_custom); \
		camo = QUOTE(name); \
	}; \
	}