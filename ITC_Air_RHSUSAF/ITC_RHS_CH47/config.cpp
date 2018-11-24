class cfgPatches {
    class ITC_Air_Compat_RHS_CH47 {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.000000;
        requiredAddons[] = {"itc_air"};
    };
};

class ITC_Air_Config_RHS_CH_47F {
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
	class RHS_CH_47F_base;
  class RHS_CH_47F: RHS_CH_47F_base {
    class itc_air_driver : ITC_Air_Config_RHS_CH_47F {};
    class itc_air_turret_0 : ITC_Air_Config_RHS_CH_47F {};
	};
};

//["RHS_CH_47F"."RHS_CH_47F_base","Heli_Transport_02_base_F","Helicopter_Base_H","Helicopter_Base_F","Helicopter","Air","AllVehicles","All"]
//["RHS_CH_47F_10","RHS_CH_47F","RHS_CH_47F_base","Heli_Transport_02_base_F","Helicopter_Base_H","Helicopter_Base_F","Helicopter","Air","AllVehicles","All"]
