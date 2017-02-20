#include "..\script_macros.hpp"
/*
    File: fn_survival.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    All survival? things merged into one thread.
*/
private ["_fnc_food","_fnc_water","_foodTime","_waterTime","_bp","_walkDis","_lastPos","_curPos"];
_fnc_food =  {
    if (life_hunger < 2) then {player setDamage 1; hint localize "STR_NOTF_EatMSG_Death";}
    else
    {
        life_hunger = life_hunger - 10;
        [] call life_fnc_hudUpdate;
        if (life_hunger < 2) then {player setDamage 1; hint localize "STR_NOTF_EatMSG_Death";};
        switch (life_hunger) do {
            case 30: {hint localize "STR_NOTF_EatMSG_1";};
            case 20: {hint localize "STR_NOTF_EatMSG_2";};
            case 10: {
                hint localize "STR_NOTF_EatMSG_3";
                if (LIFE_SETTINGS(getNumber,"enable_fatigue") isEqualTo 1) then {player setFatigue 1;};
            };
        };
    };
};

_fnc_water = {
    if (life_thirst < 2) then {player setDamage 1; hint localize "STR_NOTF_DrinkMSG_Death";}
    else
    {
        life_thirst = life_thirst - 10;
        [] call life_fnc_hudUpdate;
        if (life_thirst < 2) then {player setDamage 1; hint localize "STR_NOTF_DrinkMSG_Death";};
        switch (life_thirst) do  {
            case 30: {hint localize "STR_NOTF_DrinkMSG_1";};
            case 20: {
                hint localize "STR_NOTF_DrinkMSG_2";
                if (LIFE_SETTINGS(getNumber,"enable_fatigue") isEqualTo 1) then {player setFatigue 1;};
            };
            case 10: {
                hint localize "STR_NOTF_DrinkMSG_3";
                if (LIFE_SETTINGS(getNumber,"enable_fatigue") isEqualTo 1) then {player setFatigue 1;};
            };
        };
    };
};

//Setup the time-based variables.
_foodTime = time;
_waterTime = time;
_walkDis = 0;
_bp = "";
_lastPos = visiblePosition player;
_lastPos = (_lastPos select 0) + (_lastPos select 1);
_lastState = vehicle player;

for "_i" from 0 to 1 step 0 do {
    /* Thirst / Hunger adjustment that is time based */
    if ((time - _waterTime) > 600) then {[] call _fnc_water; _waterTime = time;};
    if ((time - _foodTime) > 850) then {[] call _fnc_food; _foodTime = time;};

    /* Adjustment of carrying capacity based on backpack changes */
    if (backpack player isEqualTo "") then {
        life_maxWeight = LIFE_SETTINGS(getNumber,"total_maxWeight");
        _bp = backpack player;
    } else {
        if (!(backpack player isEqualTo "") && {!(backpack player isEqualTo _bp)}) then {
            _bp = backpack player;
            life_maxWeight = LIFE_SETTINGS(getNumber,"total_maxWeight") + round(FETCH_CONFIG2(getNumber,"CfgVehicles",_bp,"maximumload") / 4);
        };
    };

    /* Check if the player's state changed? */
    if (vehicle player != _lastState || {!alive player}) then {
        [] call life_fnc_updateViewDistance;
        _lastState = vehicle player;
    };

    /* Check if the weight has changed and the player is carrying to much */
    if (life_carryWeight > life_maxWeight && {!isForcedWalk player}) then {
        player forceWalk true;
        if (LIFE_SETTINGS(getNumber,"enable_fatigue") isEqualTo 1) then {player setFatigue 1;};
        hint localize "STR_NOTF_MaxWeight";
    } else {
        if (isForcedWalk player) then {
            player forceWalk false;
        };
    };

    /* Travelling distance to decrease thirst/hunger which is captured every second so the distance is actually greater then 650 */
    if (!alive player) then {_walkDis = 0;} else {
        _curPos = visiblePosition player;
        _curPos = (_curPos select 0) + (_curPos select 1);
        if (!(_curPos isEqualTo _lastPos) && {(isNull objectParent player)}) then {
            _walkDis = _walkDis + 1;
            if (_walkDis isEqualTo 650) then {
                _walkDis = 0;
                life_thirst = life_thirst - 5;
                life_hunger = life_hunger - 5;
                [] call life_fnc_hudUpdate;
            };
        };
        _lastPos = visiblePosition player;
        _lastPos = (_lastPos select 0) + (_lastPos select 1);
    };
    uiSleep 1;
};

//TFAR - Task Force Radio - ChannelCheck:
/*
[] spawn
{
	private["_ChannelName","_ServerName","_isTeamSpeakPluginEnabled"];
	sleep 15;
	while{true}do
	{
		_ChannelName = call TFAR_fnc_getTeamSpeakChannelName;
		_ServerName = call TFAR_fnc_getTeamSpeakServerName;
		_isTeamSpeakPluginEnabled = call TFAR_fnc_isTeamSpeakPluginEnabled;
		_DarfNixSehen = false;
		_IstAdmin = ((call life_adminlevel) > 0);
		_WhiteListedChannels = ["TaskForceRadio"];
		if(!_IstAdmin && _ServerName != "[GER] Exclusiv Altis Life PRE-ALPHA v0.0.3.0 | exclusivgaming.de | ts.exclusivgaming.de" )then{_DarfNixSehen = true;};
		if(!_IstAdmin && !(_ChannelName in _WhiteListedChannels) )then{_DarfNixSehen = true;};
		if(!_IstAdmin && !_isTeamSpeakPluginEnabled )then{_DarfNixSehen = true;};
		if(_DarfNixSehen) then{cutText["Falscher Channel/Server oder TFAR Plugin nicht aktiviert.","BLACK FADED"];}else{cutText ["","PLAIN"];};
		sleep 3;
	};
};
*/

[] spawn
{
	while {true} do
	{
		waitUntil {(life_drug > 0)};
		while{(life_drug > 0)} do {

			if(life_drug > 0.08) then {
			sleep 60;
			[] spawn life_fnc_suechtig;
			hint "Sie sollten bei einem Notarzt vorbei schauen! Sie sind stark drogenabhängig!";
			sleep 240;
			};
		};
		
		if(player getVariable "ACE_isUnconscious") then {
			_action = [
				format["Du bist ohnmächtig. Mit letzter Kraft kannst du dein Handy ziehen. Möchtest du einen Notarzt über deine Lage informieren? Wenn nicht, hast du noch ca 10 Minuten zu leben."],
				"Ohnmächtig",
				localize "STR_Global_Yes",
				localize "STR_Global_No"
			] call BIS_fnc_guiMessage;
			life_corpse = player;
			if(!isNil "_action" && {_action}) then {
				[] call life_fnc_requestMedic;
				_medicsOnline = {_x != player && {side _x == independent} && {alive _x}} count playableUnits > 0;
				if(!_medicsOnline) then {
					_action = [
						format["Kein Notarzt hat auf deine Nachricht geantwortet. Wenn eine Person dich findet, kann sie dich in einn Krankenhaus bringen und dort von einem Artzt behandeln lassen."],
						"Niemand da",
						"Ok"
					] call BIS_fnc_guiMessage;
				};
			};
			
			life_unconscious = true;
		};
		
		if(!(player getVariable "ACE_isUnconscious") && life_unconscious) then {
			life_unconscious = false;
		};
	};
};
