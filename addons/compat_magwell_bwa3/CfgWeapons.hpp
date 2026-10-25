class CfgWeapons {
    class Rifle_Base_F;
    class Rifle_Long_Base_F: Rifle_Base_F {};

    // All BWA3 G36 variants inherit from the A1.
    class BWA3_G36A1: Rifle_Base_F {
        magazineWell[] += {"CBA_556x45_G36"};
    };
    // The G38 is an HK416, so it takes STANAG magazines, not G36 ones.
    class BWA3_G38: Rifle_Base_F {
        magazineWell[] += {
            "Stanag_556x45_Big",
            "CBA_556x45_STANAG",
            "CBA_556x45_STANAG_L",
            "CBA_556x45_STANAG_XL",
            "CBA_556x45_STANAG_2D",
            "CBA_556x45_STANAG_2D_XL"
        };
    };
    // The G28 is an HK417; the G27 and G28 Patrol inherit from it.
    class BWA3_G28: Rifle_Long_Base_F {
        magazineWell[] += {"CBA_762x51_HK417"};
    };
};
