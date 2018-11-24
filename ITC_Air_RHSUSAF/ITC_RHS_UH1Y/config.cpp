class cfgPatches {
    class ITC_Air_Compat_RHS_UH60 {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.000000;
        requiredAddons[] = {"itc_air"};
    };
};

class ITC_Air_Config_RHS_UH1Y {
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
  systems[] = {"UFC","ROVER","SOI","MFD","MFD_R","SADL","ACMI","TAD","MFD_L","WPT"}; // FIX LATER No ir laser
  mfdType = "classic";
};

class cfgVehicles {
	class RHS_UH1Y_US_base;
  class RHS_UH1Y: RHS_UH1Y_US_base {
    class itc_air_driver : ITC_Air_Config_RHS_UH1Y{};
    class itc_air_turret_0 : ITC_Air_Config_RHS_UH1Y {
      systems[] = {"UFC","ROVER","SOI","MFD","MFD_R","SADL","ACMI","TAD","MFD_L","WPT","ROVER"};
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

// ["RHS_UH1Y","RHS_UH1Y_US_base","RHS_UH1Y_base","RHS_UH60_Base","Heli_Transport_01_base_F","Helicopter_Base_H","Helicopter_Base_F","Helicopter","Air","AllVehicles","All"]
