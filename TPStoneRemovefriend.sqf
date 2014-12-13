//
// Thank you Zupa.... :D
//

private ["_TPSlist","_TPSpl","_TPSthePl","_TPSfriends"];

_pos = _this select 0;
if (_pos < 0) exitWith {};
_TPSpl = player nearEntities ["CAManBase", 10];
_TPSthePl = _TPSpl select 0;
_TPSplayer = player;
_TPSfriends = player getVariable ["TPStonefriends",[]];
_TPStoRemove = (_TPSfriends select _pos);
_TPSnewList = [];
{
	if(_x select 0  != _TPStoRemove select 0)then{
	_TPSnewList = _TPSnewList + [_x];
	};
} forEach _TPSfriends;
_TPSplayer setVariable ["TPStonefriends", _TPSnewList, true];
call TPStoneGetList;
call TPSNearbyplayers;
