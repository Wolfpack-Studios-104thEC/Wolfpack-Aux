
    class WPEC_DC15XM_EnergyMag: JLTS_DC15X_mag
	{
		scope=2;
		displayName="[104th] XM Energy Cell";
		displayNameShort = "Energy Cell";
		ammo="WPEC_DC15XM_Energy";
		count = 10;
	};
	class WPEC_DC15LE_EnergyMag: JLTS_DC15X_mag
	{
		scope=2;
		displayName="[104th] 15LE Energy Cell";
		displayNameShort = "Energy Cell";
		ammo="WPEC_3AS_DC15LE_PlasmaAmmo";
		count = 15;
	};
	class WPEC_DC15XM_PlasmaMag: JLTS_DC15X_mag
	{
		scope=2;
		displayName="[104th] XM Plasma Cell";
		displayNameShort = "Plasma Cell";
		ammo="WPEC_DC15XM_Plasma";
		count = 1;
	};
	class WPEC_3AS_DC15S_Mag: 3AS_60Rnd_EC30_mag
	{
		scope=2;
		displayName="[104th] DC-15S Energy Cell";
		ammo="WPEC_3AS_DCLight_PlasmaAmmo";
	};
	class WPEC_3AS_DC15C_Mag: 3AS_40Rnd_EC40_Mag
	{
		scope=2;
		displayName="[104th] DC-15C Energy Cell";
		ammo="WPEC_3AS_DCMid_PlasmaAmmo";
	};
	class WPEC_3AS_DC15C_OCMag: 3AS_40Rnd_EC40_Mag
	{
		scope=2;
		displayName="[104th] DC-15 Plasma Cell";
		displayNameShort = "Light Plasma Cell";
		ammo="WPEC_3AS_DCMid_OCPlasmaAmmo";
		count=10;
		tracersEvery=1;
		lastRoundsTracer=10;
	};
	class WPEC_3AS_DC15L_Mag: 3AS_200Rnd_EC40_Mag
	{
		scope=2;
		displayName="[104th] DC-15L Energy Cell";
		ammo="WPEC_3AS_DCMid_PlasmaAmmo";
	};
	class WPEC_3AS_DC15A_Mag: 3AS_45Rnd_EC50_Mag
	{
		scope=2;
		displayName="[104th] DC-15A Energy Cell";
		ammo="WPEC_3AS_DCHeavy_PlasmaAmmo";
	};
	class WPEC_3AS_DC17M_Mag: 3AS_60Rnd_EC50_Mag
	{
		scope=2;
		displayName="[104th] DC-17M Energy Cell";
		ammo="WPEC_3AS_DCHeavy_PlasmaAmmo";
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
		ammo="WPEC_3AS_DCExtraHeavy_PlasmaAmmo";
	};
	class WPEC_3AS_WestarLightAT: 3AS_6Rnd_RocketGrenades_HE
	{
		scope=2;
		displayName="[104th] Westar Light AT Shot";
		ammo="WPEC_3AS_RocketGrenade_HE_Arc";
		count=1;
	};
	class WPEC_3AS_DC17MLightAT: 3AS_6Rnd_RocketGrenades_HE
	{
		scope=2;
		displayName="[104th] Commando Light AT Shot";
		ammo="WPEC_3AS_RocketGrenade_HE_Commando";
		count=1;
		modelSpecial="3AS\3AS_Weapons\DC17M\attachments\blaster_Barrel.p3d";
		modelSpecialIsProxy=1;
	};
	class WPEC_3AS_Z6_Mag: 3AS_300Rnd_EC60_Mag
	{
		scope=2;
		displayName="Z-6 Cannon Energy Cell";
		ammo="WPEC_3AS_Z6_PlasmaAmmo";
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
		ammo="WPEC_3AS_Sniper_PlasmaAmmo";
	};
