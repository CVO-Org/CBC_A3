// Based on Weapons-Balance-FOW by johnb432 (https://github.com/johnb432/Weapons-Balance-FOW), MIT License,
// Copyright (c) 2021 johnb432. Magazine lists only.
class CfgWeapons {
    class fow_rifleBolt_base;
    class fow_rifle_base;
    class Launcher_Base_F;

    class fow_w_k98: fow_rifleBolt_base {
        magazineWell[] += {"CBA_792x57_K98"};
    };
    class fow_w_leeenfield_no4mk1: fow_rifleBolt_base {
        magazineWell[] += {"CBA_303B_LeeEn"};
    };
    class fow_w_m1903A1: fow_rifleBolt_base {
        magazineWell[] += {"CBA_3006_Spring"};
    };
    class fow_w_type99: fow_rifleBolt_base {
        magazineWell[] += {"CBA_77x58_Arisaka"};
    };
    class fow_w_bren: fow_rifle_base {
        magazineWell[] += {"CBA_303B_BREN"};
    };
    class fow_w_fg42: fow_rifle_base {
        magazineWell[] += {"CBA_792x57_FG42"};
    };
    class fow_w_m1918a2: fow_rifle_base {
        magazineWell[] += {"CBA_3006_BAR"};
    };
    class fow_w_m1919: fow_rifle_base {
        magazineWell[] += {"CBA_3006_Belt"};
    };
    class fow_w_mg34: fow_rifle_base {
        magazineWell[] += {"CBA_792x57_LINKS"};
    };
    class fow_w_mg42: fow_rifle_base {
        magazineWell[] += {"CBA_792x57_LINKS"};
    };
    class fow_w_type99_lmg: fow_rifle_base {
        magazineWell[] += {"CBA_77x58_Type99"};
    };
    class fow_w_g43: fow_rifle_base {
        magazineWell[] += {"CBA_792x57_G43", "CBA_792x57_K98"};
    };
    class fow_w_m1_carbine: fow_rifle_base {
        magazineWell[] += {"CBA_30Carbine_M1Carbine"};
    };
    class fow_w_m1_garand: fow_rifle_base {
        magazineWell[] += {"CBA_3006_Garand"};
    };
    class fow_w_stg44: fow_rifle_base {
        magazineWell[] += {"CBA_792x33_StG"};
    };
    class fow_w_piat: fow_rifle_base {
        magazineWell[] += {"CBA_PIAT"};
    };
    class fow_w_m1a1_bazooka: Launcher_Base_F {
        magazineWell[] += {"CBA_Bazooka"};
    };
    class fow_w_m1a1_thompson: fow_rifle_base {
        magazineWell[] += {"CBA_45ACP_Thompson_Stick"};
    };
    class fow_w_m3: fow_rifle_base {
        magazineWell[] += {"CBA_45ACP_Grease"};
    };
    class fow_w_m55_reising: fow_rifle_base {
        magazineWell[] += {"CBA_45ACP_Reising"};
    };
    class fow_w_mp40: fow_rifle_base {
        magazineWell[] += {"CBA_9x19_MP40"};
    };
    class fow_w_sten_mk2: fow_rifle_base {
        magazineWell[] += {"CBA_9x19_STEN"};
    };
    class fow_w_type100: fow_rifle_base {
        magazineWell[] += {"CBA_8x22_Type100"};
    };
    class fow_w_owen: fow_rifle_base {
        magazineWell[] += {"CBA_9x19_Owen"};
    };
};
