#define RANKUNIFORMS(scope,name) class GUNIFORM(Phase_2_Uniform_##name##): wps_uniforms_uniform_P2 \
	{\
		scope = ##scope##;\
		scopecurator = ##scope##;\
		displayname = QUOTE([104th] Phase 2 ##name##);\
		class ItemInfo: ItemInfo\
		{\
			uniformmodel = "-";\
			uniformclass = QGUNIT(Phase_2_Unit_##name##);\
			uniformtype = "Neopren";\
			containerclass = "supply150";\
			mass = 40;\
		};\
	}

#define RANKUNITS(scope,name) class GUNIT(Phase_2_Unit_##name##): wps_uniforms_unit_P2\
	{\
		scope = ##scope##;\
		scopeCurator = ##scope##;\
		uniformClass = QGUNIFORM(Phase_2_Uniform_##name##);\
		displayName = QUOTE([104th/WPS] Phase 2 Trooper ##name##);\
		hiddenSelectionsTextures[] =\
        {\
            QPATHTOF(data\WPEC_Phase_2_##name##_Upper_co.paa),\
            QPATHTOF(data\WPEC_Phase_2_##name##_Lower_co.paa),\
            QUOTE(\WPS\WPS_Uniforms\Phase2\data\Phase2ArmorUndersuit_co.paa)\
        };\
	}
