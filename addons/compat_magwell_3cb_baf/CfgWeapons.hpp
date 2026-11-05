// Based on Weapons-Balance-3CBBAF by johnb432 (https://github.com/johnb432/Weapons-Balance-3CBBAF), MIT License,
// Copyright (c) 2021 johnb432. Magazine lists only.
class CfgWeapons {
    class UK3CB_BAF_L110_Base;
    class arifle_Mk20_plain_F;
    class srifle_EBR_F;
    class srifle_GM6_F;
    class Rifle_Base_F;
    class Rifle_Long_Base_F;
    class SMG_02_F;
    class hgun_P07_F;
    class UK3CB_BAF_L105A2;
    class LMG_RCWS;
    class HMG_M2;
    class UK3CB_BAF_Slung_Static_Weapon_Base;

    class UK3CB_BAF_L110_762_Base: UK3CB_BAF_L110_Base {
        magazineWell[] += {"M240_762x51", "CBA_762x51_LINKS"};
    };
    class UK3CB_BAF_L110_556_Base: UK3CB_BAF_L110_Base {
        magazineWell[] += {"STANAG_556x45", "CBA_556x45_STANAG", "CBA_556x45_STANAG_L", "CBA_556x45_STANAG_XL", "M249_556x45", "CBA_556x45_MINIMI"};
    };
    class UK3CB_BAF_L119_Base: arifle_Mk20_plain_F {
        magazineWell[] += {"STANAG_556x45", "CBA_556x45_STANAG", "CBA_556x45_STANAG_L", "CBA_556x45_STANAG_2D", "CBA_556x45_STANAG_2D_XL"};
    };
    class UK3CB_BAF_L128A1: srifle_EBR_F {
        magazineWell[] += {"CBA_12g_1rnd", "CBA_12g_2rnds", "CBA_12g_3rnds", "CBA_12g_4rnds", "CBA_12g_5rnds", "CBA_12g_6rnds", "CBA_12g_7rnds", "CBA_12g_8rnds"};
    };
    class UK3CB_BAF_L129A1: srifle_EBR_F {
        magazineWell[] += {"CBA_762x51_SR25"};
    };
    class UK3CB_BAF_L135A1: srifle_GM6_F {
        magazineWell[] += {"CBA_50BMG_M107"};
    };
    class UK3CB_BAF_L1A1: Rifle_Base_F {
        magazineWell[] += {"CBA_762x51_FAL", "CBA_762x51_FAL_L"};
    };
    class UK3CB_BAF_L7A2: Rifle_Long_Base_F {
        magazineWell[] += {"M240_762x51", "CBA_762x51_LINKS"};
    };
    class UK3CB_BAF_L85A2: arifle_Mk20_plain_F {
        magazineWell[] += {"STANAG_556x45", "CBA_556x45_STANAG", "CBA_556x45_STANAG_L", "CBA_556x45_STANAG_2D", "CBA_556x45_STANAG_2D_XL"};
    };
    class UK3CB_BAF_L85A3: UK3CB_BAF_L85A2 {
        magazineWell[] += {"STANAG_556x45", "CBA_556x45_STANAG", "CBA_556x45_STANAG_L", "CBA_556x45_STANAG_2D", "CBA_556x45_STANAG_2D_XL"};
    };
    class UK3CB_BAF_L91A1: SMG_02_F {
        magazineWell[] += {"CBA_9x19_MP5"};
    };
    class UK3CB_BAF_L131A1: hgun_P07_F {
        magazineWell[] += {"CBA_9x19_Glock_Full"};
    };
    class UK3CB_BAF_L105A1: hgun_P07_F {
        magazineWell[] += {"CBA_9x19_P226"};
    };
    class UK3CB_BAF_L107A1: UK3CB_BAF_L105A1 {
        magazineWell[] += {"CBA_9x19_P226", "CBA_9x19_P228"};
    };
    class UK3CB_BAF_L117A2: UK3CB_BAF_L105A2 {
        magazineWell[] += {"CBA_9x19_P226", "CBA_9x19_P228"};
    };
    class UK3CB_BAF_L7A2_veh: LMG_RCWS {
        magazineWell[] += {"CBA_762x51_LINKS"};
    };
    class UK3CB_BAF_L111A1_veh: HMG_M2 {
        magazineWell[] += {"CBA_50BMG_100rnds"};
    };
    class UK3CB_BAF_L111A1: UK3CB_BAF_Slung_Static_Weapon_Base {
        magazineWell[] += {"CBA_50BMG_100rnds"};
    };
    class UK3CB_BAF_L112A1_veh: LMG_RCWS {
        magazineWell[] += {"CBA_762x51_LINKS"};
    };
    class UK3CB_BAF_L111A1_vehicle: HMG_M2 {
        magazineWell[] += {"CBA_50BMG_100rnds"};
    };
};
