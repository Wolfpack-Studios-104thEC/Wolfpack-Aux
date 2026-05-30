class CfgWeapons {
    class wps_uniforms_uniform_P2{
        class ItemInfo;
    };
    class wps_uniforms_uniform_arc{
        class ItemInfo;
    };
    class wps_uniforms_uniform_command{
        class ItemInfo;
    };
	class GUNIFORM(Phase_2_Uniform_Base): wps_uniforms_uniform_P2
	{
		author = "Queue";
		scope = 1;
		scopecurator = 1;
		displayname = "[104th] Phase 2 Armor";
		class ItemInfo: ItemInfo
		{
			uniformmodel = "-";
			uniformclass = QGUNIT(Phase_2_Unit_Base);
			uniformtype = "Neopren";
			containerclass = "supply150";
			mass = 40;
		};
	};
    //start renaming uniforms to match units here
    RANKUNIFORMS(CT);
    RANKUNIFORMS(VCT);
    RANKUNIFORMS(CSP1);
    RANKUNIFORMS(CSP2);
    RANKUNIFORMS(CSP1_Medic);
    RANKUNIFORMS(CSP2_Medic);
	RANKUNIFORMS(CP);
    RANKUNIFORMS(CS);

    class GUNIFORM(Phase_2_Command_Uniform_Base): wps_uniforms_uniform_command
	{
		author = "Queue";
		scope = 2;
		scopecurator = 2;
		displayname = "[104th] Phase 2 Command Armor";
		class ItemInfo: ItemInfo
		{
			uniformmodel = "-";
			uniformclass = QGUNIT(Phase_2_Unit_Trooper_Command);
			uniformtype = "Neopren";
			containerclass = "supply150";
			mass = 40;
		};
	};

	class GUNIFORM(Phase_2_ARC_Uniform_Base): wps_uniforms_uniform_arc
	{
		author = "Queue";
		scope = 2;
		scopecurator = 2;
		displayname = "[104th] Phase 2 ARC Armor";
		class ItemInfo: ItemInfo
		{
			uniformmodel = "-";
			uniformclass = QGUNIT(Phase_2_Unit_Trooper_ARC);
			uniformtype = "Neopren";
			containerclass = "supply150";
			mass = 40;
		};
	};
	//Event Stuff Below

	class GUNIFORM(Phase_2_Uniform_Base_Halloween): wps_uniforms_uniform_P2
	{
		author = "Queue";
		scope = 2;
		scopecurator = 2;
		displayname = "[104th] Phase 2 (Halloween)";
		class ItemInfo: ItemInfo
		{
			uniformmodel = "-";
			uniformclass = QGUNIT(Phase_2_Unit_Trooper_Halloween);
			uniformtype = "Neopren";
			containerclass = "supply150";
			mass = 40;
		};
	};
};
