//Aircraft
    class WPEC_2000Rnd_LAAT_laser: VehicleMagazine
	{
		scope=2;
		displayName="Kamman Charge Cell Ball Turret";
		displayNameShort="Ball Turret";
		picture="";
		ammo="WPEC_Ball_Turret";
		mass=6;
		count=2000;
		tracersEvery=1;
		lastRoundsTracer=2000;
		timeToLive=3;
		tracerScale=5;
		tracerStartTime=0;
	};
	class WPEC_LAAT_Cannon_LowPower_Magazine: VehicleMagazine
	{
		scope=2;
		displayName="Low Power Laser Cell";
		displayNameShort="Low Power Cell";
		picture="";
		count=1000;
		tracersEvery=1;
		lastRoundsTracer=1000;
		maxLeadSpeed=300;
		ammo="WPEC_LAAT_Cannon_LowPower_Ammo";
	};
	class WPEC_LAAT_Cannon_HighPower_Magazine: VehicleMagazine
	{
		scope=2;
		displayName="High Power Laser Cell";
		displayNameShort="High Power Cell";
		picture="";
		count=50;
		tracersEvery=1;
		lastRoundsTracer=500;
		maxLeadSpeed=300;
		ammo="WPEC_LAAT_Cannon_HighPower_Ammo";
	};
	class WPEC_aircraft_green_CAP_plasma_mag: VehicleMagazine
	{
		scope=2;
		displayName="Green CAP plasma";
		displayNameShort="Green CAP plasma";
		picture="";
		count=1000;
		tracersEvery=1;
		lastRoundsTracer=1000;
		maxLeadSpeed=300;
		ammo="WPEC_aircraft_green_CAP_plasma_ammo";
	};

    //Missiles
	class WPEC_Maramu_6Rnd_A2A_mag: 4Rnd_AAA_missiles
	{
		ammo="WPEC_Maramu_A2A_Missile_ammo";
		count=6;
		displayName="Maramu LR AA Missile";
		displayNameShort="Maramu LR AA";
		tracersEvery=1;
	};
	class WPEC_Hoska_6Rnd_A2A_mag: 4Rnd_AAA_missiles
	{
		ammo="WPEC_Hoska_A2A_Missile_ammo";
		count=6;
		displayName="Hoska MR AA Missile";
		displayNameShort="Hoska MR AA";
		tracersEvery=1;
	};
	class WPEC_Talons_A2A_missile_mag: 4Rnd_AAA_missiles
	{
		ammo="WPEC_Talons_A2A_missile_ammo";
		count=6;
		displayName="Talons SR AA Missile";
		displayNameShort="Talons SR AA";
		tracersEvery=1;
	};
	class WPEC_Dianoga_4Rnd_WGM_mag: 4Rnd_LG_Jian
	{
		ammo="WPEC_Dianoga_WGM_Missile_ammo";
		count=4;
		displayName="Dianoga WGM Missile";
		displayNameShort="Dianoga WGM";
		tracersEvery=1;
	};
	class WPEC_Kaada_10Rnd_Unguided_Rocket_mag: 7Rnd_Rocket_04_AP_F
	{
		ammo="WPEC_Kaada_Unguided_Rocket_ammo";
		count=10;
		displayName="Kaada Unguided Missile";
		displayNameShort="Kaada Missile";
	};

//Landcraft?
	class 4Rnd_WPEC_SuperLaser: VehicleMagazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="4Rnd_WPEC_SuperLaser_Coolant";
		displayNameShort="Super_Laser_Coolant";
		ammo="WPEC_SuperLaser_shot";
		count=4;
		initSpeed=550;
		maxLeadSpeed=25;
		tracersEvery=1;
		nameSound="cannon";
		muzzleImpulseFactor[]={1,1};
	};
	class 4Rnd_WPEC_SuperLaser_HE: VehicleMagazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="4Rnd_WPEC_SuperLaser_Coolant_HE";
		displayNameShort="Super_Laser_Coolant";
		ammo="WPEC_SuperLaser_shotHE";
		count=4;
		initSpeed=450;
		maxLeadSpeed=25;
		tracersEvery=1;
		nameSound="cannon";
		muzzleImpulseFactor[]={1,1};
	};


//Unknown
    class WPEC_Loper_6Rnd_SR_Mag: 4Rnd_GAA_missiles
	{
		displayName="Loper Ground-to-Air Missile";
		displayNameShort="Loper SR Missile";
		count=6;
		ammo="WPEC_Loper_SR_GtA_Missile_ammo";
	};
	class WPEC_Loper_12Rnd_SR_Mag: 4Rnd_GAA_missiles
	{
		displayName="Loper Ground-to-Air Missile";
		displayNameShort="Loper SR Missile";
		count=12;
		ammo="WPEC_Loper_SR_GtA_Missile_ammo";
	};
	class WPEC_Nuna_12Rnd_SR_Mag: 4Rnd_GAA_missiles
	{
		displayName="Nuna General Purpose Missile";
		displayNameShort="Nuna GP Missile";
		count=12;
		ammo="WPEC_Nuna_SR_GP_Missile_ammo";
	};
	class WPEC_Oslet_4Rnd_LR_Mag: 4Rnd_GAA_missiles
	{
		displayName="Oslet Ground-to-Air Long Range Missile";
		displayNameShort="Oslet LR Missile";
		count=12;
		ammo="WPEC_Oslet_LR_AtA_Missile_ammo";
	};
