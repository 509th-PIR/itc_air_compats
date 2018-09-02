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

class cfgMagazines {
	class PylonRack_7Rnd_Rocket_04_HE_F;
	class itc_hp_dumb_rocket_Rocket_04_HE_F : PylonRack_7Rnd_Rocket_04_HE_F {
		hardpoints[] += {"RHS_HP_MELB"};
	};
	class itc_hp_dumb_rocket_ITC_ammo_apkws_m151 : PylonRack_7Rnd_Rocket_04_HE_F {
		hardpoints[] += {"RHS_HP_MELB"};
	};
	class itc_hp_dumb_rocket_itc_ammo_Hydra_M156 : PylonRack_7Rnd_Rocket_04_HE_F {
		hardpoints[] += {"RHS_HP_MELB"};
	};
};
