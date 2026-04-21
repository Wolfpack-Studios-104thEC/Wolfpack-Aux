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
		armor=75;
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
	};
	class WPEC_CIS_Vulture_CAS: 3AS_Vulture_Base_F
	{
		displayName="Vulture CAS ";
		author="WPEC Dev";
		scope=2;
		scopeCurator=2;
		forceInGarage=1;
		armor=75;
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
	class WPEC_CIS_Vulture_Elite: 3AS_Vulture_Base_F
	{
		displayName="Vulture Elite ";
		author="WPEC Dev";
		scope=2;
		scopeCurator=2;
		forceInGarage=1;
		faction="WPEC_CIS";
		armor=100;
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
};
class cfgMods
{
	author="ChaosViking";
	timepacked="1677279925";
};
