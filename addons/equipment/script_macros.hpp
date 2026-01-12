//Config macro's go here

#define P2_HELMET_RANK_MACRO(scope,name)\
	class GHELMET(phase2_##name##): WPS_Phase_2_Helmet_Base {\
	scope = scope;\
	displayName = QUOTE([104th] Phase 2 Helmet (name));\
	hiddenSelectionsTextures[] = {QPATHTOF(helmets\data\phase2\rank\Phase2##name##_co.paa),QPATHTOF(helmets\data\visor\visor_co.paa)};\
	}

#define P2_HELMET_CUSTOM_MACRO(scope,name)\
	class GHELMET(phase2_##name##): WPS_Phase_2_Helmet_Base {\
	scope = scope;\
	displayName = QUOTE([104th] Phase 2 Helmet (name));\
	hiddenSelectionsTextures[] = {QPATHTOF(helmets\data\phase2\custom\Phase2##name##_co.paa),QPATHTOF(helmets\data\visor\visor_co.paa)};\
	}

	#define P2_HELMET_CUSTOM_GLOW_MACRO(scope,name,color)\
	class GHELMET(phase2_##name##): WPS_Phase_2_Helmet_Base {\
	scope = scope;\
	displayName = QUOTE([104th] Phase 2 Helmet (name));\
	hiddenSelectionsTextures[] = {QPATHTOF(helmets\data\phase2\custom\Phase2##name##_co.paa),QPATHTOF(helmets\data\visor\##color#\visor##color##_co.paa)};\
	hiddenSelectionsMaterials[] = {"\WPS\WPS_Helmets\data\Phase2.rvmat", QPATHTOF(helmets\data\visor\##color##\Visor##color##.rvmat)};\
	}

	#define ARC_HELMET_RANK_MACRO(scope,name)\
	class GHELMET(arc_##name##): WPS_Phase_2_ARC_Helmet_Base {\
	scope = scope;\
	displayName = QUOTE([104th] Phase 2 ARC (name));\
	hiddenSelectionsTextures[] = {QPATHTOF(helmets\data\ARC\rank\Phase2ARC##name##_co.paa),QPATHTOF(helmets\data\arc\light\ARCLight_co.paa),QPATHTOF(helmets\data\visor\visor_co.paa)};\
	}

	#define ARC_HELMET_CUSTOM_MACRO(scope,name)\
	class GHELMET(arc_##name##): WPS_Phase_2_ARC_Helmet_Base {\
	scope = scope;\
	displayName = QUOTE([104th] Phase 2 ARC (name));\
	hiddenSelectionsTextures[] = {QPATHTOF(helmets\data\ARC\custom\Phase2ARC##name##_co.paa),QPATHTOF(helmets\data\arc\light\ARCLight_co.paa),QPATHTOF(helmets\data\visor\visor_co.paa)};\
	}

	#define ARC_HELMET_CUSTOM_GLOW_MACRO(scope,name,color)\
	class GHELMET(arc_##name##): WPS_Phase_2_ARC_Helmet_Base {\
	scope = scope;\
	displayName = QUOTE([104th] Phase 2 ARC (name));\
	hiddenSelectionsTextures[] = {QPATHTOF(helmets\data\ARC\custom\Phase2ARC##name##_co.paa),QPATHTOF(helmets\data\arc\light\ARCLight_co.paa),QPATHTOF(helmets\data\visor\##color#\visor##color##_co.paa)};\
	hiddenSelectionsMaterials[] = {"\WPS\WPS_Helmets\data\Phase2.rvmat", QPATHTOF(helmets\data\arc\light\ARCLight.rvmat),QPATHTOF(helmets\data\visor\##color##\Visor##color##.rvmat)};\
	}