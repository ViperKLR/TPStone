//
// Thank you Zupa.... :D
//

private ["_TPSpl","_TPSfriendlies","_TPSthePl"];
lbClear 8002;
_TPSpl = player nearEntities ["CAManBase", 10];
_TPSthePl = _TPSpl select 0;
_TPSfriendlies = player getVariable ["TPStonefriends", []];
{
	lbAdd [8002, (_x select 1)];
} forEach _TPSfriendlies;
