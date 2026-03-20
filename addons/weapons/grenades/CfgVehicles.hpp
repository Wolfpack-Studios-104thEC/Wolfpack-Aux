
class CfgVehicles
{
	class House_F;
	class PersonalShield_Republic: House_F
	{
		model = "3AS\3AS_Shield\Shield.p3d";
		vehicleClass = "VRObjects";
		armor = 999999;
		simulation = "Fountain";
		armorStructural = 999;
		scope = 1;
		scopecurator = 1;
		displayName = "-";
		editorCategory = "EdCat_VRObjects";
		editorSubcategory = "EdSubcat_Helpers";
		sound = "Shield";
	};
	class PersonalShieldFull_Republic: House_F
	{
		model = "3AS\3AS_Shield\Personal_Shield.p3d";
		vehicleClass = "VRObjects";
		armor = 999999;
		simulation = "Fountain";
		armorStructural = 999;
		scope = 1;
		scopecurator = 1;
		displayName = "-";
		editorCategory = "EdCat_VRObjects";
		editorSubcategory = "EdSubcat_Helpers";
		sound = "Shield";
	};
	class SquadShield_Republic: House_F
	{
		model = "3AS\3AS_Shield\SquadShield.p3d";
		vehicleClass = "VRObjects";
		armor = 999999;
		simulation = "Fountain";
		armorStructural = 999;
		scope = 1;
		scopecurator = 1;
		displayName = "-";
		editorCategory = "EdCat_VRObjects";
		editorSubcategory = "EdSubcat_Helpers";
		sound = "Shield";
		destrType = "DestructNo";
	};
};
