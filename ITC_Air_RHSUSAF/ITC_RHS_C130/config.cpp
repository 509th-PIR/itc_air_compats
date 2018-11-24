class cfgPatches {
    class ITC_Air_Compat_RHS_C130 {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.000000;
        requiredAddons[] = {"itc_air"};
    };
};

class ITC_Air_Config_RHS_C130 {
  class rover {
    capable = 0;
    frequency_default = 5784;
  };
  targeting_user = "gunner";
  tgp = 0;
  wso = 0;
  hmd = 0;
  mfdApps[] = {"TAD","STAT","STPT","OPT"};
  systems[] = {"UFC","SOI","MFD","MFD_R","SADL","ACMI","TAD","MFD_L","WPT","HUD","AUTOPILOT","AP-MAN","GCAS","TAXI"}; // FIX LATER No ir laser
  mfdType = "classic";
};

class cfgVehicles {
	class RHS_C130J_Base;
  class RHS_C130J: RHS_C130J_Base {
    class itc_air_driver : ITC_Air_Config_RHS_C130{};
    class itc_air_turret_0 : ITC_Air_Config_RHS_C130{};
	};
};
