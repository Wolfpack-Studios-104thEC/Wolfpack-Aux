class CfgWeapons
{
	class Rifle_Base_F;
	class arifle_MX_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo;
	};
	class UGL_F;
	class WeaponSlotsInfo;
	class 3AS_DC15A_Base_F;
	class 3AS_DC15S_Base_F;
	class 3AS_DC15L_Base_F;
	class 3AS_DC15C_Base_F;
	class 3AS_Z6_F;
	class 3AS_Valken38X_Base_F;
	class 3AS_Chaingun;
	class 3AS_RPS6_Base;
	class 3AS_RPS6_Guided;
	class JLTS_stun_muzzle;
	class Pistol;
	class Pistol_Base_F: Pistol
	{
		class WeaponSlotsInfo;
	};
	class hgun_P07_F: Pistol_Base_F
	{
	};
	class JLTS_DC17SA: hgun_P07_F
	{
		class WeaponSlotsInfo;
	};
	class launch_RPG32_F
	{
		class Single;
	};
	class Odins_Launch: launch_RPG32_F
	{
		class Mode_SemiAuto;
	};
	class 3AS_DP23_Base_F;
	class 3AS_DP23_GL: 3AS_DP23_Base_F
	{};
	class 3AS_CowsSlot_DP23;
    #include "primaries/primariesweaponinclude.hpp"
    #include "secondaries/secondariesweaponinclude.hpp"
    #include "tertiaries/tertiariesweaponinclude.hpp"

};
