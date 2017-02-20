/*
	File: fn_evac_end.sqf
*/
private["_source"];
_source = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
if(isNull _source) exitWith {};
_source say3D "evac_end";
sleep 10;
life_evac_active = false;