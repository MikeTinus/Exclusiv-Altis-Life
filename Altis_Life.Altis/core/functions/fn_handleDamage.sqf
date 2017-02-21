#include "..\..\script_macros.hpp"
/*
    File: fn_handleDamage.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Handles damage, specifically for handling the 'tazer' pistol and nothing else.
*/
#include "\z\ace\addons\medical\script_component.hpp"
params [
    ["_unit",objNull,[objNull]],
    ["_part","",[""]],
    ["_damage",0,[0]],
    ["_source",objNull,[objNull]],
    ["_projectile","",[""]],
    ["_index",0,[0]]
];

//Handle the tazer first (Top-Priority).
if (!isNull _source) then {
    if (_source != _unit) then {
        if (currentWeapon _source in ["EAL_hgun_P07_snds_F","EAL_arifle_SDAR_F","EAL_hgun_PDW2000_snds_F"] && _projectile in ["EAL_B_9x21_Ball","EAL_B_556x45_dual"]) then {
            _damage = 0;
            if (alive player && !life_istazed && !life_isknocked && !life_isdowned && !(_unit getVariable ["restrained",false])) then {
                private ["_distance"];
                _distance = 75;
                if (_projectile == "EAL_B_556x45_dual") then {_distance = 120;};
                if (_unit distance _source < _distance) then {
                    if (vehicle player != player) then {
                        if (typeOf (vehicle player) == "B_Quadbike_01_F") then {
                            player action ["Eject",vehicle player];
                            [_unit,_source] spawn life_fnc_tazed;
                        };
                    } else {
						[_unit,_source] spawn life_fnc_tazed;
                    };
                };
            };
        };
    };
};

//rubber bullets
if (!isNull _source) then {
    if (_source != _unit) then {
        if (currentWeapon _source in ["EAL_srifle_LRR_F","EAL_arifle_Mk20C_plain_F","EAL_hgun_ACPC2_snds_F","EAL_hgun_Pistol_heavy_01_MRD_F","EAL_LMG_Mk200_F","HMG_127_APC"] && _projectile in ["EAL_B_408_Ball","EAL_B_556x45_Ball_Tracer_Red","EAL_B_45ACP_Ball","EAL_B_65x39_Caseless_yellow","B_127x99_Ball_Tracer_Green"]) then {
            _damage = 0;
            if (alive player && !life_istazed && !life_isknocked && !life_isdowned && !(_unit getVariable ["restrained",false])) then {
				if (vehicle player != player) then {
                    if (typeOf (vehicle player) == "B_Quadbike_01_F") then {
                        player action ["Eject",vehicle player];
						[_unit,_source] spawn life_fnc_handleDowned;
                    };
                } else {
					[_unit,_source] spawn life_fnc_handleDowned;
                };
            };
        };
    };
};

[] spawn life_fnc_hudUpdate;
_damage;