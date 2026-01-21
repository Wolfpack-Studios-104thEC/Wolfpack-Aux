/*
 * Author: Maldova
 * 
 * Sox and the 21st NC: If you see this you are free to use this as a thanks for helping me with the stun code!
 *
 * Arguments:
 * 0: Unit 
 * 1: Unit 
 * 2: Ammo 
 *
 * Example:
 * [Target,Shooter,"WPEC_D19"] call WPEC_Weapon_fnc_onHitConcussion;
 *
 * Return Value:
 * None
 *
 */

params ["_target","_shooter", "_ammo"];

if (getNumber(configFile >> "CfgWeapons" >> Uniform _target >> "WPEC_isBX") == 1) exitWith {false;};

if (getNumber(configFile >> "CfgWeapons" >> Uniform _target >> "WPEC_isB2") == 1) exitWith {false;};

if (getNumber(configFile >> "CfgWeapons" >> Uniform _target >> "WPEC_isTSeries") == 1) exitWith {false;};

private _concussionDuration = random[5,30,60];

if (getNumber(configFile >> "CfgWeapons" >> Uniform _target >> "WPEC_isCloneTrooper") == 1) then 
{
	_concussionDuration = 10;
};

private _targetPos = getPos _target;

private _concussedUntilTime = _target getVariable ["WPEC_isconcussedUntil", CBA_missionTime];
private _isconcussed = _target getVariable ["WPEC_isconcussed",false];

if(_concussedUntilTime < CBA_missionTime) then 
{
	_concussedUntilTime = CBA_missionTime + _concussedUntilTime;
};

if (getNumber(configFile >> "CfgWeapons" >> Uniform _target >> "JLTS_isDroid") == 0) then
{
	playSound3D 
	[
		selectRandom
		[
			"WPEC\WPEC_Weapons\Sounds\General\HumanInjuredGroan-01.ogg",
			"WPEC\WPEC_Weapons\Sounds\General\HumanInjuredGroan-02.ogg",
			"WPEC\WPEC_Weapons\Sounds\General\HumanInjuredGroan-03.ogg",
			"WPEC\WPEC_Weapons\Sounds\General\HumanInjuredGroan-04.ogg",
			"WPEC\WPEC_Weapons\Sounds\General\HumanInjuredGroan-05.ogg",
			"WPEC\WPEC_Weapons\Sounds\General\HumanInjuredGroan-06.ogg"
		],
		_target,
		false,
		_targetPos,
		5, 0.7, 50
	];	
};
if (getNumber(configFile >> "CfgWeapons" >> Uniform _target >> "JLTS_isDroid") == 1 || getNumber(configFile >> "CfgWeapons" >> Uniform _target >> "WPEC_isB1") == 1) then
{
	playSound3D 
	[
		selectRandom
		[
			"WPEC\WPEC_Weapons\Sounds\General\B1BattleDroid_NonLethal_Injured-01.ogg",
			"WPEC\WPEC_Weapons\Sounds\General\B1BattleDroid_NonLethal_Injured-02.ogg",
			"WPEC\WPEC_Weapons\Sounds\General\B1BattleDroid_NonLethal_Injured-03.ogg",
			"WPEC\WPEC_Weapons\Sounds\General\B1BattleDroid_NonLethal_Injured-04.ogg"
		],
		_target,
		false,
		_targetPos,
		5, 0.7, 50
	];	
};
_target setVariable ["WPEC_isconcussedUntil", _concussedUntilTime + _concussionDuration, true];

private _newconcussedUntil = _target getVariable ["WPEC_isconcussedUntil", _concussedUntilTime];
_target setVariable ["WPEC_isconcussedUntil", _newconcussedUntil, true];

private _newconcussionDuration = _newconcussedUntil - CBA_missionTime;

[_target, true, _newconcussionDuration, true] call ACE_medical_fnc_setUnconscious;
