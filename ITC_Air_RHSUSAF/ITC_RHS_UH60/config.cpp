class cfgPatches {
    class ITC_Air_Compat_RHS_UH60 {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.000000;
        requiredAddons[] = {"itc_air"};
    };
};

class ITC_Air_Config_RHS_UH60M {
  class rover {
    capable = 0;
    frequency_default = 5784;
  };
  targeting_user = "gunner";
  tgp = 0;
  wso = 0;
  hmd = 0;
  mfdApps[] = {"TAD","STAT","STPT","OPT"};
  systems[] = {"UFC","SOI","MFD","MFD_R","SADL","ACMI","TAD","MFD_L","WPT"}; // FIX LATER No ir laser
  mfdType = "classic";
};

class cfgVehicles {
	class RHS_UH60M_US_base;
  class RHS_UH60M: RHS_UH60M_US_base {
    class itc_air_driver : ITC_Air_Config_RHS_UH60M{};
    class itc_air_turret_0 : ITC_Air_Config_RHS_UH60M{};
	};
};

class cfgMagazines {
	class PylonRack_7Rnd_Rocket_04_HE_F;
	class itc_hp_dumb_rocket_Rocket_04_HE_F : PylonRack_7Rnd_Rocket_04_HE_F {
		hardpoints[] += {"RHS_HP_FFAR_ARMY"};
	};
	class itc_hp_dumb_rocket_ITC_ammo_apkws_m151 : PylonRack_7Rnd_Rocket_04_HE_F {
		hardpoints[] += {"RHS_HP_FFAR_ARMY"};
	};
	class itc_hp_dumb_rocket_itc_ammo_Hydra_M156 : PylonRack_7Rnd_Rocket_04_HE_F {
		hardpoints[] += {"RHS_HP_FFAR_ARMY"};
	};
};

// ["RHS_UH60M","RHS_UH60M_US_base","RHS_UH60M_base","RHS_UH60_Base","Heli_Transport_01_base_F","Helicopter_Base_H","Helicopter_Base_F","Helicopter","Air","AllVehicles","All"]
