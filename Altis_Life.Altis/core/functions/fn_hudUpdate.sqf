#include "..\..\script_macros.hpp"
/*
    File: fn_hudUpdate.sqf
    Author: Daniel Stuart

    Description:
    Updates the HUD when it needs to.
*/
disableSerialization;

if (isNull LIFEdisplay) then {[] call life_fnc_hudSetup;};
LIFEctrl(2200) progressSetPosition (life_hunger / 100);
LIFEctrl(2201) progressSetPosition (1 - (damage player));
LIFEctrl(2202) progressSetPosition (life_thirst / 100);

_health = "Gesund";
if((player getVariable "ACE_medical_pain") > 0) then {
	_health = "Schmerzen";
};

if(player getVariable "ACE_medical_isBleeding") then {
	_health = "Blutet";
};

LIFEctrl(1201) ctrlsetText _health;