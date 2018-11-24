class cfgPatches {
    class ITC_Air_Compat_RHS_AH1Z {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.000000;
        requiredAddons[] = {"itc_air"};
    };
};

class ITC_Air_Config_AH1Z {
  class rover {
    turret = 0;
    capable = 1;
    frequency_default = 5784;
  };
  targeting_user = "gunner";
  tgp = 0;
  wso = 0;
  hmd = 0;
  mfdApps[] = {"TAD","STAT","STPT","OPT"};
  systems[] = {"UFC","ROVER","SOI","MFD","MFD_L","WPT","MFD_R","SADL","ACMI","TAD"}; // FIX LATER No ir laser
  mfdType = "classic";
};

class cfgVehicles {
	class RHS_AH1Z_base;
  class RHS_AH1Z: RHS_AH1Z_base {
    class itc_air : ITC_Air_Config_AH1Z {};
    class itc_air_gunner : ITC_Air_Config_AH1Z {
      systems[] = {"UFC","ROVER","SOI","MFD","MFD_L","WPT","MFD_R","SADL","ACMI","TAD","ROVER"};
    };
	};
};

class cfgMagazines {
	class PylonRack_7Rnd_Rocket_04_HE_F;
	class itc_hp_dumb_rocket_Rocket_04_HE_F : PylonRack_7Rnd_Rocket_04_HE_F {
		hardpoints[] += {"RHS_HP_FFAR_USMC"};
	};
	class itc_hp_dumb_rocket_ITC_ammo_apkws_m151 : PylonRack_7Rnd_Rocket_04_HE_F {
		hardpoints[] += {"RHS_HP_FFAR_USMC"};
	};
	class itc_hp_dumb_rocket_itc_ammo_Hydra_M156 : PylonRack_7Rnd_Rocket_04_HE_F {
		hardpoints[] += {"RHS_HP_FFAR_USMC"};
	};
};


//	[""RHS_AH1Z","RHS_AH1Z_base","Heli_Attack_01_base_F","Helicopter_Base_F","Helicopter","Air","AllVehicles","All"]
