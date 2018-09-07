class cfgPatches {
    class ITC_Air_Compat_RHS_F22 {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.000000;
        requiredAddons[] = {"itc_air"};
    };
};

class ITC_Air_Config_RHS_F22 {
  class rover {
    capable = 0;
    frequency_default = 5784;
  };
  targeting_user = "pilot";
  tgp = 0;
  wso = 0;
  hmd = 1;
  mfdApps[] = {"DSMS","STAT","TAD","STPT","OPT"};
  systems[] = {"UFC","SOI","TAXI","DSMS","MFD","MFD_L","MFD_R","HMD","AUTOPILOT","SADL","FCS","ACMI","GCAS","WPT","TAD","HUD"};
  mfdType = "classic";
};

class cfgVehicles {
	class Plane_Fighter_03_base_F;
  class rhsusf_f22: Plane_Fighter_03_base_F {
    class itc_air : ITC_Air_Config_RHS_F22 {};
	};
};

class cfgMagazines {
	class PylonMissile_1Rnd_Mk82_F;
	class itc_hp_smart_ITC_ammo_gbu38 : PylonMissile_1Rnd_Mk82_F {
		hardpoints[] += {"RHS_HP_JDAM_500"};
	};
	class itc_hp_smart_ITC_ammo_gbu38v3b : PylonMissile_1Rnd_Mk82_F {
		hardpoints[] += {"RHS_HP_JDAM_500"};
	};
	class itc_hp_smart_ITC_ammo_gbu54 : PylonMissile_1Rnd_Mk82_F {
		hardpoints[] += {"RHS_HP_JDAM_500"};
	};
	class itc_hp_smart_ITC_ammo_gbu54v4 : PylonMissile_1Rnd_Mk82_F {
		hardpoints[] += {"RHS_HP_JDAM_500"};
	};
	class itc_hp_smart_ITC_ammo_gbu32 : PylonMissile_1Rnd_Mk82_F {
		hardpoints[] += {"RHS_HP_JDAM_1000"};
	};
  class PylonRack_Bomb_SDB_x4;
	class itc_hp_bru61_itc_ammo_gbu39 : PylonRack_Bomb_SDB_x4 {
		hardpoints[] += {"RHS_HP_JDAM_500"};
	};
};

//["FIR_A10C"."FIR_A10C_Base","Plane_CAS_01_base_F","Plane_Base_F","Plane","Air","AllVehicles","All"]
