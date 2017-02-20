#include "..\..\script_macros.hpp"
/*
    File: fn_clearVehicleAmmo.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Clears the vehicle of ammo types that we don't want.

    Syntax: _vehicle removeMagazinesTurret [magazineName, turretPath]
    Documentation: https://community.bistudio.com/wiki/removeMagazinesTurret
*/
private ["_vehicle","_veh"];
_vehicle = [_this,0,objNull,[objNull]] call BIS_fnc_param;
if (isNull _vehicle) exitWith {};
_veh = typeOf _vehicle;

if(_veh isEqualTo "O_APC_Wheeled_02_rcws_F") then {
	_vehicle removeMagazinesTurret ["96Rnd_40mm_G_belt",[0]];
	_vehicle removeMagazinesTurret ["500Rnd_127x99_mag_Tracer_Green",[200]];
};

if(_veh isEqualTo "B_Heli_Light_01_armed_F") then {
	_vehicle removeMagazinesTurret ["24Rnd_missiles",[3]];
	_vehicle removeMagazinesTurret ["5000Rnd_762x51_Belt",[1200]];
};

if(_veh isEqualTo "EAL_Humming_armed") then {
	_vehicle removeMagazinesTurret ["24Rnd_missiles",[3]];
	_vehicle removeMagazinesTurret ["5000Rnd_762x51_Belt",[1200]];
};

if(_veh isEqualTo "I_Heli_light_03_F") then {
	_vehicle removeMagazinesTurret ["5000Rnd_762x51_Yellow_Belt",[800]];
	_vehicle removeMagazinesTurret ["24Rnd_missiles",[6]];
};

if(_veh isEqualTo "EAL_Hellcat_LanPol_armed") then {
	_vehicle removeMagazinesTurret ["5000Rnd_762x51_Yellow_Belt",[800]];
	_vehicle removeMagazinesTurret ["24Rnd_missiles",[6]];
};

if(_veh isEqualTo "EAL_Hellcat_BPol_armed") then {
	_vehicle removeMagazinesTurret ["5000Rnd_762x51_Yellow_Belt",[800]];
	_vehicle removeMagazinesTurret ["24Rnd_missiles",[6]];
};

if(_veh isEqualTo "EAL_Hellcat_SEK_armed") then {
	_vehicle removeMagazinesTurret ["5000Rnd_762x51_Yellow_Belt",[800]];
	_vehicle removeMagazinesTurret ["24Rnd_missiles",[6]];
};

if(_veh isEqualTo "B_UGV_01_rcws_F") then {
	_vehicle removeMagazinesTurret ["200Rnd_40mm_G_belt",[0]];
};

if(_veh isEqualTo "O_Heli_light_02_F") then {
	_vehicle removeMagazinesTurret ["2000Rnd_65x39_Belt_Tracer_Green_Splash",[800]];
	_vehicle removeMagazinesTurret ["12Rnd_PG_missiles",[6]];
};

if(_veh isEqualTo "EAL_Orca_armed") then {
	_vehicle removeMagazinesTurret ["2000Rnd_65x39_Belt_Tracer_Green_Splash",[800]];
	_vehicle removeMagazinesTurret ["12Rnd_PG_missiles",[6]];
};

if(_veh isEqualTo "O_Heli_Attack_02_F") then {
	_vehicle removeMagazinesTurret ["250Rnd_30mm_APDS_shells",[0]];
	_vehicle removeMagazinesTurret ["250Rnd_30mm_HE_shells",[90]];
	_vehicle removeMagazinesTurret ["8Rnd_LG_scalpel",[1]];
	_vehicle removeMagazinesTurret ["38Rnd_80mm_rockets",[1]];
};

if(_veh isEqualTo "B_Heli_Attack_01_F") then {
	_vehicle removeMagazinesTurret ["1000Rnd_20mm_shells",[250]];
	_vehicle removeMagazinesTurret ["24Rnd_PG_missiles",[12]];
};

if(_veh isEqualTo "I_Plane_Fighter_03_AA_F") then {
	_vehicle removeMagazinesTurret ["300Rnd_20mm_shells",[100]];
};

clearWeaponCargoGlobal _vehicle;
clearMagazineCargoGlobal _vehicle;
clearItemCargoGlobal _vehicle;
clearBackpackCargoGlobal _vehicle;
