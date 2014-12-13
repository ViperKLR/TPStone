//
// Thank you Zupa.... :D
//

private ["_pos","_TPSpl","_TPSthePl","_TPSinList"];
_pos = _this select 0;
if (_pos < 0) exitWith {};
_TPStoAdd = (Humans select _pos);
_TPSpl = player nearEntities ["CAManBase", 10];
_TPSthePl = _TPSpl select 0;
_TPSplayer = player;
_TPSfriends = player getVariable ["TPStonefriends",[]];
_TPSinList = false;
{ if ((_x  select 0) == (_TPStoAdd select 0)) exitWith { _TPSinList = true; }; } forEach _TPSfriends;
if (_TPSinList) exitWith { cutText ["Already on the list", "PLAIN DOWN"]; };
if (count _TPSfriends == 15) exitWith { cutText ["Only 15 allowed","PLAIN DOWN"]; };
_TPSfriends = _TPSfriends  + [_TPStoAdd ];
_TPSplayer setVariable ["TPStonefriends", _TPSfriends, true];
call TPStoneGetList;
call TPStoneNearbyplayers;
