While{true} do {
"dynamicBlur" ppEffectEnable true; // enables ppeffect
"dynamicBlur" ppEffectAdjust [0]; // enables normal vision
"dynamicBlur" ppEffectCommit 15; // time it takes to normal
resetCamShake; // resets the shake
20 fadeSound 1;     //fades the sound back to normal


waituntil{
((((nearestObject [getpos player, "SmokeShellRed"]) distance player < 15) and (getpos (nearestObject [getpos player, "SmokeShellRed"]) select 2 < 0.5))
OR
(((nearestObject [getpos player, "3Rnd_SmokeRed_Grenade_shell"]) distance player < 15) and (getpos (nearestObject [getpos player, "3Rnd_SmokeRed_Grenade_shell"]) select 2 < 0.5))
OR
(((nearestObject [getpos player, "CUP_6Rnd_SmokeRed_M203"]) distance player < 15) and (getpos (nearestObject [getpos player, "3Rnd_SmokeRed_Grenade_shell"]) select 2 < 0.5)))
};


"dynamicBlur" ppEffectEnable true; // enables ppeffect
"dynamicBlur" ppEffectAdjust [20]; // intensity of blur
"dynamicBlur" ppEffectCommit 3; // time till vision is fully blurred
enableCamShake true;     // enables camera shake
addCamShake [10, 45, 10];    // sets shakevalues
player setFatigue 1; // sets the fatigue to 100%
1 fadeSound 0.1;     // fades the sound to 10% in 5 seconds


sleep 1;


"dynamicBlur" ppEffectEnable true; // enables ppeffect
"dynamicBlur" ppEffectAdjust [20]; // intensity of blur
"dynamicBlur" ppEffectCommit 1; // time till vision is fully blurred
enableCamShake true;     // enables camera shake
addCamShake [10, 45, 10];    // sets shakevalues
player setFatigue 1; // sets the fatigue to 100%
0 fadeSound 0.1;     // fades the sound to 10% in 5 seconds


sleep 0.4;
"dynamicBlur" ppEffectEnable true; // enables ppeffect
"dynamicBlur" ppEffectAdjust [20]; // intensity of blur
"dynamicBlur" ppEffectCommit 1; // time till vision is fully blurred
enableCamShake true;     // enables camera shake
addCamShake [10, 45, 10];    // sets shakevalues
player setFatigue 1; // sets the fatigue to 100%
0 fadeSound 0.1;     // fades the sound to 10% in 5 seconds


sleep 0.4;
"dynamicBlur" ppEffectEnable true; // enables ppeffect
"dynamicBlur" ppEffectAdjust [20]; // intensity of blur
"dynamicBlur" ppEffectCommit 1; // time till vision is fully blurred
enableCamShake true;     // enables camera shake
addCamShake [10, 45, 10];    // sets shakevalues
player setFatigue 1; // sets the fatigue to 100%
0 fadeSound 0.1;     // fades the sound to 10% in 5 seconds


sleep 0.4;
"dynamicBlur" ppEffectEnable true; // enables ppeffect
"dynamicBlur" ppEffectAdjust [20]; // intensity of blur
"dynamicBlur" ppEffectCommit 1; // time till vision is fully blurred
enableCamShake true;     // enables camera shake
addCamShake [10, 45, 10];    // sets shakevalues
player setFatigue 1; // sets the fatigue to 100%
0 fadeSound 0.1;     // fades the sound to 10% in 5 seconds


sleep 0.4;
"dynamicBlur" ppEffectEnable true; // enables ppeffect
"dynamicBlur" ppEffectAdjust [20]; // intensity of blur
"dynamicBlur" ppEffectCommit 1; // time till vision is fully blurred
enableCamShake true;     // enables camera shake
addCamShake [10, 45, 10];    // sets shakevalues
player setFatigue 1; // sets the fatigue to 100%
0 fadeSound 0.1;     // fades the sound to 10% in 5 seconds


sleep 0.4;
"dynamicBlur" ppEffectEnable true; // enables ppeffect
"dynamicBlur" ppEffectAdjust [20]; // intensity of blur
"dynamicBlur" ppEffectCommit 1; // time till vision is fully blurred
enableCamShake true;     // enables camera shake
addCamShake [10, 45, 10];    // sets shakevalues
player setFatigue 1; // sets the fatigue to 100%
0 fadeSound 0.1;     // fades the sound to 10% in 5 seconds


sleep 0.4;
"dynamicBlur" ppEffectEnable true; // enables ppeffect
"dynamicBlur" ppEffectAdjust [20]; // intensity of blur
"dynamicBlur" ppEffectCommit 1; // time till vision is fully blurred
enableCamShake true;     // enables camera shake
addCamShake [10, 45, 10];    // sets shakevalues
player setFatigue 1; // sets the fatigue to 100%
0 fadeSound 0.1;     // fades the sound to 10% in 5 seconds


sleep 0.4;
"dynamicBlur" ppEffectEnable true; // enables ppeffect
"dynamicBlur" ppEffectAdjust [20]; // intensity of blur
"dynamicBlur" ppEffectCommit 1; // time till vision is fully blurred
enableCamShake true;     // enables camera shake
addCamShake [10, 45, 10];    // sets shakevalues
player setFatigue 1; // sets the fatigue to 100%
0 fadeSound 0.1;     // fades the sound to 10% in 5 seconds


sleep 0.4;
"dynamicBlur" ppEffectEnable true; // enables ppeffect
"dynamicBlur" ppEffectAdjust [20]; // intensity of blur
"dynamicBlur" ppEffectCommit 1; // time till vision is fully blurred
enableCamShake true;     // enables camera shake
addCamShake [10, 45, 10];    // sets shakevalues
player setFatigue 1; // sets the fatigue to 100%
0 fadeSound 0.1;     // fades the sound to 10% in 5 seconds


sleep 0.4;
"dynamicBlur" ppEffectEnable true; // enables ppeffect
"dynamicBlur" ppEffectAdjust [20]; // intensity of blur
"dynamicBlur" ppEffectCommit 1; // time till vision is fully blurred
enableCamShake true;     // enables camera shake
addCamShake [10, 45, 10];    // sets shakevalues
player setFatigue 1; // sets the fatigue to 100%
0 fadeSound 0.1;     // fades the sound to 10% in 5 seconds


sleep 0.4;
"dynamicBlur" ppEffectEnable true; // enables ppeffect
"dynamicBlur" ppEffectAdjust [20]; // intensity of blur
"dynamicBlur" ppEffectCommit 1; // time till vision is fully blurred
enableCamShake true;     // enables camera shake
addCamShake [10, 45, 10];    // sets shakevalues
player setFatigue 1; // sets the fatigue to 100%
0 fadeSound 0.1;     // fades the sound to 10% in 5 seconds


sleep 0.4;
"dynamicBlur" ppEffectEnable true; // enables ppeffect
"dynamicBlur" ppEffectAdjust [20]; // intensity of blur
"dynamicBlur" ppEffectCommit 1; // time till vision is fully blurred
enableCamShake true;     // enables camera shake
addCamShake [10, 45, 10];    // sets shakevalues
player setFatigue 1; // sets the fatigue to 100%
0 fadeSound 0.1;     // fades the sound to 10% in 5 seconds


sleep 0.4;
"dynamicBlur" ppEffectEnable true; // enables ppeffect
"dynamicBlur" ppEffectAdjust [20]; // intensity of blur
"dynamicBlur" ppEffectCommit 1; // time till vision is fully blurred
enableCamShake true;     // enables camera shake
addCamShake [10, 45, 10];    // sets shakevalues
player setFatigue 1; // sets the fatigue to 100%
0 fadeSound 0.1;     // fades the sound to 10% in 5 seconds


sleep 0.4;
"dynamicBlur" ppEffectEnable true; // enables ppeffect
"dynamicBlur" ppEffectAdjust [20]; // intensity of blur
"dynamicBlur" ppEffectCommit 1; // time till vision is fully blurred
enableCamShake true;     // enables camera shake
addCamShake [10, 45, 10];    // sets shakevalues
player setFatigue 1; // sets the fatigue to 100%
0 fadeSound 0.1;     // fades the sound to 10% in 5 seconds


sleep 0.4;
"dynamicBlur" ppEffectEnable true; // enables ppeffect
"dynamicBlur" ppEffectAdjust [20]; // intensity of blur
"dynamicBlur" ppEffectCommit 1; // time till vision is fully blurred
enableCamShake true;     // enables camera shake
addCamShake [10, 45, 10];    // sets shakevalues
player setFatigue 1; // sets the fatigue to 100%
0 fadeSound 0.1;     // fades the sound to 10% in 5 seconds


sleep 0.4;
"dynamicBlur" ppEffectEnable true; // enables ppeffect
"dynamicBlur" ppEffectAdjust [20]; // intensity of blur
"dynamicBlur" ppEffectCommit 1; // time till vision is fully blurred
enableCamShake true;     // enables camera shake
addCamShake [10, 45, 10];    // sets shakevalues
player setFatigue 1; // sets the fatigue to 100%
0 fadeSound 0.1;     // fades the sound to 10% in 5 seconds


sleep 0.4;
"dynamicBlur" ppEffectEnable true; // enables ppeffect
"dynamicBlur" ppEffectAdjust [20]; // intensity of blur
"dynamicBlur" ppEffectCommit 1; // time till vision is fully blurred
enableCamShake true;     // enables camera shake
addCamShake [10, 45, 10];    // sets shakevalues
player setFatigue 1; // sets the fatigue to 100%
0 fadeSound 0.1;     // fades the sound to 10% in 5 seconds


sleep 0.4;
"dynamicBlur" ppEffectEnable true; // enables ppeffect
"dynamicBlur" ppEffectAdjust [20]; // intensity of blur
"dynamicBlur" ppEffectCommit 1; // time till vision is fully blurred
enableCamShake true;     // enables camera shake
addCamShake [10, 45, 10];    // sets shakevalues
player setFatigue 1; // sets the fatigue to 100%
0 fadeSound 0.1;     // fades the sound to 10% in 5 seconds


sleep 0.4;
"dynamicBlur" ppEffectEnable true; // enables ppeffect
"dynamicBlur" ppEffectAdjust [20]; // intensity of blur
"dynamicBlur" ppEffectCommit 1; // time till vision is fully blurred
enableCamShake true;     // enables camera shake
addCamShake [10, 45, 10];    // sets shakevalues
player setFatigue 1; // sets the fatigue to 100%
0 fadeSound 0.1;     // fades the sound to 10% in 5 seconds


sleep 0.4;
"dynamicBlur" ppEffectEnable true; // enables ppeffect
"dynamicBlur" ppEffectAdjust [20]; // intensity of blur
"dynamicBlur" ppEffectCommit 1; // time till vision is fully blurred
enableCamShake true;     // enables camera shake
addCamShake [10, 45, 10];    // sets shakevalues
player setFatigue 1; // sets the fatigue to 100%
0 fadeSound 0.1;     // fades the sound to 10% in 5 seconds


sleep 0.4;

"dynamicBlur" ppEffectEnable true; // enables ppeffect
"dynamicBlur" ppEffectAdjust [20]; // intensity of blur
"dynamicBlur" ppEffectCommit 1; // time till vision is fully blurred
enableCamShake true;     // enables camera shake
addCamShake [10, 45, 10];    // sets shakevalues
player setFatigue 1; // sets the fatigue to 100%
0 fadeSound 0.1;     // fades the sound to 10% in 5 seconds


sleep 0.4;
"dynamicBlur" ppEffectEnable true; // enables ppeffect
"dynamicBlur" ppEffectAdjust [20]; // intensity of blur
"dynamicBlur" ppEffectCommit 1; // time till vision is fully blurred
enableCamShake true;     // enables camera shake
addCamShake [10, 45, 10];    // sets shakevalues
player setFatigue 1; // sets the fatigue to 100%
0 fadeSound 0.1;     // fades the sound to 10% in 5 seconds


sleep 0.4;
"dynamicBlur" ppEffectEnable true; // enables ppeffect
"dynamicBlur" ppEffectAdjust [20]; // intensity of blur
"dynamicBlur" ppEffectCommit 1; // time till vision is fully blurred
enableCamShake true;     // enables camera shake
addCamShake [10, 45, 10];    // sets shakevalues
player setFatigue 1; // sets the fatigue to 100%
0 fadeSound 0.1;     // fades the sound to 10% in 5 seconds


sleep 0.4;
"dynamicBlur" ppEffectEnable true; // enables ppeffect
"dynamicBlur" ppEffectAdjust [20]; // intensity of blur
"dynamicBlur" ppEffectCommit 1; // time till vision is fully blurred
enableCamShake true;     // enables camera shake
addCamShake [10, 45, 10];    // sets shakevalues
player setFatigue 1; // sets the fatigue to 100%
0 fadeSound 0.1;     // fades the sound to 10% in 5 seconds


sleep 0.4;
"dynamicBlur" ppEffectEnable true; // enables ppeffect
"dynamicBlur" ppEffectAdjust [20]; // intensity of blur
"dynamicBlur" ppEffectCommit 1; // time till vision is fully blurred
enableCamShake true;     // enables camera shake
addCamShake [10, 45, 10];    // sets shakevalues
player setFatigue 1; // sets the fatigue to 100%
0 fadeSound 0.1;     // fades the sound to 10% in 5 seconds


sleep 0.4;
"dynamicBlur" ppEffectEnable true; // enables ppeffect
"dynamicBlur" ppEffectAdjust [20]; // intensity of blur
"dynamicBlur" ppEffectCommit 1; // time till vision is fully blurred
enableCamShake true;     // enables camera shake
addCamShake [10, 45, 10];    // sets shakevalues
player setFatigue 1; // sets the fatigue to 100%
0 fadeSound 0.1;     // fades the sound to 10% in 5 seconds


sleep 0.4;
"dynamicBlur" ppEffectEnable true; // enables ppeffect
"dynamicBlur" ppEffectAdjust [20]; // intensity of blur
"dynamicBlur" ppEffectCommit 1; // time till vision is fully blurred
enableCamShake true;     // enables camera shake
addCamShake [10, 45, 10];    // sets shakevalues
player setFatigue 1; // sets the fatigue to 100%
0 fadeSound 0.1;     // fades the sound to 10% in 5 seconds


sleep 0.4;
"dynamicBlur" ppEffectEnable true; // enables ppeffect
"dynamicBlur" ppEffectAdjust [20]; // intensity of blur
"dynamicBlur" ppEffectCommit 1; // time till vision is fully blurred
enableCamShake true;     // enables camera shake
addCamShake [10, 45, 10];    // sets shakevalues
player setFatigue 1; // sets the fatigue to 100%
0 fadeSound 0.1;     // fades the sound to 10% in 5 seconds


sleep 0.4;
"dynamicBlur" ppEffectEnable true; // enables ppeffect
"dynamicBlur" ppEffectAdjust [20]; // intensity of blur
"dynamicBlur" ppEffectCommit 1; // time till vision is fully blurred
enableCamShake true;     // enables camera shake
addCamShake [10, 45, 10];    // sets shakevalues
player setFatigue 1; // sets the fatigue to 100%
0 fadeSound 0.1;     // fades the sound to 10% in 5 seconds


sleep 0.4;
"dynamicBlur" ppEffectEnable true; // enables ppeffect
"dynamicBlur" ppEffectAdjust [20]; // intensity of blur
"dynamicBlur" ppEffectCommit 1; // time till vision is fully blurred
enableCamShake true;     // enables camera shake
addCamShake [10, 45, 10];    // sets shakevalues
player setFatigue 1; // sets the fatigue to 100%
0 fadeSound 0.1;     // fades the sound to 10% in 5 seconds


sleep 0.4;
"dynamicBlur" ppEffectEnable true; // enables ppeffect
"dynamicBlur" ppEffectAdjust [20]; // intensity of blur
"dynamicBlur" ppEffectCommit 1; // time till vision is fully blurred
enableCamShake true;     // enables camera shake
addCamShake [10, 45, 10];    // sets shakevalues
player setFatigue 1; // sets the fatigue to 100%
0 fadeSound 0.1;     // fades the sound to 10% in 5 seconds


sleep 0.4;
"dynamicBlur" ppEffectEnable true; // enables ppeffect
"dynamicBlur" ppEffectAdjust [20]; // intensity of blur
"dynamicBlur" ppEffectCommit 1; // time till vision is fully blurred
enableCamShake true;     // enables camera shake
addCamShake [10, 45, 10];    // sets shakevalues
player setFatigue 1; // sets the fatigue to 100%
0 fadeSound 0.1;     // fades the sound to 10% in 5 seconds


sleep 0.4;
"dynamicBlur" ppEffectEnable true; // enables ppeffect
"dynamicBlur" ppEffectAdjust [20]; // intensity of blur
"dynamicBlur" ppEffectCommit 1; // time till vision is fully blurred
enableCamShake true;     // enables camera shake
addCamShake [10, 45, 10];    // sets shakevalues
player setFatigue 1; // sets the fatigue to 100%
0 fadeSound 0.1;     // fades the sound to 10% in 5 seconds


sleep 0.4;
"dynamicBlur" ppEffectEnable true; // enables ppeffect
"dynamicBlur" ppEffectAdjust [20]; // intensity of blur
"dynamicBlur" ppEffectCommit 1; // time till vision is fully blurred
enableCamShake true;     // enables camera shake
addCamShake [10, 45, 10];    // sets shakevalues
player setFatigue 1; // sets the fatigue to 100%
0 fadeSound 0.1;     // fades the sound to 10% in 5 seconds


sleep 0.4;
"dynamicBlur" ppEffectEnable true; // enables ppeffect
"dynamicBlur" ppEffectAdjust [20]; // intensity of blur
"dynamicBlur" ppEffectCommit 1; // time till vision is fully blurred
enableCamShake true;     // enables camera shake
addCamShake [10, 45, 10];    // sets shakevalues
player setFatigue 1; // sets the fatigue to 100%
0 fadeSound 0.1;     // fades the sound to 10% in 5 seconds


sleep 0.4;
"dynamicBlur" ppEffectEnable true; // enables ppeffect
"dynamicBlur" ppEffectAdjust [20]; // intensity of blur
"dynamicBlur" ppEffectCommit 1; // time till vision is fully blurred
enableCamShake true;     // enables camera shake
addCamShake [10, 45, 10];    // sets shakevalues
player setFatigue 1; // sets the fatigue to 100%
0 fadeSound 0.1;     // fades the sound to 10% in 5 seconds


sleep 0.4;
"dynamicBlur" ppEffectEnable true; // enables ppeffect
"dynamicBlur" ppEffectAdjust [20]; // intensity of blur
"dynamicBlur" ppEffectCommit 1; // time till vision is fully blurred
enableCamShake true;     // enables camera shake
addCamShake [10, 45, 10];    // sets shakevalues
player setFatigue 1; // sets the fatigue to 100%
0 fadeSound 0.1;     // fades the sound to 10% in 5 seconds


sleep 0.4;
"dynamicBlur" ppEffectEnable true; // enables ppeffect
"dynamicBlur" ppEffectAdjust [20]; // intensity of blur
"dynamicBlur" ppEffectCommit 1; // time till vision is fully blurred
enableCamShake true;     // enables camera shake
addCamShake [10, 45, 10];    // sets shakevalues
player setFatigue 1; // sets the fatigue to 100%
0 fadeSound 0.1;     // fades the sound to 10% in 5 seconds


sleep 0.4;
"dynamicBlur" ppEffectEnable true; // enables ppeffect
"dynamicBlur" ppEffectAdjust [20]; // intensity of blur
"dynamicBlur" ppEffectCommit 1; // time till vision is fully blurred
enableCamShake true;     // enables camera shake
addCamShake [10, 45, 10];    // sets shakevalues
player setFatigue 1; // sets the fatigue to 100%
0 fadeSound 0.1;     // fades the sound to 10% in 5 seconds


sleep 0.4;
"dynamicBlur" ppEffectEnable true; // enables ppeffect
"dynamicBlur" ppEffectAdjust [20]; // intensity of blur
"dynamicBlur" ppEffectCommit 1; // time till vision is fully blurred
enableCamShake true;     // enables camera shake
addCamShake [10, 45, 10];    // sets shakevalues
player setFatigue 1; // sets the fatigue to 100%
0 fadeSound 0.1;     // fades the sound to 10% in 5 seconds


sleep 0.4;
"dynamicBlur" ppEffectEnable true; // enables ppeffect
"dynamicBlur" ppEffectAdjust [20]; // intensity of blur
"dynamicBlur" ppEffectCommit 1; // time till vision is fully blurred
enableCamShake true;     // enables camera shake
addCamShake [10, 45, 10];    // sets shakevalues
player setFatigue 1; // sets the fatigue to 100%
0 fadeSound 0.1;     // fades the sound to 10% in 5 seconds


sleep 0.4;
"dynamicBlur" ppEffectEnable true; // enables ppeffect
"dynamicBlur" ppEffectAdjust [20]; // intensity of blur
"dynamicBlur" ppEffectCommit 1; // time till vision is fully blurred
enableCamShake true;     // enables camera shake
addCamShake [10, 45, 10];    // sets shakevalues
player setFatigue 1; // sets the fatigue to 100%
0 fadeSound 0.1;     // fades the sound to 10% in 5 seconds


sleep 0.4;
"dynamicBlur" ppEffectEnable true; // enables ppeffect
"dynamicBlur" ppEffectAdjust [20]; // intensity of blur
"dynamicBlur" ppEffectCommit 1; // time till vision is fully blurred
enableCamShake true;     // enables camera shake
addCamShake [10, 45, 10];    // sets shakevalues
player setFatigue 1; // sets the fatigue to 100%
0 fadeSound 0.1;     // fades the sound to 10% in 5 seconds


sleep 0.4;
"dynamicBlur" ppEffectEnable true; // enables ppeffect
"dynamicBlur" ppEffectAdjust [20]; // intensity of blur
"dynamicBlur" ppEffectCommit 1; // time till vision is fully blurred
enableCamShake true;     // enables camera shake
addCamShake [10, 45, 10];    // sets shakevalues
player setFatigue 1; // sets the fatigue to 100%
0 fadeSound 0.1;     // fades the sound to 10% in 5 seconds


sleep 0.4;
"dynamicBlur" ppEffectEnable true; // enables ppeffect
"dynamicBlur" ppEffectAdjust [20]; // intensity of blur
"dynamicBlur" ppEffectCommit 1; // time till vision is fully blurred
enableCamShake true;     // enables camera shake
addCamShake [10, 45, 10];    // sets shakevalues
player setFatigue 1; // sets the fatigue to 100%
0 fadeSound 0.1;     // fades the sound to 10% in 5 seconds


sleep 0.4;
"dynamicBlur" ppEffectEnable true; // enables ppeffect
"dynamicBlur" ppEffectAdjust [20]; // intensity of blur
"dynamicBlur" ppEffectCommit 1; // time till vision is fully blurred
enableCamShake true;     // enables camera shake
addCamShake [10, 45, 10];    // sets shakevalues
player setFatigue 1; // sets the fatigue to 100%
0 fadeSound 0.1;     // fades the sound to 10% in 5 seconds


sleep 0.4;
"dynamicBlur" ppEffectEnable true; // enables ppeffect
"dynamicBlur" ppEffectAdjust [20]; // intensity of blur
"dynamicBlur" ppEffectCommit 1; // time till vision is fully blurred
enableCamShake true;     // enables camera shake
addCamShake [10, 45, 10];    // sets shakevalues
player setFatigue 1; // sets the fatigue to 100%
0 fadeSound 0.1;     // fades the sound to 10% in 5 seconds


sleep 0.4;
"dynamicBlur" ppEffectEnable true; // enables ppeffect
"dynamicBlur" ppEffectAdjust [20]; // intensity of blur
"dynamicBlur" ppEffectCommit 1; // time till vision is fully blurred
enableCamShake true;     // enables camera shake
addCamShake [10, 45, 10];    // sets shakevalues
player setFatigue 1; // sets the fatigue to 100%
0 fadeSound 0.1;     // fades the sound to 10% in 5 seconds


sleep 0.4;
"dynamicBlur" ppEffectEnable true; // enables ppeffect
"dynamicBlur" ppEffectAdjust [20]; // intensity of blur
"dynamicBlur" ppEffectCommit 1; // time till vision is fully blurred
enableCamShake true;     // enables camera shake
addCamShake [10, 45, 10];    // sets shakevalues
player setFatigue 1; // sets the fatigue to 100%
0 fadeSound 0.1;     // fades the sound to 10% in 5 seconds


sleep 0.4;
"dynamicBlur" ppEffectEnable true; // enables ppeffect
"dynamicBlur" ppEffectAdjust [20]; // intensity of blur
"dynamicBlur" ppEffectCommit 1; // time till vision is fully blurred
enableCamShake true;     // enables camera shake
addCamShake [10, 45, 10];    // sets shakevalues
player setFatigue 1; // sets the fatigue to 100%
0 fadeSound 0.1;     // fades the sound to 10% in 5 seconds


sleep 0.4;
"dynamicBlur" ppEffectEnable true; // enables ppeffect
"dynamicBlur" ppEffectAdjust [20]; // intensity of blur
"dynamicBlur" ppEffectCommit 1; // time till vision is fully blurred
enableCamShake true;     // enables camera shake
addCamShake [10, 45, 10];    // sets shakevalues
player setFatigue 1; // sets the fatigue to 100%
0 fadeSound 0.1;     // fades the sound to 10% in 5 seconds


sleep 0.4;
"dynamicBlur" ppEffectEnable true; // enables ppeffect
"dynamicBlur" ppEffectAdjust [20]; // intensity of blur
"dynamicBlur" ppEffectCommit 1; // time till vision is fully blurred
enableCamShake true;     // enables camera shake
addCamShake [10, 45, 10];    // sets shakevalues
player setFatigue 1; // sets the fatigue to 100%
0 fadeSound 0.1;     // fades the sound to 10% in 5 seconds


sleep 0.4;
"dynamicBlur" ppEffectEnable true; // enables ppeffect
"dynamicBlur" ppEffectAdjust [20]; // intensity of blur
"dynamicBlur" ppEffectCommit 1; // time till vision is fully blurred
enableCamShake true;     // enables camera shake
addCamShake [10, 45, 10];    // sets shakevalues
player setFatigue 1; // sets the fatigue to 100%
0 fadeSound 0.1;     // fades the sound to 10% in 5 seconds


sleep 0.4;
"dynamicBlur" ppEffectEnable true; // enables ppeffect
"dynamicBlur" ppEffectAdjust [20]; // intensity of blur
"dynamicBlur" ppEffectCommit 1; // time till vision is fully blurred
enableCamShake true;     // enables camera shake
addCamShake [10, 45, 10];    // sets shakevalues
player setFatigue 1; // sets the fatigue to 100%
0 fadeSound 0.1;     // fades the sound to 10% in 5 seconds


sleep 0.4;
"dynamicBlur" ppEffectEnable true; // enables ppeffect
"dynamicBlur" ppEffectAdjust [20]; // intensity of blur
"dynamicBlur" ppEffectCommit 1; // time till vision is fully blurred
enableCamShake true;     // enables camera shake
addCamShake [10, 45, 10];    // sets shakevalues
player setFatigue 1; // sets the fatigue to 100%
0 fadeSound 0.1;     // fades the sound to 10% in 5 seconds


sleep 0.4;
"dynamicBlur" ppEffectEnable true; // enables ppeffect
"dynamicBlur" ppEffectAdjust [20]; // intensity of blur
"dynamicBlur" ppEffectCommit 1; // time till vision is fully blurred
enableCamShake true;     // enables camera shake
addCamShake [10, 45, 10];    // sets shakevalues
player setFatigue 1; // sets the fatigue to 100%
0 fadeSound 0.1;     // fades the sound to 10% in 5 seconds


sleep 0.4;
"dynamicBlur" ppEffectEnable true; // enables ppeffect
"dynamicBlur" ppEffectAdjust [20]; // intensity of blur
"dynamicBlur" ppEffectCommit 1; // time till vision is fully blurred
enableCamShake true;     // enables camera shake
addCamShake [10, 45, 10];    // sets shakevalues
player setFatigue 1; // sets the fatigue to 100%
0 fadeSound 0.1;     // fades the sound to 10% in 5 seconds


sleep 0.4;
"dynamicBlur" ppEffectEnable true; // enables ppeffect
"dynamicBlur" ppEffectAdjust [20]; // intensity of blur
"dynamicBlur" ppEffectCommit 1; // time till vision is fully blurred
enableCamShake true;     // enables camera shake
addCamShake [10, 45, 10];    // sets shakevalues
player setFatigue 1; // sets the fatigue to 100%
0 fadeSound 0.1;     // fades the sound to 10% in 5 seconds


sleep 0.4;



};