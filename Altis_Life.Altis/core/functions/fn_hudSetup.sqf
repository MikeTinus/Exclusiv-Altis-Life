#include "..\..\script_macros.hpp"
/*
    File: fn_hudSetup.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Setups the hud for the player?
*/
disableSerialization;

cutRsc ["playerHUD", "PLAIN", 2, false];
[] call life_fnc_hudUpdate;

[] spawn
{
	while{true}do{
		[] call life_fnc_hudUpdate;
		sleep 5;
	};
};
