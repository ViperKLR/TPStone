class TPStoneManagement
{
	idd = 711111;
	onLoad = "uiNamespace setVariable ['TPStoneManagement', _this select 0]";
	class Controls {
		class RscText_8000: RscTextT
		{
			idc = 8000;
			x = 0.30 * safezoneW + safezoneX;
			y = 0.15 * safezoneH + safezoneY;
			w = 0.27 * safezoneW;
			h = 0.65 * safezoneH;
			colorBackground[] = {0,0,0,0.8};
		};	
		
		class RscText_8007: RscTextT
		{
			idc = 8007;
			text = "Teleport Stone";
			x = 0.30 * safezoneW + safezoneX;
			y = 0.15 * safezoneH + safezoneY;
			w = 0.27 * safezoneW;
			h = 0.05 * safezoneH;		
			colorBackground[] = {0,0,0,0.8};	
			colorText[] = {1,1,1,1};			
		};
		
		class RscText_8012: RscTextT
		{
			idc = 8012;
			text = "";
			x = 0.31 * safezoneW + safezoneX;
			y = 0.30 * safezoneH + safezoneY;
			w = 0.27 * safezoneW;
			h = 0.05 * safezoneH;			
			colorText[] = {1,1,1,1};
			
		};
		
		class RscText_8014:  RscStructuredText
		{
			idc = 8014;
			text = "";
			x = 0.30 * safezoneW + safezoneX;
			y = 0.15 * safezoneH + safezoneY;
			w = 0.27 * safezoneW;
			h = 0.03 * safezoneH;
			class Attributes {
				align = "right";
			};
		};
		
		class RscText_8013: RscTextT
		{
			idc = 8013;
			text = "Teleport Locations";
			x = 0.30 * safezoneW + safezoneX;
			y = 0.20 * safezoneH + safezoneY;
			w = 0.20 * safezoneW;
			h = 0.03 * safezoneH;
			colorText[] = {1,1,1,1};
		};
		
		
		class RscText_8008: RscTextT
		{
			idc = -1;
			text = "Players Nearby";
			x = 0.31 * safezoneW + safezoneX;
			y = 0.43 * safezoneH + safezoneY;
			w = 0.13 * safezoneW;
			h = 0.03 * safezoneH;
			colorText[] = {1,1,1,1};
		};
		class RscText_8003: RscTextT
		{
			idc = -1;
			text = "Teleport List";
			x = 0.45 * safezoneW + safezoneX;
			y = 0.43 * safezoneH + safezoneY;
			w = 0.13 * safezoneW;
			h = 0.03 * safezoneH;
			colorText[] = {1,1,1,1};
		};
		class RscListbox_8009: RscListbox
		{
			idc = 8009;
			x = 0.31* safezoneW + safezoneX;
			y = 0.23 * safezoneH + safezoneY;
			w = 0.25 * safezoneW;
			h = 0.15 * safezoneH;
			soundSelect[] = {"",0.1,1};
			colorBackground[] = {0.1,0.1,0.1,0.8};
			//onLBSelChanged = "setvar "tpto";
		};
		
		class RscListbox_8001: RscListbox
		{
			idc = 8001;
			x = 0.30* safezoneW + safezoneX;
			y = 0.46 * safezoneH + safezoneY;
			w = 0.11 * safezoneW;
			h = 0.15 * safezoneH;
			soundSelect[] = {"",0.1,1};
			colorBackground[] = {0.1,0.1,0.1,0.8};
		};
		class RscListbox_8002: RscListbox
		{
			idc = 8002;
			x = 0.44 * safezoneW + safezoneX;
			y = 0.46* safezoneH + safezoneY;
			w = 0.11 * safezoneW;
			h = 0.15 * safezoneH;
			soundSelect[] = {"",0.1,1};
			colorBackground[] = {0.1,0.1,0.1,0.8};
		};
		class RscText_8010: RscTextT
		{
			idc = 8010;
			text = "";
			x = 0.30 * safezoneW + safezoneX;
			y = 0.65 * safezoneH + safezoneY;
			w = 0.27 * safezoneW;
			h = 0.02 * safezoneH;		
			colorBackground[] = {0,0,0,0.8};	
			colorText[] = {1,1,1,1};			
		};
		class RscShortcutButton_8004: TPStone_RscButtonMenu
		{
			idc = -1;
			text = "Add";
			x = 0.32 * safezoneW + safezoneX;
			y = 0.72 * safezoneH + safezoneY;
			w = 0.08 * safezoneW;
			onButtonClick = "[(lbCurSel 8001)] call TPStoneAddtoList;";
		};
		class RscShortcutButton_8005: TPStone_RscButtonMenu
		{
			idc = -1;
			text = "Delete";
			x = 0.46 * safezoneW + safezoneX;
			y = 0.72 * safezoneH + safezoneY;
			w = 0.08 * safezoneW;
			onButtonClick = "[(lbCurSel 8002)] call TPStoneRemovefriend;";
		};	
		class RscShortcutButton_8006: TPStone_RscButtonMenu
		{
			idc = -1;
			text = "Close";
			x = 0.39 * safezoneW + safezoneX;
			y = 0.76 * safezoneH + safezoneY;
			w = 0.08 * safezoneW;
			onButtonClick = "((ctrlParent (_this select 0)) closeDisplay 9000);";
		};
		class RscShortcutButton_8011: TPStone_RscButtonMenu
		{
			idc = -1;
			text = "Teleport";
			x = 0.39 * safezoneW + safezoneX;
			y = 0.68 * safezoneH + safezoneY;
			w = 0.08 * safezoneW;
			onButtonClick = "((ctrlParent (_this select 0)) closeDisplay 9000);";
		};
	};
};
