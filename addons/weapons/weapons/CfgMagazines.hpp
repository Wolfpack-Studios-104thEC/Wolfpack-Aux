class CfgMagazines
{
	class 3AS_16Rnd_EC20_Mag;
	class 3AS_60Rnd_EC30_mag;
	class 3AS_40Rnd_EC40_Mag;
	class 3AS_200Rnd_EC40_Mag;
	class 3AS_45Rnd_EC50_Mag;
	class 3AS_60Rnd_EC50_Mag;
	class 3AS_300Rnd_EC60_Mag;
	class 3AS_10Rnd_EC80_Mag;
	class 3AS_Chaingun_Drum_Mag;
	class 3AS_MK40_AT;
	class 3AS_MK40_AT_Guided;
	class 3AS_6Rnd_RocketGrenades_HE;
	class Default;
	class JLTS_DC15X_mag;
	class CA_Magazine: Default
	{
	};
	class CA_LauncherMagazine: CA_Magazine
	{
	};
    class 3AS_ThermalDetonator;

    #include "primaries/primariesmagazinese.hpp"
    #include "secondaries/secondariesmagazines.hpp"
    #include "tertiaries/tertiariesmagazines.hpp"
};
