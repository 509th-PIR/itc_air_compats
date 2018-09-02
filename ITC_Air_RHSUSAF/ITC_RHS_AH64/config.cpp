class cfgPatches {
    class ITC_Air_Compat_RHS_AH64 {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.000000;
        requiredAddons[] = {"itc_air"};
    };
};

class ITC_Air_Config_AH64 {
  class rover {
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
	class RHS_AH64_base;
  class RHS_AH64D: RHS_AH64_base {
    class itc_air : ITC_Air_Config_AH64 {};
	};
};



//	[""RHS_AH64D","RHS_AH64_base","Heli_Attack_01_base_F","Helicopter_Base_F","Helicopter","Air","AllVehicles","All"]
