class CfgPatches
{
	class WPEC_CIS_Vultures
	{
		addonRootClass="WPEC_CIS_Vehicles";
		requiredVersion=2.2;
		units[]=
		{
			"WPEC_CIS_Vulture_Standard",
			"WPEC_CIS_Vulture_CAS",
			"WPEC_CIS_Vulture_Bombs",
			"WPEC_CIS_Vulture_Elite"
		};
		requiredAddons[]={};
		weapons[]=
		{
			"WPEC_CIS_Vulture_Cannon"
		};
		magazines[]={};
		ammo[]={};
	};
};
class CfgEditorSubcategories
{
	class WPEC_CIS_aircraft
	{
		displayName="[CIS] Aircraft";
	};
};
class CfgAmmo
{
	class ls_50mm_laat_he;
	class WPEC_CIS_Vulture_Cannon_Ammo: ls_50mm_laat_he
	{
		model="SWLW_main\Effects\laser_red.p3d";
		soundFly[]=
		{
			"SWLB_core\data\sounds\vehicles\mortar\weapon\mortar_fly.wss",
			0,
			1,
			1
		};
		flaresize=4;
		caliber=3;
		maxLeadSpeed=2000;
		aiAmmoUsageFlags="256";
		allowAgainstInfantry=0;
		tracersEvery=1;
		cost=30;
		hit=140;
		explosionEffects="ATRocketExplosion";
		indirectHit=14;
		mass=2;
		indirectHitRange=0.1;
		tracerscale=2;
	};
};
class CfgMagazines
{
	class 1000Rnd_25mm_shells;
	class WPEC_CIS_Vulture_Magazine: 1000Rnd_25mm_shells
	{
		displayName="Vulture Main Cannon Mag";
		initSpeed=800;
		displayNameShort="Main Cannon";
		ammo="WPEC_CIS_Vulture_Cannon_Ammo";
		tracersEvery=1;
		count=1000;
	};
};
class LowROF;
class player;
class manual;
class CfgWeapons
{
	class Cannon_30mm_Plane_CAS_02_F;
	class WPEC_CIS_Vulture_Cannon: Cannon_30mm_Plane_CAS_02_F
	{
		magazineWell[]={};
		magazines[]=
		{
			"WPEC_CIS_Vulture_Magazine"
		};
		modes[]=
		{
			"manual",
			"close",
			"short",
			"medium"
		};
		ballisticsComputer=1;
		displayName="Vulture Cannon";
		class manual: LowROF
		{
			displayname="Full";
			burst=1;
			magazineReloadTime=3;
			autoReload=1;
			reloadTime=0.1;
			dispersion=0.0020000001;
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"A3\Sounds_F\weapons\30mm\30mm_st_02",
					1.99526,
					1,
					1500
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
		};
		class close: manual
		{
			aiDispersionCoefX=2;
			aiDispersionCoefY=2;
			burst=50;
			aiRateOfFire=0.1;
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
			aiDispersionCoefX=2;
			aiDispersionCoefY=2;
			burst=30;
			aiRateOfFire=0.1;
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
			aiDispersionCoefX=2;
			aiDispersionCoefY=2;
			burst=30;
			aiRateOfFire=0.1;
			aiRateOfFireDistance=600;
			minRange=200;
			minRangeProbab=0.050000001;
			midRange=300;
			midRangeProbab=0.69999999;
			maxRange=2000;
			maxRangeProbab=0.1;
		};
	};
};
class SensorTemplatePassiveRadar;
class SensorTemplateAntiRadiation;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class SensorTemplateDataLink;
class DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class VehicleSystemsTemplateLeftPilot: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightPilot: DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class CfgVehicles
{
	class Air;
	class Plane: Air
	{
		class HitPoints;
	};
	class Plane_Base_F: Plane
	{
		class AnimationSources;
		class HitPoints: HitPoints
		{
			class HitHull;
		};
		class Components;
		class ViewPilot;
	};
	class 3AS_Vulture_Base_F: Plane_Base_F
	{
		class AnimationSources;
		class HitPoints: HitPoints
		{
			class HitHull;
		};
		class Components: Components
		{
			class pylons1;
			class pylons2;
			class pylons3;
			class pylons4;
			class pylons5;
			class pylons6;
		};
		class ViewPilot;
	};
	class WPEC_CIS_Vulture_Standard: 3AS_Vulture_Base_F
	{
		displayName="Vulture Standard ";
		author="WPEC Dev";
		scope=2;
		scopeCurator=2;
		forceInGarage=1;
		armor=65;
		faction="WPEC_CIS";
		crew="WPEC_CIS_B1_Droid_Crew";
		editorSubcategory="WPEC_CIS_aircraft";
		vehicleClass="WPEC_CIS_aircraft";
		editorPreview="\3as\3as_vulture\3as_Vulture_dynamicLoadout.jpg";
		weapons[]=
		{
			"WPEC_CIS_Vulture_cannon_Weapon",
			"CMFlareLauncher"
		};
		magazines[]=
		{
			"WPEC_CIS_Vulture_30mm_Mag_x1000",
			"WPEC_CIS_Vulture_30mm_Mag_x1000",
			"120Rnd_CMFlare_Chaff_Magazine",
			"120Rnd_CMFlare_Chaff_Magazine",
			"120Rnd_CMFlare_Chaff_Magazine",
			"120Rnd_CMFlare_Chaff_Magazine"
		};
		class EjectionSystem
		{
			EjectionSeatEnabled=0;
		};
			 VTOLPitchInfluence = 10;
			 VTOLRollInfluence = 10;
			 VTOLYawInfluence = 12;
			 htMin = 60;
			 htMax = 1800;
			 afMax = 200;
			 mfMax = 100;
			 mFact = 0;
			 tBody = 0;
			 radartype = 4;
			 lockdetectionsystem = "2 + 8 + 4";
			 incommingmissliedetectionsystem = 16;
			 maxSpeed = 1400;
			 landingAoa = 6 * 3.1415 / 180; // landing angle of attack in radians, for AI
			 landingSpeed = 215;			   // for AI to approach the runawy, the plane should be stable at this speed
			 stallSpeed = 190;
			 stallWarningTreshold = 0.1;
			 armorStructured = 1;
			 envelope[] = {0,0.01,0.2,4,6,7.6,8.4,9.2,9.4,9.6,9.7,9.8,8,1};
			 draconicForceXCoef = 4.5;
			 draconicForceYCoef = 3;
			 draconicForceZCoef = 6;
			 draconicTorqueXCoef = 2.0999999;
			 draconicTorqueYCoef = -0.3;
			 angleOfIndicence = 0;
			 airFriction0[] = {100, 50, 12};
			 airFriction1[] = {100, 50, 12};
			 airFriction2[] = {100, 50, 12};
			 altNoForce = 20000;
			 altFullForce = 20000;
			 //air physics
			 elevatorCoef[] = {1};
			 elevatorSensitivity = 1;
			 elevatorControlsSensitivityCoef = 4;
			 aileronCoef[] = {2};
			 aileronSensitivity = 1;
			 aileronControlsSensitivityCoef = 5;
			 rudderCoef[] = {3.5};
			 rudderInfluence = 0.9;
			 rudderControlsSensitivityCoef = 6;
			 thrustCoef[] = {2,2.17,2.15,3.14,3.13,3.12,3.1,3.07,2.99,2.2,2,2};
			 irScanRangeMin = 10;
			 irScanRangeMax = 10000;
			 irScanToEyeFactor = 8;
			 fuelCapacity = 2000;
			 wheelSteeringSensitivity = 1.5;
			 maxOmega = 2000;
			 airBrake = 1;
			 airBrakeFrictionCoef = 50;
			 flaps = 0;
			 flapsFrictionCoef = 0.32;
			 gearsUpFrictionCoef = 0.6;
			 airFrictionCoefs0[] = {0.0, 0.0, 0.0};
			 airFrictionCoefs1[] = {0.1, 0.5, 0.0066};
			 airFrictionCoefs2[] = {0.001, 0.005, 0.000068};
	};
	class WPEC_CIS_Vulture_CAS: WPEC_CIS_Vulture_Standard
	{
		displayName="Vulture CAS ";
		author="WPEC Dev";
		scope=2;
		scopeCurator=2;
		forceInGarage=1;
		armor=65;
		faction="WPEC_CIS";
		crew="WPEC_CIS_B1_Droid_Crew";
		editorSubcategory="WPEC_CIS_aircraft";
		vehicleClass="WPEC_CIS_aircraft";
		Amor=600;
		class EjectionSystem
		{
			EjectionSeatEnabled=0;
		};
		weapons[]=
		{
			"WPEC_CIS_Vulture_cannon_Weapon",
			"CMFlareLauncher"
		};
		magazines[]=
		{
			"WPEC_CIS_Vulture_30mm_Mag_x1000",
			"WPEC_CIS_Vulture_30mm_Mag_x1000",
			"120Rnd_CMFlare_Chaff_Magazine",
			"120Rnd_CMFlare_Chaff_Magazine",
			"120Rnd_CMFlare_Chaff_Magazine",
			"120Rnd_CMFlare_Chaff_Magazine"
		};
		class Components: Components
		{
			class TransportPylonsComponent
			{
				class pylons
				{
					class pylons1: pylons1
					{
						attachment="3AS_PylonRack_Vulture_12Rnd_Rocket_HEAP";
					};
					class pylons2: pylons2
					{
						attachment="3AS_PylonRack_Vulture_12Rnd_Rocket_HEAP";
					};
					class pylons3: pylons3
					{
						attachment="3AS_PylonRack_Vulture_12Rnd_Rocket_HEAP";
					};
					class pylons4: pylons4
					{
						attachment="3AS_PylonRack_Vulture_12Rnd_Rocket_HEAP";
					};
				};
			};
			class Presets
			{
				class Empty
				{
					displayName="Empty";
					attachment[]={};
				};
				class Default
				{
					displayName="Default";
					attachment[]=
					{
						"3as_PylonRack_Vulture_7Rnd_Missle_AGM",
						"3as_PylonRack_Vulture_7Rnd_Missle_AGM",
						"3as_PylonWeapon_40Rnd_Vulture_Heavy_shells"
					};
				};
			};
		};
	};
	class WPEC_CIS_Vulture_Elite: WPEC_CIS_Vulture_Standard
	{
		displayName="Vulture Elite ";
		author="WPEC Dev";
		scope=2;
		scopeCurator=2;
		forceInGarage=1;
		faction="WPEC_CIS";
		armor=65;
		crew="WPEC_CIS_B1_Droid_Crew";
		editorSubcategory="WPEC_CIS_aircraft";
		vehicleClass="WPEC_CIS_aircraft";
		editorPreview="\3as\3as_vulture\3as_Vulture_dynamicLoadout.jpg";
		driverCanEject=0;
		class EjectionSystem
		{
			EjectionSeatEnabled=0;
		};
		weapons[]=
		{
			"WPEC_CIS_Vulture_cannon_Weapon",
			"CMFlareLauncher"
		};
		magazines[]=
		{
			"WPEC_CIS_Vulture_30mm_Mag_x1000",
			"WPEC_CIS_Vulture_30mm_Mag_x1000",
			"120Rnd_CMFlare_Chaff_Magazine",
			"120Rnd_CMFlare_Chaff_Magazine",
			"120Rnd_CMFlare_Chaff_Magazine",
			"120Rnd_CMFlare_Chaff_Magazine"
		};
		class Components: Components
		{
			class TransportPylonsComponent
			{
				uiPicture="a3\air_f_gamma\plane_fighter_03\data\ui\plane_a143_3den_ca.paa";
				class pylons
				{
					class pylons1: pylons1
					{
						attachment="3AS_PylonRack_Vulture_1Rnd_Missile_AA";
					};
					class pylons2: pylons2
					{
						attachment="3AS_PylonRack_Vulture_1Rnd_Missile_AA";
					};
					class pylons3: pylons3
					{
						attachment="3AS_PylonRack_Vulture_1Rnd_Missile_AA";
					};
					class pylons4: pylons4
					{
						attachment="3AS_PylonRack_Vulture_1Rnd_Missile_AA";
					};
					class pylons5: pylons5
					{
						attachment="3AS_PylonRack_Vulture_1Rnd_Missile_AA";
					};
					class pylons6: pylons6
					{
						attachment="3AS_PylonRack_Vulture_1Rnd_Missile_AA";
					};
				};
				class Presets
				{
					class Empty
					{
						displayName="Empty";
						attachment[]={};
					};
					class Default
					{
						displayName="Default";
						attachment[]=
						{
							"3AS_PylonRack_Vulture_1Rnd_Missile_AA",
							"3AS_PylonRack_Vulture_1Rnd_Missile_AA",
							"3AS_PylonRack_Vulture_1Rnd_Missile_AA",
							"3AS_PylonRack_Vulture_1Rnd_Missile_AA",
							"3AS_PylonRack_Vulture_1Rnd_Missile_AA",
							"3AS_PylonRack_Vulture_1Rnd_Missile_AA",
							"3AS_PylonRack_Vulture_1Rnd_Missile_AA",
							"3AS_PylonRack_Vulture_1Rnd_Missile_AA"
						};
					};
				};
			};
		};
	};
	class WPEC_CIS_Vulture_Bombs: WPEC_CIS_Vulture_Standard
	{
		displayName="Vulture Bombs ";
		author="WPEC Dev";
		scope=2;
		scopeCurator=2;
		forceInGarage=1;
		faction="WPEC_CIS";
		armor=65;
		crew="WPEC_CIS_B1_Droid_Crew";
		editorSubcategory="WPEC_CIS_aircraft";
		vehicleClass="WPEC_CIS_aircraft";
		editorPreview="\3as\3as_vulture\3as_Vulture_dynamicLoadout.jpg";
		driverCanEject=0;
		hiddenselections[]=
		{
			"camo"
		};
		hiddenselectionstextures[] = {"3as\3as_vulture\data\VultureDroid_CO.paa"};
		class EjectionSystem
		{
			EjectionSeatEnabled=0;
		};
		weapons[]=
		{
			"WPEC_CIS_Vulture_cannon_Weapon",
			"3AS_HMP_Cluster",
			"CMFlareLauncher"
		};
		magazines[]=
		{
			"WPEC_CIS_Vulture_30mm_Mag_x1000",
			"WPEC_CIS_Vulture_30mm_Mag_x1000",
			"3AS_PylonHMP_Cluster",
			"3AS_PylonHMP_Cluster",
			"3AS_PylonHMP_Cluster",
			"3AS_PylonHMP_Cluster",
			"120Rnd_CMFlare_Chaff_Magazine",
			"120Rnd_CMFlare_Chaff_Magazine",
			"120Rnd_CMFlare_Chaff_Magazine",
			"120Rnd_CMFlare_Chaff_Magazine"
		};
		class Components: Components
		{
			class TransportPylonsComponent
			{
				uiPicture="a3\air_f_gamma\plane_fighter_03\data\ui\plane_a143_3den_ca.paa";
				class pylons
				{
					class pylons1: pylons1
					{
						attachment="";
					};
					class pylons2: pylons2
					{
						attachment="";
					};
					class pylons3: pylons3
					{
						attachment="";
					};
					class pylons4: pylons4
					{
						attachment="";
					};
					class pylons5: pylons5
					{
						attachment="";
					};
					class pylons6: pylons6
					{
						attachment="";
					};
				};
				class Presets
				{
					class Empty
					{
						displayName="Empty";
						attachment[]={};
					};
					class Default
					{
						displayName="Default";
						attachment[]=
						{
						};
					};
				};
			};
		};
	};
};
class cfgMods
{
	author="ChaosViking";
	timepacked="1677279925";
};
