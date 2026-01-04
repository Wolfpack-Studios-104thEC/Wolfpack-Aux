#define Private 0
#define Protected 1
#define Public 2

class CfgPatches
{
	class WPEC_Weapons_Sounds_Weapons
	{
		author = "Maldova";
		requiredAddons[]=
		{
			"A3_Sounds_F"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={};
		magazines[]=
		{
		};
		ammo[]=
		{
		};	
	};
};
class CfgSoundShaders
{
	class WPEC_BlasterBolt_FlyBy
	{
		samples[] = {{"WPEC\WPEC_Weapons\Sounds\Weapons\Blaster_Fly-01.ogg",1},{"WPEC\WPEC_Weapons\Sounds\Weapons\Blaster_Fly-02.ogg",1},{"WPEC\WPEC_Weapons\Sounds\Weapons\Blaster_Fly-03.ogg",1},{"WPEC\WPEC_Weapons\Sounds\Weapons\Blaster_Fly-04.ogg",1},{"WPEC\WPEC_Weapons\Sounds\Weapons\Blaster_Fly-05.ogg",1},{"WPEC\WPEC_Weapons\Sounds\Weapons\Blaster_Fly-06.ogg",1},{"WPEC\WPEC_Weapons\Sounds\Weapons\Blaster_Fly-07.ogg",1},{"WPEC\WPEC_Weapons\Sounds\Weapons\Blaster_Fly-08.ogg",1},{"WPEC\WPEC_Weapons\Sounds\Weapons\Blaster_Fly-09.ogg",1},{"WPEC\WPEC_Weapons\Sounds\Weapons\Blaster_Fly-10.ogg",1}};
		volume = 1;
		range = 50;
	};
	class WPEC_DC17_ShotClose
	{
		samples[]=
		{
			
			{
				"WPEC\WPEC_Weapons\Sounds\Weapons\WPECBlasterDC17One",
				1
			},
			
			{
				"WPEC\WPEC_Weapons\Sounds\Weapons\WPECBlasterDC17Two",
				1
			}
		};
		volume=1;
		range=200;
		rangeCurve[]=
		{
			{0,1},
			{100,0.75},
			{200,0.5}
		};
	};
	class WPEC_DC17_ShotFar
	{
		samples[]=
		{
			
			{
				"WPEC\WPEC_Weapons\Sounds\Weapons\WPECBlasterDC17One",
				1
			},
			
			{
				"WPEC\WPEC_Weapons\Sounds\Weapons\WPECBlasterDC17Two",
				1
			}
		};
		volume=1;
		range=400;
		rangeCurve[]=
		{
			{200,0.5},
			{300,0.3},
			{400,0.1}
		};
	};
};
class CfgSoundSets
{
	class WPEC_DC17Soundset_Shot
	{
		soundShaders[]=
		{
			"WPEC_DC17_ShotClose",
			"WPEC_DC17_ShotFar"
		};
		volumeFactor=0.94999999;
		volumeCurve="InverseSquare2Curve";
		spatial=1;
		doppler=1;
		loop=0;
		soundShadersLimit=4;
		frequencyRandomizer=0.090000001;
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
	};
	class WPEC_DC17Soundset_Shot_Suppressed
	{
		soundShaders[]=
		{
			"WPEC_DC17_ShotClose"
		};
		volumeFactor=0.74999999;
		volumeCurve="InverseSquare2Curve";
		spatial=0;
		doppler=0;
		loop=0;
		soundShadersLimit=3;
		frequencyRandomizer=0.090000001;
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
	};
	class WPEC_BlasterBolt_FlyBy_Soundset
	{
		soundShaders[] = {"WPEC_BlasterBolt_FlyBy"};
		volumeFactor = 1.0;
		volumeCurve = "InverseSquare2Curve";
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
		occlusionFactor = 0.5;
		obstructionFactor = 0.3;
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
};
