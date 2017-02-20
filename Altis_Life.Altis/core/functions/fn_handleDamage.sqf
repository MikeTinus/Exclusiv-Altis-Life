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
        if (currentWeapon _source in ["hgun_P07_snds_F","arifle_SDAR_F","hgun_PDW2000_snds_F"] && _projectile in ["B_9x21_Ball","B_556x45_dual"]) then {
            _damage = 0;
            if (alive player && !life_istazed && !life_isknocked && !life_isdowned && !(_unit getVariable ["restrained",false])) then {
                private ["_distance"];
                _distance = 75;
                if (_projectile == "B_556x45_dual") then {_distance = 120;};
                if (_unit distance _source < _distance) then {
                    if (vehicle player != player) then {
                        if (typeOf (vehicle player) == "B_Quadbike_01_F") then {
                            player action ["Eject",vehicle player];
							
							player setVariable [QGVAR(pain), 0, true];
							player setVariable [QGVAR(morphine), 0, true];
							player setVariable [QGVAR(bloodVolume), 100, true];
							player setVariable ["ACE_isUnconscious", false, true];
							player setvariable [QGVAR(tourniquets), [0,0,0,0,0,0], true];
							player setvariable [QGVAR(openWounds), [], true];
							player setvariable [QGVAR(bandagedWounds), [], true];
							player setVariable [QGVAR(internalWounds), [], true];
							player setvariable [QGVAR(lastUniqueWoundID), 1, true];
							player setVariable [QGVAR(heartRate), 80];
							player setvariable [QGVAR(heartRateAdjustments), []];
							player setvariable [QGVAR(bloodPressure), [80, 120]];
							player setVariable [QGVAR(peripheralResistance), 100];
							player setVariable [QGVAR(fractures), [], true];
							player setvariable [QGVAR(triageLevel), 0, true];
							player setvariable [QGVAR(triageCard), [], true];
							player setVariable [QGVAR(salineIVVolume), 0, true];
							player setVariable [QGVAR(plasmaIVVolume), 0, true];
							player setVariable [QGVAR(bloodIVVolume), 0, true];
							player setvariable [QGVAR(bodyPartStatus), [0,0,0,0,0,0], true];
							player setvariable [QGVAR(airwayStatus), 100];
							player setVariable [QGVAR(airwayOccluded), false];
							player setvariable [QGVAR(airwayCollapsed), false];
							player setvariable [QGVAR(addedToUnitLoop), false, true];
							player setvariable [QGVAR(inCardiacArrest), false, true];
							player setvariable [QGVAR(hasLostBlood), 0, true];
							player setvariable [QGVAR(isBleeding), false, true];
							player setvariable [QGVAR(hasPain), false, true];
							player setvariable [QGVAR(painSuppress), 0, true];
						
                            [_unit,_source] spawn life_fnc_tazed;
                        };
                    } else {
						[_unit,_source] spawn life_fnc_tazed;
						
						player setVariable [QGVAR(pain), 0, true];
						player setVariable [QGVAR(morphine), 0, true];
						player setVariable [QGVAR(bloodVolume), 100, true];
						player setVariable ["ACE_isUnconscious", false, true];
						player setvariable [QGVAR(tourniquets), [0,0,0,0,0,0], true];
						player setvariable [QGVAR(openWounds), [], true];
						player setvariable [QGVAR(bandagedWounds), [], true];
						player setVariable [QGVAR(internalWounds), [], true];
						player setvariable [QGVAR(lastUniqueWoundID), 1, true];
						player setVariable [QGVAR(heartRate), 80];
						player setvariable [QGVAR(heartRateAdjustments), []];
						player setvariable [QGVAR(bloodPressure), [80, 120]];
						player setVariable [QGVAR(peripheralResistance), 100];
						player setVariable [QGVAR(fractures), [], true];
						player setvariable [QGVAR(triageLevel), 0, true];
						player setvariable [QGVAR(triageCard), [], true];
						player setVariable [QGVAR(salineIVVolume), 0, true];
						player setVariable [QGVAR(plasmaIVVolume), 0, true];
						player setVariable [QGVAR(bloodIVVolume), 0, true];
						player setvariable [QGVAR(bodyPartStatus), [0,0,0,0,0,0], true];
						player setvariable [QGVAR(airwayStatus), 100];
						player setVariable [QGVAR(airwayOccluded), false];
						player setvariable [QGVAR(airwayCollapsed), false];
						player setvariable [QGVAR(addedToUnitLoop), false, true];
						player setvariable [QGVAR(inCardiacArrest), false, true];
						player setvariable [QGVAR(hasLostBlood), 0, true];
						player setvariable [QGVAR(isBleeding), false, true];
						player setvariable [QGVAR(hasPain), false, true];
						player setvariable [QGVAR(painSuppress), 0, true];
                    };
                };
            };
        };
    };
};

