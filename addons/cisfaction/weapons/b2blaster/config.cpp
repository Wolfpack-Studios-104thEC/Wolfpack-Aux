class CfgPatches
{
	class WPEC_CIS_B2_Wrist_Blaster
	{
		author="WPEC Dev";
		requiredAddons[]=
		{
			"A3_Data_F",
			"A3_Weapons_F"
		};
		requiredVersion=2.2;
		units[]={};
		weapons[]=
		{
			"WPEC_CIS_B2_Wrist_Blaster"
		};
		ammo[]={};
		magazines[]={};
	};
};
class CfgAmmo
{
	class 3AS_R_DWRockets_AT;
	class WPEC_CIS_B2_Rockets: 3AS_R_DWRockets_AT
	{
		hit=50;
		model="\A3\weapons_f\launchers\RPG32\pg32v_rocket.p3d";
		typicalSpeed=185;
		dangerRadiusHit=25;
		suppressionRadiusHit=24;
		indirecthit=25;
		audibleFire=30;
		caliber=1;
	};
};
class CfgMagazines
{
	class 3AS_DWRockets_AT;
	class WPEC_CIS_B2_R_Mag: 3AS_DWRockets_AT
	{
		author="WPEC Dev";
		scope=2;
		displayName="B2 Wrist Rockets";
		initSpeed=140;
		descriptionShort="Wrist Rockets";
		displaynameshort="Wrist Rockets";
		ammo="WPEC_CIS_B2_Rockets";
		count=2;
		type=2*  256;
		mass=60;
	};
	class 3AS_500Rnd_EM30_mag;
	class WPEC_CIS_B2_Blaster_Mag: 3AS_500Rnd_EM30_mag
	{
		author="WPEC Dev";
		scope=2;
		displayName="B2 Wrist Blaster";
		initSpeed=361;
		descriptionShort="Wrist Blaster";
		displaynameshort="Wrist Blaster";
		ammo="WPEC_CIS_Ammo_B2";
		count=300;
		mass=52.5;
		tracersEvery=1;
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class UGL_F;
class WeaponSlotsInfo;
class CfgWeapons
{
	class 3AS_DWBlaster_Base_F;
	class WPEC_CIS_B2_Wrist_Blaster: 3AS_DWBlaster_Base_F
	{
		scope=2;
		displayName="[CIS] Dual Wrist Blaster";
		model="3AS\3AS_Weapons\DWBlaster\3AS_DWBlaster_F.p3d";
		picture="\3AS\3AS_Weapons\DC15A\Data\Textures\DC15A_Arsenal.paa";
		weaponInfoType="RscWeaponZeroing";
		modelOptics="3AS\3AS_Weapons\Data\3AS_2D_Optic.p3d";
		magazines[]=
		{
			"WPEC_CIS_B2_Blaster_Mag"
		};
		muzzles[]=
		{
			"this",
			"WPEC_CIS_B2_Rocket_F"
		};
		class OpticsModes
		{
			class Ironsights
			{
				opticsID=1;
				useModelOptics=0;
				opticsFlare="true";
				opticsPPEffects[]=
				{
					"OpticsCHAbera5",
					"OpticsBlur5"
				};
				opticsDisablePeripherialVision=0.67000002;
				opticsZoomMin=0.25;
				opticsZoomMax=1.1;
				opticsZoomInit=0.75;
				memoryPointCamera="eye";
				visionMode[]={};
				distanceZoomMin=100;
				distanceZoomMax=100;
			};
		};
		class WPEC_CIS_B2_Rocket_F: UGL_F
		{
			displayName="[CIS] Dual Wrist Rocket Launcher";
			descriptionShort="Wrist Rockets";
			useModelOptics=0;
			useExternalOptic=0;
			magazines[]=
			{
				"WPEC_CIS_B2_R_Mag"
			};
			magazineWell[]={};
			cameraDir="";
			discreteDistance[]={};
			discreteDistanceCameraPoint[]={};
			discreteDistanceInitIndex=0;
			reloadAction="GestureReloadMXUGL";
			reloadMagazineSound[]=
			{
				"A3\Sounds_F\arsenal\weapons\Rifles\MX\Mx_UGL_reload",
				1,
				1,
				10
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=60;
		};
	};
};
class cfgMods
{
	author="ChaosViking";
	timepacked="1677279925";
};
