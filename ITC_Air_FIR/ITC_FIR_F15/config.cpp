class cfgPatches {
    class ITC_Air_Compat_FIR_F15E {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.000000;
        requiredAddons[] = {"itc_air"};
    };
};
class ITC_Air_Config_FIR_F15E {
    class rover {
      turret = -1;
      capable = 1;
      frequency_default = 5784;
    };
    targeting_user = "pilot";
    tgp = 1;
    wso = 0;
  	hmd = 1;
    mfdApps[] = {"DSMS","TGP","STAT","TAD","STPT","OPT","MAV","FCR"};
    systems[] = {"UFC","SOI","TAXI","DSMS","MAVERICK","FCR","MFD","MFD_L","MFD_R","HMD","AUTOPILOT","AP-MAN","ROVER","SADL","FCS","ACMI","GCAS","AGCAS","TGP","WPT","TAD","HUD"};
    mfdType = "classic";
};

class litening;
class cfgVehicles {
	class FIR_F15E_Base;
  class FIR_F15E: FIR_F15E_Base {
    class pilotCamera : litening { };
    class itc_air : ITC_Air_Config_FIR_F15E {};
    class itc_air_turret_0 : ITC_Air_Config_FIR_F15E {
      wso = 1;
      systems[] = {"UFC","SOI","TAXI","DSMS","MAVERICK","FCR","MFD","MFD_L","MFD_R","HMD","SADL","FCS","ACMI","TGP","WPT","TAD","EW"};
    };
	};
};


class cfgMagazines {
	class PylonMissile_1Rnd_Mk82_F;
	class itc_hp_smart_ITC_ammo_gbu38 : PylonMissile_1Rnd_Mk82_F {
		hardpoints[] += {"FIR_F15E_AG_HP"};
	};
	class itc_hp_smart_ITC_ammo_gbu38v3b : PylonMissile_1Rnd_Mk82_F {
		hardpoints[] += {"FIR_F15E_AG_HP"};
	};
	class itc_hp_smart_ITC_ammo_gbu54 : PylonMissile_1Rnd_Mk82_F {
		hardpoints[] += {"FIR_F15E_AG_HP"};
	};
	class itc_hp_smart_ITC_ammo_gbu54v4 : PylonMissile_1Rnd_Mk82_F {
		hardpoints[] += {"FIR_F15E_AG_HP"};
	};
	class itc_hp_smart_ITC_ammo_gbu32 : PylonMissile_1Rnd_Mk82_F {
		hardpoints[] += {"FIR_F15E_AG2000_HP"};
	};

  class PylonRack_1Rnd_Missile_AGM_02_F;
	class itc_hp_lau117_itc_ammo_agm65g : PylonRack_1Rnd_Missile_AGM_02_F {
		hardpoints[] += {"FIR_F15E_AGM_HP"};
	};
	class itc_hp_lau117_itc_ammo_agm65e : PylonRack_1Rnd_Missile_AGM_02_F {
		hardpoints[] += {"FIR_F15E_AGM_HP"};
	};
	class itc_hp_lau117_itc_ammo_agm65h : PylonRack_1Rnd_Missile_AGM_02_F {
		hardpoints[] += {"FIR_F15E_AGM_HP"};
	};

	class PylonRack_7Rnd_Rocket_04_HE_F;
	class itc_hp_dumb_rocket_Rocket_04_HE_F : PylonRack_7Rnd_Rocket_04_HE_F {
		hardpoints[] += {"FIR_F15E_AGM_HP"};
	};
	class itc_hp_dumb_rocket_ITC_ammo_apkws_m151 : PylonRack_7Rnd_Rocket_04_HE_F {
		hardpoints[] += {"FIR_F15E_AGM_HP"};
	};
	class itc_hp_dumb_rocket_itc_ammo_Hydra_M156 : PylonRack_7Rnd_Rocket_04_HE_F {
		hardpoints[] += {"FIR_F15E_AGM_HP"};
	};

  class itc_hp_harpoon_itc_ammo_jassm : PylonMissile_1Rnd_Mk82_F {
		hardpoints[] += {"FIR_F15E_AG2000_HP"};
  };
  class PylonRack_Bomb_SDB_x4;
	class itc_hp_bru61_itc_ammo_gbu39 : PylonRack_Bomb_SDB_x4 {
		hardpoints[] += {"FIR_F15E_SDB_HP"};
	};
};
//	["FIR_F15E"."FIR_F15E_Base","Plane_Fighter_03_base_F","Plane_Base_F","Plane","Air","AllVehicles","All"]