//rubber bullets
if (!isNull _source) then {
    if (_source != _unit) then {
        if (currentWeapon _source in ["srifle_LRR_F","arifle_Mk20C_plain_F","hgun_ACPC2_snds_F","hgun_Pistol_heavy_01_MRD_F","LMG_Mk200_F","HMG_127_APC"] && _projectile in ["B_408_Ball","B_556x45_Ball_Tracer_Red","B_45ACP_Ball","B_65x39_Caseless_yellow","B_127x99_Ball_Tracer_Green"]) then {
            _damage = 0;
            if (alive player && !life_istazed && !life_isknocked && !life_isdowned && !(_unit getVariable ["restrained",false])) then {
				if (vehicle player != player) then {
                    if (typeOf (vehicle player) == "B_Quadbike_01_F") then {
                        player action ["Eject",vehicle player];
						
						player setVariable [QGVAR(pain), 0, true];
						player setVariable [QGVAR(morphine), 0, true];
						player setVariable [QGVAR(bloodVolume), 100, true];
						player setVariable ["ACE_isUnconscious", false, true];
						player setvariable [QGVAR(tourniquets), [0,0,0,0,0,0], true];
						player setvariable [QGVAR(openWounds), [], true];
						player setvariable [QGVAR(bandagedWounds), [], true];
						player setVariable [QGVAR(internalWounds), [], true];
						player setvariable [QGVAR(lastUniqueWoundID), 1, true];
						player setVariable [QGVAR(heartRate), 80];
						player setvariable [QGVAR(heartRateAdjustments), []];
						player setvariable [QGVAR(bloodPressure), [80, 120]];
						player setVariable [QGVAR(peripheralResistance), 100];
						player setVariable [QGVAR(fractures), [], true];
						player setvariable [QGVAR(triageLevel), 0, true];
						player setvariable [QGVAR(triageCard), [], true];
						player setVariable [QGVAR(salineIVVolume), 0, true];
						player setVariable [QGVAR(plasmaIVVolume), 0, true];
						player setVariable [QGVAR(bloodIVVolume), 0, true];
						player setvariable [QGVAR(bodyPartStatus), [0,0,0,0,0,0], true];
						player setvariable [QGVAR(airwayStatus), 100];
						player setVariable [QGVAR(airwayOccluded), false];
						player setvariable [QGVAR(airwayCollapsed), false];
						player setvariable [QGVAR(addedToUnitLoop), false, true];
						player setvariable [QGVAR(inCardiacArrest), false, true];
						player setvariable [QGVAR(hasLostBlood), 0, true];
						player setvariable [QGVAR(isBleeding), false, true];
						player setvariable [QGVAR(hasPain), false, true];
						player setvariable [QGVAR(painSuppress), 0, true];
						
						[_unit,_source] spawn life_fnc_handleDowned;
                    };
                } else {
					[_unit,_source] spawn life_fnc_handleDowned;
					
					player setVariable [QGVAR(pain), 0, true];
					player setVariable [QGVAR(morphine), 0, true];
					player setVariable [QGVAR(bloodVolume), 100, true];
					player setVariable ["ACE_isUnconscious", false, true];
					player setvariable [QGVAR(tourniquets), [0,0,0,0,0,0], true];
					player setvariable [QGVAR(openWounds), [], true];
					player setvariable [QGVAR(bandagedWounds), [], true];
					player setVariable [QGVAR(internalWounds), [], true];
					player setvariable [QGVAR(lastUniqueWoundID), 1, true];
					player setVariable [QGVAR(heartRate), 80];
					player setvariable [QGVAR(heartRateAdjustments), []];
					player setvariable [QGVAR(bloodPressure), [80, 120]];
					player setVariable [QGVAR(peripheralResistance), 100];
					player setVariable [QGVAR(fractures), [], true];
					player setvariable [QGVAR(triageLevel), 0, true];
					player setvariable [QGVAR(triageCard), [], true];
					player setVariable [QGVAR(salineIVVolume), 0, true];
					player setVariable [QGVAR(plasmaIVVolume), 0, true];
					player setVariable [QGVAR(bloodIVVolume), 0, true];
					player setvariable [QGVAR(bodyPartStatus), [0,0,0,0,0,0], true];
					player setvariable [QGVAR(airwayStatus), 100];
					player setVariable [QGVAR(airwayOccluded), false];
					player setvariable [QGVAR(airwayCollapsed), false];
					player setvariable [QGVAR(addedToUnitLoop), false, true];
					player setvariable [QGVAR(inCardiacArrest), false, true];
					player setvariable [QGVAR(hasLostBlood), 0, true];
					player setvariable [QGVAR(isBleeding), false, true];
					player setvariable [QGVAR(hasPain), false, true];
					player setvariable [QGVAR(painSuppress), 0, true];
                };
            };
        };
    };
};

[] spawn life_fnc_hudUpdate;
_damage;