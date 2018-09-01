class cfgPatches {
	class ITC_RHS_MELB {
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {"itc_air"};
	};
};

class ITC_Air_Config_F14 {
	class rover {
		capable = 0;
		frequency_default = 5784;
	};
	targeting_user = "pilot";
	wso = 1;
	systems[] = {"UFC","SOI","TAXI","DSMS","MFD","MFD_L","MFD_R","AUTOPILOT","AP-MAN","FCS","GCAS","TGP","WPT"};
	mfdApps[] = {"DSMS","TGP","STAT","STPT","OPT"};
	mfdType = "classic";
};

class cfgVehicles {
	class FIR_F14D_Base;
	class FIR_F14D: FIR_F14D_Base {
		class itc_air : ITC_Air_Config_F14 {};
	};
};

hardpoints[] = {"FIR_MISC","FIR_Clean_MISC","FIR_F14_AA_HP","FIR_F14_U1_HP","FIR_F14_Under_HP","FIR_F14D_Under_HP"};

class cfgMagazines {
	class PylonMissile_1Rnd_Mk82_F;
	class itc_hp_smart_ITC_ammo_gbu38 : PylonMissile_1Rnd_Mk82_F {
		hardpoints[] += {"FIR_F14_Under_HP"};
	};
	class itc_hp_smart_ITC_ammo_gbu38v3b : PylonMissile_1Rnd_Mk82_F {
		hardpoints[] += {"FIR_F14_Under_HP"};
	};
	class itc_hp_smart_ITC_ammo_gbu31 : PylonMissile_1Rnd_Mk82_F {
		hardpoints[] += {"FIR_F14_Under_HP"};
	};
	class itc_hp_smart_ITC_ammo_gbu32 : PylonMissile_1Rnd_Mk82_F {
		hardpoints[] += {"FIR_F14_Under_HP"};
	};
	class PylonRack_7Rnd_Rocket_04_HE_F;
	class itc_hp_dumb_rocket_Rocket_04_HE_F : PylonRack_7Rnd_Rocket_04_HE_F {
		hardpoints[] += {"FIR_F14_U1_HP","FIR_F14_U2_HP","FIR_F14_SP_HP"};
	};
	class itc_hp_dumb_rocket_itc_ammo_Hydra_M156 : PylonRack_7Rnd_Rocket_04_HE_F {
		hardpoints[] += {"FIR_F14_U1_HP","FIR_F14_U2_HP","FIR_F14_SP_HP"};
	};
};
