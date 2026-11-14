// Based on Weapons-Balance-PI by johnb432 (https://github.com/johnb432/Weapons-Balance-PI), MIT License,
// Copyright (c) 2021 johnb432. Magazine lists only.
class CfgWeapons {
    class Rifle_Long_Base_F;
    class Rifle_Base_F;

    class bnae_falkor_base: Rifle_Long_Base_F {
        magazineWell[] += {"CBA_300WM_AICS"};
    };
    class bnae_mk1_base: Rifle_Long_Base_F {
        magazineWell[] += {"CBA_303B_LeeEn"};
    };
    class bnae_m97_base: Rifle_Long_Base_F {
        magazineWell[] += {"CBA_12g_1rnd", "CBA_12g_2rnds", "CBA_12g_3rnds", "CBA_12g_4rnds", "CBA_12g_5rnds", "CBA_12g_6rnds"};
    };
    class bnae_rk95_base: Rifle_Base_F {
        magazineWell[] += {"CBA_762x39_AK", "CBA_762x39_RPK"};
    };
    class bnae_spr220_base: Rifle_Base_F {
        magazineWell[] += {"CBA_12g_1rnd", "CBA_12g_2rnds"};
    };
};
