/*
 * Author: Maldova
 *
 *
 * Arguments:
 * Inherited from WPEC_Weapons_fnc_onHit
 *
 * Example:
 * call WPEC_Weapon_fnc_onHit;
 *
 * Return Value:
 * None
 *
 */

params["_target", "_shooter", "_projectile", "_position", "_velocity", "_selection", "_ammo", "_vector", "_radius", "_surfaceType", "_isDirect"];

#define REGULAR 1
#define STUN 2
#define CONCUSSION 3
#define INCENDIARY 5
#define DISINTEGRATION 6
#define ION 7

private _ammoUsed = _ammo select 4;

private _ammoType = getNumber(configFile >> "CfgAmmo" >> _ammoUsed >> "WPEC_AmmoType");

if (isNil{_ammo select 4}) exitWith {};

if(_ammoType == REGULAR) exitWith {};

switch(_ammoType) do 
{
	case STUN: 
    {
		[_target,_shooter,_ammoUsed] call WPEC_Weapon_fnc_onHitStun
	};
    case CONCUSSION:
    {
        [_target,_shooter,_ammoUsed] call WPEC_Weapon_fnc_onHitConcussion
    };
    case ION:
    {

    };
    case INCENDIARY:
    {

    };
    case DISINTEGRATION:
    {

    };
};