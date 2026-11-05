// Based on Weapons-Balance-3CBFactions by johnb432 (https://github.com/johnb432/Weapons-Balance-3CBFactions), MIT License,
// Copyright (c) 2021 johnb432. Config fixes only.
class CfgWeapons {
    class uk3cb_auga1;
    class LMG_Zafir_F;
    class SMG_02_F;
    class UK3CB_MP5N;
    class rhs_weap_m76;
    class Rifle_Base_F;
    class rhs_weap_scorpion;
    class rhs_weap_pp2000;
    class UK3CB_UK59;

    class uk3cb_auga2_para: uk3cb_auga1 {
        magazineWell[] = {"CBA_9x19_STEYR"};
    };
    class UK3CB_RPD: LMG_Zafir_F {
        magazineWell[] = {"CBA_762x39_RPD"};
    };
    class UK3CB_MP5_Base: SMG_02_F {
        magazineWell[] = {"CBA_9x19_MP5"};
    };
    class UK3CB_MP510: UK3CB_MP5N {
        magazineWell[] = {"CBA_10mmAuto_MP5", "CBA_10x25_MP5"};
    };
    class uk3cb_sks_01: rhs_weap_m76 {
        magazineWell[] = {"CBA_762x39_SKS", "CBA_762x39_SKS_Clip"};
    };
    class UK3CB_M1903A1_base: Rifle_Base_F {
        magazineWell[] = {"CBA_3006_Spring"};
    };
    class UK3CB_Uzi: rhs_weap_scorpion {
        magazineWell[] = {"CBA_9x19_UZI"};
    };
    class uk3cb_ppsh41: rhs_weap_pp2000 {
        magazineWell[] = {"CBA_762x25_PPSh_Stick", "CBA_762x25_PPSh_Drum"};
    };
    class UK3CB_UK59N: UK3CB_UK59 {
        magazineWell[] = {};
    };
    class UK3CB_STGW57_base: Rifle_Base_F {
        magazineWell[] = {"CBA_75x55_STGW57"};
    };
    class uk3cb_stgw57_5104: UK3CB_STGW57_base {
        magazineWell[] = {"CBA_762x51_SIGAMT"};
    };
};
