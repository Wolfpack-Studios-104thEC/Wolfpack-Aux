_this spawn {
	params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile"];

	private _shieldTime = 30;
	private _shieldClass = "PersonalShield_Republic";

	private _fullShieldTime = 60;
	private _fullShieldClass = "PersonalShieldFull_Republic";

	private _squadShieldTime = 240;
	private _squadShieldDeployedClass = "SquadShield_Republic";

	private _DEBUG = false;

	switch (_ammo) do {
		case "104th_PersonalShield_Republic_Ammo": {
			// Create _shieldClass
			private _shield = _shieldClass createVehicle getPos _unit;

			// Enable Sound
			// playSound3D ["3AS\3AS_Shield\shield_grenade\enable.ogg", player];
			playSound3D ["3AS\3AS_Shield\shield_grenade\enable.ogg", player, false, getPos player, 5, 0.7, 25];

			// Attach to player
			_shield attachTo [_unit, [0.3, 1, -0.3], "Weapon", true]; _shield setdir 0;
			if (_DEBUG) then {
				hint "Attached Personal Shield";
			};

			// Delay time
			sleep _shieldTime;

			if (_DEBUG) then {
				hint "Removing Personal Shield";
			};

			// Play shutdown sound
			// playSound3D ["3AS\3AS_Shield\shield_grenade\disable.ogg", player];
			playSound3D ["3AS\3AS_Shield\shield_grenade\disable.ogg", player, false, getPos player, 5, 0.7, 25];

			sleep 0.5;

			// Detach from Player
			detach _shield;

			// Destroy Shield
			deleteVehicle _shield;
		};
		case "104th_PersonalShieldFull_Republic_Ammo": {
		
			// Create _shieldClass
			private _shield = _fullShieldClass createVehicle getPos _unit;

			// Enable Sound
			// playSound3D ["3AS\3AS_Shield\shield_grenade\enable.ogg", player];
			playSound3D ["3AS\3AS_Shield\shield_grenade\enable.ogg", player, false, getPos player, 5, 0.7, 25];

			// Attach to player
			_shield attachTo [_unit, [0, 0.25,-0.7], "Pelvis", true];

			if (_DEBUG) then {
				hint "Attached Personal Shield";
			};

			// Delay time
			sleep _fullShieldTime;

			if (_DEBUG) then {
				hint "Removing Personal Shield";
			};

			// Play shutdown sound
			// playSound3D ["3AS\3AS_Shield\shield_grenade\disable.ogg", player];
			playSound3D ["3AS\3AS_Shield\shield_grenade\disable.ogg", player, false, getPos player, 5, 0.7, 25];

			sleep 0.5;

			// Detach from Player
			detach _shield;

			// Destroy Shield
			deleteVehicle _shield;
		};
		case "104th_SquadShield_Republic_Ammo": {
			// Delay a little
			//sleep 0.95;
			
			private _velocity = vectorMagnitude (velocity _projectile);
			
			while {_velocity > 0.1} do
			{
				_velocity = vectorMagnitude (velocity _projectile);
				sleep 0.1;
			};
			
			private _offset = 0.2;
			private _position = getPosATL _projectile vectorAdd [0,0,_offset];

			//private _shieldGenDep = _squadShieldDeployedClass createVehicle getPos _projectile;
			private _shieldGenDep = createVehicle [_squadShieldDeployedClass, _position, [], 0, "CAN_COLLIDE"];
			deleteVehicle _projectile;
			//_shieldGenDep setPos _position;

			playSound3D ["3AS\3AS_Shield\shield_grenade\enable.ogg", _shieldGenDep, false, getPos _shieldGenDep, 5, 0.7, 50];

			sleep _squadShieldTime;

			playSound3D ["3AS\3AS_Shield\shield_grenade\disable.ogg", _shieldGenDep, false, getPos _shieldGenDep, 5, 0.7, 50];

			sleep 0.5;

			deleteVehicle _shieldGenDep;
		};
	};
};