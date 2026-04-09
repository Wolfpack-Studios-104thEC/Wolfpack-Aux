
	class WPEC_3AS_DC15S: 3AS_DC15S_Base_F
	{
		canShootInWater=1;
		JLTS_hasEMPProtection=1;
		scope=2;
		displayName="[104th] DC-15S";
		baseWeapon="WPEC_3AS_DC15S";
		model="\3AS\3AS_Weapons\Republic\DC15S\3AS_DC15S_F.p3d";
		picture="\3AS\3AS_Weapons\Republic\DC15S\Data\UI\3as_dc15s.paa";
		UiPicture="\A3\weapons_f\data\UI\icon_regular_CA.paa";
		magazines[]=
		{
			"WPEC_3AS_DC15S_Mag"
		};
		class Single: Mode_SemiAuto
		{
			reloadTime = 0.1;
			dispersion = 0.00066;
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 350;
			maxRangeProbab = 0.1;
			soundContinuous = 0;
			soundBurst = 0;
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"3AS_DC15S_Shot_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"3AS_DC15S_Shot_SoundSet"};
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=50;
			class MuzzleSlot: 3AS_MuzzleSlot_DC15S
			{
				iconPosition[]={0,0.44999999};
				iconScale=0.2;
			};
			class CowsSlot: CowsSlot
			{
				compatibleItems[]=
				{
					"WPEC_Holosight_blu",
					"Optre_Recon_Sight"
				};
			};
		};
	};
