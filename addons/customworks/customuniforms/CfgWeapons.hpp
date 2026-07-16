class CfgWeapons {
    class wps_uniforms_uniform_P2
    {
        class ItemInfo;
    };
    class GUNIFORM(Phase_2_Uniform_Custom_Sasquatch): wps_uniforms_uniform_P2
	{
		author = "Queue";
		scope = 2;
		scopecurator = 2;
		displayname = "[104th] Phase 2 Custom (Sasqutch)";
		class ItemInfo: ItemInfo
		{
			uniformmodel = "-";
			uniformclass = QGUNIT(Phase_2_Unit_Trooper_Sasquatch);
			uniformtype = "Neopren";
			containerclass = "supply150";
			mass = 40;
		};
	};
};
