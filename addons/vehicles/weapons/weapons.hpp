//Aircraft
	class WPEC_autocannon_Base_F: CannonCore
	{
		scope=1;
		cursor="EmptyCursor";
		cursorAim="cannon";
		nameSound="cannon";
		sound[]=
		{
			"A3\sounds_f\dummysound.wss",
			2.5118864,
			1,
			1800
		};
		soundContinuous=0;
		reloadTime=0.30000001;
		aiRateOfFire=0.60000002;
		magazineReloadTime=2;
		autoReload=1;
		ballisticsComputer=2 + 16;
		FCSMaxLeadSpeed=27.778;
		FCSZeroingDelay=1;
		canLock=0;
		autoFire=1;
		modes[]=
		{
			"player",
			"close",
			"short",
			"medium",
			"far"
		};
		shotFromTurret=0;
		showAimCursorInternal=0;
		class player: Mode_FullAuto
		{
			soundContinuous=0;
			reloadTime=0.30000001;
			dispersion=0.00089999998;
			aiRateOfFire=1;
			aiRateOfFireDistance=10;
			minRange=0;
			minRangeProbab=0.0099999998;
			midRange=1;
			midRangeProbab=0.0099999998;
			maxRange=2;
			maxRangeProbab=0.0099999998;
		};
		class close: player
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=3;
			burstRangeMax=6;
			aiRateOfFire=1;
			aiRateOfFireDispersion=2;
			aiRateOfFireDistance=200;
			minRange=0;
			minRangeProbab=0.1;
			midRange=400;
			midRangeProbab=0.69999999;
			maxRange=800;
			maxRangeProbab=0.80000001;
		};
		class short: close
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=1;
			burstRangeMax=5;
			aiRateOfFire=2;
			aiRateOfFireDispersion=2;
			aiRateOfFireDistance=600;
			minRange=600;
			minRangeProbab=0.75;
			midRange=800;
			midRangeProbab=0.80000001;
			maxRange=1200;
			maxRangeProbab=0.80000001;
		};
		class medium: close
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=1;
			burstRangeMax=3;
			aiRateOfFire=2;
			aiRateOfFireDispersion=3;
			aiRateOfFireDistance=1000;
			minRange=1000;
			minRangeProbab=0.80000001;
			midRange=1500;
			midRangeProbab=0.80000001;
			maxRange=2000;
			maxRangeProbab=0.69999999;
		};
		class far: close
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=1;
			burstRangeMax=1;
			aiRateOfFire=2;
			aiRateOfFireDispersion=4;
			aiRateOfFireDistance=1800;
			minRange=1800;
			minRangeProbab=0.74000001;
			midRange=2400;
			midRangeProbab=0.64999998;
			maxRange=3000;
			maxRangeProbab=0.050000001;
		};
	};
	class WPEC_LAAT_LASER: WPEC_autocannon_Base_F
	{
		displayName="$STR_A3_autocannon_40mm_CTWS0";
		muzzles[]=
		{
			"HE"
		};
		class HE: WPEC_autocannon_Base_F
		{
			displayName="$STR_A3_autocannon_40mm_CTWS0";
			magazines[]=
			{
				"WPEC_2000Rnd_LAAT_laser",
				"WPEC_2000Rnd_LAAT_laser"
			};
			class player: player
			{
				dispersion=0;
				reloadTime=0.016666668;
				burst=144;
				sounds[]=
				{
					"StandardSound"
				};
				class StandardSound
				{
					begin1[]=
					{
						"A3\Sounds_F\arsenal\weapons_vehicles\cannon_105mm\slammer_105mm_distant",
						3,
						1,
						150
					};
					soundBegin[]=
					{
						"begin1",
						1
					};
				};
				soundContinuous=1;
			};
			class close: player
			{
				aiBurstTerminable=1;
				showToPlayer=0;
				burst=3;
				burstRangeMax=6;
				aiRateOfFire=1;
				aiRateOfFireDispersion=2;
				aiRateOfFireDistance=200;
				minRange=0;
				minRangeProbab=0.1;
				midRange=400;
				midRangeProbab=0.69999999;
				maxRange=800;
				maxRangeProbab=0.80000001;
			};
			class short: close
			{
				aiBurstTerminable=1;
				showToPlayer=0;
				burst=1;
				burstRangeMax=5;
				aiRateOfFire=2;
				aiRateOfFireDispersion=2;
				aiRateOfFireDistance=600;
				minRange=600;
				minRangeProbab=0.75;
				midRange=800;
				midRangeProbab=0.80000001;
				maxRange=1200;
				maxRangeProbab=0.80000001;
			};
			class medium: close
			{
				aiBurstTerminable=1;
				showToPlayer=0;
				burst=1;
				burstRangeMax=3;
				aiRateOfFire=2;
				aiRateOfFireDispersion=3;
				aiRateOfFireDistance=1000;
				minRange=1000;
				minRangeProbab=0.80000001;
				midRange=1500;
				midRangeProbab=0.80000001;
				maxRange=2000;
				maxRangeProbab=0.69999999;
			};
			class far: close
			{
				aiBurstTerminable=1;
				showToPlayer=0;
				burst=1;
				burstRangeMax=1;
				aiRateOfFire=2;
				aiRateOfFireDispersion=4;
				aiRateOfFireDistance=1800;
				minRange=1800;
				minRangeProbab=0.74000001;
				midRange=2400;
				midRangeProbab=0.64999998;
				maxRange=3000;
				maxRangeProbab=0.050000001;
			};
		};
	};
	class WPEC_LAAT_Cannon_Base: Cannon_30mm_Plane_CAS_02_F
	{
		scope=1;
		displayName="LAAT Cannon (Base)";
		modes[]=
		{
			"LowROF"
		};
		canLock=2;
		ballisticsComputer=21;
		weaponLockSystem=0;
		burst=1;
		magazineReloadTime=2;
		class LowROF: LowROF
		{
			displayName="Low ROF";
			multiplier=1;
			flashSize=1;
			dispersion=0;
			autoFire="true";
			aiRateOfFire=0.001;
			reloadTime=0.07;
			aiRateOfFireDispersion=0;
			aiRateOfFireDistance=0;
			minRange=0;
			minRangeProbab=1;
			midRange=7500;
			midRangeProbab=1;
			maxRange=15000;
			maxRangeProbab=1;
			weaponLockDelay=0;
			weaponLockSystem=0;
			lockAcquire=1;
			FCSMaxLeadSpeed=1000;
			burst=1;
			textureType="fullAuto";
		};
	};
	class WPEC_LAAT_Cannon_Low: WPEC_LAAT_Cannon_Base
	{
		scope=2;
		displayName="LAAT Cannon (Low Power)";
		magazines[]=
		{
			"WPEC_LAAT_Cannon_LowPower_Magazine"
		};
		class LowROF: LowROF
		{
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				soundsetshot[]=
				{
					"3AS_LAAT_Shot_SoundSet"
				};
			};
		};
	};
	class WPEC_LAAT_Cannon_High: WPEC_LAAT_Cannon_Base
	{
		displayName="LAAT Cannon (High Power)";
		scope=2;
		initSpeed=2000;
		magazineReloadTime=6;
		magazines[]=
		{
			"WPEC_LAAT_Cannon_HighPower_Magazine"
		};
		class LowROF: LowROF
		{
			displayName="LAAT Cannon (High Power)";
			dispersion=0;
			reloadTime=0.2;
			FCSMaxLeadSpeed=1500;
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				soundsetshot[]=
				{
					"3AS_LAAT_Shot_SoundSet"
				};
			};
		};
	};
	class WPEC_aircraft_green_CAP_plasma_weapon: Gatling_30mm_Plane_CAS_01_F
	{
		author = AUTHOR;
		scope = 2;
		displayName = "CAP Plasma Cannons";
		displayNameShort = "Plasma CAP";
		magazines[] = {"WPEC_aircraft_green_CAP_plasma_mag"};
		FCSMaxLeadSpeed = 1800;
		weaponLockSystem = 2;
		dexterity = 5;modes[] = {"LowROF"};
		canLock = 1;
		ballisticsComputer = 1;
		class LowROF: LowROF
		{
			ballisticsComputer = 1;
			soundContinuous = 0;
			autoFire = 1;
			multiplier = 1;
			flashSize = 1;
			dispersion = 0;
			recoil = "Empty";
			ffMagnitude = 0.5;
			ffFrequency = 11;
			ffCount = 6;
			showToPlayer = 1;
			burst = 1;
			reloadTime = 0.07;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 10;
			minRange = 0;
			minRangeProbab = 0.01;
			midRange = 1;
			midRangeProbab = 0.01;
			maxRange = 2;
			maxRangeProbab = 0.01;
			textureType = "fullAuto";
			sounds[] = {"StandardSounds"};
			class StandardSounds
			{
				begin1[] = {"\z\NCA\addons\vehicles\weapons\sounds\cannons\plasmaCannon_fire_left.ogg",1.1,1,1800};
				begin2[] = {"\z\NCA\addons\vehicles\weapons\sounds\cannons\plasmaCannon_fire_right.ogg",1.1,1,1800};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
		};
	};
    class WPEC_coaxium_plasma_weapon: WPEC_aircraft_green_CAP_plasma_weapon
	{
		scope = 2;
		displayName = "Coaxium Plasma Cannons";
		displayNameShort = "Coaxium Plasma";
		magazines[] = {"WPEC_coaxium_plasma_magazine"};
		modes[] = {"LowROF"};
		dispersion = 9.9999997e-006;
		aiRateOfFire = 0.40000001;
		reloadTime = 0.40000001;
		canLock = 1;
		weaponLockSystem = 0;
		burst = 1;
    };

    //Missiles
	class WPEC_Maramu_A2A_MissileSystem: missiles_ASRAAM
	{
		displayName="Maramu Missile System";
		displayNameShort="Maramu";
		magazines[]=
		{
			"WPEC_Maramu_6Rnd_A2A_mag"
		};
		sounds[]=
		{
			"StandardSound"
		};
		class StandardSound
		{
			soundsetshot[]=
			{
				"3AS_Missle_SoundSet"
			};
		};
		soundfly[]=
		{
			"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\rocket_fly.wss",
			3,
			1,
			2000
		};
		lockingTargetSound[]=
		{
			"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\Locking_Titan.wss",
			0.56234133,
			1
		};
		lockedTargetSound[]=
		{
			"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\Locked_Titan.wss",
			0.56234133,
			2.5
		};
	};
    class WPEC_Maramu_A2A_Pylons_MissileSystem: WPEC_Maramu_A2A_MissileSystem
	{
		displayName="Maramu Missile System";
		displayNameShort="Maramu";
		magazines[]=
		{
			"WPEC_Maramu_pylon_x2_A2A_mag",
            "WPEC_Maramu_pylon_x1_A2A_mag"
		};
    };
	class WPEC_Hoska_A2A_MissileSystem: missiles_ASRAAM
	{
		displayName="Hoska Missile System";
		displayNameShort="Hoska";
		magazines[]=
		{
			"WPEC_Hoska_6Rnd_A2A_mag"
		};
		sounds[]=
		{
			"StandardSound"
		};
		class StandardSound
		{
			soundsetshot[]=
			{
				"3AS_Missle_SoundSet"
			};
		};
		soundfly[]=
		{
			"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\rocket_fly.wss",
			3,
			1,
			2000
		};
		lockingTargetSound[]=
		{
			"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\Locking_Titan.wss",
			0.56234133,
			1
		};
		lockedTargetSound[]=
		{
			"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\Locked_Titan.wss",
			0.56234133,
			2.5
		};
	};
    class WPEC_Hoska_A2A_Pylons_MissileSystem: WPEC_Hoska_A2A_MissileSystem
	{
		displayName="Hoska Missile System";
		displayNameShort="Hoska";
		magazines[]=
		{
			"WPEC_Hoska_pylon_x2_A2A_mag",
            "WPEC_Hoska_pylon_x1_A2A_mag"
		};
    };
	class NCA_Talon_A2A_MissileSystem: weapon_R73Launcher
	{
		scope=2;
        author = AUTHOR;
		displayName="Talon Missile (A2A)";
		displayNameShort="Talon A2A";
		sounds[] = {"StandardSound"};
		magazines[]=
		{
			"WPEC_Talons_A2A_missile_mag"
		};
	};
	class WPEC_Dianoga_WGM_MissileSystem: missiles_Jian
	{
		displayName="Dianoga Missile System";
		displayNameShort="Dianoga";
		magazines[]=
		{
			"WPEC_Dianoga_4Rnd_WGM_mag"
		};
		sounds[]=
		{
			"StandardSound"
		};
		class StandardSound
		{
			soundsetshot[]=
			{
				"3AS_Missle_SoundSet"
			};
		};
		soundfly[]=
		{
			"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\rocket_fly.wss",
			3,
			1,
			2000
		};
	};
	class WPEC_Dianoga_WGM_Pylons_MissileSystem: WPEC_Dianoga_WGM_MissileSystem
	{
		displayName="Dianoga Missile System";
		displayNameShort="Dianoga";
		magazines[]=
		{
			"WPEC_Dianoga_pylon_x2_WGM_mag",
            "WPEC_Dianoga_pylon_x1_WGM_mag"
		};
    };
	class WPEC_Kaada_DF_MissileSystem: Rocket_04_AP_Plane_CAS_01_F
	{
		displayName="Kaada Rocket System";
		displayNameShort="Kaada";
		magazines[]=
		{
			"WPEC_Kaada_10Rnd_Unguided_Rocket_mag"
		};
		sounds[]=
		{
			"StandardSound"
		};
		class StandardSound
		{
			soundsetshot[]=
			{
				"3AS_Missle_SoundSet"
			};
		};
		soundfly[]=
		{
			"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\rocket_fly.wss",
			3,
			1,
			2000
		};
	};
	class WPEC_Kaada_DF_Pylons_MissileSystem: WPEC_Kaada_DF_MissileSystem
	{
		displayName="Kaada Missile System";
		displayNameShort="Kaada";
		magazines[]=
		{
			"WPEC_Kaada_pylon_x8_Unguided_Rocket_mag",
            "WPEC_Kaada_pylon_x16_Unguided_Rocket_mag"
		};
    };

    //Bombs
	class WPEC_Unguided_BombSystem: Mk82BombLauncher
	{
        author = AUTHOR;
		displayName="[104th] Dumb Bomb";
		magazines[]=
		{
			"WPEC_Unguided_Bomb_mag"
		};
	};
	class WPEC_Guided_BombSystem: weapon_SDBLauncher
	{
        author = AUTHOR;
		displayName="[104th] GBU";
		magazines[]={"WPEC_Guided_Bomb_mag"};
	};

//Landcraft
	class WPEC_SuperLaser: CannonCore
	{
		scope=1;
		displayName="WPEC_SuperLaser";
		cursor="EmptyCursor";
		cursorAim="cannon";
		showAimCursorInternal=0;
		nameSound="cannon";
		reloadSound[]=
		{
			"A3\Sounds_F\arsenal\weapons_vehicles\cannon_120mm\Cannon_120mm_Reload_01.wss",
			2.5118864,
			1,
			10
		};
		reloadMagazineSound[]=
		{
			"A3\Sounds_F\arsenal\weapons_vehicles\cannon_120mm\Cannon_120mm_Reload_01.wss",
			2.5118864,
			1,
			10
		};
		magazines[]=
		{
			"4Rnd_WPEC_SuperLaser",
			"4Rnd_WPEC_SuperLaser_HE"
		};
		reloadTime=10;
		magazineReloadTime=30;
		autoReload=1;
		canLock=0;
		ballisticsComputer=2 + 16;
		FCSMaxLeadSpeed=25;
		FCSZeroingDelay=1;
		aiDispersionCoefY=2;
		aiDispersionCoefX=2;
		autoFire=0;
		modes[]=
		{
			"player",
			"topDown",
			"close",
			"short",
			"medium",
			"far"
		};
		class GunParticles
		{
			class FirstEffect
			{
				effectName="CannonFired";
				positionName="Usti hlavne";
				directionName="Konec hlavne";
			};
		};
		class player: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons_vehicles\cannon_120mm\slammer_120mm_distant",
					3.1622777,
					1,
					1500
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			soundContinuous=0;
			reloadTime=6;
			magazineReloadTime=6;
			autoReload=1;
			autoFire=0;
			dispersion=0.00056999997;
			aiRateOfFire=1;
			aiRateOfFireDistance=10;
			minRange=0;
			minRangeProbab=0.0099999998;
			midRange=1;
			midRangeProbab=0.0099999998;
			maxRange=2;
			maxRangeProbab=0.0099999998;
		};
		class TopDown: player
		{
			textureType="topDown";
			displayName="$STR_A3_FireMode_TopDown0";
			minRange=150;
			minRangeProbab=0.40000001;
			midRange=400;
			midRangeProbab=0.94999999;
			maxRange=8000;
			maxRangeProbab=0.94999999;
		};
		class close: player
		{
			showToPlayer=0;
			burst=1;
			burstRangeMax=1;
			aiRateOfFire=6;
			aiRateOfFireDispersion=0.5;
			aiRateOfFireDistance=500;
			minRange=5;
			minRangeProbab=0.1;
			midRange=500;
			midRangeProbab=0.80000001;
			maxRange=1000;
			maxRangeProbab=0.85000002;
		};
		class short: close
		{
			showToPlayer=0;
			burst=1;
			burstRangeMax=1;
			aiRateOfFire=6;
			aiRateOfFireDispersion=1;
			aiRateOfFireDistance=1000;
			minRange=500;
			minRangeProbab=0.30000001;
			midRange=1000;
			midRangeProbab=0.85000002;
			maxRange=1500;
			maxRangeProbab=0.85000002;
		};
		class medium: close
		{
			dispersion=0.00071250001;
			showToPlayer=0;
			burst=1;
			burstRangeMax=1;
			aiRateOfFire=8;
			aiRateOfFireDispersion=4;
			aiRateOfFireDistance=1250;
			minRange=1000;
			minRangeProbab=0.60000002;
			midRange=1500;
			midRangeProbab=0.85000002;
			maxRange=2000;
			maxRangeProbab=0.80000001;
		};
		class far: close
		{
			dispersion=0.00071250001;
			showToPlayer=0;
			burst=1;
			burstRangeMax=1;
			aiRateOfFire=10;
			aiRateOfFireDispersion=8;
			aiRateOfFireDistance=1500;
			minRange=1500;
			minRangeProbab=0.75;
			midRange=2000;
			midRangeProbab=0.80000001;
			maxRange=3500;
			maxRangeProbab=0.050000001;
		};
	};
