
	class WPEC_3AS_Z6: 3AS_Z6_F
	{
		JLTS_hasEMPProtection=1;
		scope=2;
		scopeArsenal = 2;
		displayName="[104th] Z-6";
		canShootInWater=1;
		model="\MRC\JLTS\weapons\Z6\Z6.p3d";
		baseWeapon="WPEC_3AS_Z6";
		magazines[]=
		{
			"WPEC_3AS_Z6_Mag"
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\weapons\Z6\data\Z6_1_co.paa",
			"\MRC\JLTS\weapons\Z6\data\Z6_2_co.paa"
		};
		maxZeroing=1200;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\MRC\JLTS\weapons\Z6\anims\Z6_handanim.rtm"
		};
		class manual: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[]=
				{
					"\Z\wpec\addons\weapons\weapons\primaries\data\z6_Sound.ogg",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			reloadTime=0.075000003;
			dispersion=0.00091800001;
			soundContinuous=0;
			soundBurst=0;
			minRange=0;
			minRangeProbab=0.30000001;
			midRange=5;
			midRangeProbab=0.69999999;
			maxRange=10;
			maxRangeProbab=0.039999999;
			showToPlayer=1;
		};
		class overcharge_burst: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[]=
				{
					"\Z\wpec\addons\weapons\weapons\primaries\data\z6_Sound.ogg",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			dispersion = 0.01;
            displayName = "Overcharge";
            reloadTime = 0.02;
            burst = 25;
            textureType = "fastAuto";
		};
		class close: manual
		{
			burst=10;
			aiRateOfFire=0.5;
			aiRateOfFireDistance=50;
			minRange=10;
			minRangeProbab=0.050000001;
			midRange=20;
			midRangeProbab=0.69999999;
			maxRange=50;
			maxRangeProbab=0.039999999;
			showToPlayer=0;
		};
		class short: close
		{
			burst=8;
			aiRateOfFire=2;
			aiRateOfFireDistance=300;
			minRange=50;
			minRangeProbab=0.050000001;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=300;
			maxRangeProbab=0.039999999;
		};
		class medium: close
		{
			burst=7;
			aiRateOfFire=4;
			aiRateOfFireDistance=600;
			minRange=200;
			minRangeProbab=0.050000001;
			midRange=300;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.1;
		};
		class far_optic1: medium
		{
			requiredOpticType=1;
			showToPlayer=0;
			burst=3;
			aiRateOfFire=10;
			aiRateOfFireDistance=1000;
			minRange=300;
			minRangeProbab=0.050000001;
			midRange=500;
			midRangeProbab=0.40000001;
			maxRange=650;
			maxRangeProbab=0.0099999998;
		};
		class far_optic2: far_optic1
		{
			burst=3;
			requiredOpticType=2;
			minRange=400;
			minRangeProbab=0.050000001;
			midRange=750;
			midRangeProbab=0.69999999;
			maxRange=900;
			maxRangeProbab=0.0099999998;
			aiRateOfFire=10;
			aiRateOfFireDistance=900;
		};
		modes[]=
		{
			"manual",
			"close",
			"short",
			"medium",
			"far_optic1",
			"far_optic2",
			"overcharge_burst"
		};
		aiDispersionCoefY=24;
		aiDispersionCoefX=21;
		class HitEffects
		{
			Hit_Foliage_green="";
			Hit_Foliage_Dead="";
			Hit_Foliage_Green_big="";
			Hit_Foliage_Palm="";
			Hit_Foliage_Pine="";
			hitFoliage="";
			hitGlass="";
			hitGlassArmored="";
			hitWood="";
			hitHay="";
			hitMetal="";
			hitMetalPlate="";
			hitBuilding="";
			hitPlastic="";
			hitRubber="";
			hitConcrete="";
			hitMan="ImpactEffectsBlood";
			hitGroundSoft="";
			hitGroundRed="";
			hitGroundHard="";
			hitWater="";
			hitVirtual="";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass = 200;
            class CowsSlot: CowsSlot
            {
                displayName = "Optics Slot";
                iconPicture = "";
                iconPinpoint = "Bottom";
                iconPosition[] = {0.5,0.35};
                iconScale = 0.2;
                linkProxy = "\a3\data_f\proxies\weapon_slots\TOP";
                scope = 0;
                compatibleItems[] = 
                {
					"WPEC_Holosight_2xblu"
                };
            };
        };
		class GunParticles
		{
			class FirstEffect
			{
				directionName="Konec hlavne";
				effectName="RifleAssaultCloud";
				positionName="Usti hlavne";
			};
		};
	};
	class WPEC_3AS_Z6_Stance: WPEC_3AS_Z6
	{
		displayName="[104th] Z-6 Rotary Cannon (Stanced)";
		baseWeapon="WPEC_3AS_Z6_Stance";
	};
