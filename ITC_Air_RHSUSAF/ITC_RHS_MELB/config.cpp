class cfgPatches {
	class ITC_RHS_MELB {
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {"itc_air"};
	};
};

class ITC_Air_Config_MELB {
	class rover {
		capable = 1;
	frequency_default = 5784;
	};
	targeting_user = "pilot";
	tgp = 0;
	wso = 0;
	mfdApps[] = {"TAD","STAT","STPT","OPT"};
	systems[] = {"UFC","SOI","MFD","MFD_R","ACMI","TAD","WPT"};
	mfdType = "classic";
};

class cfgVehicles {
	class RHS_MELB_base;
	class RHS_MELB_AH6M: RHS_MELB_base {
		class itc_air : ITC_Air_Config_MELB {};
	};
	class RHS_MELB_MH6M: RHS_MELB_base {
		class itc_air : ITC_Air_Config_MELB {};
	};
	class RHS_MELB_H6M: RHS_MELB_base {
		class itc_air : ITC_Air_Config_MELB {};
	};
};
