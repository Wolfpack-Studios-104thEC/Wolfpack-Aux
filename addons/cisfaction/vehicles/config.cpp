class cfgPatches
{
	class WPEC_CIS_Vehicles
	{
		name="WPEC_CIS_CIS_Vehicles";
		author="WPEC Dev";
		addonRootClass="WPEC_CIS";
		requiredAddons[]={};
		requiredVersion=2.2;
		units[]=
		{
			"WPEC_CIS_GAT",
			"WPEC_CIS_GAT_Light",
			"WPEC_CIS_Snail",
			"WPEC_CIS_Squad_Transport",
			"WPEC_CIS_Transport_Truck",
			"WPEC_CIS_Droideka",
			"WPEC_CIS_Droideka_Static",
			"Droideka_Shield",
			"WPEC_CIS_Sniper_Deka",
			"WPEC_CIS_Spider_Droid",
			"WPEC_CIS_HMP_Transport",
			"WPEC_CIS_HMP_Gunship",
			"WPEC_CIS_Particle_Cannon"
		};
		weapons[]={};
		ammo[]={};
	};
};
class CfgEditorSubcategories
{
	class WPEC_CIS_armoured
	{
		displayName="[CIS] Armoured";
	};
	class WPEC_CIS_Turrets
	{
		displayName="[CIS] Turrets";
	};
	class WPEC_CIS_helicopter
	{
		displayName="[CIS] Helicopter";
	};
};
class CfgFunctions
{
	class WPEC_AUX
	{
		class Droideka_Shield
		{
			file="z\wpec\cisfaction\Vehicles\Functions";
			class initdroideka_move
			{
			};
			class initdrodeka_shield
			{
			};
			class initDroideka
			{
			};
		};
	};
};
class DefaultEventhandlers;
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
	class 3AS_GAT;
	class 3AS_GAT_Olive;
	class 3AS_GAT_Light;
	class 3AS_GAT_Light_Olive;
	class Helicopter
	{
	};
	class Helicopter_Base_F: Helicopter
	{
		class Turrets;
		class HitPoints;
	};
	class Heli_Attack_01_base_F: Helicopter_Base_F
	{
		class Turrets: Turrets
		{
			class CopilotTurret;
			class MainTurret;
		};
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitFuel;
			class HitEngine;
			class HitAvionics;
			class HitVRotor;
			class HitHRotor;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
		};
		class AnimationSources;
		class ViewPilot;
		class ViewOptics;
		class components;
		class RotorLibHelicopterProperties;
	};
	class B_Heli_Attack_01_base_F: Heli_Attack_01_base_F
	{
	};
	class 3AS_HMP_Base: Heli_Attack_01_base_F
	{
		class Turrets: Turrets
		{
			class CopilotTurret;
			class MainTurret;
		};
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitFuel;
			class HitEngine;
			class HitAvionics;
			class HitVRotor;
			class HitHRotor;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
		};
		class AnimationSources;
		class ViewPilot;
		class ViewOptics;
		class components;
		class RotorLibHelicopterProperties;
	};
	class 3AS_HMP_Transport: 3AS_HMP_Base
	{
		class Turrets: Turrets
		{
			class CopilotTurret;
			class MainTurret;
		};
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitFuel;
			class HitEngine;
			class HitAvionics;
			class HitVRotor;
			class HitHRotor;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
		};
		class AnimationSources;
		class ViewPilot;
		class ViewOptics;
		class components;
		class RotorLibHelicopterProperties;
	};
	class 3AS_HMP_Gunship: 3AS_HMP_Base
	{
		class Turrets: Turrets
		{
			class CopilotTurret;
			class MainTurret;
		};
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitFuel;
			class HitEngine;
			class HitAvionics;
			class HitVRotor;
			class HitHRotor;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
		};
		class AnimationSources;
		class ViewPilot;
		class ViewOptics;
		class components;
		class RotorLibHelicopterProperties;
	};
	class 442_hmp;
	class 442_hmp_transport;
	class WPEC_CIS_HMP_Gunship: 3AS_HMP_Gunship
	{
		scope=2;
		scopeCurator=2;
		forceInGarage=1;
		displayName="HMP Gunship";
		altFullForce=6000;
		altNoForce=9000;
		armor=600;
		crew="WPEC_CIS_B1_Droid_Crew";
		faction="WPEC_CIS";
		editorSubcategory="WPEC_CIS_helicopter";
		vehicleClass="WPEC_CIS_helicopter";
		airBrakeFrictionCoef=80.400002;
		class EventHandlers
		{
		};
		class UserActions
		{
			class ThrusterEngage
			{
				condition="(!(this getvariable [""impulsorStatus"",false]) AND (player == driver this) AND (alive this) AND (speed this >50) )";
				displayName="<t color='#4C9900'>[Impulsor On]</t>";
				displayNameDefault="<t color='#4C9900'>[Impulsor On]</t>";
				onlyForPlayer=0;
				position="pilotview";
				priority=1e+008;
				radius=6;
				statement="this execVM ""\SW_Droides_2\DroidGunship\initTE.sqf""";
				textToolTip="<t color='#4C9900'>[Impulsor On]</t>";
				userActionID=64;
			};
			class ThrusterDisngage: ThrusterEngage
			{
				condition="((this getvariable [""impulsorStatus"",false]) AND (player == driver this) AND (alive this))";
				displayName="<t color='#FF9933'>[RepulsorBrake On]</t>";
				displayNameDefault="<t color='#FF9933'>[RepulsorBrake On]</t>";
				onlyForPlayer=0;
				position="pilotview";
				priority=1e+008;
				radius=6;
				statement="this execVM ""\SW_Droides_2\DroidGunship\initTD.sqf""";
				textToolTip="<t color='#FF9933'>[RepulsorBrake On]</t>";
				userActionID=65;
			};
		};
	};
	class WPEC_CIS_HMP_Transport: 3AS_HMP_Transport
	{
		displayName="HMP Transport";
		forceInGarage=1;
		maxSpeed=220;
		armor=600;
		armorStructural=2;
		armorLights=1;
		liftForceCoef=1;
		bodyFrictionCoef=0.67769998;
		scope=2;
		scopeCurator=2;
		crew="WPEC_CIS_B1_Droid_Crew";
		faction="WPEC_CIS";
		transportSoldier=22;
		editorSubcategory="WPEC_CIS_helicopter";
		vehicleClass="WPEC_CIS_helicopter";
		airBrakeFrictionCoef=80.400002;
		class EventHandlers
		{
		};
		class UserActions
		{
			class ThrusterEngage
			{
				condition="(!(this getvariable [""impulsorStatus"",false]) AND (player == driver this) AND (alive this) AND (speed this >50) )";
				displayName="<t color='#4C9900'>[Impulsor On]</t>";
				displayNameDefault="<t color='#4C9900'>[Impulsor On]</t>";
				onlyForPlayer=0;
				position="pilotview";
				priority=1e+008;
				radius=6;
				statement="this execVM ""\SW_Droides_2\DroidGunship\initTE.sqf""";
				textToolTip="<t color='#4C9900'>[Impulsor On]</t>";
				userActionID=64;
			};
			class ThrusterDisngage: ThrusterEngage
			{
				condition="((this getvariable [""impulsorStatus"",false]) AND (player == driver this) AND (alive this))";
				displayName="<t color='#FF9933'>[RepulsorBrake On]</t>";
				displayNameDefault="<t color='#FF9933'>[RepulsorBrake On]</t>";
				onlyForPlayer=0;
				position="pilotview";
				priority=1e+008;
				radius=6;
				statement="this execVM ""\SW_Droides_2\DroidGunship\initTD.sqf""";
				textToolTip="<t color='#FF9933'>[RepulsorBrake On]</t>";
				userActionID=65;
			};
		};
		cargoAction[]=
		{
			"MTT_Cargo",
			"MTT_Cargo",
			"MTT_Cargo",
			"MTT_Cargo",
			"MTT_Cargo",
			"MTT_Cargo",
			"MTT_Cargo",
			"MTT_Cargo",
			"MTT_Cargo",
			"MTT_Cargo"
		};
		cargoGetInAction[]=
		{
			"GetInLow"
		};
		cargoGetOutAction[]=
		{
			"GetOutLow"
		};
		cargoProxyIndexes[]={1,2,3,4,5,6,7,8,9,10,11,12};
		class AnimationSources: AnimationSources
		{
			class RocketPods
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class DropRack
			{
				source="user";
				animPeriod=1;
				initPhase=1;
			};
		};
		class textureSources
		{
		};
	};
	class 3AS_N99_base_F;
	class WPEC_CIS_Snail: 3AS_N99_base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="N99 Snail Tank";
		editorSubcategory="WPEC_CIS_armoured";
		vehicleClass="WPEC_CIS_armoured";
		side=0;
		faction="WPEC_CIS";
		crew="WPEC_CIS_B1_Droid_Crew";
	};
	class Land;
	class LandVehicle: Land
	{
		class NewTurret;
	};
	class Tank: LandVehicle
	{
		class NewTurret;
		class Sounds;
		class HitPoints;
	};
	class Tank_F: Tank
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewGunner;
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
		class AnimationSources;
		class ViewPilot;
		class ViewOptics;
		class ViewCargo;
		class HeadLimits;
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitFuel;
			class HitEngine;
			class HitLTrack;
			class HitRTrack;
		};
		class Sounds: Sounds
		{
			class Engine;
			class Movement;
		};
	};

	class WPEC_CIS_GAT: 3AS_GAT
	{
		scope=2;
		scopeCurator=2;
		displayName="GAT";
		editorSubcategory="WPEC_CIS_armoured";
		vehicleClass="WPEC_CIS_armoured";
		side=0;
		faction="WPEC_CIS";
		editorPreview="3as\3as_gat\images\3AS_GAT.jpg";
		crew="WPEC_CIS_B1_Droid_Crew";
	};
	class WPEC_CIS_GAT_Light: 3AS_GAT_Light
	{
		scope=2;
		scopeCurator=2;
		displayName="GAT Light";
		editorSubcategory="WPEC_CIS_armoured";
		vehicleClass="WPEC_CIS_armoured";
		side=0;
		faction="WPEC_CIS";
		editorPreview="3as\3as_gat\images\3AS_GAT_light.jpg";
		crew="WPEC_CIS_B1_Droid_Crew";
	};
	class 442_argon_transport_cis;
	class WPEC_CIS_Transport_Truck: 442_argon_transport_cis
	{
		scope=2;
		scopeCurator=2;
		displayName="Argon Transport Truck";
		editorSubcategory="WPEC_CIS_armoured";
		vehicleClass="WPEC_CIS_armoured";
		side=0;
		faction="WPEC_CIS";
		crew="WPEC_CIS_B1_Droid_Crew";
	};
	class 3as_ParticleCannon;
	class WPEC_CIS_Particle_Cannon: 3as_ParticleCannon
	{
		scope=2;
		scopeCurator=2;
		displayName="Particle Cannon";
		editorSubcategory="WPEC_CIS_Turrets";
		vehicleClass="WPEC_CIS_Turrets";
		side=0;
		faction="WPEC_CIS";
		crew="WPEC_CIS_B1_Droid_Crew";
	};
	class Full_Shield;
	class Droideka_Shield: Full_Shield
	{
		displayName="Droideka Shield";
		scope=1;
		scopecurator=1;
		armor=600;
		armorStructural=1;
		class EventHandlers
		{
			init="[_this] spawn WPEC_AUX_fnc_initdrodeka_shield;";
		};
	};
	class StaticWeapon: LandVehicle
	{
		class Turrets;
		class MainTurret: NewTurret
		{
		};
		class HitPoints;
	};
	class StaticMGWeapon: StaticWeapon
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics;
			};
		};
		class Components;
	};
	class k_CIS_Droideka: StaticMGWeapon
	{
		class EventHandlers;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
			};
		};
		class Components;
		icon="iconStaticMG";
	};
	class WPEC_CIS_Droideka: k_CIS_Droideka
	{
		scope=2;
		scopeCurator=2;
		class EventHandlers
		{
			init="[_this] spawn WPEC_AUX_fnc_initdroideka_move;";
		};
		displayName="Droideka Moveable";
		editorSubcategory="WPEC_CIS_Turrets";
		vehicleClass="WPEC_CIS_Turrets";
		side=0;
		faction="WPEC_CIS";
		armorStructural=1;
		explosionShielding=0.1;
		minTotalDamageThreshold=0.0099999998;
		impactDamageMultiplier=0.1;
		ace_dragging_canCarry=0;
		ace_dragging_canDrag=0;
		armor=225;
	};
	class WPEC_CIS_Droideka_Static: k_CIS_Droideka
	{
		scope=2;
		scopeCurator=2;
		class EventHandlers
		{
			init="[_this] spawn WPEC_AUX_fnc_initdroideka;";
		};
		displayName="Droideka Static";
		editorSubcategory="WPEC_CIS_Turrets";
		vehicleClass="WPEC_CIS_Turrets";
		side=0;
		faction="WPEC_CIS";
		armorStructural=1;
		explosionShielding=0.1;
		minTotalDamageThreshold=0.0099999998;
		impactDamageMultiplier=0.1;
		ace_dragging_canCarry=0;
		ace_dragging_canDrag=0;
		armor=225;
	};
	class 3AS_Advanced_DSD;
	class WPEC_CIS_Spider_Droid: 3AS_Advanced_DSD
	{
		scope=2;
		scopeCurator=2;
		displayName="Dwarf Spider Droid ";
		editorSubcategory="WPEC_CIS_Turrets";
		vehicleClass="WPEC_CIS_Turrets";
		crew="WPEC_CIS_B1_Droid_Crew";
		side=0;
		armor=300;
		faction="WPEC_CIS";
		
	};
	class 3as_SAC_Trade;
	class WPEC_CIS_Squad_Transport: 3as_SAC_Trade
	{
		scope=2;
		scopeCurator=2;
		displayName="Droid Assault Craft";
		editorSubcategory="WPEC_CIS_armoured";
		vehicleClass="WPEC_CIS_armoured";
		side=0;
		faction="WPEC_CIS";
		crew="WPEC_CIS_B1_Droid_Crew";
	};
};
class cfgMods
{
	author="ChaosViking";
	timepacked="1677279925";
};
