
	class 3AS_DC17M_Base_F;
	class 3AS_DC17M_F: 3AS_DC17M_Base_F
	{
		canShootInWater=1;
		JLTS_hasEMPProtection=1;
		class FullAuto;
		class Single;
		class WeaponSlotsInfo;
	};
	class WPEC_3AS_DC17M: 3AS_DC17M_F
	{
		scope=2;
		scopeArsenal = 2;
		displayName="[104th] DC-17M";
		canShootInWater=1;
		JLTS_hasEMPProtection=1;
		model="3AS\3AS_Weapons\DC17M\3as_dc17m_f.p3d";
		picture="\3AS\3AS_Weapons\DC17M\data\UI\3as_dc17m.paa";
		baseWeapon="WPEC_3AS_DC17M";
		modelOptics="3AS\3AS_Weapons\Data\3AS_2D_Optic.p3d";
		magazines[]=
		{
			"WPEC_3AS_DC17M_Mag",
			"3AS_5Rnd_EC80_mag",
			"3AS_AntiArmour_mag",
			"WPEC_3AS_DC17MLightAT"
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
				opticsZoomMax=1.25;
				opticsZoomInit=0.75;
				memoryPointCamera="eye";
				visionMode[]={};
				distanceZoomMin=100;
				distanceZoomMax=100;
			};
			class Scope: Ironsights
			{
				opticsID=2;
				useModelOptics=1;
				opticsPPEffects[]=
				{
					"OpticsCHAbera5",
					"OpticsBlur5"
				};
				opticsDisablePeripherialVision=0.67000002;
				opticsZoomMin=0.015;
				opticsZoomMax=0.2;
				opticsZoomInit=0.2;
				memoryPointCamera="opticView";
				visionMode[]=
				{
					"Normal",
					"NVG",
					"TI"
				};
				thermalMode[]={0};
				opticsFlare="true";
				distanceZoomMin=100;
				distanceZoomMax=100;
				cameraDir="";
			};
		};
		ace_overheating_mrbs=3000;
		ace_overheating_slowdownFactor=1;
		ace_overheating_allowSwapBarrel=0;
		ace_overheating_dispersion=0.75;
	};
