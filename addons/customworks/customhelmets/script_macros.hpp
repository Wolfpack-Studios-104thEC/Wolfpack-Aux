
#define P2_HELMET_CUSTOM_MACRO(name)\
	class GHELMET(phase2_##name##): WPS_helmets_helmet_phase2 {\
	scope = 2;\
	displayName = QUOTE([104th] Phase 2 Helmet (name));\
	hiddenSelectionsTextures[] = {QPATHTOF(data\phase2\Phase2##name##_co.paa),QPATHTOEF(equipment,helmets\data\visor\visor_co.paa)};\
    /*picture = QPATHTOF(data\icon\Icon##name##_co.paa);*/\
	/*class XtdGearInfo { \
		model = QGVAR(p2_custom); \
		camo = QUOTE(name); \
	};*/ \
	}

	#define P2_HELMET_CUSTOM_GLOW_MACRO(name,color)\
	class GHELMET(phase2_##name##): WPS_helmets_helmet_phase2 {\
	scope = 2;\
	displayName = QUOTE([104th] Phase 2 Helmet (name));\
	hiddenSelectionsTextures[] = {QPATHTOF(data\phase2\Phase2##name##_co.paa),QPATHTOEF(equipment,helmets\data\visor\##color##\Visor##color##_co.paa)};\
	hiddenSelectionsMaterials[] = {"\WPS\WPS_data\Phase2.rvmat", QPATHTOEF(equipment,helmets\data\visor\##color##\Visor##color##.rvmat)};\
    /*picture = QPATHTOF(data\icon\Icon##name##_co.paa);*/ \
	/*class XtdGearInfo { \
		model = QGVAR(p2_custom); \
		camo = QUOTE(name); \
	};*/ \
	}

//ARC
	#define ARC_HELMET_CUSTOM_MACRO(name)\
	class GHELMET(arc_##name##): WPS_helmets_helmet_ARC {\
	scope = 2;\
	displayName = QUOTE([104th] Phase 2 ARC (name));\
	hiddenSelectionsTextures[] = {QPATHTOF(data\ARC\Phase2ARC##name##_co.paa),QPATHTOEF(equipment,helmets\data\arc\light\ARCLight_co.paa),QPATHTOEF(equipment,helmets\data\visor\visor_co.paa)};\
    /*picture = QPATHTOF(data\icon\Icon##name##_co.paa);*/ \
	/*class XtdGearInfo { \
		model = QGVAR(arc_custom); \
		camo = QUOTE(name); \
	};*/ \
	}

	#define ARC_HELMET_CUSTOM_GLOW_MACRO(name,color)\
	class GHELMET(arc_##name##): WPS_helmets_helmet_ARC {\
	scope = 2;\
	displayName = QUOTE([104th] Phase 2 ARC (name));\
	hiddenSelectionsTextures[] = {QPATHTOF(data\ARC\Phase2ARC##name##_co.paa),QPATHTOEF(equipment,helmets\data\arc\light\ARCLight_co.paa),QPATHTOEF(equipment,helmets\data\visor\##color##\visor##color##_co.paa)};\
	hiddenSelectionsMaterials[] = {"\z\wps\addons\helmets\data\arc\Phase2ARC.rvmat", "\z\wps\addons\helmets\data\arc\ARCLight.rvmat",QPATHTOEF(equipment,helmets\data\visor\##color##\Visor##color##.rvmat)};\
    /*picture = QPATHTOF(data\icon\Icon##name##_co.paa);*/ \
	/*class XtdGearInfo { \
		model = QGVAR(arc_custom); \
		camo = QUOTE(name); \
	};*/ \
	}

//ARF
	#define ARF_HELMET_CUSTOM_MACRO(name)\
	class GHELMET(arf_##name##): WPS_helmets_helmet_ARF {\
	scope = 2;\
	displayName = QUOTE([104th] ARF Helmet (name));\
	hiddenSelectionsTextures[] = {QPATHTOF(data\ARF\Phase2ARF##name##_co.paa),QPATHTOEF(equipment,helmets\data\visor\visor_co.paa)};\
    /*picture = QPATHTOF(data\icon\Icon##name##_co.paa);*/ \
	/*class XtdGearInfo { \
		model = QGVAR(arf_custom); \
		camo = QUOTE(name); \
	};*/ \
	}

	#define ARF_HELMET_CUSTOM_GLOW_MACRO(name,color)\
	class GHELMET(arf_##name##): WPS_helmets_helmet_ARF {\
	scope = 2;\
	displayName = QUOTE([104th] ARF Helmet (name));\
	hiddenSelectionsTextures[] = {QPATHTOF(data\ARC\Phase2ARC##name##_co.paa),QPATHTOEF(equipment,helmets\data\visor\##color#\visor##color##_co.paa)};\
	hiddenSelectionsMaterials[] = {QPATHTOEF(equipment,helmets\data\arf\ARF.rvmat),QPATHTOEF(equipment,helmets\data\visor\##color##\Visor##color##.rvmat)};\
    /*picture = QPATHTOF(data\icon\Icon##name##_co.paa);*/ \
	/*class XtdGearInfo { \
		model = QGVAR(arf_custom); \
		camo = QUOTE(name); \
	};*/ \
	}

//BARC
	#define BARC_HELMET_CUSTOM_MACRO(name)\
	class GHELMET(barc_##name##): WPS_helmets_helmet_BARC {\
	scope = 2;\
	displayName = QUOTE([104th] BARC Helmet(name));\
	hiddenSelectionsTextures[] = {QPATHTOF(data\barc\Phase2BARC##name##_co.paa),QPATHTOEF(equipment,helmets\data\visor\visor_co.paa)};\
    /*picture = QPATHTOF(data\icon\Icon##name##_co.paa);*/ \
	/*class XtdGearInfo { \
		model = QGVAR(barc_custom); \
		camo = QUOTE(name); \
	};*/ \
	}

	#define BARC_HELMET_CUSTOM_GLOW_MACRO(name,color)\
	class GHELMET(barc_##name##): WPS_helmets_helmet_BARC {\
	scope = 2;\
	displayName = QUOTE([104th] BARC Helmet(name));\
	hiddenSelectionsTextures[] = {QPATHTOF(data\barc\Phase2BARC##name##_co.paa),QPATHTOEF(equipment,helmets\data\visor\##color#\visor##color##_co.paa)};\
	hiddenSelectionsMaterials[] = {QPATHTOEF(equipment,helmets\data\barc\Phase2BARC.rvmat),QPATHTOEF(equipment,helmets\data\visor\##color##\Visor##color##.rvmat)};\
    /*picture = QPATHTOF(data\icon\Icon##name##_co.paa);*/ \
	/*class XtdGearInfo { \
		model = QGVAR(barc_custom); \
		camo = QUOTE(name); \
	};*/ \
	}

//Engineer
	#define ENGINEER_HELMET_CUSTOM_MACRO(name)\
	class GHELMET(engineer_##name##): WPS_helmets_helmet_Engineer {\
	scope = 2;\
	displayName = QUOTE([104th] Engineer Helmet(name));\
	hiddenSelectionsTextures[] = {QPATHTOF(data\engineer\Phase2Engineer##name##_co.paa),QPATHTOEF(equipment,helmets\data\engineer\light\EngineerLight_co.paa),QPATHTOEF(equipment,helmets\data\visor\visor_co.paa)};\
    /*picture = QPATHTOF(data\icon\Icon##name##_co.paa);*/ \
	/*class XtdGearInfo { \
		model = QGVAR(engineer_custom); \
		camo = QUOTE(name); \
	};*/ \
	}

	#define ENGINEER_HELMET_CUSTOM_GLOW_MACRO(name,color)\
	class GHELMET(engineer_##name##): WPS_helmets_helmet_Engineer {\
	scope = 2;\
	displayName = QUOTE([104th] Engineer Helmet(name));\
	hiddenSelectionsTextures[] = {QPATHTOF(data\engineer\Phase2Engineer##name##_co.paa),QPATHTOEF(equipment,helmets\data\engineer\light\EngineerLight_co.paa),QPATHTOEF(equipment,helmets\data\visor\##color#\visor##color##_co.paa)};\
	hiddenSelectionsMaterials[] = {QPATHTOEF(equipment,helmets\data\engineer\Phase2Engineer.rvmat),QPATHTOEF(equipment,helmets\data\engineer\light\EngineerLight.rvmat),QPATHTOEF(equipment,helmets\data\visor\##color##\Visor##color##.rvmat)};\
    /*picture = QPATHTOF(data\icon\Icon##name##_co.paa);*/ \
	/*class XtdGearInfo { \
		model = QGVAR(engineer_custom); \
		camo = QUOTE(name); \
	};*/ \
	}

//Pilot
	#define PILOT_HELMET_CUSTOM_MACRO(name)\
	class GHELMET(pilot_##name##): WPS_helmets_helmet_p2_pilot {\
	scope = 2;\
	displayName = QUOTE([104th] Pilot Helmet(name));\
	hiddenSelectionsTextures[] = {QPATHTOF(data\pilot\Phase2Pilot##name##_co.paa), QPATHTOEF(equipment,helmets\data\pilot\Phase2PilotLower_co.paa), QPATHTOEF(equipment,helmets\data\visor\visor_co.paa)};\
    /*picture = QPATHTOF(data\icon\Icon##name##_co.paa);*/ \
	/*class XtdGearInfo { \
		model = QGVAR(pilot_custom); \
		camo = QUOTE(name); \
	};*/ \
	}

	#define PILOT_HELMET_CUSTOM_GLOW_MACRO(name,color)\
	class GHELMET(pilot_##name##): WPS_helmets_helmet_p2_pilot {\
	scope = 2;\
	displayName = QUOTE([104th] Pilot Helmet(name)); \
	hiddenSelectionsTextures[] = {QPATHTOF(data\pilot\Phase2PilotUpper##name##_co.paa), QPATHTOEF(equipment,helmets\data\pilot\Phase2PilotLower_co.paa), QPATHTOEF(equipment,helmets\data\visor\##color#\visor##color##_co.paa)};\
	hiddenSelectionsMaterials[] = {QPATHTOEF(equipment,helmets\data\pilot\Phase2PilotUpper.rvmat), QPATHTOEF(equipment,helmets\data\pilot\Phase2PilotLower.rvmat), QPATHTOEF(equipment,helmets\data\visor\##color##\Visor##color##.rvmat)};\
    /*picture = QPATHTOF(data\icon\Icon##name##_co.paa);*/\
	/*class XtdGearInfo { \
		model = QGVAR(pilot_custom); \
		camo = QUOTE(name); \
	};*/ \
	}

	//Tanker
	#define TANKER_HELMET_CUSTOM_MACRO(name)\
	class GHELMET(tanker_##name##): WPS_helmets_helmet_Tanker {\
	scope = 2;\
	displayName = QUOTE([104th] Tanker Helmet(name));\
	hiddenSelectionsTextures[] = {QPATHTOF(data\tanker\Phase2Tanker##name##_co.paa), QPATHTOEF(equipment,helmets\data\visor\visor_co.paa)};\
    /*picture = QPATHTOF(data\icon\Icon##name##_co.paa);*/ \
	/*class XtdGearInfo { \
		model = QGVAR(tanker_custom); \
		camo = QUOTE(name); \
	};*/ \
	}

	//Airborne
	#define AIRBORNE_HELMET_CUSTOM_MACRO(name)\
	class GHELMET(airborne_##name##): WPS_helmets_helmet_Airborne {\
	scope = 2;\
	displayName = QUOTE([104th] Airborne Helmet(name));\
	hiddenSelectionsTextures[] = {QPATHTOF(data\airborne\Phase2Airborne##name##_co.paa), QPATHTOEF(equipment,helmets\data\visor\visor_co.paa)};\
    /*picture = QPATHTOF(data\icon\Icon##name##_co.paa);*/ \
	/*class XtdGearInfo { \
		model = QGVAR(airborne_custom); \
		camo = QUOTE(name); \
	};*/ \
	}

	//P1
	#define P1_HELMET_CUSTOM_MACRO(name)\
	class GHELMET(phase1_##name##): WPS_helmets_helmet_phase1 {\
	scope = 2;\
	displayName = QUOTE([104th] Phase 1 Helmet(name));\
	hiddenSelectionsTextures[] = {QPATHTOF(data\phase1\Phase1##name##_co.paa), QPATHTOEF(equipment,helmets\data\visor\visor_co.paa)};\
	/*class XtdGearInfo { \
		model = QGVAR(phase1_custom); \
		camo = QUOTE(name); \
	};*/ \
	}

	#define P1_HELMET_CUSTOM_GLOW_MACRO(name,color)\
	class GHELMET(phase1_##name##): WPS_helmets_helmet_phase1 {\
	scope = 2;\
	displayName = QUOTE([104th] Phase 1 Helmet(name));\
	hiddenSelectionsTextures[] = {QPATHTOF(data\phase1\Phase1##name##_co.paa), QPATHTOEF(equipment,helmets\data\visor\visor_co.paa)};\\
	hiddenSelectionsMaterials[] = {QPATHTOEF(equipment,helmets\data\phase1\Phase1.rvmat), QPATHTOEF(equipment,helmets\data\visor\##color##\Visor##color##.rvmat)};\
    /*picture = QPATHTOF(data\icon\Icon##name##_co.paa);*/ \
	/*/*class XtdGearInfo { \
		model = QGVAR(phase1_custom); \
		camo = QUOTE(name); \
	};*/ \
	}
