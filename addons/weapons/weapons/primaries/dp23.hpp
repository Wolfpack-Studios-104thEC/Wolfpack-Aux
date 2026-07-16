
class WPEC_DP23_3AS: 3AS_DP23_GL
{
    author="104th Eclipse Dev";
    baseWeapon="WPEC_DP23_3AS";
    scope=2;
    displayName="[104th] DP-23 GL";
    model="\3AS\3AS_Weapons\Republic\DP23\3AS_DP23_GL.p3d";
    picture="\3AS\3AS_Weapons\Republic\DP23\Data\UI\3as_dp23gl.paa";
    UiPicture="\A3\weapons_f\data\UI\icon_regular_CA.paa";
    handAnim[]=
    {
        "OFP2_ManSkeleton",
        "3as\3AS_Weapons\Republic\DP23\Data\Anim\New_DP23GL_handanim.rtm"
    };
    muzzles[]=
    {
        "this",
        "3AS_FL_F"
    };
    class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=60;
			class CowsSlot: CowsSlot
			{
				iconPosition[]={0.5,0.34999999};
				iconScale=0.2;
                compatibleItems[]=
				{
					"WPEC_Holosight_blu",
					"WPEC_Holosight_2xblu"
				};
			};
		};
    
};
