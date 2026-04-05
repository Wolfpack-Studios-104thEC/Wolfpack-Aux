#include "script_component.hpp"
class CfgPatches
{
	class WPEC_Sights
	{
		name="WPEC Aux Sights";
		units[]={};
		weapons[]=
		{
            "WPEC_HRCO_blu", //2x-6x
            "WPEC_HMRCO_blu", // 2x-4x
            "WPEC_Holosight_blu", //1x
            "WPEC_HMRD_blu",
			"WPEC_flash_hider"
		};
		requiredVersion=2.0599999;
		requiredAddons[]=
		{
			"3AS_Weapons_DC17S",
			"3AS_Weapons_DC15L",
			"3AS_Weapons_DC15C",
			"3AS_Weapons_DC15A",
			"3AS_Weapons_Valken38X",
			"3AS_Weapons_WestarM5",
			"JLTS_weapons_DC17SA",
			"JLTS_weapons_DC15S",
			"JLTS_weapons_DC15A",
			"3AS_Weapons_RPS6HP",
			"JLTS_weapons_RPS6"
		};
		author="Viking";
		authors[]=
		{
			""
		};
	};
};
class CfgWeapons
{
	class ItemCore;
	class optic_DMS: ItemCore
	{
		class ItemInfo;
	};
	class optic_Hamr: ItemCore
	{
		class ItemInfo;
	};
	class optic_MRCO: ItemCore
	{
		class ItemInfo;
	};
	class optic_Holosight: ItemCore
	{
		class ItemInfo;
	};
	class optic_MRD: ItemCore
	{
		class ItemInfo;
	};
	class InventoryMuzzleItem_Base_F;
	class WPEC_HRCO_blu: optic_Hamr
	{
		author="Viking";
		scope=2;
		displayName="Holo-RCO";
		picture="\Z\wpec\addons\weapons\sights\ui\h-rco\iconrcobluca_ui.paa";
		UiPicture="\Z\wpec\addons\weapons\sights\ui\h-rco\iconrcobluca_ui.paa";
		model="\Z\wpec\addons\weapons\sights\sight_rco.p3d";
		descriptionShort="2-4x RCO Scope";
		weaponInfoType="RscOptics_sos";
		class ItemInfo: ItemInfo
		{
			mass=8;
			opticType=1;
			optics=1;
			class OpticsModes
			{
				class Hamr2Collimator
				{
					opticsID=1;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						"Default"
					};
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					opticsZoomMin=0.25;
					opticsZoomMax=1.25;
					opticsZoomInit=0.75;
					memoryPointCamera="eye";
					visionMode[]={};
					distanceZoomMin=200;
					distanceZoomMax=200;
				};
				class Hamr2Scope
				{
					opticsID=2;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						"OpticsCHAbera5",
						"OpticsBlur5"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					opticsZoomMin="0.25/2";
					opticsZoomMax="0.25/4";
					opticsZoomInit="0.25/2";
					discreteinitIndex=0;
					discretefov[]=
					{
						"0.25/2",
						"0.25/4"
					};
					discreteDistanceInitIndex=1;
					memoryPointCamera="opticView";
					visionMode[]={};
					distanceZoomMin=300;
					distanceZoomMax=300;
				};
			};
		};
		inertia=0.1;
	};
    class WPEC_HMRCO_blu: optic_MRCO
	{
		author="Viking";
		scope=2;
		displayName="Holo-MRCO";
		picture="\Z\wpec\addons\weapons\sights\ui\h-mrco\iconmrcobluca_ui.paa";
		UiPicture="\Z\wpec\addons\weapons\sights\ui\h-mrco\iconmrcobluca_ui.paa";
		model="\Z\wpec\addons\weapons\sights\sight_mrco.p3d";
		descriptionShort="2-6x RCO Scope";
		weaponInfoType="RscOptics_sos";
		class ItemInfo: ItemInfo
		{
			mass=8;
			opticType=1;
			optics=1;
			class OpticsModes
			{
				class MRCOcq
				{
					opticsID=1;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						"Default"
					};
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					opticsZoomMin=0.25;
					opticsZoomMax=1.25;
					opticsZoomInit=0.75;
					memoryPointCamera="eye";
					visionMode[]={};
					distanceZoomMin=300;
					distanceZoomMax=300;
				};
				class MRCOscope
				{
					opticsID=2;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						"OpticsCHAbera5",
						"OpticsBlur5"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					opticsZoomMin="0.25/6";
					opticsZoomMax="0.25/2";
					opticsZoomInit="0.25/2";
					discreteinitIndex=0;
					discretefov[]=
					{
						"0.25/2",
						"0.25/6"
					};
					discreteDistanceInitIndex=1;
					memoryPointCamera="opticView";
					visionMode[]={};
					distanceZoomMin=300;
					distanceZoomMax=300;
				};
			};
		};
		inertia=0.1;
	};
    class WPEC_Holosight_blu: optic_Holosight
	{
		author="Viking";
		scope=2;
		displayName="Holosight";
		picture="\Z\wpec\addons\weapons\sights\ui\holo\iconholobluca_ui.paa";
		UiPicture="\Z\wpec\addons\weapons\sights\ui\holo\iconholobluca_ui.paa";
		model="\Z\wpec\addons\weapons\sights\sight_mrco.p3d";
		descriptionShort="1x Holosight Scope";
		weaponInfoType="RscWeaponZeroing";
		class ItemInfo: ItemInfo
		{
			mass=6;
			optics=1;
			class OpticsModes
			{
				class ACO
				{
					opticsID=1;
					useModelOptics=0;
					opticsZoomMin=0.25;
					opticsZoomMax=1.25;
					opticsZoomInit=0.75;
					memoryPointCamera="eye";
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					distanceZoomMin=200;
					distanceZoomMax=200;
					cameraDir="";
					visionMode[]={};
					opticsPPEffects[]=
					{
						"OpticsBlur1"
					};
				};
			};
		};
		inertia=0;
	};
	class WPEC_Holosight_2xblu: optic_Holosight
	{
		author="Viking";
		scope=2;
		displayName="2x Holosight";
		picture="\Z\wpec\addons\weapons\sights\ui\holo\iconholobluca_ui.paa";
		UiPicture="\Z\wpec\addons\weapons\sights\ui\holo\iconholobluca_ui.paa";
		model="\Z\wpec\addons\weapons\sights\sight_mrco.p3d";
		descriptionShort="1-2x Holosight Scope";
		weaponInfoType="RscWeaponZeroing";
		class ItemInfo: ItemInfo
		{
			mass=6;
			optics=1;
			class OpticsModes
			{
				class ACO
				{
					opticsID=1;
					useModelOptics=0;
					opticsZoomMin=0.25;
					opticsZoomMax=1.25;
					opticsZoomInit=0.75;
					memoryPointCamera="eye";
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					distanceZoomMin=200;
					distanceZoomMax=200;
					cameraDir="";
					visionMode[]={};
					opticsPPEffects[]=
					{
						"OpticsBlur1"
					};
				};
				class MRCOscope
				{
					opticsID=2;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						"OpticsCHAbera5",
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					opticsZoomMin="0.25/2";
					opticsZoomMax="0.25/2";
					opticsZoomInit="0.25/2";
					discreteinitIndex=0;
					discretefov[]=
					{
						"0.25/2",
					};
					discreteDistanceInitIndex=1;
					memoryPointCamera="opticView";
					visionMode[]={};
					distanceZoomMin=300;
					distanceZoomMax=300;
				};
			};
		};
		inertia=0;
	};
};