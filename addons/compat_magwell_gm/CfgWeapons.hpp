// Based on Weapons-Balance-GM by johnb432 (https://github.com/johnb432/Weapons-Balance-GM), MIT License,
// Copyright (c) 2021 johnb432. Magazine lists only.
class CfgWeapons {
    class gm_rifle_base;
    class gm_machineGun_base;
    class gm_grenadeLauncher_base;
    class gm_pm_base;
    class gm_p1_base;
    class gm_lp1_base;
    class gm_p2a1_base;
    class gm_wz78_base;
    class gm_launcher_base;

    class gm_m16_base: gm_rifle_base {
        magazineWell[] += {"CBA_556x45_STANAG", "CBA_556x45_STANAG_2D", "CBA_556x45_STANAG_2D_XL", "CBA_556x45_STANAG_L", "CBA_556x45_STANAG_XL", "STANAG_556x45_Large"};
    };
    class gm_g3_base: gm_rifle_base {
        magazineWell[] += {"CBA_762x51_G3", "CBA_762x51_G3_L", "CBA_762x51_G3_XL"};
    };
    class gm_g3ka4_base: gm_g3_base {
        magazineWell[] += {"CBA_762x51_G3", "CBA_762x51_G3_L", "CBA_762x51_G3_XL"};
    };
    class gm_g8_base: gm_g3_base {
        magazineWell[] += {"CBA_762x51_G3", "CBA_762x51_G3_L", "CBA_762x51_G3_XL"};
    };
    class gm_psg1_base: gm_g3_base {
        magazineWell[] += {"CBA_762x51_G3", "CBA_762x51_G3_L", "CBA_762x51_G3_XL"};
    };
    class gm_hk33_base: gm_rifle_base {
        magazineWell[] += {"CBA_556x45_HK33"};
    };
    class gm_mg3_base: gm_machineGun_base {
        magazineWell[] += {"CBA_762x51_MG3", "CBA_762x51_LINKS", "M240_762x51"};
    };
    class gm_pk_base: gm_machineGun_base {
        magazineWell[] += {"CBA_762x54R_LINKS", "PK_762x54R"};
    };
    class gm_g36_base: gm_rifle_base {
        magazineWell[] += {"CBA_556x45_G36"};
    };
    class gm_hk512_base: gm_rifle_base {
        magazineWell[] += {"CBA_12g_1rnd", "CBA_12g_2rnds", "CBA_12g_3rnds", "CBA_12g_4rnds", "CBA_12g_5rnds", "CBA_12g_6rnds", "CBA_12g_7rnds"};
    };
    class gm_hk69_muzzle: gm_grenadeLauncher_base {
        magazineWell[] += {"CBA_40mm_M203"};
    };
    class gm_pm_blk: gm_pm_base {
        magazineWell[] += {"CBA_9x18_PM"};
    };
    class gm_p1_blk: gm_p1_base {
        magazineWell[] += {"CBA_9x19_P38"};
    };
    class gm_lp1_blk: gm_lp1_base {
        magazineWell[] += {"CBA_FLARE_265"};
    };
    class gm_p2a1_blk: gm_p2a1_base {
        magazineWell[] += {"CBA_FLARE_265"};
    };
    class gm_wz78_blk: gm_wz78_base {
        magazineWell[] += {"CBA_FLARE_265"};
    };
    class gm_carlgustaf_m2_base: gm_launcher_base {
        magazineWell[] += {"CBA_Carl_Gustaf"};
    };
    class gm_rpg7_base: gm_launcher_base {
        magazineWell[] += {"RPG7", "CBA_RPG7"};
    };
    class gm_strela_launcher_base: gm_launcher_base {
        magazineWell[] += {"CBA_STRELA"};
    };
    class gm_sg550_base: gm_rifle_base {
        magazineWell[] += {"CBA_556x45_SG550"};
    };
    class gm_mp5_base: gm_rifle_base {
        magazineWell[] += {"CBA_9x19_MP5"};
    };
    class gm_pm63_base: gm_rifle_base {
        magazineWell[] += {"CBA_9x18_PM63"};
    };
    class gm_mp2_base: gm_rifle_base {
        magazineWell[] += {"CBA_9x19_UZI"};
    };
};
