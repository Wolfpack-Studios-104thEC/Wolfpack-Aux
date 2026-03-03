
#define ARCBASEVESTMACRO(type,version) class GVEST(ARC_##type##_##version##_vest): WPS_vests_vest_Arc \
    {\
        scope = 2;\
        scopecurator = 2;\
        displayName = QUOTE([104th] ARC ##type## Vest (##version##));\
        hiddenSelectionsTextures[] = {QPATHTOF(data\arc\standard\ARCVestTop##type##_co.paa), QPATHTOF(data\arc\standard\ARCKama##version##_co.paa)};\
    }


#define ARCCUSTOMVESTMACRO(name) class GVEST(ARC_##name##_vest): WPS_vests_vest_Arc \
    {\
        scope = 2;\
        scopecurator = 2;\
        displayName = QUOTE([104th] ARC Vest (##name##));\
        hiddenSelectionsTextures[] = {QPATHTOF(data\arc\custom\ARCVestTop##name##_co.paa), QPATHTOF(data\arc\custom\ARCVestBottom##name##_co.paa)};\
    }
