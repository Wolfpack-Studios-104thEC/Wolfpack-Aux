#define P2_HELMET_RANK_MACRO(name)\
	class GHELMET(phase2_##name##): WPS_helmets_helmet_phase2 {\
	scope = 2;\
	displayName = QUOTE([104th] Phase 2 Helmet (name));\
	hiddenSelectionsTextures[] = {QPATHTOF(data\phase2\Phase2##name##_co.paa),QPATHTOF(data\visor\visor_co.paa)};\
	class XtdGearInfo { \
		model = QGVAR(p2_rank_helm); \
		camo = QUOTE(name); \
	};  \
	}

//ARC
	#define ARC_HELMET_RANK_MACRO(name)\
	class GHELMET(arc_##name##): WPS_helmets_helmet_ARC {\
	scope = 2;\
	displayName = QUOTE([104th] Phase 2 ARC (name));\
	hiddenSelectionsTextures[] = {QPATHTOF(data\ARC\Phase2ARC##name##_co.paa),QPATHTOF(data\arc\light\ARCLight_co.paa),QPATHTOF(data\visor\visor_co.paa)};\
	class XtdGearInfo { \
		model = QGVAR(role_rank_helm); \
        role = QUOTE(ARC); \
		camo = QUOTE(name); \
	}; \
	}

//ARF
	#define ARF_HELMET_RANK_MACRO(name)\
	class GHELMET(arf_##name##): WPS_helmets_helmet_ARF {\
	scope = 2;\
	displayName = QUOTE([104th] ARF Helmet(name));\
	hiddenSelectionsTextures[] = {QPATHTOF(data\ARF\Phase2ARF##name##_co.paa),QPATHTOF(data\visor\visor_co.paa)};\
	class XtdGearInfo { \
		model = QGVAR(role_rank_helm); \
        role = QUOTE(ARF); \
		camo = QUOTE(name); \
	}; \
	}

//BARC
#define BARC_HELMET_RANK_MACRO(name)\
	class GHELMET(barc_##name##): WPS_helmets_helmet_BARC {\
	scope = 2;\
	displayName = QUOTE([104th] BARC Helmet(name));\
	hiddenSelectionsTextures[] = {QPATHTOF(data\barc\Phase2BARC##name##_co.paa),QPATHTOF(data\visor\visor_co.paa)};\
	class XtdGearInfo { \
		model = QGVAR(role_rank_helm); \
        role = QUOTE(BARC); \
		camo = QUOTE(name); \
	}; \
	}

//Engineer
#define ENGINEER_HELMET_RANK_MACRO(name)\
	class GHELMET(engineer_##name##): WPS_helmets_helmet_Engineer {\
	scope = 2;\
	displayName = QUOTE([104th] Engineer Helmet(name));\
	hiddenSelectionsTextures[] = {QPATHTOF(data\engineer\Phase2Engineer##name##_co.paa),QPATHTOF(data\engineer\light\EngineerLight_co.paa),QPATHTOF(data\visor\visor_co.paa)};\
    class XtdGearInfo { \
		model = QGVAR(role_rank_helm); \
        role = QUOTE(Engineer); \
		camo = QUOTE(name); \
	}; \
	}

//Pilot
	#define PILOT_HELMET_RANK_MACRO(name)\
	class GHELMET(pilot_##name##): WPS_helmets_helmet_p2_pilot {\
	scope = 2;\
	displayName = QUOTE([104th] Pilot Helmet(name));\
	hiddenSelectionsTextures[] = {QPATHTOF(data\pilot\Phase2PilotUpper##name##_co.paa), QPATHTOF(data\pilot\Phase2PilotLower##name##_co.paa), QPATHTOF(data\visor\visor_co.paa)};\
    class XtdGearInfo { \
		model = QGVAR(role_rank_helm); \
        role = QUOTE(Pilot); \
		camo = QUOTE(name); \
	}; \
	}

	//Tanker
	#define TANKER_HELMET_RANK_MACRO(name)\
	class GHELMET(tanker_##name##): WPS_helmets_helmet_Tanker {\
	scope = 2;\
	displayName = QUOTE([104th] Tanker Helmet(name));\
	hiddenSelectionsTextures[] = {QPATHTOF(data\tanker\Phase2Tanker##name##_co.paa), QPATHTOF(data\visor\visor_co.paa)};\
    class XtdGearInfo { \
		model = QGVAR(role_rank_helm); \
        role = QUOTE(Tanker); \
		camo = QUOTE(name); \
	}; \
	}

	//Airborne
	#define AIRBONE_HELMET_RANK_MACRO(name)\
	class GHELMET(airborne_##name##): WPS_helmets_helmet_Airborne {\
	scope = 2;\
	displayName = QUOTE([104th] Airborne Helmet(name));\
	hiddenSelectionsTextures[] = {QPATHTOF(data\airborne\Phase2Airborne##name##_co.paa), QPATHTOF(data\visor\visor_co.paa)};\class XtdGearInfo { \
		model = QGVAR(role_rank_helm); \
        role = QUOTE(Airborne); \
		camo = QUOTE(name); \
	}; \
	}

	//P1
	#define P1_HELMET_RANK_MACRO(name)\
	class GHELMET(phase1_##name##): WPS_helmets_helmet_phase1 {\
	scope = 2;\
	displayName = QUOTE([104th] Phase 1 Helmet(name));\
	hiddenSelectionsTextures[] = {QPATHTOF(data\phase1\Phase1##name##_co.paa), QPATHTOF(data\visor\visor_co.paa)};\
    class XtdGearInfo { \
		model = QGVAR(p1_rank_helm); \
		camo = QUOTE(name); \
	}; \
	}
