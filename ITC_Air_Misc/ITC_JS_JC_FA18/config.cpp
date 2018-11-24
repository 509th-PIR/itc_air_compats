class cfgPatches {
    class ITC_Air_Compat_JS_JC_FA18E {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.000000;
        requiredAddons[] = {"itc_air","JS_JC_FA18"};
    };
};


class SensorTemplatePassiveRadar;
class SensorTemplateAntiRadiation;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class SensorTemplateDataLink;
class VehicleSystemsTemplateLeftSensorsPilot;
class VehicleSystemsTemplateRightSensorsPilot;
class itc_air_default_jet;

#define fov(DEG) \
    initFov = DEG / 120; \
    minFov = DEG / 120; \
    maxFov = DEG / 120; \

class tgp_baseFov {
    opticsDisplayName = "WFOV";
    initAngleX = 0;
    minAngleX = 0;
    maxAngleX = 0;
    initAngleY = 0;
    minAngleY = 0;
    maxAngleY = 0;
    initFov = "(60 / 120)";
    minFov = "(60 / 120)";
    maxFov = "(60 / 120)";
    directionStabilized = 1;
    visionMode[] = {"Normal","NVG","Ti"};
    thermalMode[] = {0,1};
    gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
    opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur2"};
};


class cfgVehicles {
	class Air;
	class Plane: Air
	{
		class HitPoints;
	};
	class Plane_Base_F: Plane
	{
		class Components;
	};
	class JS_JC_FA18E: Plane_Base_F
	{
    class itc_air : itc_air_default_jet {
      mfdApps[] = {"DSMS","TGP","STAT","TAD","STPT","OPT","MAV","FCR","EW"};
      systems[] = {"F181E","UFC","SOI","TAXI","DSMS","MAVERICK","FCR","MFD","MFD_L","MFD_R","HMD","AUTOPILOT","AP-MAN","ROVER","FCS","ACMI","GCAS","AGCAS","TGP","WPT","TAD","HUD","SADL","EW"};
      //mfdType = "touch";
    };
    class pilotCamera {
        class OpticsIn {
            class WFLIR : tgp_baseFov {
                opticsDisplayName = "Wide";
                fov(24)
            };
            class MFLIR : tgp_baseFov {
                opticsDisplayName = "Medium";
                fov(3.5)
            };
            class NTV : tgp_baseFov {
                opticsDisplayName = "Narrow";
                fov(1)
            };
            class SNTV : tgp_baseFov {
                opticsDisplayName = "Super Narrow";
                fov(0.2)
            };
        };
        minTurn = -180;
        maxTurn = 180;
        initTurn = 0;
        minElev = -10;
        maxElev = 155;
        initElev = 0;
        maxXRotSpeed = 0.5;
        maxYRotSpeed = 0.5;
        pilotOpticsShowCursor = 0;
        controllable = 1;
        turretInfoType = "RscOptics_Heli_Attack_01_gunner";
    };
    class renderTargets {};
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange=500;
							maxRange=3500;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=500;
							maxRange=3500;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						angleRangeHorizontal=360;
						angleRangeVertical=180;
						aimDown=0;
					};
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange=500;
							maxRange=12000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=500;
							maxRange=6000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						angleRangeHorizontal=80;
						angleRangeVertical=45;
						aimDown=0;
						groundNoiseDistanceCoef=0.1;
						maxSpeedThreshold=40;
						minSpeedThreshold=30;
						typeRecognitionDistance=6000;
					};
					class PassiveRadarSensorComponent: SensorTemplatePassiveRadar
					{
						class GroundTarget
						{
							minRange=500;
							maxRange=6000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
					};
					class LaserSensorComponent: SensorTemplateLaser
					{
					};
					class NVSensorComponent: SensorTemplateNV
					{
					};
					class VisualSensorComponent: SensorTemplateVisual
					{
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftSensorsPilot
			{
				class Components: components
				{
					CI_FEED=Driver;
					class CrewDisplay
					{
					};
					class VehicleMissileDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Missile";
						resource="RscTransportCameraComponentMissile";
					};
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={16000,8000,4000,2000};
						resource="RscCustomInfoSensors";
					};
					class UAVDisplay
					{
						componentType="UAVFeedDisplayComponent";
					};
					class VehicleDriverDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Driver";
					};
					class VehicleGunnerDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="PrimaryGunner";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightSensorsPilot
			{
				defaultDisplay="SensorDisplay";
				class Components: components
				{
					CI_FEED=Driver;
					class CrewDisplay
					{
					};
					class VehicleMissileDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Missile";
						resource="RscTransportCameraComponentMissile";
					};
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={16000,8000,4000,2000};
						resource="RscCustomInfoSensors";
					};
					class UAVDisplay
					{
						componentType="UAVFeedDisplayComponent";
					};
					class VehicleDriverDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Driver";
					};
					class VehicleGunnerDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="PrimaryGunner";
					};
				};
			};
			class ForcedCam
                    {
                        componentType = "VehicleSystemsDisplayManager";
                        defaultDisplay = "VehicleDriverDisplay";
                        x = 11;
                        y = 11;
                        class Components
                        {
                            class VehicleDriverDisplay  //Camera feed from driver's optics
							{
								componentType = "TransportFeedDisplayComponent";
								source = "Driver";
								// resource = "RscTransportCameraComponentDriver"; // hardcoded
							};
            };
        };
			class TransportPylonsComponent
			{
				UIPicture="\JS_JC_FA18\UI\FA18_CA.paa";
				class Pylons
				{
					class pylon1
					{
						maxweight=200;
						hardpoints[]=
						{
							"I_BIM9X",
							"JS_JC_F18_PylonAIM"
						};
						attachment="PylonMissile_Missile_BIM9X_x1";
						bay=-1;
						priority=100;
						UIPosition[]={0.64999998,0.23};
						turret[]={};
					};
					class pylon2: pylon1
					{
            hardpoints[]=
            {
              "I_BIM9X",
              "JS_JC_F18_PylonAIM"
            };
						priority=90;
						UIPosition[]={0.050000001,0.23};
						mirroredMissilePos=1;
					};
					class pylon3
					{
						maxweight=2000;
						hardpoints[]=
						{
							"JS_JC_F18_PylonAIM",
							"B_AMRAAM",
							"B_BIM9X_RAIL",
							"B_AMRAAM_D_RAIL",
              "B_HARM",
							"Itc_hp_dumb",
							"Itc_hp_dumb_rocket",
							"Itc_hp_smart",
							"Itc_hp_lau117",
							"itc_hp_harpoon"
						};
						attachment="itc_hp_lau117_itc_ammo_agm65e";
						bay=-1;
						priority=100;
						UIPosition[]={0.60000002,0.28};
						turret[]={};
					};
					class pylon4: pylon3
					{
            hardpoints[]=
            {
              "JS_JC_F18_PylonAIM",
              "B_AMRAAM",
              "B_BIM9X_RAIL",
              "B_AMRAAM_D_RAIL",
              "B_HARM",
              "Itc_hp_dumb",
              "Itc_hp_dumb_rocket",
              "Itc_hp_smart",
              "Itc_hp_lau117",
              "itc_hp_harpoon"
            };
            attachment="itc_hp_lau117_itc_ammo_agm65e";
						maxweight=2000;
						priority=70;
						UIPosition[]={0.1,0.28};
						mirroredMissilePos=3;
					};
					class pylon5: pylon3
					{
						hardpoints[]=
						{
							"JS_JC_F18_PylonAIM",
							"JS_JC_F18_Tank_Pylon",
							"JS_JC_F18_Pylon",
							"B_BIM9X_RAIL",
							"B_BIM9X_DUAL_RAIL",
							"B_AMRAAM_D_RAIL",
							"B_AMRAAM_D_DUAL_RAIL",
							"B_HARM",
							"Itc_hp_dumb",
							"Itc_hp_dumb_rocket",
							"Itc_hp_smart",
							"Itc_hp_lau117",
							"Itc_hp_bru33",
							"Itc_hp_bru55",
							"Itc_hp_bru55_lau117",
							"itc_hp_bru61",
							"itc_hp_harpoon"
						};
						maxweight=2000;
						attachment="itc_hp_bru55_ITC_ammo_gbu38";
						priority=60;
						UIPosition[]={0.55000001,0.33000001};
					};
					class pylon6: pylon3
					{
            hardpoints[]=
            {
              "JS_JC_F18_PylonAIM",
              "B_AMRAAM",
              "B_BIM9X_RAIL",
              "B_AMRAAM_D_RAIL",
              "B_HARM",
              "Itc_hp_dumb",
              "Itc_hp_dumb_rocket",
              "Itc_hp_smart",
              "Itc_hp_lau117",
              "itc_hp_harpoon"
            };
            attachment="itc_hp_bru55_ITC_ammo_gbu38";
						maxweight=2000;
						priority=50;
						UIPosition[]={0.15000001,0.33000001};
						mirroredMissilePos=5;
					};
					class pylon7: pylon3
					{
            hardpoints[]=
            {
              "JS_JC_F18_PylonAIM",
              "B_AMRAAM",
              "B_BIM9X_RAIL",
              "B_AMRAAM_D_RAIL",
              "B_HARM",
							"Itc_hp_dumb",
							"Itc_hp_dumb_rocket",
							"Itc_hp_smart",
							"Itc_hp_lau117",
							"Itc_hp_bru33",
							"Itc_hp_bru55",
							"Itc_hp_bru55_lau117",
							"itc_hp_bru61",
							"itc_hp_harpoon"
            };
						maxweight=2000;
						attachment="itc_hp_bru33_ITC_ammo_gbu12";
						priority=40;
						UIPosition[]={0.5,0.38};
					};
					class pylon8: pylon3
					{
            hardpoints[]=
            {
              "JS_JC_F18_PylonAIM",
              "B_AMRAAM",
              "B_BIM9X_RAIL",
              "B_AMRAAM_D_RAIL",
              "B_HARM",
							"Itc_hp_dumb",
							"Itc_hp_dumb_rocket",
							"Itc_hp_smart",
							"Itc_hp_lau117",
							"Itc_hp_bru33",
							"Itc_hp_bru55",
							"Itc_hp_bru55_lau117",
							"itc_hp_bru61",
							"itc_hp_harpoon"
            };
						maxweight=2000;
						attachment="itc_hp_bru33_ITC_ammo_gbu12";
						priority=30;
						UIPosition[]={0.2,0.38};
						mirroredMissilePos=7;
					};
					class pylon9: pylon3
					{
            hardpoints[]=
            {
							"B_AMRAAM"
            };
						maxweight=1000;
						attachment="PylonMissile_1Rnd_GAA_missiles";
						priority=20;
						UIPosition[]={0.46,0.43000001};
					};
					class pylon10: pylon3
					{
            hardpoints[]=
            {
              "JS_JC_F18_ATFlir_Pylon"
            };
						maxweight=1000;
						attachment="js_m_fa18_atflir";
						priority=20;
						UIPosition[]={0.25,0.43000001};
						mirroredMissilePos=9;
					};
					class pylon11: pylon3
					{
						hardpoints[]=
						{
							"JS_JC_F18_Tank_Pylon",
							"Itc_hp_dumb",
							"Itc_hp_bru33"
						};
						maxweight=4000;
						priority=10;
						attachment="js_m_fa18_wing_tank_x1";
						UIPosition[]={0.32499999,0.5};
					};
				};
				class Presets
				{
					class Default
					{
						attachment[]=
						{
							"PylonRack_Missile_BIM9X_x1",
							"PylonRack_Missile_BIM9X_x1",
							"PylonRack_Missile_AMRAAM_D_x1",
							"PylonRack_Missile_AMRAAM_D_x1",
							"PylonRack_Missile_AGM_02_x1",
							"PylonRack_Missile_AGM_02_x1",
							"PylonMissile_Bomb_GBU12_x1",
							"PylonMissile_Bomb_GBU12_x1",
							"PylonRack_Missile_AMRAAM_D_x1",
							"PylonRack_Missile_AMRAAM_D_x1",
							""
						};
						displayName="Default";
					};
					class Empty
					{
						attachment[]={};
						displayName="Empty";
					};
					class Multirole
					{
						attachment[]=
						{
							"PylonRack_Missile_BIM9X_x1",
							"PylonRack_Missile_BIM9X_x1",
							"PylonRack_Missile_AMRAAM_D_x1",
							"PylonRack_Missile_AMRAAM_D_x1",
							"PylonRack_Missile_AGM_02_x1",
							"PylonRack_Missile_AGM_02_x1",
							"PylonRack_Bomb_SDB_x4",
							"PylonRack_Bomb_SDB_x4",
							"PylonRack_Missile_AMRAAM_D_x1",
							"PylonRack_Missile_AMRAAM_D_x1",
							""
						};
						displayName="Multirole";
					};
					class CAS
					{
						attachment[]=
						{
							"PylonRack_Missile_BIM9X_x1",
							"PylonRack_Missile_BIM9X_x1",
							"PylonRack_Missile_AGM_02_x1",
							"PylonRack_Missile_AGM_02_x1",
							"PylonRack_Missile_AGM_02_x1",
							"PylonRack_Missile_AGM_02_x1",
							"PylonMissile_Bomb_GBU12_x1",
							"PylonMissile_Bomb_GBU12_x1",
							"PylonRack_Missile_AMRAAM_D_x1",
							"PylonRack_Missile_AMRAAM_D_x1",
							""
						};
						displayName="CAS";
					};
					class CAP
					{
						attachment[]=
						{
							"PylonRack_Missile_BIM9X_x1",
							"PylonRack_Missile_BIM9X_x1",
							"PylonRack_Missile_BIM9X_x1",
							"PylonRack_Missile_BIM9X_x1",
							"PylonRack_Missile_AMRAAM_D_x1",
							"PylonRack_Missile_AMRAAM_D_x1",
							"PylonRack_Missile_AMRAAM_D_x1",
							"PylonRack_Missile_AMRAAM_D_x1",
							"PylonRack_Missile_AMRAAM_D_x1",
							"PylonRack_Missile_AMRAAM_D_x1",
							""
						};
						displayName="CAP";
					};
					class SEAD
					{
						attachment[]=
						{
							"PylonRack_Missile_BIM9X_x1",
							"PylonRack_Missile_BIM9X_x1",
							"PylonMissile_Missile_HARM_x1",
							"PylonMissile_Missile_HARM_x1",
							"PylonMissile_Missile_HARM_x1",
							"PylonMissile_Missile_HARM_x1",
							"PylonRack_Bomb_SDB_x4",
							"PylonRack_Bomb_SDB_x4",
							"PylonRack_Missile_AMRAAM_D_x1",
							"PylonRack_Missile_AMRAAM_D_x1",
							""
						};
						displayName="SEAD";
					};
				};
			};
		};
  };
};

