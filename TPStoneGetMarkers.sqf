lbClear 8009;
_poles = nearestObjects [player, ["Plastic_Pole_EP1_DZ"],15000];
{
	if (_x isKindOf "Plastic_Pole_EP1_DZ") then {
		_TPSPlotpos = getPosATL _x;
		_TPSplotowner = _x getVariable ["plotfriends",[]];
		_inlist = [];
		{
			_playerID = _x select 0;
			_inlist = _inlist + [_playerID];
		} forEach _TPSplotowner;
		if ((getPlayerUID player) in _inlist) then {
			lbAdd [8009, "Plot Pole"];
		};
	};
} forEach _Poles;
