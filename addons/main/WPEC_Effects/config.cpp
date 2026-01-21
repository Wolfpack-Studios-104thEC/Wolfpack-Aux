class CfgPatches
{
	class WPEC_Effects
	{
		author="Maldova";
		units[]={};
		requiredAddons[]=
		{
			"a3_weapons_F"
		};
		ammo[]=
		{
			"104th_SmokeLauncherAmmo"
		};
		magazines[]=
		{
			"104th_SmokeLauncherMag"
		};
		weapons[]=
		{
			"104th_SmokeLauncher"
		};
	};
};
class CfgAmmo
{
	class BulletBase;
	class 104th_SmokeLauncherAmmo: BulletBase
	{
		muzzleEffect="BIS_fnc_effectFiredSmokeLauncher";
		effectsSmoke="EmptyEffect";
		weaponLockSystem="1 + 2 + 4";
		hit=4;
		indirectHit=0;
		indirectHitRange=0;
		timeToLive=10;
		thrustTime=10;
		airFriction=-0.1;
		simulation="shotCM";
		model="\A3\weapons_f\empty";
		maxControlRange=50;
		initTime=2;
		aiAmmoUsageFlags="4 + 8";
	};
};
class CfgMagazines
{
	class VehicleMagazine;
	class 104th_SmokeLauncherMag: VehicleMagazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		ammo="104th_SmokeLauncherAmmo";
		count=7;
		nameSound="smokeshell";
		initSpeed=14;
	};
};
class CfgWeapons
{
	class MGun;
	class 104th_SmokeLauncher: MGun
	{
		scope=2;
		displayName="$STR_A3_SmokeLauncher0";
		sounds[]=
		{
			"StandardSound"
		};
		class StandardSound
		{
			soundSetShot[]=
			{
				"UGL_shot_SoundSet",
				"UGL_Tail_SoundSet",
				"UGL_InteriorTail_SoundSet"
			};
		};
		magazines[]=
		{
			"104th_SmokeLauncherMag"
		};
		reloadTime=4;
		magazineReloadTime=60;
		canLock=0;
		autoFire=0;
		simulation="cmlauncher";
		showToPlayer=1;
		minRange=0;
		maxRange=5000;
		textureType="semi";
	};
};
class CfgCloudlets
{
	class Default;
	class WPEC_Missile_Grey: Default
	{
		interval=0.001;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		angleVar=1;
		particleFSLoop=0;
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=8;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=10;
		moveVelocity[]={0,0,0};
		rotationVelocity=1;
		weight=1;
		volume=0.80000001;
		rubbing=0.5;
		size[]={1,2,2.8};
		color[]=
		{
			{0.25,0.25,0.25,1},
			{0.25,0.25,0.25,0.5},
			{0.25,0.25,0.25,0.25}
		};
		animationSpeed[]={5};
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.1;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		lifeTimeVar=0.2;
		positionVar[]={0.30000001,0.30000001,0.30000001};
		MoveVelocityVar[]={0.40000001,0.40000001,0.40000001};
		rotationVelocityVar=20;
		sizeVar=0.15000001;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class WPEC_Missile_Tip_Teal: Default
	{
		interval=0.001;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		angleVar=1;
		particleFSLoop=0;
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=8;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=2;
		moveVelocity[]={0,0,0};
		rotationVelocity=1;
		weight=1;
		volume=0.80000001;
		rubbing=0.5;
		size[]={2,3,3.8};
		color[]=
		{
			{0.1,0.6,0.5,1},
			{0.1,0.5,0.5,1},
			{0.050000001,0.30000001,0.30000001,0.25}
		};
		animationSpeed[]={5};
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.1;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		lifeTimeVar=0.2;
		positionVar[]={0.30000001,0.30000001,0.30000001};
		MoveVelocityVar[]={0.40000001,0.40000001,0.40000001};
		rotationVelocityVar=20;
		sizeVar=0.15000001;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
    class WPEC_Missile_Tip_Yellow: WPEC_Missile_Tip_Teal
	{
		color[]=
		{
			{1,1,0,1},
			{1,1,0,1},
			{0.050000001,0.30000001,0.30000001,0.25}
		};
	};
    class WPEC_Missile_Tip_Purple: WPEC_Missile_Tip_Teal
	{
		color[]=
		{
			{0.5,0.15,0.35,1},
			{0.5,0.15,0.35,1},
			{0.050000001,0.30000001,0.30000001,0.25}
		};
	};
	class WPEC_LAAT_Missile3: Default
	{
		interval=0.001;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		angleVar=1;
		particleFSLoop=0;
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=8;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=2;
		moveVelocity[]={0,0,0};
		rotationVelocity=1;
		weight=1;
		volume=0.80000001;
		rubbing=0.5;
		size[]={1,5};
		color[]=
		{
			{0.11,0.11,0.11,0.80000001},
			{0.11,0.11,0.11,0.80000001}
		};
		animationSpeed[]={5};
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.1;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		lifeTimeVar=0.2;
		positionVar[]={0.30000001,0.30000001,0.30000001};
		MoveVelocityVar[]={0.40000001,0.40000001,0.40000001};
		rotationVelocityVar=20;
		sizeVar=0.15000001;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
    class WPEC_Missile_Sparks: Default
	{
		interval=0.0089999998;
		lifeTime=2.5;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=13;
		particleFSFrameCount=2;
		particleFSLoop=0;
		angleVar=360;
		animationName="";
		particleType="Billboard";
		timerPeriod=3;
		moveVelocity[]={0,0,0};
		rotationVelocity=1;
		weight=100;
		volume=0.0099999998;
		rubbing=0.30000001;
		size[]={0.12,0};
		sizeCoef=1;
		color[]=
		{
			{1,0.60000002,0.40000001,-50}
		};
		colorCoef[]={1,1,1,1};
		emissiveColor[]=
		{
			{10,6,4,1}
		};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=1;
		bounceOnSurface=0.1;
		bounceOnSurfaceVar=0.1;
		lifeTimeVar=5;
		position[]={0,0,0};
		positionVar[]={0.0099999998,0.0099999998,0.0099999998};
		moveVelocityVar[]={1,3,1};
		rotationVelocityVar=0;
		sizeVar=0;
		colorVar[]={0.050000001,0.050000001,0.050000001,5};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class Missile3;
	class WPEC_SmokeBase: Missile3
	{
		color[]=
		{
			{1,1,1,1},
			{0.079999998,0.079999998,0.079999998,0.30000001},
			{0.079999998,0.079999998,0.079999998,0.30000001}
		};
		size[]={0.5,2,2};
		lifeTime=3;
		interval=0.00050000002;
	};
	class WPEC_cloudlet_LAATM_SmokeWhite: WPEC_SmokeBase
	{
		color[]=
		{
			{1,1,1,0.5},
			{0.069999998,0.069999998,0.069999998,0.30000001},
			{0.069999998,0.069999998,0.069999998,0.30000001}
		};
		lifeTime=7;
	};
	class WPEC_cloudlet_LAATM_SmokeYellow: WPEC_SmokeBase
	{
		color[]=
		{
			{1,1,0,0.5},
			{0.069999998,0.069999998,0.069999998,0.30000001},
			{0.069999998,0.069999998,0.069999998,0.30000001}
		};
		lifeTime=7;
	};
	class WPEC_cloudlet_LAATM_SmokeTeal: WPEC_SmokeBase
	{
		color[]=
		{
			{0.1,0.5,0.5,0.5},
			{0.069999998,0.069999998,0.069999998,0.30000001},
			{0.069999998,0.069999998,0.069999998,0.30000001}
		};
		lifeTime=7;
	};
	class WPEC_cloudlet_LAATM_SmokeMaroon: WPEC_SmokeBase
	{
		color[]=
		{
			{0.4,0,0,0.5},
			{0.069999998,0.069999998,0.069999998,0.30000001},
			{0.069999998,0.069999998,0.069999998,0.30000001}
		};
		lifeTime=7;
	};
	class WPEC_cloudlet_LAATM_SmokePurple: WPEC_SmokeBase
	{
		color[]=
		{
			{0.5,0.15,0.35,0.5},
			{0.069999998,0.069999998,0.069999998,0.30000001},
			{0.069999998,0.069999998,0.069999998,0.30000001}
		};
		lifeTime=7;
	};
};
class CfgLights
{
	class WPEC_RocketLight
	{
		diffuse[]={0.050000001,0.28,1,1};
		color[]={0,0,0,0};
		ambient[]={0,0,0};
		brightness="20 * fireIntensity";
		size=1;
		intensity=25000;
		useFlare=1;
		flareSize=1.5;
		flareMaxDistance=6000;
		drawLight=0;
		blinking=0;
		dayLight=1;
		class Attenuation
		{
			start=0;
			constant=0;
			linear=0;
			quadratic=1;
			hardLimitStart=100;
			hardLimitEnd=200;
		};
	};
	class WPEC_RocketLight_Teal: WPEC_RocketLight
	{
		useFlare=1;
		flareSize=1.5;
		flareMaxDistance=6000;
		diffuse[]={0.050000001,0.28,1,1};
		lightColor[]={0.1,0.5,0.5,1};
	};
    class WPEC_RocketLight_Yellow: WPEC_RocketLight
	{
		useFlare=1;
		flareSize=2;
		flareMaxDistance=6000;
		diffuse[]={0.050000001,0.28,1,1};
		lightColor[]={1,1,0,1};
	};
    class WPEC_RocketLight_Purple: WPEC_RocketLight
	{
		useFlare=1;
		flareSize=2;
		flareMaxDistance=6000;
		diffuse[]={0.050000001,0.28,1,1};
	};
	class WPEC_RocketLight_Lime: WPEC_RocketLight
	{
		useFlare=1;
		flareSize=2;
		flareMaxDistance=6000;
		diffuse[]={0,1,0,1};
	};
	class WPEC_RocketLight_Blue: WPEC_RocketLight
	{
		useFlare=1;
		flareSize=1.5;
		flareMaxDistance=6000;
		diffuse[]={0,0,1,1};
	};
	class WPEC_RocketLight_Maroon: WPEC_RocketLight
	{
		useFlare=1;
		dayLight=1;
		flareSize=1.5;
		flareMaxDistance=6000;
		intensity=40000;
	};
	class WPEC_GrenadeLight_Red: WPEC_RocketLight
	{
		useFlare=1;
		dayLight=1;
		flareSize=1;
		flareMaxDistance=2000;
		diffuse[]={1,0,0,1};
	};
	class WPEC_light_LAATM_light: WPEC_RocketLight
	{
		color[]={0,0.537,0.98799998,1};
		intensity=50000;
		dayLight=1;
		useFlare=1;
		flareSize=1.5;
		flareMaxDistance=6000;
	};
	class WPEC_BulletLight
	{
		diffuse[]={0.050000001,0.28,1,1};
		color[]={0,0,0,0};
		ambient[]={0,0,0};
		brightness="5 * fireIntensity";
		size=1;
		intensity=15000;
		useFlare=1;
		flareSize=1.5;
		flareMaxDistance=4000;
		drawLight=0;
		blinking=0;
		class Attenuation
		{
			start=0;
			constant=0;
			linear=0;
			quadratic=1;
			hardLimitStart=100;
			hardLimitEnd=200;
		};
	};
	class WPEC_BulletLight_Teal: WPEC_BulletLight
	{
		useFlare=1;
		flareSize=1.3;
		flareMaxDistance=2000;
		diffuse[]={0.1,0.5,0.5,1};
	};
	class WPEC_BulletLight_Red: WPEC_BulletLight
	{
		useFlare=1;
		flareSize=1.4;
		flareMaxDistance=2000;
		diffuse[]={0.8,0,0,1};
	};
};
class WPEC_FX_Missile_AA
{
	class FX_Missile_AA_light_01
	{
		simulation="light";
		type="WPEC_RocketLight";
		position[]={0,0,0};
		intensity=0.0099999998;
		useFlare=1;
		flareSize=1.5;
		flareMaxDistance=6000;
		interval=1;
		lifeTime=1;
	};
	class FX_Plane_Missile_AA_high
	{
		simulation="particles";
		type="WPEC_Missile3";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class FX_Plane_Missile_AA_medium
	{
		simulation="particles";
		type="Missile3";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=1;
	};
	class FX_Plane_Missile_AA_low
	{
		simulation="particles";
		type="Missile3";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=0;
	};
};
class WPEC_FX_Missile_Teal
{
	class FX_Missile_AA_light_01
	{
		simulation="light";
		type="WPEC_RocketLight";
		position[]={0,0,0};
		intensity=0.0099999998;
		useFlare=1;
		flareSize=1.5;
		flareMaxDistance=6000;
		interval=1;
		lifeTime=1;
	};
	class FX_Plane_Missile_AA_high
	{
		simulation="particles";
		type="Missile3";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class FX_Plane_Missile_AA_medium
	{
		simulation="particles";
		type="Missile3";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=1;
	};
	class FX_Plane_Missile_AA_low
	{
		simulation="particles";
		type="Missile3";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=0;
	};
	class FX_Missile_Light
	{
		simulation="light";
		type="WPEC_RocketLight_Teal";
		position[]={0,0,0};
		intensity=0.0099999998;
		useFlare=1;
		flareSize=1.5;
		flareMaxDistance=6000;
		interval=1;
		lifeTime=1;
	};
	class FX_Missile_Smoke
	{
		simulation="particles";
		type="WPEC_Missile_Grey";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=60;
	};
	class FX_Missile_Smoke_Tip
	{
		simulation="particles";
		type="WPEC_Missile_Tip_Teal";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
};
class WPEC_FX_Missile_Yellow
{
	class FX_Missile_AA_light_01
	{
		simulation="light";
		type="WPEC_RocketLight";
		position[]={0,0,0};
		intensity=0.0099999998;
		useFlare=1;
		flareSize=1.5;
		flareMaxDistance=6000;
		interval=1;
		lifeTime=1;
	};
	class FX_Plane_Missile_AA_high
	{
		simulation="particles";
		type="Missile3";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class FX_Plane_Missile_AA_medium
	{
		simulation="particles";
		type="Missile3";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=1;
	};
	class FX_Plane_Missile_AA_low
	{
		simulation="particles";
		type="Missile3";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=0;
	};
	class FX_Missile_Light
	{
		simulation="light";
		type="WPEC_RocketLight_Yellow";
		position[]={0,0,0};
		intensity=0.0099999998;
		useFlare=1;
		flareSize=1.5;
		flareMaxDistance=6000;
		interval=1;
		lifeTime=1;
	};
	class FX_Missile_Smoke
	{
		simulation="particles";
		type="WPEC_Missile_Grey";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=60;
	};
	class FX_Missile_Smoke_Tip
	{
		simulation="particles";
		type="WPEC_Missile_Tip_Yellow";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
};
class WPEC_FX_Missile_Purple
{
	class FX_Missile_AA_light_01
	{
		simulation="light";
		type="WPEC_RocketLight";
		position[]={0,0,0};
		intensity=0.0099999998;
		useFlare=1;
		flareSize=1.5;
		flareMaxDistance=6000;
		interval=1;
		lifeTime=1;
	};
	class FX_Plane_Missile_AA_high
	{
		simulation="particles";
		type="Missile3";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class FX_Plane_Missile_AA_medium
	{
		simulation="particles";
		type="Missile3";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=1;
	};
	class FX_Plane_Missile_AA_low
	{
		simulation="particles";
		type="Missile3";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=0;
	};
	class FX_Missile_Light
	{
		simulation="light";
		type="WPEC_RocketLight_Purple";
		position[]={0,0,0};
		intensity=0.0099999998;
		useFlare=1;
		flareSize=1.5;
		flareMaxDistance=6000;
		interval=1;
		lifeTime=1;
	};
	class FX_Missile_Smoke
	{
		simulation="particles";
		type="WPEC_Missile_Grey";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=60;
	};
	class FX_Missile_Smoke_Tip
	{
		simulation="particles";
		type="WPEC_Missile_Tip_Purple";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
};
class WPEC_FX_Missile_Maroon
{
	class FX_Missile_AA_light_01
	{
		simulation="light";
		type="WPEC_RocketLight";
		position[]={0,0,0};
		intensity=0.0099999998;
		useFlare=1;
		flareSize=1.5;
		flareMaxDistance=6000;
		interval=1;
		lifeTime=1;
	};
	class FX_Plane_Missile_AA_high
	{
		simulation="particles";
		type="Missile3";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class FX_Plane_Missile_AA_medium
	{
		simulation="particles";
		type="Missile3";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=1;
	};
	class FX_Plane_Missile_AA_low
	{
		simulation="particles";
		type="Missile3";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=0;
	};
	class FX_Missile_Light
	{
		simulation="light";
		type="WPEC_RocketLight_Maroon";
		position[]={0,0,0};
		intensity=25000;
		useFlare=1;
		flareSize=1.5;
		flareMaxDistance=6000;
		interval=1;
		lifeTime=15;
	};
	class FX_Missile_Smoke
	{
		simulation="particles";
		type="WPEC_Missile_Grey";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=60;
	};
	class FX_Missile_Smoke_Tip
	{
		simulation="particles";
		type="WPEC_Missile_Tip_Maroon";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
};
class WPEC_FX_Missile_Maroon_Rocket
{
	class FX_Missile_Light
	{
		simulation="light";
		type="WPEC_RocketLight_Maroon";
		position[]={0,0,0};
		intensity=60000;
		useFlare=1;
		flareSize=2;
		flareMaxDistance=6000;
		interval=1;
	};
};
class WPEC_FX_Bullet_Teal
{
	class FX_Missile_Light
	{
		simulation="light";
		type="WPEC_RocketLight_Teal";
		position[]={0,0,0};
		intensity=10000;
		useFlare=1;
		flareSize=2;
		flareMaxDistance=6000;
		interval=1;
	};
};
class WPEC_FX_Bullet_Blue
{
	class FX_Missile_Light
	{
		simulation="light";
		type="WPEC_RocketLight_Blue";
		position[]={0,0,0};
		intensity=10000;
		useFlare=1;
		flareSize=2;
		flareMaxDistance=4000;
		interval=1;
	};
};
class WPEC_FX_Bullet_Yellow_Pistol
{
	class FX_Missile_Light
	{
		simulation="light";
		type="WPEC_RocketLight_Yellow";
		position[]={0,0,0};
		intensity=10000;
		useFlare=1;
		flareSize=2;
		flareMaxDistance=4000;
		interval=1;
	};
	class Sparks
	{
		simulation="particles";
		type="WPEC_Missile_Sparks";
		position[]={0,0,0};
		qualityLevel=2;
	};
};
class WPEC_FX_Bullet_Yellow_Sniper
{
	class FX_Missile_Light
	{
		simulation="light";
		type="WPEC_RocketLight_Yellow";
		position[]={0,0,0};
		intensity=10000;
		useFlare=1;
		flareSize=2;
		flareMaxDistance=6000;
		interval=1;
	};
	class Sparks
	{
		simulation="particles";
		type="WPEC_Missile_Sparks";
		position[]={0,0,0};
		qualityLevel=3;
	};
};
class WPEC_FX_Bullet_Lime_Sniper
{
	class FX_Missile_Light
	{
		simulation="light";
		type="WPEC_RocketLight_Lime";
		position[]={0,0,0};
		intensity=10000;
		useFlare=1;
		flareSize=2;
		flareMaxDistance=6000;
		interval=1;
	};
	class Sparks
	{
		simulation="particles";
		type="WPEC_Missile_Sparks";
		position[]={0,0,0};
		qualityLevel=3;
	};
};
class WPEC_FX_Grenade_Red
{
	class Light
	{
		simulation="light";
		type="WPEC_GrenadeLight_Red";
		position[]={0,0,0};
		intensity=10000;
		useFlare=1;
		flareSize=0.8;
		flareMaxDistance=1000;
		interval=1;
		blinking=1;
		blinkingPattern[]={0.1,0.89999998};
		blinkingPatternGuarantee=1;
		drawlight=1;
		activelight=1;
	};
};
class WPEC_particle_effect_LAATM_fly
{
	class Light
	{
		simulation="light";
		type="WPEC_light_LAATM_light";
		position[]={0,0,0};
	};
	class Smoke
	{
		simulation="particles";
		type="WPEC_cloudlet_LAATM_SmokeWhite";
		position[]={0,0,0};
		qualityLevel=-1;
	};
	class Sparks
	{
		simulation="particles";
		type="WPEC_Missile_Sparks";
		position[]={0,0,0};
		qualityLevel=2;
	};
};
class WPEC_particle_effect_Missile_fly_Purple
{
	class Light
	{
		simulation="light";
		type="WPEC_RocketLight_Purple";
		position[]={0,0,0};
	};
	class Smoke
	{
		simulation="particles";
		type="WPEC_cloudlet_LAATM_SmokePurple";
		position[]={0,0,0};
		qualityLevel=-1;
	};
	class Sparks
	{
		simulation="particles";
		type="WPEC_Missile_Sparks";
		position[]={0,0,0};
		qualityLevel=2;
	};
};
class WPEC_particle_effect_Missile_fly_Yellow
{
	class Light
	{
		simulation="light";
		type="WPEC_RocketLight_Yellow";
		position[]={0,0,0};
	};
	class Smoke
	{
		simulation="particles";
		type="WPEC_cloudlet_LAATM_SmokeYellow";
		position[]={0,0,0};
		qualityLevel=-1;
	};
	class Sparks
	{
		simulation="particles";
		type="WPEC_Missile_Sparks";
		position[]={0,0,0};
		qualityLevel=2;
	};
};
class WPEC_particle_effect_Missile_fly_Teal
{
	class Light
	{
		simulation="light";
		type="WPEC_RocketLight_Teal";
		position[]={0,0,0};
	};
	class Smoke
	{
		simulation="particles";
		type="WPEC_cloudlet_LAATM_SmokeTeal";
		position[]={0,0,0};
		qualityLevel=-1;
	};
	class Sparks
	{
		simulation="particles";
		type="WPEC_Missile_Sparks";
		position[]={0,0,0};
		qualityLevel=2;
	};
};
class WPEC_particle_effect_Missile_fly_Maroon
{
	class Light
	{
		simulation="light";
		type="WPEC_RocketLight_Maroon";
		position[]={0,0,0};
	};
	class Smoke
	{
		simulation="particles";
		type="WPEC_cloudlet_LAATM_SmokeMaroon";
		position[]={0,0,0};
		qualityLevel=-1;
	};
	class Sparks
	{
		simulation="particles";
		type="WPEC_Missile_Sparks";
		position[]={0,0,0};
		qualityLevel=2;
	};
};
class WPEC_particle_effect_Rocket_fly_Maroon
{
	class Light
	{
		simulation="light";
		type="WPEC_RocketLight_Maroon";
		position[]={0,0,0};
	};
	class Sparks
	{
		simulation="particles";
		type="WPEC_Missile_Sparks";
		position[]={0,0,0};
		qualityLevel = -1;
	};
};
class WPEC_particle_effect_GL_Blue
{
	class Light
	{
		simulation="light";
		type="WPEC_RocketLight_Blue";
		position[]={0,0,0};
	};
	class Sparks
	{
		simulation="particles";
		type="WPEC_Missile_Sparks";
		position[]={0,0,0};
		qualityLevel=-1;
	};
};