class cfgMagazines {
  class PylonMissile_1Rnd_Mk82_F;
	class js_m_fa18_atflir: PylonMissile_1Rnd_Mk82_F
	{
		scope=2;
		displayName="AN/ASQ-228 ATFLIR";
		count=1;
		ammo="js_a_fa18_altflir_pod";
		initSpeed=0;
		sound[]={};
		reloadSound[]={};
		nameSound="";
		hardpoints[]=
		{
			"JS_JC_F18_ATFlir_Pylon"
		};
		model="\A3\Weapons_F\DynamicLoadout\PylonMissile_1x_Bomb_02_F.p3d";
		pylonWeapon="";
	};
};

class cfgAmmo {
  class MissileBase;
	class js_a_fa18_altflir_pod: MissileBase
	{
		hit=0;
		indirectHit=0;
		indirectHitRange=0;
		thrustTime=0;
		thrust=0;
		maxspeed=0;
		timetolive=0;
		maneuvrability=0;
		model="\js_jc_fa18\stores\m_altflir_pod.p3d";
		proxyShape="\js_jc_fa18\stores\m_altflir_pod.p3d";
		airlock=0;
		laserLock=0;
		irLock=0;
		initTime=0;
		minRange=0;
		minRangeProbab=0;
		midRange=0;
		midRangeProbab=0;
		maxRange=0;
		maxRangeProbab=0;
		sideAirFriction=0;
	};
};
