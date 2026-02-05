class CfgWeapons {
    class ItemInfo;
	class WPS_Phase_2_Uniform_Base;
	class WPS_Phase_2_Command_Uniform_Base;
	class WPS_Phase_2_ARC_Uniform_Base;
	class GUNIFORM(Phase_2_Uniform_Base): WPS_Phase_2_Uniform_Base
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
	class GUNIFORM(Phase_2_Uniform_CT): GUNIFORM(Phase_2_Uniform_Base)
	{
		author = "Queue";
		scope = 2;
		scopecurator = 2;
		displayname = "[104th] Phase 2 CT";
		class ItemInfo: ItemInfo
		{
			uniformmodel = "-";
			uniformclass = QGUNIT(Phase_2_Unit_Trooper);
			uniformtype = "Neopren";
			containerclass = "supply150";
			mass = 40;
		};
	};
    RANKUNIFORMS(2,VCT);
    RANKUNIFORMS(2,CSP1);
    RANKUNIFORMS(2,CSP2);
    RANKUNIFORMS(2,CSP1_Medic);
    RANKUNIFORMS(2,CSP2_Medic);
    RANKUNIFORMS(2,CS);

    class GUNIFORM(Phase_2_Command_Uniform_Base): WPS_Phase_2_Command_Uniform_Base
	{
		author = "Queue";
		scope = 2;
		scopecurator = 2;
		displayname = "[104th] Phase 2 Command Armor";
		class ItemInfo: ItemInfo
		{
			uniformmodel = "-";
			uniformclass = QGUNIT(Phase_2_Unit_trooper_Command);
			uniformtype = "Neopren";
			containerclass = "supply150";
			mass = 40;
		};
	};

	class GUNIFORM(Phase_2_ARC_Uniform_Base): WPS_Phase_2_ARC_Uniform_Base
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

	class GUNIFORM(Phase_2_Uniform_Base_Halloween): WPS_Phase_2_Uniform_Base
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
