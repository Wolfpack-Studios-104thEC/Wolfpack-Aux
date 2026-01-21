/*
 * Author: Maldova
 *
 *
 * Arguments:
 * 0: Unit 
 * 1: Unit 
 * 2: Ammo 
 *
 * Example:
 * [Target,Shooter,"WPEC_StunRound"] call WPEC_Weapon_fnc_onHitStun;
 *
 * Return Value:
 * None
 *
 */

params ["_target","_shooter", "_ammo"];

if ( _target == _shooter) exitWith {};

if (getNumber(configFile >> "CfgWeapons" >> Uniform _target >> "WPEC_isBX") == 1) exitWith {false;};

private _stunDuration = 20;

if (getNumber(configFile >> "CfgWeapons" >> Uniform _target >> "WPEC_isSpecialForcesDroid") == 1) then 
{
	_stunDuration = 10;
};

private _targetPos = getPos _target;

private _stunnedUntilTime = _target getVariable ["WPEC_isStunnedUntil", CBA_missionTime];
private _isStunned = _target getVariable ["WPEC_isStunned",false];

if(_stunnedUntilTime < CBA_missionTime) then 
{
	_stunnedUntilTime = CBA_missionTime + _stunnedUntilTime;
};

if (getNumber(configFile >> "CfgWeapons" >> Uniform _target >> "WPEC_isB1") == 1 || getNumber(configFile >> "CfgWeapons" >> Uniform _target >> "JLTS_isDroid") == 1) then 
{
	playSound3D ["WPEC\WPEC_Weapons\Sounds\General\B1BattleDroidGlitch.ogg", _target, false, _targetPos, 5, 0.7, 50];
};

if (getNumber(configFile >> "CfgWeapons" >> Uniform _target >> "WPEC_isB2") == 1) then 
{
	playSound3D ["WPEC\WPEC_Weapons\Sounds\General\B2BattleDroidGlitch.ogg", _target, false, _targetPos, 5, 0.7, 50];
};

if (getNumber(configFile >> "CfgWeapons" >> Uniform _target >> "WPEC_isTSeries") == 1) then 
{
	playSound3D ["WPEC\WPEC_Weapons\Sounds\General\TSeriesGlitch.ogg", _target, false, _targetPos, 5, 0.7, 50];
};

_target setVariable ["WPEC_isStunnedUntil", _stunnedUntilTime + _stunDuration, true];

private _newStunnedUntil = _target getVariable ["WPEC_isStunnedUntil", _stunnedUntilTime];
_target setVariable ["WPEC_isStunnedUntil", _newStunnedUntil, true];

private _newStunDuration = _newStunnedUntil - CBA_missionTime;

[_target, true, _newStunDuration, true] call ACE_medical_fnc_setUnconscious;
