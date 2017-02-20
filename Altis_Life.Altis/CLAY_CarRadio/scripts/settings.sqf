
disableSerialization;
switch (_this select 0) do
{
	case "volUp":
	{
		If (CLAY_RadioVol < 1) Then
		{
			CLAY_RadioVol = CLAY_RadioVol + 0.05;
			0 fadeMusic CLAY_RadioVol;
			CLAY_RadioVolStep = CLAY_RadioVolStep + 1;

			switch (CLAY_RadioVolStep) do
			{
				case 0:
				{
					ctrlSetText [608, "   <MUTE>   "];
				};
				case 1:
				{
					ctrlSetText [608, "|"];
				};
				case 2:
				{
					ctrlSetText [608, "||"];
				};
				case 3:
				{
					ctrlSetText [608, "|||"];
				};
				case 4:
				{
					ctrlSetText [608, "||||"];
				};
				case 5:
				{
					ctrlSetText [608, "|||||"];
				};
				case 6:
				{
					ctrlSetText [608, "||||||"];
				};
				case 7:
				{
					ctrlSetText [608, "|||||||"];
				};
				case 8:
				{
					ctrlSetText [608, "||||||||"];
				};
				case 9:
				{
					ctrlSetText [608, "|||||||||"];
				};
				case 10:
				{
					ctrlSetText [608, "||||||||||"];
				};
				case 11:
				{
					ctrlSetText [608, "|||||||||||"];
				};
				case 12:
				{
					ctrlSetText [608, "||||||||||||"];
				};
				case 13:
				{
					ctrlSetText [608, "|||||||||||||"];
				};
				case 14:
				{
					ctrlSetText [608, "||||||||||||||"];
				};
				case 15:
				{
					ctrlSetText [608, "|||||||||||||||"];
				};
				case 16:
				{
					ctrlSetText [608, "||||||||||||||||"];
				};
				case 17:
				{
					ctrlSetText [608, "|||||||||||||||||"];
				};
				case 18:
				{
					ctrlSetText [608, "||||||||||||||||||"];
				};
				case 19:
				{
					ctrlSetText [608, "|||||||||||||||||||"];
				};
				case 20:
				{
					ctrlSetText [608, "||||||||||||||||||||"];
				};
			};
		};
	};
	case "volDown":
	{
		If (CLAY_RadioVol > 0) Then
		{
			CLAY_RadioVol = CLAY_RadioVol - 0.05;
			0 fadeMusic CLAY_RadioVol;
			CLAY_RadioVolStep = CLAY_RadioVolStep - 1;

			switch (CLAY_RadioVolStep) do
			{
				case 0:
				{
					ctrlSetText [608, "   <MUTE>   "];
				};
				case 1:
				{
					ctrlSetText [608, "|"];
				};
				case 2:
				{
					ctrlSetText [608, "||"];
				};
				case 3:
				{
					ctrlSetText [608, "|||"];
				};
				case 4:
				{
					ctrlSetText [608, "||||"];
				};
				case 5:
				{
					ctrlSetText [608, "|||||"];
				};
				case 6:
				{
					ctrlSetText [608, "||||||"];
				};
				case 7:
				{
					ctrlSetText [608, "|||||||"];
				};
				case 8:
				{
					ctrlSetText [608, "||||||||"];
				};
				case 9:
				{
					ctrlSetText [608, "|||||||||"];
				};
				case 10:
				{
					ctrlSetText [608, "||||||||||"];
				};
				case 11:
				{
					ctrlSetText [608, "|||||||||||"];
				};
				case 12:
				{
					ctrlSetText [608, "||||||||||||"];
				};
				case 13:
				{
					ctrlSetText [608, "|||||||||||||"];
				};
				case 14:
				{
					ctrlSetText [608, "||||||||||||||"];
				};
				case 15:
				{
					ctrlSetText [608, "|||||||||||||||"];
				};
				case 16:
				{
					ctrlSetText [608, "||||||||||||||||"];
				};
				case 17:
				{
					ctrlSetText [608, "|||||||||||||||||"];
				};
				case 18:
				{
					ctrlSetText [608, "||||||||||||||||||"];
				};
				case 19:
				{
					ctrlSetText [608, "|||||||||||||||||||"];
				};
				case 20:
				{
					ctrlSetText [608, "||||||||||||||||||||"];
				};
			};
		};
	};
	case "sourceUp":
	{

		CLAY_RadioSrc = CLAY_RadioSrc + 1;
		If (CLAY_RadioSrc > 5) Then {CLAY_RadioSrc = 1};

		switch (CLAY_RadioSrc) do
		{
			case 1:
			{
				ctrlSetText [611, "Kartell Radio"];
				CLAY_RadioPlayList = CLAY_RadioGameMusic;

				CLAY_RadioEndTimer = true;
				CLAY_RadioPlaying = false;
				CLAY_RadioTrack = 0;

				["play"] execVM "CLAY_CarRadio\scripts\controls.sqf";
			};
			case 2:
			{
				ctrlSetText [611, "Arma Musik"];
				CLAY_RadioPlayList = CLAY_RadioGameMusicOA;

				CLAY_RadioEndTimer = true;
				CLAY_RadioPlaying = false;
				CLAY_RadioTrack = 0;

				["play"] execVM "CLAY_CarRadio\scripts\controls.sqf";
			};
			case 3:
			{
				ctrlSetText [611, "User Musik"];

				If (isNil "CLAY_RadioAddMusic") Then
				{
					Hint "ERROR!!!\n\nNo User Music defined!";
					CLAY_RadioPlayList = [];

					CLAY_RadioPlayList = [];
					CLAY_RadioEndTimer = true;
					CLAY_RadioPlaying = false;
					CLAY_RadioTrack = 0;

					playMusic "";
					ctrlSetText [610, ""];
					ctrlSetText [626, ">"];
				}
				Else
				{
					CLAY_RadioPlayList = CLAY_RadioAddMusic;

					If (count CLAY_RadioAddMusic == 0) Then
					{
						Hint "No User Music found!";

						CLAY_RadioPlayList = [];
						CLAY_RadioEndTimer = true;
						CLAY_RadioPlaying = false;
						CLAY_RadioTrack = 0;

						playMusic "";
						ctrlSetText [610, ""];
						ctrlSetText [626, ">"];
					}
					Else
					{
						CLAY_RadioEndTimer = true;
						CLAY_RadioPlaying = false;
						CLAY_RadioTrack = 0;

						["play"] execVM "CLAY_CarRadio\scripts\controls.sqf";
					};
				};
			};
			case 4:
			{
				ctrlSetText [611, "Alle Songs"];
				If (isNil "CLAY_RadioAddMusic") Then
				{
					CLAY_RadioPlayList = CLAY_RadioGameMusic + CLAY_RadioGameMusicOA;
				}
				Else
				{
					CLAY_RadioPlayList = CLAY_RadioGameMusic + CLAY_RadioGameMusicOA + CLAY_RadioAddMusic;
				};

				If (CLAY_RadioPlaying) Then
				{
					CLAY_RadioTrack = CLAY_RadioTrack + 61;
				}
				Else
				{
					["play"] execVM "CLAY_CarRadio\scripts\controls.sqf";
				};
			};
			case 5:
			{
				ctrlSetText [611, "Custom"];
				CLAY_RadioPlayList = CLAY_RadioCustomMusic;

				If (count CLAY_RadioCustomMusic == 0) Then
				{
					Hint "No Custom Playlist found!\n\nClick on 'Playlist' Button to create one.";

					CLAY_RadioPlayList = [];
					CLAY_RadioEndTimer = true;
					CLAY_RadioPlaying = false;
					CLAY_RadioTrack = 0;

					playMusic "";
					ctrlSetText [610, ""];
					ctrlSetText [626, ">"];
				}
				Else
				{
					CLAY_RadioEndTimer = true;
					CLAY_RadioPlaying = false;
					CLAY_RadioTrack = 0;

					["play"] execVM "CLAY_CarRadio\scripts\controls.sqf";
				};
			};
		};
	};
	case "sourceDown":
	{

		CLAY_RadioSrc = CLAY_RadioSrc - 1;
		If (CLAY_RadioSrc < 1) Then {CLAY_RadioSrc = 5};

		switch (CLAY_RadioSrc) do
		{
			case 1:
			{
				ctrlSetText [611, "Kartell Radio"];
				CLAY_RadioPlayList = CLAY_RadioGameMusic;

				CLAY_RadioEndTimer = true;
				CLAY_RadioPlaying = false;
				CLAY_RadioTrack = 0;

				["play"] execVM "CLAY_CarRadio\scripts\controls.sqf";
			};
			case 2:
			{
				ctrlSetText [611, "Arma Musik"];
				CLAY_RadioPlayList = CLAY_RadioGameMusicOA;

				CLAY_RadioEndTimer = true;
				CLAY_RadioPlaying = false;
				CLAY_RadioTrack = 0;

				["play"] execVM "CLAY_CarRadio\scripts\controls.sqf";
			};
			case 3:
			{
				ctrlSetText [611, "User Musik"];

				If (isNil "CLAY_RadioAddMusic") Then
				{
					Hint "ERROR!!!\n\nNo User Music defined!";
					CLAY_RadioPlayList = [];

					CLAY_RadioPlayList = [];
					CLAY_RadioEndTimer = true;
					CLAY_RadioPlaying = false;
					CLAY_RadioTrack = 0;

					playMusic "";
					ctrlSetText [610, ""];
					ctrlSetText [626, ">"];
				}
				Else
				{
					CLAY_RadioPlayList = CLAY_RadioAddMusic;

					If (count CLAY_RadioAddMusic == 0) Then
					{
						Hint "No User Music found!";

						CLAY_RadioPlayList = [];
						CLAY_RadioEndTimer = true;
						CLAY_RadioPlaying = false;
						CLAY_RadioTrack = 0;

						playMusic "";
						ctrlSetText [610, ""];
						ctrlSetText [626, ">"];
					}
					Else
					{
						If (CLAY_RadioTrack > 60) Then
						{
							CLAY_RadioTrack = CLAY_RadioTrack - 61;
						}
						Else
						{
							CLAY_RadioEndTimer = true;
							CLAY_RadioPlaying = false;
							CLAY_RadioTrack = 0;

							["play"] execVM "CLAY_CarRadio\scripts\controls.sqf";
						};
					};
				};
			};
			case 4:
			{
				ctrlSetText [611, "Alle Songs"];

				If (isNil "CLAY_RadioAddMusic") Then
				{
					CLAY_RadioPlayList = CLAY_RadioGameMusic + CLAY_RadioGameMusicOA;
				}
				Else
				{
					CLAY_RadioPlayList = CLAY_RadioGameMusic + CLAY_RadioGameMusicOA + CLAY_RadioAddMusic;
				};

				CLAY_RadioEndTimer = true;
				CLAY_RadioPlaying = false;
				CLAY_RadioTrack = 0;

				["play"] execVM "CLAY_CarRadio\scripts\controls.sqf";
			};
			case 5:
			{
				ctrlSetText [611, "Custom"];
				CLAY_RadioPlayList = CLAY_RadioCustomMusic;

				If (count CLAY_RadioCustomMusic == 0) Then
				{
					Hint "No Custom Playlist found!\n\nClick on 'Playlist' Button to create one.";

					CLAY_RadioPlayList = [];
					CLAY_RadioEndTimer = true;
					CLAY_RadioPlaying = false;
					CLAY_RadioTrack = 0;

					playMusic "";
					ctrlSetText [610, ""];
					ctrlSetText [626, ">"];
				}
				Else
				{
					CLAY_RadioEndTimer = true;
					CLAY_RadioPlaying = false;
					CLAY_RadioTrack = 0;

					["play"] execVM "CLAY_CarRadio\scripts\controls.sqf";
				};
			};
		};
	};
	case "playRepeat":
	{
		If (CLAY_RadioRepeat) Then
		{
			CLAY_RadioRepeat = false;
			ctrlSetText [612, ""];
		}
		Else
		{
			CLAY_RadioRepeat = true;
			ctrlSetText [612, "Repeat"];
		};
	};
	case "playRandom":
	{
		If (CLAY_RadioRandom) Then
		{
			CLAY_RadioRandom = false;
			ctrlSetText [613, ""];
		}
		Else
		{
			CLAY_RadioRandom = true;
			ctrlSetText [613, "Random"];
		};
	};
};