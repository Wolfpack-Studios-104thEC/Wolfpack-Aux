#define RANKUNIFORMS(scope,name) class GUNIFORM(Phase_2_Uniform_##name##): GUNIFORM(Phase_2_Uniform_Base) \
	{\
		scope = ##scope##;\
		scopecurator = ##scope##;\
		displayname = QUOTE([104th] Phase 2 ##name##);\
		class ItemInfo: ItemInfo\
		{\
			uniformmodel = "-";\
			uniformclass = QGUNIT(Phase_2_Unit_Trooper_##name##);\
			uniformtype = "Neopren";\
			containerclass = "supply150";\
			mass = 40;\
		};\
	}

#define RANKUNITS(scope,name) class GUNIT(Phase_2_Unit_Trooper_##name##): GUNIT(Phase_2_Unit_Base)\
	{\
		scope = ##scope##;\
		scopeCurator = ##scope##;\
		uniformClass = QGUNIFORM(Phase_2_Uniform_##name##);\
		displayName = QUOTE([104th/WPS] Phase 2 Trooper ##name##);\
		hiddenSelectionsTextures[] =\
        {\
            QPATHTOF(data\WPS_104th_Phase_2_##name##_Upper_co.paa),\
            QPATHTOF(data\WPS_104th_Phase_2_##name##_Lower_co.paa),\
            QUOTE(\WPS\WPS_Uniforms\Phase2\data\Phase2ArmorUndersuit_co.paa)\
        };\
	}
