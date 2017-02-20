#include "..\..\script_macros.hpp"
/*
    File: fn_sirenLights.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Lets play a game! Can you guess what it does? I have faith in you, if you can't
    then you have failed me and therefor I lose all faith in humanity.. No pressure.
*/
private ["_vehicle"];
_vehicle = param [0,objNull,[objNull]];
if (isNull _vehicle) exitWith {}; //Bad entry!
if (!(typeOf _vehicle in ["I_MRAP_03_F","B_MRAP_01_HMG_F","B_MRAP_01_GMG_F","C_Hatchback_01_sport_F","C_Hatchback_01_F","B_Heli_Light_01_F","I_Heli_light_03_unarmed_F","O_Heli_Light_02_unarmed_F","C_Van_01_box_F","B_G_Offroad_01_F","C_Offroad_01_F","B_MRAP_01_F","C_SUV_01_F","B_Heli_Transport_01_F","B_Quadbike_01_F","EAL_Offroad_LanPol","EAL_Offroad_SEK","EAL_Hunter_LanPol","EAL_Hunter_LanPol_HMG","EAL_Hunter_LanPol_GMG","EAL_Hunter_BPol","EAL_Hunter_BPol_HMG","EAL_Hunter_BPol_GMG","EAL_Hunter_SEK","EAL_Hunter_SEK_HMG","EAL_Hunter_SEK_GMG","EAL_Strider","EAL_SUV","EAL_Humming","EAL_Orca","EAL_Ghosthawk","EAL_Limousine","EAL_Limousine_HW","EAL_Limousine_sport","EAL_Limousine_sport_HW"])) exitWith {}; //Last chance check to prevent something from defying humanity and creating a monster.

_trueorfalse = _vehicle getVariable ["lights",false];

if (_trueorfalse) then {
    _vehicle setVariable ["lights",false,true];
} else {
    _vehicle setVariable ["lights",true,true];
    [_vehicle,0.22] remoteExec ["life_fnc_copLights",RCLIENT];
};