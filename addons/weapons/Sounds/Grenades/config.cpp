#define Private 0
#define Protected 1
#define Public 2

#include "script_component.hpp"

class CfgPatches
{
	class WPEC_Weapons_Sounds_Grenades
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
	class WPEC_MK1Imploder_Explosion_Close
	{
		samples[]=
		{

			{
				"\Z\wpec\addons\weapons\Sounds\Grenades\Imploder_Explosion.wss",
				1
			},

			{
				"\Z\wpec\addons\weapons\Sounds\Grenades\Imploder_Explosion2.wss",
				1
			}
		};
		volume=1;
		range=100;
		rangeCurve[]=
		{
			{0,1},
			{50,0.75},
			{100,0.5}
		};
	};
	class WPEC_MK1Imploder_Explosion_Far
	{
		samples[]=
		{

			{
				"\Z\wpec\addons\weapons\Sounds\Grenades\Imploder_Explosion.wss",
				1
			},

			{
				"\Z\wpec\addons\weapons\Sounds\Grenades\Imploder_Explosion2.wss",
				1
			}
		};
		volume=1;
		range=500;
		rangeCurve[]=
		{
			{100,0.5},
			{250,0.3},
			{500,0.1}
		};
	};
	class WPEC_MK1Detonator_Explosion
	{
		samples[]=
		{

			{
				"\Z\wpec\addons\weapons\Sounds\Grenades\Thermal_Explosion01.wss",
				1
			},

			{
				"\Z\wpec\addons\weapons\Sounds\Grenades\Thermal_Explosion02.wss",
				1
			}
		};
		volume=3;
		range=100;
		rangeCurve[]=
		{
			{0,1},
			{50,0.75},
			{100,0.5}
		};
	};
	class WPEC_D19Concussion_Explosion
	{
		samples[]=
		{

			{
				"\Z\wpec\addons\weapons\Sounds\Grenades\Concussion_Explosion1.wss",
				1
			},
			{
				"\Z\wpec\addons\weapons\Sounds\Grenades\Concussion_Explosion2.wss",
				1
			},
			{
				"\Z\wpec\addons\weapons\Sounds\Grenades\Concussion_Explosion3.wss",
				1
			},
			{
				"\Z\wpec\addons\weapons\Sounds\Grenades\Concussion_Explosion4.wss",
				1
			}
		};
		volume=3;
		range=100;
		rangeCurve[]=
		{
			{0,1},
			{50,0.75},
			{100,0.5}
		};
	};
	class WPEC_C25Frag_Explosion
	{
		samples[]=
		{

			{
				"\Z\wpec\addons\weapons\Sounds\Grenades\Grenade_Explosion_General1.wss",
				1
			},

			{
				"\Z\wpec\addons\weapons\Sounds\Grenades\Grenade_Explosion_General2.wss",
				1
			},

			{
				"\Z\wpec\addons\weapons\Sounds\Grenades\Grenade_Explosion_General3.wss",
				1
			}
		};
		volume=3;
		range=100;
		rangeCurve[]=
		{
			{0,1},
			{50,0.75},
			{100,0.5}
		};
	};
	class WPEC_SMK_SmokeHiss
	{
		samples[]=
		{

			{
				"Z\wpec\addons\weapons\Sounds\Grenades\Smoke_Grenade_Hiss.wss",
				1
			}
		};
		volume=1;
		range=50;
		rangeCurve[]=
		{
			{0,1},
			{25,0.75},
			{50,0.5}
		};
	};
};
class CfgSoundSets
{
	class WPEC_MK1Imploder_Exp_Soundset
	{
		soundShaders[]=
		{
			"WPEC_MK1Imploder_Explosion_Close",
			"WPEC_MK1Imploder_Explosion_Far"
		};
		volumeFactor=0.94999999;
		volumeCurve="InverseSquare2Curve";
		spatial=1;
		doppler=0;
		loop=0;
		soundShadersLimit=3;
		frequencyRandomizer=0.090000001;
		sound3DProcessingType="ExplosionLightTail3DProcessingType";
		distanceFilter="explosionTailDistanceFreqAttenuationFilter";
	};
	class WPEC_MK1Detonator_Exp_Soundset
	{
		soundShaders[]=
		{
			"WPEC_MK1Detonator_Explosion"
		};
		volumeFactor=2.1;
		volumeCurve="InverseSquare2Curve";
		spatial=1;
		doppler=1;
		loop=0;
		soundShadersLimit=3;
		frequencyRandomizer=0.090000001;
		sound3DProcessingType="ExplosionLightTail3DProcessingType";
		distanceFilter="explosionTailDistanceFreqAttenuationFilter";
	};
	class WPEC_C25Frag_Exp_Soundset
	{
		soundShaders[]=
		{
			"WPEC_C25Frag_Explosion"
		};
		volumeFactor=2.1;
		volumeCurve="InverseSquare2Curve";
		spatial=1;
		doppler=0;
		loop=0;
		soundShadersLimit=3;
		frequencyRandomizer=0.090000001;
		sound3DProcessingType="ExplosionLightTail3DProcessingType";
		distanceFilter="explosionTailDistanceFreqAttenuationFilter";
	};
	class WPEC_D19Concussion_Exp_Soundset
	{
		soundShaders[]=
		{
			"WPEC_D19Concussion_Explosion"
		};
		volumeFactor=3.1;
		volumeCurve="InverseSquare2Curve";
		spatial=1;
		doppler=1;
		loop=0;
		soundShadersLimit=3;
		frequencyRandomizer=0.090000001;
		sound3DProcessingType="ExplosionLightTail3DProcessingType";
		distanceFilter="explosionTailDistanceFreqAttenuationFilter";
	};
	class WPEC_SMK3_SmokeTrail_Soundset
	{
		soundShaders[]=
		{
			"WPEC_SMK_SmokeHiss"
		};
		volumeFactor=1.1;
		volumeCurve="InverseSquare2Curve";
		spatial=1;
		doppler=0;
		loop=1;
		soundShadersLimit=3;
		frequencyRandomizer=0.090000001;
		sound3DProcessingType="ExplosionLightTail3DProcessingType";
		distanceFilter="explosionTailDistanceFreqAttenuationFilter";
	};
};
