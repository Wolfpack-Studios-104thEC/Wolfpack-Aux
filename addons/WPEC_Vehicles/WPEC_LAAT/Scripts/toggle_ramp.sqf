params ["_this", "_player"];

_canOpen = true;

// check if the player is the driver
_driver = driver _this;
//hint str _driver;

if ( _driver != _player ) then {
	hint "You are not authorized!";
	_player action ["Eject", vehicle _player];
	_canOpen = false;
};

// get animation state
_rampState = _this animationphase 'ramp'; // 0 is closed
//hint str _rampState;
if _canOpen then {
	switch _rampState do 
	{
		case 0:
		{
			// ramp is closed, open it
			//hint "Opening...";
			_this animateSource ['ramp',1,1];
		};
		case 1:
		{
			// ramp is open, close it
			//hint "Closing...";
			_this animateSource ['ramp',0,1];
		};
		// default { hint "Default case"; };
	};
};
