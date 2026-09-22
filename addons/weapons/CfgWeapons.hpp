class CfgWeapons
{   
    class CBA_MiscItem;
	class ls_miscItem_base;
	class ls_vehicle_turretDroid_packed: ls_miscItem_base
    {
        class ItemInfo;
    };
    class Tureta_Impachetata: ls_vehicle_turretDroid_packed
    {
        scope=2;
        displayName="[104th] Packed Turret";
        descriptionShort="Fuck Off?";
        ls_common_deployObject="WPEC_GroundTurret";
		ls_common_deployStatement="call ls_vehicles_fnc_deployTurretDroid";
		ls_common_deployTime=1;
		ls_equipment=1;
        class ItemInfo: ItemInfo
		{
			mass=25;
		};
    };
};
