class CfgPatches
{
	class WPEC_CIS_E5_Standard
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
			"WPEC_CIS_E5",
			"WPEC_CIS_E5_Fried"
		};
		ammo[]={};
		magazines[]={};
	};
};
class CfgMagazines
{
	class JLTS_E5_mag;
	class WPEC_CIS_E5_Mag: JLTS_E5_mag
	{
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=0;
		author="WPEC Dev";
		count=50;
		displayName="[WPEC-CIS] E-5 Mag";
		descriptionShort="CIS E5 Mag";
		displayNameShort="CIS E5 Mag";
		ammo="WPEC_CIS_Ammo_65";
		tracersEvery=1;
	};
};
class Mode_SemiAuto;
class Mode_FullAuto;
class CowsSlot;
class MuzzleSlot;
class PointerSlot;
class UnderBarrelSlot;
class GunParticles;
class WeaponSlotsInfo;
class CfgWeapons
{
	class JLTS_E5;
	class WPEC_CIS_E5: JLTS_E5
	{
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=0;
		JLTS_friedItem="WPEC_CIS_E5_Fried";
		JLTS_repairTime=20;
		JLTS_canHaveShield=1;
		JLTS_shieldedWeapon="JLTS_E5_shield";
		author="WPEC Dev";
		scope=2;
		displayName="[CIS] E-5 Droid Rifle";
		descriptionShort="E-5 CIS Rifle";
		magazines[]=
		{
			"WPEC_CIS_E5_Mag"
		};
		magazineWell[]={};
		muzzles[]=
		{
			"this"
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_E5_Shot_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					""
				};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_E5_Shot_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_E5_Shot_SoundSet"
				};
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=44;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]={};
			};
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[]={};
			};
			class PointerSlot: PointerSlot
			{
				compatibleItems[]={};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleItems[]={};
			};
		};
		class GunParticles
		{
			class FirstEffect
			{
				directionName="Konec hlavne";
				effectName="RifleAssaultCloud";
				positionName="Usti hlavne";
			};
		};
	};
	class WPEC_CIS_E5_Shield: WPEC_CIS_E5 
	{
		scope = 1;
		author = "Wolfpack Bois";
		displayName = "[CIS] E-5 Droid Rifle (Shield)";

		baseWeapon = "WPEC_CIS_E5_Shield";
		model = "\MRC\JLTS\weapons\E5\E5_shielded.p3d";
		handAnim[] = {"OFP2_ManSkeleton", "\MRC\JLTS\weapons\E5\anims\E5_shielded_handanim.rtm"};

		JLTS_isShielded = 1;
		inertia = 0.8;
		recoil = "recoil_pdw";

		class LinkedItems {
			class LinkedItemsUnder {
				slot = "UnderBarrelSlot";
				item = "JLTS_riot_shield_droid_attachment";
			};
		};

		class WeaponSlotsInfo: WeaponSlotsInfo {
			class UnderBarrelSlot: UnderBarrelSlot {
				class compatibleItems {
					JLTS_riot_shield_droid_attachment = 1;
				};
			};
		};
	};
	class JLTS_E5_fried;
	class WPEC_CIS_E5_Fried: JLTS_E5_fried
	{
		JLTS_isFried=1;
		JLTS_shieldedWeapon="JLTS_E5_shield_fried";
		baseWeapon="WPEC_CIS_E5_Fried";
		displayName="Fried E-5 Rifle";
		descriptionShort="Friend E-5 CIS Rifle";
		scope=1;
		magazines[]={};
		drySound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Rifles\Mx\dry_Mx",
			0.56234097,
			1,
			10
		};
	};
};
class cfgMods
{
	author="ChaosViking";
	timepacked="1677279925";
};
