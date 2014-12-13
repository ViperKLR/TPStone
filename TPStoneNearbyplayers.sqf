//
// Thank you Zupa.... :D
//

private ["_close"];
lbClear 8001;
_closePeople = player nearEntities ["CAManBase", 10];
Humans = [];
{
	if (_x isKindOf "Man" and !(_x isKindOf "zZombie_base")) then {
		_TPSfriendUID = getPlayerUID _x;
		_TPSfriendName = name  _x;
		Humans  =  Humans + [[_TPSfriendUID,_TPSfriendName]] ;	
		lbAdd [8001, _TPSfriendName];
	};
} forEach _closePeople;

