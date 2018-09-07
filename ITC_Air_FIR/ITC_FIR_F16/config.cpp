class cfgPatches {
    class ITC_Air_Compat_FIR_F16C {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.000000;
        requiredAddons[] = {"itc_air"};
    };
};
class ITC_Air_Config_FIR_F16C {
    class rover {
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
	class FIR_F16_Base;
  class FIR_F16C: FIR_F16_Base {
    class pilotCamera : litening { };
    class itc_air : ITC_Air_Config_FIR_F16C {};
	};
	class FIR_F16D_Base;
  class FIR_F16D: FIR_F16D_Base {
    class pilotCamera : litening { };
    class itc_air : ITC_Air_Config_FIR_F16C {};
	};
};


class cfgMagazines {
	class PylonMissile_1Rnd_Mk82_F;
	class itc_hp_smart_ITC_ammo_gbu38 : PylonMissile_1Rnd_Mk82_F {
		hardpoints[] += {"FIR_F16_Combined_HP","FIR_F16_AG_HP"};
	};
	class itc_hp_smart_ITC_ammo_gbu38v3b : PylonMissile_1Rnd_Mk82_F {
		hardpoints[] += {"FIR_F16_Combined_HP","FIR_F16_AG_HP"};
	};
	class itc_hp_smart_ITC_ammo_gbu54 : PylonMissile_1Rnd_Mk82_F {
		hardpoints[] += {"FIR_F16_Combined_HP","FIR_F16_AG_HP"};
	};
	class itc_hp_smart_ITC_ammo_gbu54v4 : PylonMissile_1Rnd_Mk82_F {
		hardpoints[] += {"FIR_F16_Combined_HP","FIR_F16_AG_HP"};
	};
	class itc_hp_smart_ITC_ammo_gbu32 : PylonMissile_1Rnd_Mk82_F {
		hardpoints[] += {"FIR_F16_Combined_HP","FIR_F16_AG_HP"};
	};

  class PylonRack_2Rnd_BombCluster_03_F;
  class itc_hp_bru55_ITC_ammo_gbu38 : PylonRack_2Rnd_BombCluster_03_F {
		hardpoints[] += {"FIR_F16_Combined_HP","FIR_F16_AG_HP"};
	};
	class itc_hp_bru55_ITC_ammo_gbu38v3b : PylonRack_2Rnd_BombCluster_03_F {
		hardpoints[] += {"FIR_F16_Combined_HP","FIR_F16_AG_HP"};
	};
	class itc_hp_bru55_ITC_ammo_gbu54 : PylonRack_2Rnd_BombCluster_03_F {
		hardpoints[] += {"FIR_F16_Combined_HP","FIR_F16_AG_HP"};
	};
	class itc_hp_bru55_ITC_ammo_gbu54v4 : PylonRack_2Rnd_BombCluster_03_F {
		hardpoints[] += {"FIR_F16_Combined_HP","FIR_F16_AG_HP"};
	};
	class itc_hp_bru55_ITC_ammo_gbu32 : PylonRack_2Rnd_BombCluster_03_F {
		hardpoints[] += {"FIR_F16_Combined_HP","FIR_F16_AG_HP"};
	};
	class itc_hp_smart_ITC_ammo_gbu31 : PylonRack_2Rnd_BombCluster_03_F {
		hardpoints[] += {"FIR_F16_Combined_HP","FIR_F16_AG_HP"};
	};

  class PylonRack_1Rnd_Missile_AGM_02_F;
	class itc_hp_lau117_itc_ammo_agm65g : PylonRack_1Rnd_Missile_AGM_02_F {
		hardpoints[] += {"FIR_F16_Combined_HP","FIR_F16_AG_HP"};
	};
	class itc_hp_lau117_itc_ammo_agm65e : PylonRack_1Rnd_Missile_AGM_02_F {
		hardpoints[] += {"FIR_F16_Combined_HP","FIR_F16_AG_HP"};
	};
	class itc_hp_lau117_itc_ammo_agm65h : PylonRack_1Rnd_Missile_AGM_02_F {
		hardpoints[] += {"FIR_F16_Combined_HP","FIR_F16_AG_HP"};
	};
  class PylonRack_Missile_AGM_02_x2;
  class itc_hp_bru55_lau117_itc_ammo_agm65g : PylonRack_Missile_AGM_02_x2 {
    hardpoints[] += {"FIR_F16_Combined_HP","FIR_F16_AG_HP"};
  };
  class itc_hp_bru55_lau117_itc_ammo_agm65e : PylonRack_Missile_AGM_02_x2 {
    hardpoints[] += {"FIR_F16_Combined_HP","FIR_F16_AG_HP"};
  };
  class itc_hp_bru55_lau117_itc_ammo_agm65h : PylonRack_Missile_AGM_02_x2 {
    hardpoints[] += {"FIR_F16_Combined_HP","FIR_F16_AG_HP"};
  };

	class PylonRack_7Rnd_Rocket_04_HE_F;
	class itc_hp_dumb_rocket_Rocket_04_HE_F : PylonRack_7Rnd_Rocket_04_HE_F {
		hardpoints[] += {"FIR_F16_Combined_HP","FIR_F16_AG_HP"};
	};
	class itc_hp_dumb_rocket_ITC_ammo_apkws_m151 : PylonRack_7Rnd_Rocket_04_HE_F {
		hardpoints[] += {"FIR_F16_Combined_HP","FIR_F16_AG_HP"};
	};
	class itc_hp_dumb_rocket_itc_ammo_Hydra_M156 : PylonRack_7Rnd_Rocket_04_HE_F {
		hardpoints[] += {"FIR_F16_Combined_HP","FIR_F16_AG_HP"};
	};

  class itc_hp_harpoon_itc_ammo_jassm : PylonMissile_1Rnd_Mk82_F {
		hardpoints[] += {"FIR_F16_AG_HP"};
  };
  class PylonRack_Bomb_SDB_x4;
	class itc_hp_bru61_itc_ammo_gbu39 : PylonRack_Bomb_SDB_x4 {
		hardpoints[] += {"FIR_F16_AG_HP"};
	};
};
//	["FIR_F16C"."FIR_F16_Base","Plane_Fighter_03_base_F","Plane_Base_F","Plane","Air","AllVehicles","All"]
