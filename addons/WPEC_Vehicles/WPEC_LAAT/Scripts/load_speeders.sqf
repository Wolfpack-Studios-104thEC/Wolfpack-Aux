params ["_this"];

_canSpawn = true;

if ( isEngineOn _this ) then {
	//hint "Engine is On...";
	_canSpawn = false;
};

_vicSpeed = speed _this;
if ( _vicSpeed > 1 ) then 
{
	//hint "Vehicle is moving...";
	_canSpawn = false;
};

_cargo = getVehicleCargo _this;
//hint str _cargo;

if ( (count _cargo == 0) && _canSpawn ) then 
{
	speeder1 = createVehicle ["3AS_BARC", [0,1,40], [], 0, "NONE"];
	speeder2 = createVehicle ["3AS_BARC", [0,2,50], [], 0, "NONE"];

	loaded1 = _this setVehicleCargo speeder1;
	loaded2 = _this setVehicleCargo speeder2;
} else {
	//hint "Vehicles can not be loaded";
};
