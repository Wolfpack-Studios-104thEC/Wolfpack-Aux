#define P2_HELMET_RANK_MACRO(scope,name)\
	class GHELMET(phase2_##name##): WPS_helmets_helmet_phase2 {\
	scope = scope;\
	displayName = QUOTE([104th] Phase 2 Helmet (name));\
	hiddenSelectionsTextures[] = {QPATHTOF(data\phase2\rank\Phase2##name##_co.paa),QPATHTOF(data\visor\visor_co.paa)};\
    /*picture = QPATHTOF(data\icon\Icon##name##_co.paa);*/ \
	/*class XtdGearInfo { \
		model = QGVAR(p2_rank); \
		camo = QUOTE(name); \
	};*/  \
	}

#define P2_HELMET_CUSTOM_MACRO(scope,name)\
	class GHELMET(phase2_##name##): WPS_helmets_helmet_phase2 {\
	scope = scope;\
	displayName = QUOTE([104th] Phase 2 Helmet (name));\
	hiddenSelectionsTextures[] = {QPATHTOF(data\phase2\custom\Phase2##name##_co.paa),QPATHTOF(data\visor\visor_co.paa)};\
    /*picture = QPATHTOF(data\icon\Icon##name##_co.paa);*/\
	/*class XtdGearInfo { \
		model = QGVAR(p2_custom); \
		camo = QUOTE(name); \
	};*/ \
	}

	#define P2_HELMET_CUSTOM_GLOW_MACRO(scope,name,color)\
	class GHELMET(phase2_##name##): WPS_helmets_helmet_phase2 {\
	scope = scope;\
	displayName = QUOTE([104th] Phase 2 Helmet (name));\
	hiddenSelectionsTextures[] = {QPATHTOF(data\phase2\custom\Phase2##name##_co.paa),QPATHTOF(data\visor\##color##\Visor##color##_co.paa)};\
	hiddenSelectionsMaterials[] = {"\WPS\WPS_data\Phase2.rvmat", QPATHTOF(data\visor\##color##\Visor##color##.rvmat)};\
    /*picture = QPATHTOF(data\icon\Icon##name##_co.paa);*/ \
	/*class XtdGearInfo { \
		model = QGVAR(p2_custom); \
		camo = QUOTE(name); \
	};*/ \
	}

//ARC
	#define ARC_HELMET_RANK_MACRO(scope,name)\
	class GHELMET(arc_##name##): wps_helmets_helmet_arc {\
	scope = scope;\
	displayName = QUOTE([104th] Phase 2 ARC (name));\
	hiddenSelectionsTextures[] = {QPATHTOF(data\ARC\rank\Phase2ARC##name##_co.paa),QPATHTOF(data\arc\light\ARCLight_co.paa),QPATHTOF(data\visor\visor_co.paa)};\
    /*picture = QPATHTOF(data\icon\Icon##name##_co.paa);*/ \
	/*class XtdGearInfo { \
		model = QGVAR(arc_rank); \
		camo = QUOTE(name); \
	};*/ \
	}

	#define ARC_HELMET_CUSTOM_MACRO(scope,name)\
	class GHELMET(arc_##name##): wps_helmets_helmet_arc {\
	scope = scope;\
	displayName = QUOTE([104th] Phase 2 ARC (name));\
	hiddenSelectionsTextures[] = {QPATHTOF(data\ARC\custom\Phase2ARC##name##_co.paa),QPATHTOF(data\arc\light\ARCLight_co.paa),QPATHTOF(data\visor\visor_co.paa)};\
    /*picture = QPATHTOF(data\icon\Icon##name##_co.paa);*/ \
	/*class XtdGearInfo { \
		model = QGVAR(arc_custom); \
		camo = QUOTE(name); \
	};*/ \
	}

	#define ARC_HELMET_CUSTOM_GLOW_MACRO(scope,name,color)\
	class GHELMET(arc_##name##): wps_helmets_helmet_arc {\
	scope = scope;\
	displayName = QUOTE([104th] Phase 2 ARC (name));\
	hiddenSelectionsTextures[] = {QPATHTOF(data\ARC\custom\Phase2ARC##name##_co.paa),QPATHTOF(data\arc\light\ARCLight_co.paa),QPATHTOF(data\visor\##color##\visor##color##_co.paa)};\
	hiddenSelectionsMaterials[] = {QPATHTOF(data\arc\Phase2ARC.rvmat), QPATHTOF(data\arc\light\ARCLight.rvmat),QPATHTOF(data\visor\##color##\Visor##color##.rvmat)};\
    /*picture = QPATHTOF(data\icon\Icon##name##_co.paa);*/ \
	/*class XtdGearInfo { \
		model = QGVAR(arc_custom); \
		camo = QUOTE(name); \
	};*/ \
	}

//ARF
	#define ARF_HELMET_RANK_MACRO(scope,name)\
	class GHELMET(arf_##name##): wps_helmets_helmet_arf {\
	scope = scope;\
	displayName = QUOTE([104th] ARF Helmet(name));\
	hiddenSelectionsTextures[] = {QPATHTOF(data\ARF\rank\Phase2ARF##name##_co.paa),QPATHTOF(data\visor\visor_co.paa)};\
	/*class XtdGearInfo { \
		model = QGVAR(arf_rank); \
		camo = QUOTE(name); \
	};*/ \
	}

	#define ARF_HELMET_CUSTOM_MACRO(scope,name)\
	class GHELMET(arf_##name##): wps_helmets_helmet_arf {\
	scope = scope;\
	displayName = QUOTE([104th] ARF Helmet (name));\
	hiddenSelectionsTextures[] = {QPATHTOF(data\ARF\custom\Phase2ARF##name##_co.paa),QPATHTOF(data\visor\visor_co.paa)};\
    /*picture = QPATHTOF(data\icon\Icon##name##_co.paa);*/ \
	/*class XtdGearInfo { \
		model = QGVAR(arf_custom); \
		camo = QUOTE(name); \
	};*/ \
	}

	#define ARF_HELMET_CUSTOM_GLOW_MACRO(scope,name,color)\
	class GHELMET(arf_##name##): wps_helmets_helmet_arf {\
	scope = scope;\
	displayName = QUOTE([104th] ARF Helmet (name));\
	hiddenSelectionsTextures[] = {QPATHTOF(data\ARC\custom\Phase2ARC##name##_co.paa),QPATHTOF(data\visor\##color#\visor##color##_co.paa)};\
	hiddenSelectionsMaterials[] = {QPATHTOF(data\arf\rank\ARF.rvmat),QPATHTOF(data\visor\##color##\Visor##color##.rvmat)};\
    /*picture = QPATHTOF(data\icon\Icon##name##_co.paa);*/ \
	/*class XtdGearInfo { \
		model = QGVAR(arf_custom); \
		camo = QUOTE(name); \
	};*/ \
	}

//BARC
#define BARC_HELMET_RANK_MACRO(scope,name)\
	class GHELMET(barc_##name##): wps_helmets_helmet_barc {\
	scope = scope;\
	displayName = QUOTE([104th] BARC Helmet(name));\
	hiddenSelectionsTextures[] = {QPATHTOF(data\barc\rank\Phase2BARC##name##_co.paa),QPATHTOF(data\visor\visor_co.paa)};\
    /*picture = QPATHTOF(data\icon\Icon##name##_co.paa);*/ \
	/*class XtdGearInfo { \
		model = QGVAR(barc_rank); \
		camo = QUOTE(name); \
	};*/ \
	}

	#define BARC_HELMET_CUSTOM_MACRO(scope,name)\
	class GHELMET(barc_##name##): wps_helmets_helmet_barc {\
	scope = scope;\
	displayName = QUOTE([104th] BARC Helmet(name));\
	hiddenSelectionsTextures[] = {QPATHTOF(data\barc\custom\Phase2BARC##name##_co.paa),QPATHTOF(data\visor\visor_co.paa)};\
    /*picture = QPATHTOF(data\icon\Icon##name##_co.paa);*/ \
	/*class XtdGearInfo { \
		model = QGVAR(barc_custom); \
		camo = QUOTE(name); \
	};*/ \
	}

	#define BARC_HELMET_CUSTOM_GLOW_MACRO(scope,name,color)\
	class GHELMET(barc_##name##): wps_helmets_helmet_barc {\
	scope = scope;\
	displayName = QUOTE([104th] BARC Helmet(name));\
	hiddenSelectionsTextures[] = {QPATHTOF(data\barc\custom\Phase2BARC##name##_co.paa),QPATHTOF(data\visor\##color#\visor##color##_co.paa)};\
	hiddenSelectionsMaterials[] = {QPATHTOF(data\barc\rank\Phase2BARC.rvmat),QPATHTOF(data\visor\##color##\Visor##color##.rvmat)};\
    /*picture = QPATHTOF(data\icon\Icon##name##_co.paa);*/ \
	/*class XtdGearInfo { \
		model = QGVAR(barc_custom); \
		camo = QUOTE(name); \
	};*/ \
	}

//Engineer
#define ENGINEER_HELMET_RANK_MACRO(scope,name)\
	class GHELMET(engineer_##name##): wps_helmets_helmet_engineer {\
	scope = scope;\
	displayName = QUOTE([104th] Engineer Helmet(name));\
	hiddenSelectionsTextures[] = {QPATHTOF(data\engineer\rank\Phase2Engineer##name##_co.paa),QPATHTOF(data\engineer\light\EngineerLight_co.paa),QPATHTOF(data\visor\visor_co.paa)};\
    /*picture = QPATHTOF(data\icon\Icon##name##_co.paa);*/ \
	/*class XtdGearInfo { \
		model = QGVAR(engineer_rank); \
		camo = QUOTE(name); \
	};*/ \
	}

	#define ENGINEER_HELMET_CUSTOM_MACRO(scope,name)\
	class GHELMET(engineer_##name##): wps_helmets_helmet_engineer {\
	scope = scope;\
	displayName = QUOTE([104th] Engineer Helmet(name));\
	hiddenSelectionsTextures[] = {QPATHTOF(data\engineer\custom\Phase2Engineer##name##_co.paa),QPATHTOF(data\engineer\light\EngineerLight_co.paa),QPATHTOF(data\visor\visor_co.paa)};\
    /*picture = QPATHTOF(data\icon\Icon##name##_co.paa);*/ \
	/*class XtdGearInfo { \
		model = QGVAR(engineer_custom); \
		camo = QUOTE(name); \
	};*/ \
	}

	#define ENGINEER_HELMET_CUSTOM_GLOW_MACRO(scope,name,color)\
	class GHELMET(engineer_##name##): wps_helmets_helmet_engineer {\
	scope = scope;\
	displayName = QUOTE([104th] Engineer Helmet(name));\
	hiddenSelectionsTextures[] = {QPATHTOF(data\engineer\custom\Phase2Engineer##name##_co.paa),QPATHTOF(data\engineer\light\EngineerLight_co.paa),QPATHTOF(data\visor\##color#\visor##color##_co.paa)};\
	hiddenSelectionsMaterials[] = {QPATHTOF(data\engineer\rank\Phase2Engineer.rvmat),QPATHTOF(data\engineer\light\EngineerLight_co.paa),QPATHTOF(data\visor\##color##\Visor##color##.rvmat)};\
    /*picture = QPATHTOF(data\icon\Icon##name##_co.paa);*/ \
	/*class XtdGearInfo { \
		model = QGVAR(engineer_custom); \
		camo = QUOTE(name); \
	};*/ \
	}

//Pilot
	#define PILOT_HELMET_RANK_MACRO(scope,name)\
	class GHELMET(pilot_##name##): wps_helmets_helmet_p2_pilot {\
	scope = scope;\
	displayName = QUOTE([104th] Pilot Helmet(name));\
	hiddenSelectionsTextures[] = {QPATHTOF(data\pilot\rank\Phase2PilotUpper##name##_co.paa), QPATHTOF(data\pilot\rank\Phase2PilotLower##name##_co.paa), QPATHTOF(data\visor\visor_co.paa)};\
    /*picture = QPATHTOF(data\icon\Icon##name##_co.paa);*/ \
	/*class XtdGearInfo { \
		model = QGVAR(pilot_rank); \
		camo = QUOTE(name); \
	};*/ \
	}

	#define PILOT_HELMET_CUSTOM_MACRO(scope,name)\
	class GHELMET(pilot_##name##): wps_helmets_helmet_p2_pilot {\
	scope = scope;\
	displayName = QUOTE([104th] Pilot Helmet(name));\
	hiddenSelectionsTextures[] = {QPATHTOF(data\pilot\custom\Phase2Pilot##name##_co.paa), QPATHTOF(data\pilot\rank\Phase2PilotLower_co.paa), QPATHTOF(data\visor\visor_co.paa)};\
    /*picture = QPATHTOF(data\icon\Icon##name##_co.paa);*/ \
	/*class XtdGearInfo { \
		model = QGVAR(pilot_custom); \
		camo = QUOTE(name); \
	};*/ \
	}

	#define PILOT_HELMET_CUSTOM_GLOW_MACRO(scope,name,color)\
	class GHELMET(pilot_##name##): wps_helmets_helmet_p2_pilot {\
	scope = scope;\
	displayName = QUOTE([104th] Pilot Helmet(name)); \
	hiddenSelectionsTextures[] = {QPATHTOF(data\pilot\custom\Phase2PilotUpper##name##_co.paa), QPATHTOF(data\pilot\rank\Phase2PilotLower_co.paa), QPATHTOF(data\visor\##color#\visor##color##_co.paa)};\
	hiddenSelectionsMaterials[] = {QPATHTOF(data\pilot\rank\Phase2PilotUpper.rvmat), QPATHTOF(data\pilot\rank\Phase2PilotLower.rvmat), QPATHTOF(data\visor\##color##\Visor##color##.rvmat)};\
    /*picture = QPATHTOF(data\icon\Icon##name##_co.paa);*/\
	/*class XtdGearInfo { \
		model = QGVAR(pilot_custom); \
		camo = QUOTE(name); \
	};*/ \
	}

	//Tanker

	#define TANKER_HELMET_RANK_MACRO(scope,name)\
	class GHELMET(tanker_##name##): wps_helmets_helmet_tanker {\
	scope = scope;\
	displayName = QUOTE([104th] Tanker Helmet(name));\
	hiddenSelectionsTextures[] = {QPATHTOF(data\tanker\rank\Phase2Tanker##name##_co.paa), QPATHTOF(data\visor\visor_co.paa)};\
    /*picture = QPATHTOF(data\icon\Icon##name##_co.paa);*/ \
	/*class XtdGearInfo { \
		model = QGVAR(tanker_rank); \
		camo = QUOTE(name); \
	};*/ \
	}

	#define TANKER_HELMET_CUSTOM_MACRO(scope,name)\
	class GHELMET(tanker_##name##): wps_helmets_helmet_tanker {\
	scope = scope;\
	displayName = QUOTE([104th] Tanker Helmet(name));\
	hiddenSelectionsTextures[] = {QPATHTOF(data\tanker\custom\Phase2Tanker##name##_co.paa), QPATHTOF(data\visor\visor_co.paa)};\
    /*picture = QPATHTOF(data\icon\Icon##name##_co.paa);*/ \
	/*class XtdGearInfo { \
		model = QGVAR(tanker_custom); \
		camo = QUOTE(name); \
	};*/ \
	}

	//Airborne

	#define AIRBONE_HELMET_RANK_MACRO(scope,name)\
	class GHELMET(airborne_##name##): wps_helmets_helmet_airbone {\
	scope = scope;\
	displayName = QUOTE([104th] Airborne Helmet(name));\
	hiddenSelectionsTextures[] = {QPATHTOF(data\airborne\Phase2Airborne##name##_co.paa), QPATHTOF(data\visor\visor_co.paa)};\
    /*picture = QPATHTOF(data\icon\Icon##name##_co.paa);*/ \
	/*class XtdGearInfo { \
		model = QGVAR(airborne_rank); \
		camo = QUOTE(name); \
	};*/ \
	}

	#define AIRBORNE_HELMET_CUSTOM_MACRO(scope,name)\
	class GHELMET(airborne_##name##): wps_helmets_helmet_airbone {\
	scope = scope;\
	displayName = QUOTE([104th] Airborne Helmet(name));\
	hiddenSelectionsTextures[] = {QPATHTOF(data\airborne\custom\Phase2Airborne##name##_co.paa), QPATHTOF(data\visor\visor_co.paa)};\
    /*picture = QPATHTOF(data\icon\Icon##name##_co.paa);*/ \
	/*class XtdGearInfo { \
		model = QGVAR(airborne_custom); \
		camo = QUOTE(name); \
	};*/ \
	}

	//P1
	#define P1_HELMET_RANK_MACRO(scope,name)\
	class GHELMET(phase1_##name##): wps_helmets_helmet_phase1 {\
	scope = scope;\
	displayName = QUOTE([104th] Phase 1 Helmet(name));\
	hiddenSelectionsTextures[] = {QPATHTOF(data\phase1\rank\Phase1##name##_co.paa), QPATHTOF(data\visor\visor_co.paa)};\
    /*picture = QPATHTOF(data\icon\Icon##name##_co.paa);*/ \
	/*class XtdGearInfo { \
		model = QGVAR(phase1_rank); \
		camo = QUOTE(name); \
	};*/ \
	}

	#define P1_HELMET_CUSTOM_MACRO(scope,name)\
	class GHELMET(phase1_##name##): wps_helmets_helmet_phase1 {\
	scope = scope;\
	displayName = QUOTE([104th] Phase 1 Helmet(name));\
	hiddenSelectionsTextures[] = {QPATHTOF(data\phase1\custom\Phase1##name##_co.paa), QPATHTOF(data\visor\visor_co.paa)};\
	/*class XtdGearInfo { \
		model = QGVAR(phase1_custom); \
		camo = QUOTE(name); \
	};*/ \
	}

	#define P1_HELMET_CUSTOM_GLOW_MACRO(scope,name,color)\
	class GHELMET(phase1_##name##): wps_helmets_helmet_phase1 {\
	scope = scope;\
	displayName = QUOTE([104th] Phase 1 Helmet(name));\
	hiddenSelectionsTextures[] = {QPATHTOF(data\phase1\custom\Phase1##name##_co.paa), QPATHTOF(data\visor\visor_co.paa)};\\
	hiddenSelectionsMaterials[] = {QPATHTOF(data\phase1\rank\Phase1.rvmat), QPATHTOF(data\visor\##color##\Visor##color##.rvmat)};\
    /*picture = QPATHTOF(data\icon\Icon##name##_co.paa);*/ \
	/*/*class XtdGearInfo { \
		model = QGVAR(phase1_custom); \
		camo = QUOTE(name); \
	};*/ \
	}
