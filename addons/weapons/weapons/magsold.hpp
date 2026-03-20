
    class WPEC_DC15XM_EnergyMag: JLTS_DC15X_mag
	{
		scope=2;
		displayName="[104th] XM Energy Cell";
		displayNameShort = "Energy Cell";
		ammo="104th_DC15XM_Energy";
		count = 10;
	};
	class WPEC_DC15XM_PlasmaMag: JLTS_DC15X_mag
	{
		scope=2;
		displayName="[104th] XM Plasma Cell";
		displayNameShort = "Plasma Cell";
		ammo="104th_DC15XM_Plasma";
		count = 1;
	};
	class WPEC_3AS_DC15S_Mag: 3AS_60Rnd_EC30_mag
	{
		scope=2;
		displayName="[104th] DC-15S Energy Cell";
		ammo="104th_3AS_DCLight_PlasmaAmmo";
	};
	class WPEC_3AS_DC15C_Mag: 3AS_40Rnd_EC40_Mag
	{
		scope=2;
		displayName="[104th] DC-15C Energy Cell";
		ammo="104th_3AS_DCMid_PlasmaAmmo";
	};
	class WPEC_3AS_DC15C_OCMag: 3AS_40Rnd_EC40_Mag
	{
		scope=2;
		displayName="[104th] DC-15 Plasma Cell";
		displayNameShort = "Light Plasma Cell";
		ammo="104th_3AS_DCMid_OCPlasmaAmmo";
		count=10;
		tracersEvery=1;
		lastRoundsTracer=10;
	};
	class WPEC_3AS_DC15L_Mag: 3AS_200Rnd_EC40_Mag
	{
		scope=2;
		displayName="[104th] DC-15L Energy Cell";
		ammo="104th_3AS_DCMid_PlasmaAmmo";
	};
	class WPEC_3AS_DC15A_Mag: 3AS_45Rnd_EC50_Mag
	{
		scope=2;
		displayName="[104th] DC-15A Energy Cell";
		ammo="104th_3AS_DCHeavy_PlasmaAmmo";
	};
	class WPEC_3AS_DC17M_Mag: 3AS_60Rnd_EC50_Mag
	{
		scope=2;
		displayName="[104th] DC-17M Energy Cell";
		ammo="104th_3AS_DCHeavy_PlasmaAmmo";
		count=100;
		mass=16;
		initSpeed=470;
		tracersEvery=1;
		lastRoundsTracer=100;
		modelSpecial="3AS\3AS_Weapons\DC17M\attachments\blaster_Barrel.p3d";
		modelSpecialIsProxy=1;
	};
	class WPEC_3AS_WestarM5_Mag: 3AS_60Rnd_EC50_Mag
	{
		scope=2;
		displayName="[104th] Westar M5 Energy Cell";
		ammo="104th_3AS_DCExtraHeavy_PlasmaAmmo";
	};
	class WPEC_3AS_WestarLightAT: 3AS_6Rnd_RocketGrenades_HE
	{
		scope=2;
		displayName="[104th] Westar Light AT Shot";
		ammo="104th_3AS_RocketGrenade_HE_Arc";
		count=1;
	};
	class WPEC_3AS_DC17MLightAT: 3AS_6Rnd_RocketGrenades_HE
	{
		scope=2;
		displayName="[104th] Commando Light AT Shot";
		ammo="104th_3AS_RocketGrenade_HE_Commando";
		count=1;
		modelSpecial="3AS\3AS_Weapons\DC17M\attachments\blaster_Barrel.p3d";
		modelSpecialIsProxy=1;
	};
	class WPEC_3AS_Z6_Mag: 3AS_300Rnd_EC60_Mag
	{
		scope=2;
		displayName="Z-6 Cannon Energy Cell";
		ammo="104th_3AS_Z6_PlasmaAmmo";
		mass=40;
		count=500;
		initSpeed=400;
		tracersEvery=1;
		lastRoundsTracer=500;
	};
	class WPEC_3AS_Valken38X_Mag: 3AS_10Rnd_EC80_Mag
	{
		scope=2;
		displayName="[104th] Valken-38X Energy Cell";
		ammo="104th_3AS_Sniper_PlasmaAmmo";
	};
	class WPEC_3AS_Chaingun_Mag: 3AS_Chaingun_Drum_Mag
	{
		scope=2;
		displayName="[104th] Chaingun Energy Cell";
		ammo="104th_3AS_ChaingunAmmo";
	};

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

	class WPEC_MK1_PistolMag: 3AS_16Rnd_EC20_Mag
	{
		scope=2;
		displayName="DC-17 Charge Cell";
		ammo="104th_MK1_Normal_PistolAmmo";
		count=30;
		lastRoundsTracer=30;
	};
	class WPEC_MK2_PistolMag_Long: 3AS_16Rnd_EC20_Mag
	{
		scope=2;
		JLTS_hasEMPProtection=1;
		displayName="DC-17 MK2 Stun Cell (Long)";
		ammo="104th_MK2_Stun_PistolAmmo";
		count=10;
		lastRoundsTracer=10;
		JLTS_stunDuration=30;
	};
	class WPEC_MK2_PistolMag_Short: 3AS_16Rnd_EC20_Mag
	{
		scope=2;
		JLTS_hasEMPProtection=1;
		displayName="DC-17 MK1 Stun Cell (Short)";
		ammo="104th_MK2_Stun_PistolAmmo";
		count=10;
		lastRoundsTracer=10;
		JLTS_stunDuration=10;
	};
	class WPEC_MK3_PistolMag: 3AS_16Rnd_EC20_Mag
	{
		scope=2;
		displayName="DC-17 EMP Cell";
		ammo="104th_MK3_EMP_PistolAmmo";
		count=10;
		lastRoundsTracer=10;
	};
	class WPEC_MK4_PistolMag: 3AS_16Rnd_EC20_Mag
	{
		scope=2;
		displayName="DC-17 Overcharged Cell";
		ammo="104th_MK4_OC_PistolAmmo";
		count=10;
		lastRoundsTracer=5;
	};
