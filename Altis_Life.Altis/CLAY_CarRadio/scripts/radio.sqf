
disableSerialization;
CLAY_RadioDialog = createDialog "CLAY_CarRadio_RadioDlg";


If (CLAY_RadioShowTooltips) Then
{
	_display = findDisplay 666;

	_control = _display displayCtrl 603;
	_control ctrlSetTooltip "Lauter";
	_control ctrlCommit 0;

	_control = _display displayCtrl 604;
	_control ctrlSetTooltip "Leister";
	_control ctrlCommit 0;

	_control = _display displayCtrl 615;
	_control ctrlSetTooltip "Vorheriger Track";
	_control ctrlCommit 0;

	_control = _display displayCtrl 616;
	_control ctrlSetTooltip "Naechster Track";
	_control ctrlCommit 0;

	_control = _display displayCtrl 617;
	_control ctrlSetTooltip "Naechste Playlist";
	_control ctrlCommit 0;

	_control = _display displayCtrl 618;
	_control ctrlSetTooltip "Vorherige Playlist";
	_control ctrlCommit 0;

	_control = _display displayCtrl 619;
	_control ctrlSetTooltip "Schließen";
	_control ctrlCommit 0;

	_control = _display displayCtrl 620;
	_control ctrlSetTooltip "Playlist Editor oeffnen";
	_control ctrlCommit 0;

	_control = _display displayCtrl 621;
	_control ctrlSetTooltip "Wiederholen AN/AUS";
	_control ctrlCommit 0;

	_control = _display displayCtrl 622;
	_control ctrlSetTooltip "Zufall AN/AUS";
	_control ctrlCommit 0;

	_control = _display displayCtrl 626;
	_control ctrlSetTooltip "Play/Pause";
	_control ctrlCommit 0;

	_control = _display displayCtrl 634;
	_control ctrlSetTooltip "Hinzufuegen";
	_control ctrlCommit 0;

	_control = _display displayCtrl 635;
	_control ctrlSetTooltip "Alle hinzufuegen";
	_control ctrlCommit 0;

	_control = _display displayCtrl 636;
	_control ctrlSetTooltip "Ausgewaehlten Track entfernen";
	_control ctrlCommit 0;

	_control = _display displayCtrl 637;
	_control ctrlSetTooltip "Alle Tracks entfernen";
	_control ctrlCommit 0;

	_control = _display displayCtrl 640;
	_control ctrlSetTooltip "User-Defined Playlist wiederherstellen";
	_control ctrlCommit 0;
};


If (CLAY_RadioPlaying) Then
{
	_title = (CLAY_RadioPlayList select CLAY_RadioTrack) select 1;
	ctrlSetText [610, _title];
	ctrlSetText [626, "||"];
}
Else
{
	playMusic "";
};

switch (CLAY_RadioSrc) do
{
	case 1:
	{
		CLAY_RadioPlayList = CLAY_RadioGameMusic;
		ctrlSetText [611, "Kartell Radio"];
	};
	case 2:
	{
		CLAY_RadioPlayList = CLAY_RadioGameMusicOA;
		ctrlSetText [611, "Arma Musik"];
	};
	case 3:
	{
		If (isNil "CLAY_RadioAddMusic") Then
		{
			CLAY_RadioPlayList = [];
		}
		Else
		{
			CLAY_RadioPlayList = CLAY_RadioAddMusic;
		};
		ctrlSetText [611, "User Musik"];
	};
	case 4:
	{
		If (isNil "CLAY_RadioAddMusic") Then
		{
			CLAY_RadioPlayList = CLAY_RadioGameMusic + CLAY_RadioGameMusicOA;
		}
		Else
		{
			CLAY_RadioPlayList = CLAY_RadioGameMusic + CLAY_RadioGameMusicOA + CLAY_RadioAddMusic;
		};
		ctrlSetText [611, "Alle Songs"];
	};
	case 5:
	{
		CLAY_RadioPlayList = CLAY_RadioCustomMusic;
		ctrlSetText [611, "Custom"];
	};
};

If (CLAY_RadioRepeat) Then
{
	ctrlSetText [612, "Wiederholen"];
};

If (CLAY_RadioRandom) Then
{
	ctrlSetText [613, "Zufallige Wiedergabe"];
};

CLAY_RadioVol = CLAY_RadioVol - 0.05;
CLAY_RadioVolStep = CLAY_RadioVolStep - 1;
["volUp"] execVM "CLAY_CarRadio\scripts\settings.sqf";
