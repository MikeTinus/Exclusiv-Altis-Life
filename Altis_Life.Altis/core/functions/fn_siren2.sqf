/*
	File: fn_evac_start.sqf
	
		Parameter(s):
			0: Object
			1: Soundfile
			2: ...
			3: ...
	

	Example: [[param1,],"life_fnc_playsound",true,false] spawn life_fnc_MP;

*/


private["_param1"];
_param1 = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;



	_param1 say3D "siren2";

	sleep 20;
	life_siren2_active = false;