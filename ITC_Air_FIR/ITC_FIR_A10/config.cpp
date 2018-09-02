class cfgPatches {
    class ITC_Air_Compat_FIR_A10C {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.000000;
        requiredAddons[] = {"itc_air"};
    };
};

class ITC_Air_Config_FIR_A10C {
  class rover {
    capable = 1;
    frequency_default = 5784;
  };
  targeting_user = "pilot";
  tgp = 1;
  wso = 0;
  hmd = 1;
  mfdApps[] = {"DSMS","TGP","STAT","TAD","STPT","OPT","MAV"};
  systems[] = {"UFC","SOI","TAXI","DSMS","MAVERICK","MFD","MFD_L","MFD_R","HMD","AUTOPILOT","ROVER","SADL","FCS","ACMI","GCAS","TGP","WPT","TAD"};
  mfdType = "classic";
};

class litening;
class cfgVehicles {
	class FIR_A10C_base;
  class FIR_A10C: FIR_A10C_base {
    class pilotCamera : litening { };
    class itc_air : ITC_Air_Config_FIR_A10C {};
	};
};

class cfgMagazines {
	class PylonMissile_1Rnd_Mk82_F;
	class itc_hp_smart_ITC_ammo_gbu38 : PylonMissile_1Rnd_Mk82_F {
		hardpoints[] += {"FIR_A10C_BOMB_HP"};
	};
	class itc_hp_smart_ITC_ammo_gbu38v3b : PylonMissile_1Rnd_Mk82_F {
		hardpoints[] += {"FIR_A10C_BOMB_HP"};
	};
	class itc_hp_smart_ITC_ammo_gbu54 : PylonMissile_1Rnd_Mk82_F {
		hardpoints[] += {"FIR_A10C_BOMB_HP"};
	};
	class itc_hp_smart_ITC_ammo_gbu54v4 : PylonMissile_1Rnd_Mk82_F {
		hardpoints[] += {"FIR_A10C_BOMB_HP"};
	};
	class itc_hp_smart_ITC_ammo_gbu32 : PylonMissile_1Rnd_Mk82_F {
		hardpoints[] += {"FIR_A10C_BOMB_HP"};
	};
	class itc_hp_smart_ITC_ammo_gbu31 : PylonMissile_1Rnd_Mk82_F {
		hardpoints[] += {"FIR_A10C_BOMB_2K_HP"};
	};

  class PylonRack_1Rnd_Missile_AGM_02_F;
	class itc_hp_lau117_itc_ammo_agm65g : PylonRack_1Rnd_Missile_AGM_02_F {
		hardpoints[] += {"FIR_A10_MAV_HP"};
	};
	class itc_hp_lau117_itc_ammo_agm65e : PylonRack_1Rnd_Missile_AGM_02_F {
		hardpoints[] += {"FIR_A10_MAV_HP"};
	};
	class itc_hp_lau117_itc_ammo_agm65h : PylonRack_1Rnd_Missile_AGM_02_F {
		hardpoints[] += {"FIR_A10_MAV_HP"};
	};

  	class PylonRack_7Rnd_Rocket_04_HE_F;
  	class itc_hp_dumb_rocket_Rocket_04_HE_F : PylonRack_7Rnd_Rocket_04_HE_F {
  		hardpoints[] += {"FIR_A10_BOMB_HP"};
  	};
  	class itc_hp_dumb_rocket_ITC_ammo_apkws_m151 : PylonRack_7Rnd_Rocket_04_HE_F {
  		hardpoints[] += {"FIR_A10C_BOMB_HP"};
  	};
  	class itc_hp_dumb_rocket_itc_ammo_Hydra_M156 : PylonRack_7Rnd_Rocket_04_HE_F {
  		hardpoints[] += {"FIR_A10_BOMB_HP"};
  	};
};
//["FIR_A10C"."FIR_A10C_Base","Plane_CAS_01_base_F","Plane_Base_F","Plane","Air","AllVehicles","All"]
