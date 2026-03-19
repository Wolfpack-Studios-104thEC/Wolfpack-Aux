
	class WPEC_3AS_MK40_AT_Unguided: 3AS_MK40_AT
	{
		scope=2;
		displayName="[104th] MK40 AT Rocket";
		ammo="104th_3AS_R_Mk40_AT";
	};
	class WPEC_3AS_MK40_AT_Guided: 3AS_MK40_AT_Guided
	{
		scope=2;
		displayName="[104th] MK40 AT Missile";
		ammo="104th_3AS_M_Mk40_AT";
	};
	class RPG32_F;
	class WPEC_MK1_AT_Mag: RPG32_F
	{
		author="Wolfpack Studios";
		scope=2;
		displayName="MK1 Heavy AT Rocket";
		model="\A3\weapons_f\launchers\RPG32\pg32v_rocket_item.p3d";
		picture="\A3\Weapons_F\launchers\RPG32\data\UI\gear_rpg32_rocket_ca.paa";
		ammo="104th_MK1_AT";
		count=1;
		mass=60;
	};
	class WPEC_MK2_AT_Mag: WPEC_MK1_AT_Mag
	{
		author="Wolfpack Studios";
		scope=2;
		displayName="MK2 Medium AT Rocket";
		model="\A3\weapons_f\launchers\RPG32\pg32v_rocket_item.p3d";
		picture="\A3\Weapons_F\launchers\RPG32\data\UI\gear_rpg32_rocket_ca.paa";
		descriptionshort="";
		ammo="104th_MK2_AT";
		count=1;
		mass=60;
	};
	class WPEC_MK3_AP_Mag: RPG32_F
	{
		author="Wolfpack Studios";
		scope=2;
		displayName="MK3 Medium AP Rocket";
		model="\A3\weapons_f\launchers\RPG32\pg32v_rocket_item.p3d";
		picture="\A3\Weapons_F\launchers\RPG32\data\UI\gear_rpg32_rocket_ca.paa";
		descriptionshort="";
		ammo="104th_MK3_AP";
		count=1;
		mass=40;
	};
	class WPEC_MK4_AP_Mag: WPEC_MK3_AP_Mag
	{
		author="Wolfpack Studios";
		scope=2;
		displayName="MK4 Heavy AP Rocket";
		model="\A3\weapons_f\launchers\RPG32\pg32v_rocket_item.p3d";
		picture="\A3\Weapons_F\launchers\RPG32\data\UI\gear_rpg32_rocket_ca.paa";
		descriptionshort="";
		ammo="104th_MK4_AP";
		count=1;
		mass=70;
	};
	class Odins_Despair: RPG32_F
	{
		author="Wolfpack Studios";
		scope=1;
		displayName="Odins Backshots";
		model="\A3\weapons_f\launchers\RPG32\pg32v_rocket_item.p3d";
		picture="\A3\Weapons_F\launchers\RPG32\data\UI\gear_rpg32_rocket_ca.paa";
		descriptionshort="Stand Behind User";
		ammo="104th_MK5_AP";
		count=100;
		mass=1;
	};
