class cfgPatches
{
	class WPEC_CIS_AAT
	{
		name="WPEC_CIS_AAT";
		author="WPEC Dev";
		addonRootClass="WPEC_CIS";
		requiredVersion=2.2;
		requiredAddons[]={};
		units[]=
		{
			"WPEC_CIS_AAT",
			"WPEC_CIS_AAT_CIS_White",
            "WPEC_CIS_AAT_tan",
            "WPEC_CIS_AAT_Green",
            "WPEC_CIS_AAT_CIS",
            "WPEC_CIS_AAT_Red",
            "WPEC_CIS_AAT_Desert",
            "WPEC_CIS_AAT_Winter",
            "WPEC_CIS_AAT_Woodland",
            "WPEC_CIS_AAT_Arid",
            "WPEC_CIS_AAT_Tropical",
            "WPEC_CIS_AAT_Geonosis",
            "WPEC_CIS_AAT_Aqua"
		};
		weapons[]={};
		ammo[]={};
	};
};
class CfgVehicles
{
    class LandVehicle;
	class Tank: LandVehicle
	{
		class NewTurret;
		class Sounds;
		class HitPoints;
		class Eventhandlers;
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
		class Components;
		class EventHandlers;
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

	class 3AS_AAT_base_F: Tank_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewGunner: ViewGunner
				{
				};
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
					};
				};
			};
		};
	};
	class 3AS_CIS_AAT_base_F: 3AS_AAT_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewGunner: ViewGunner
				{
				};
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
					};
				};
			};
		};
	};
	class 3AS_CIS_AAT_F: 3AS_CIS_AAT_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewGunner: ViewGunner
				{
				};
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
					};
				};
			};
		};
	};
	class 3AS_AAT: 3AS_CIS_AAT_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewGunner: ViewGunner
				{
				};
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
					};
				};
			};
		};
	};
    class WPEC_CIS_AAT: 3AS_AAT
	{
		scope=2;
		scopeCurator=2;
		displayName="Medium AAT (Trade Federation) ";
		armor=500;
		armorStructural=7;
		editorSubcategory="WPEC_CIS_armoured";
		vehicleClass="WPEC_CIS_armoured";
		side=0;
		faction="WPEC_CIS";
		editorPreview="\3as\3as_AAT\images\3AS_AAT.jpg";
		crew="WPEC_CIS_B1_Droid_Crew";
        ejectDamageLimit=0.0099999998;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						weapons[]=
						{
							"3AS_AAT_Repeater",
							"SmokeLauncher"
						};
						magazines[]=
						{
							"3AS_500Rnd_ATT_RedPlasma",
							"3AS_500Rnd_ATT_RedPlasma",
							"3AS_500Rnd_ATT_RedPlasma",
							"3AS_500Rnd_ATT_RedPlasma",
							"3AS_500Rnd_ATT_RedPlasma",
							"3AS_500Rnd_ATT_RedPlasma",
							"3AS_500Rnd_ATT_RedPlasma",
							"3AS_500Rnd_ATT_RedPlasma",
							"SmokeLauncherMag"
						};
					};
				};
				weapons[]=
				{
					"WPEC_CIS_AAT_Cannon_Weapon",
					"SmokeLauncher"
				};
				magazines[]=
				{
					"WPEC_CIS_AAT_Cannon_Mag",
					"WPEC_CIS_AAT_Cannon_Mag",
					"WPEC_CIS_AAT_Cannon_Mag",
					"WPEC_CIS_AAT_Cannon_Mag",
					"SmokeLauncherMag"
				};
			};
		};
		class AnimationSources
		{
			class Muzzle_flash
			{
				source="ammorandom";
				weapon="WPEC_CIS_AAT_Cannon_Weapon";
			};
			class recoil_source
			{
				source="reload";
				weapon="WPEC_CIS_AAT_Cannon_Weapon";
			};
			class Muzzle_flash2
			{
				source="ammorandom";
				weapon="3AS_AAT_Repeater";
			};
			class Muzzle_flash3
			{
				source="ammorandom";
				weapon="3AS_AAT_Repeater";
			};
		};
    };
    class WPEC_CIS_AAT_CIS_White: WPEC_CIS_AAT
	{
		displayname="Medium AAT (CIS White)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"3AS\3AS_AAT\data\CIS_White_AAT_CO.paa"
		};
		editorPreview="";
		accuracy=1000;
	};
	class WPEC_CIS_AAT_tan: WPEC_CIS_AAT
	{
		displayname="Medium AAT (Tan)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"3AS\3AS_AAT\data\Tan_AAT_CO.paa"
		};
		editorPreview="\3as\3AS_AAT\images\3AS_AAT_tan.jpg";
		accuracy=1000;
	};
	class WPEC_CIS_AAT_Green:WPEC_CIS_AAT
	{
		displayname="Medium AAT (Green)";
		hiddenSelections[]=
		{
			"camo1"
		};
		editorPreview="\3as\3AS_AAT\images\3AS_AAT_Green.jpg";
		hiddenSelectionsTextures[]=
		{
			"3AS\3AS_AAT\data\Green_AAT_CO.paa"
		};
		accuracy=1000;
	};
	class WPEC_CIS_AAT_CIS:WPEC_CIS_AAT
	{
		displayname="Medium AAT (CIS)";
		hiddenSelections[]=
		{
			"camo1"
		};
		editorPreview="\3as\3AS_AAT\images\3AS_AAT_CIS.jpg";
		hiddenSelectionsTextures[]=
		{
			"3AS\3AS_AAT\data\CIS_AAT_CO.paa"
		};
		accuracy=1000;
	};
	class WPEC_CIS_AAT_Red: WPEC_CIS_AAT
	{
		forceingarage=1;
		displayname="King AAT";
		hiddenSelections[]=
		{
			"camo1"
		};
		editorPreview="\3as\3AS_AAT\images\3AS_AAT_Red.jpg";
		hiddenSelectionsTextures[]=
		{
			"3AS\3AS_AAT\data\Red_AAT_CO.paa"
		};
		accuracy=1000;
		armor=1250;
		animationList[]=
		{
			"HideArmorCIS",
			0,
			"HideArmorRebel",
			1
		};
        class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						body="Obsturret";
						gun="Obsgun";
						proxyIndex=1;
						viewGunnerInExternal=0;
						proxytype="CPCommander";
						gunnername="Commander";
						animationSourceBody="Obsturret";
						animationSourceGun="Obsgun";
						minOutElev=-25;
						maxOutElev=45;
						initOutElev=0;
						minOutTurn=-90;
						maxOutTurn=90;
						initOutTurn=0;
						maxHorizontalRotSpeed=1.8;
						maxVerticalRotSpeed=1.8;
						stabilizedInAxes=3;
						soundServo[]=
						{
							"A3\Sounds_F\vehicles\armor\noises\servo_best",
							"db-40",
							1,
							50
						};
						minElev=-10;
						maxElev=20;
						initElev=0;
						minTurn=-15;
						maxTurn=15;
						initTurn=0;
						gunnerAction="";
						gunnerInAction="mbt2_slot2b_in";
						forceHideGunner=0;
						outGunnerMayFire=1;
						inGunnerMayFire=1;
						gunnerRightHandAnimName="konec hlavne3";
						gunnerLeftHandAnimName="konec hlavne3";
						soundAttenuationTurret="HeliAttenuationGunner";
						isPersonTurret=1;
						personTurretAction="vehicle_turnout_1";
						memoryPointGun[]=
						{
							"z_gunL_muzzle",
							"z_gunR_muzzle"
						};
						weapons[]=
						{
							"3AS_AAT_Repeater",
							"SmokeLauncher"
						};
						magazines[]=
						{
							"3AS_500Rnd_ATT_RedPlasma",
							"3AS_500Rnd_ATT_RedPlasma",
							"3AS_500Rnd_ATT_RedPlasma",
							"3AS_500Rnd_ATT_RedPlasma",
							"3AS_500Rnd_ATT_RedPlasma",
							"3AS_500Rnd_ATT_RedPlasma",
							"3AS_500Rnd_ATT_RedPlasma",
							"3AS_500Rnd_ATT_RedPlasma",
							"3AS_500Rnd_ATT_RedPlasma",
							"3AS_500Rnd_ATT_RedPlasma",
							"SmokeLauncherMag"
						};
						turretInfoType="RscWeaponRangeZeroing";
						discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
						discreteDistanceInitIndex=2;
						memoryPointGunnerOptics="CommanderView";
						memoryPointGunnerOutOptics="commanderview";
						gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Commander_02_F";
						gunnerOutOpticsModel="";
						gunnerOpticsEffect[]={};
						gunnerHasFlares=1;
						turretFollowFreeLook=1;
						commanding=1;
						class ViewOptics: ViewOptics
						{
							initAngleX=0;
							minAngleX=-15;
							maxAngleX=15;
							initAngleY=0;
							minAngleY=-10;
							maxAngleY=60;
							initFov=0.155;
							minFov=0.034000002;
							maxFov=0.155;
							visionMode[]=
							{
								"Normal",
								"NVG",
								"Ti"
							};
							thermalMode[]={2,3,4};
						};
						gunnerGetInAction="GetInHigh";
						gunnerGetOutAction="GetOutHigh";
						startEngine=0;
						LODTurnedOut="VIEW_GUNNER";
						LODTurnedIn="VIEW_GUNNER";
						class HitPoints
						{
							class HitTurret
							{
								armor=200;
								material=-1;
								name="Commander_Turret";
								visual="commander_turret";
								passThrough=0;
								minimalHit=0.029999999;
								explosionShielding=0.60000002;
								radius=0.15000001;
							};
							class HitGun
							{
								armor=200;
								material=-1;
								name="Commander_Gun";
								visual="Commander_Gun";
								passThrough=0;
								minimalHit=0.029999999;
								explosionShielding=0.60000002;
								radius=0.15000001;
							};
						};
						selectionFireAnim="ZaslehCommander";
					};
				};
				startEngine=0;
				memoryPointGun="usti hlavne";
				gunBeg="usti hlavne";
				gunEnd="konec hlavne";
				weapons[]=
				{
					"WPEC_CIS_King_Cannon_Weapon",
					"SmokeLauncher"
				};
				magazines[]=
				{
					"WPEC_CIS_King_Cannon_Mag",
					"WPEC_CIS_King_Cannon_Mag",
					"SmokeLauncherMag"
				};
				turretInfoType="RscWeaponRangeZeroing";
				discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
				selectionFireAnim="zasleh1";
				animationSourceBody="Mainturret";
				animationSourceGun="MainGun";
				body="Mainturret";
				gun="MainGun";
				discreteDistanceInitIndex=5;
				memoryPointGunnerOptics="gunnerview";
				gunnerOutOpticsModel="";
				gunnerOutOpticsEffect[]={};
				gunnerOpticsEffect[]={};
				gunnerForceOptics=1;
				visionMode[]=
				{
					"Normal"
				};
				thermalMode[]={};
				class OpticsIn
				{
					class Wide
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.155;
						minFov=0.155;
						maxFov=0.155;
						visionMode[]=
						{
							"Normal",
							"NVG",
							"Ti"
						};
						thermalMode[]={0,1};
						gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Commander_02_F";
						gunnerOpticsEffect[]={};
					};
					class Narrow: Wide
					{
						gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Commander_02_F";
						initFov=0.046999998;
						minFov=0.046999998;
						maxFov=0.046999998;
					};
				};
				gunnerAction="mbt2_slot2b_in";
				forceHideGunner=1;
				outGunnerMayFire=1;
				gunnerInAction="mbt2_slot2b_in";
				gunnerRightHandAnimName="";
				gunnerLeftHandAnimName="";
				gunnerFireAlsoInInternalCamera=1;
				gunnerOutFireAlsoInInternalCamera=1;
				proxyIndex=1;
				viewGunnerInExternal=0;
				gunnerName="Gunner";
				proxytype="CPGunner";
				isPersonTurret=0;
				personTurretAction="vehicle_turnout_1";
				minOutElev=-10;
				maxOutElev=15;
				initOutElev=0;
				minOutTurn=-90;
				maxOutTurn=90;
				initOutTurn=0;
				soundServo[]=
				{
					"A3\Sounds_F\vehicles\armor\noises\servo_best",
					"db-40",
					1,
					50
				};
				minElev=-9;
				maxElev=20;
				initElev=0;
				inGunnerMayFire=1;
				class HitPoints
				{
					class HitTurret
					{
						armor=0.80000001;
						material=-1;
						name="otocvez";
						visual="vez";
						passThrough=0;
						minimalHit=0.02;
						explosionShielding=1;
						radius=0.15000001;
					};
					class HitGun
					{
						armor=0.75;
						material=-1;
						name="otocvez";
						visual="";
						passThrough=0;
						minimalHit=0;
						explosionShielding=1;
						radius=0.15000001;
					};
				};
			};
		};
	};
	class WPEC_CIS_AAT_Desert:WPEC_CIS_AAT
	{
		displayname="Medium AAT (Desert)";
		hiddenSelections[]=
		{
			"camo1"
		};
		editorPreview="\3as\3AS_AAT\images\3AS_AAT_Desert.jpg";
		hiddenSelectionsTextures[]=
		{
			"3AS\3AS_AAT\data\Desert_AAT_CO.paa"
		};
		accuracy=1000;
	};
	class WPEC_CIS_AAT_Winter:WPEC_CIS_AAT
	{
		displayname="Medium AAT (Winter)";
		hiddenSelections[]=
		{
			"camo1"
		};
		editorPreview="\3as\3AS_AAT\images\3AS_AAT_Winter.jpg";
		hiddenSelectionsTextures[]=
		{
			"3AS\3AS_AAT\data\Winter_AAT_CO.paa"
		};
		accuracy=1000;
	};
	class WPEC_CIS_AAT_Woodland:WPEC_CIS_AAT
	{
		displayname="Medium AAT (Woodland)";
		hiddenSelections[]=
		{
			"camo1"
		};
		editorPreview="\3as\3AS_AAT\images\3AS_AAT_Woodland.jpg";
		hiddenSelectionsTextures[]=
		{
			"3AS\3AS_AAT\data\Woodland_AAT_CO.paa"
		};
		accuracy=1000;
	};
	class WPEC_CIS_AAT_Arid:WPEC_CIS_AAT
	{
		displayname="Medium AAT (Arid)";
		hiddenSelections[]=
		{
			"camo1"
		};
		editorPreview="\3as\3AS_AAT\images\3AS_AAT_Arid.jpg";
		hiddenSelectionsTextures[]=
		{
			"3AS\3AS_AAT\data\Arid_AAT_CO.paa"
		};
		accuracy=1000;
	};
	class WPEC_CIS_AAT_Tropical:WPEC_CIS_AAT
	{
		displayname="Medium AAT (Tropical)";
		hiddenSelections[]=
		{
			"camo1"
		};
		editorPreview="\3as\3AS_AAT\images\3AS_AAT_Tropical.jpg";
		hiddenSelectionsTextures[]=
		{
			"3AS\3AS_AAT\data\Tropical_AAT_CO.paa"
		};
		accuracy=1000;
	};
	class WPEC_CIS_AAT_Geonosis:WPEC_CIS_AAT
	{
		displayname="Medium AAT (Geonosis)";
		hiddenSelections[]=
		{
			"camo1"
		};
		editorPreview="\3as\3AS_AAT\images\3AS_AAT_Geonosis.jpg";
		hiddenSelectionsTextures[]=
		{
			"3AS\3AS_AAT\data\Geonosis_AAT_CO.paa"
		};
		accuracy=1000;
	};
	class WPEC_CIS_AAT_Aqua:WPEC_CIS_AAT
	{
		displayname="Medium AAT (Aqua)";
		hiddenSelections[]=
		{
			"camo1"
		};
		editorPreview="\3as\3AS_AAT\images\3AS_AAT_Aqua.jpg";
		hiddenSelectionsTextures[]=
		{
			"3AS\3AS_AAT\data\Aqua_AAT_CO.paa"
		};
		accuracy=1000;
	};
};
