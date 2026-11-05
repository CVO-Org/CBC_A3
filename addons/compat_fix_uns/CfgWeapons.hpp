// Based on Weapons-Balance-Unsung by johnb432 (https://github.com/johnb432/Weapons-Balance-Unsung), MIT License,
// Copyright (c) 2021 johnb432. Config fixes only.
class CfgWeapons {
    class launch_RPG32_F;
    class uns_rpg2;
    class uns_ak47;
    class uns_model70_base;
    class uns_PK_base;
    class Uns_Shotgun;
    class uns_PPS43;
    class uns_sten;
    class uns_pm63f;

    class uns_launcher_base_F: launch_RPG32_F {
        magazineWell[] = {};
    };
    class uns_rpg7: uns_rpg2 {
        magazineWell[] = {"RPG7", "CBA_RPG7"};
    };
    class uns_m1a1_bazooka: uns_rpg2 {
        magazineWell[] = {"CBA_Bazooka"};
    };
    class uns_sa58p: uns_ak47 {
        magazineWell[] = {"CBA_762x39_VZ58"};
    };
    class uns_M40_base: uns_model70_base {
        magazineWell[] = {"CBA_762x51_5rnds"};
    };
    class uns_ukvz59: uns_PK_base {
        magazineWell[] = {"CBA_762x54R_Vz59_LINKS"};
    };
    class uns_m1897: Uns_Shotgun {
        magazineWell[] = {"CBA_12g_1rnd", "CBA_12g_2rnds", "CBA_12g_3rnds", "CBA_12g_4rnds", "CBA_12g_5rnds", "CBA_12g_6rnds"};
    };
    class uns_baikal: uns_m1897 {
        magazineWell[] = {"CBA_12g_1rnd", "CBA_12g_2rnds"};
    };
    class uns_ithaca37: Uns_Shotgun {
        magazineWell[] = {"CBA_12g_1rnd", "CBA_12g_2rnds", "CBA_12g_3rnds", "CBA_12g_4rnds"};
    };
    // Set in full here, not appended, so it does not depend on whether this loads before or after the Ithaca 37 fix.
    class uns_model12: uns_ithaca37 {
        magazineWell[] = {"CBA_12g_1rnd", "CBA_12g_2rnds", "CBA_12g_3rnds", "CBA_12g_4rnds", "CBA_12g_5rnds", "CBA_12g_6rnds"};
    };
    class uns_k50m: uns_PPS43 {
        magazineWell[] = {"UNS_762x25_PPSh"};
    };
    class uns_owen: uns_sten {
        magazineWell[] = {"CBA_9x19_Owen"};
    };
    class uns_sa61f: uns_pm63f {
        magazineWell[] = {"CBA_32ACP_Vz61"};
    };
};
