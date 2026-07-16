if (!(hasInterface) or (isDedicated)) exitWith {};
[] spawn
{
	waitUntil {
		!isNull findDisplay 46
	};
	sleep 1;
	(findDisplay 46) displayAddEventHandler ["MouseButtonDown", {
		_unit = missionNamespace getVariable["bis_fnc_moduleRemoteControl_unit", player];
		if ((animationState _unit in ["rotary_proper_walkfr", "rotary_proper_walkfl", "rotary_proper_walkr", "rotary_proper_walkl", "rotary_proper_walkbr", "rotary_proper_walkbl", "rotary_proper_walkb", "rotary_proper_walk", "rotary_proper_turnr", "rotary_proper_turnl", "rotary_proper_toidle", "rotary_proper_idle"]) or
		!(currentWeapon _unit in ["WPEC_3AS_Z6_Stance"]) or
		(dialog) or
		(_this select 1 != 0) or
		(weaponLowered _unit) or
		(stance _unit != "STAND") or
		!(isTouchingGround _unit) or
		!(isNull objectParent _unit) or
		!(alive _unit) or
		(visibleMap)) exitWith {};
		[_unit, "Rotary_Proper_ToIdle"] remoteExec ["switchMove", 0];
		[_unit, "Rotary_Proper_ToIdle"] remoteExec ["playMoveNow", 0];
		playSound3D [selectRandom ["Z\wpec\addons\weapons\weapons\primaries\z6stance\sounds\minigunDeploy_1.ogg", "Z\wpec\addons\weapons\weapons\primaries\z6stance\sounds\minigunDeploy_2.ogg"], _unit, false, aimPos _unit, 1, 1, 40, 0, false];
	}];
};