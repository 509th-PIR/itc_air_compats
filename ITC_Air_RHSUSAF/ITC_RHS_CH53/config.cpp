class cfgPatches {
    class ITC_Air_Compat_RHS_CH53 {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.000000;
        requiredAddons[] = {"itc_air"};
    };
};

class ITC_Air_Config_RHS_CH53 {
  class rover {
    turret = 0;
    capable = 1;
    frequency_default = 5784;
  };
  targeting_user = "pilot";
  tgp = 0;
  wso = 0;
  hmd = 0;
  mfdApps[] = {"TAD","STAT","STPT","OPT"};
  systems[] = {"UFC","ROVER","SOI","MFD","MFD_R","SADL","ACMI","TAD","WPT","MFD_L"}; // FIX LATER No ir laser
  mfdType = "classic";
};

class cfgVehicles {
	class Helicopter_Base_H;
  class rhsusf_CH53E_USMC: Helicopter_Base_H {
    class itc_air_driver : ITC_Air_Config_RHS_CH53{};
    class itc_air_turret_0 : ITC_Air_Config_RHS_CH53 {
      systems[] = {"UFC","ROVER","SOI","MFD","MFD_R","SADL","ACMI","TAD","MFD_L","WPT","ROVER"};
    };
	};
};
