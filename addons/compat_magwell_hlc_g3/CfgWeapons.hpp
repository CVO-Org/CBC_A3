class CfgWeapons {
    class Rifle_Base_F;
    class hlc_g3_base: Rifle_Base_F {
        magazineWell[] += {"CBA_762x51_G3"};
    };
    class hlc_rifle_hk53: hlc_g3_base {
        magazineWell[] += {
            "Stanag_556x45",
            "CBA_556x45_STANAG",
            "CBA_556x45_STANAG_L",
            "CBA_556x45_STANAG_XL",
            "CBA_556x45_STANAG_2D",
            "CBA_556x45_STANAG_2D_XL"
        };
    };
    class hlc_rifle_hk33a2: hlc_g3_base {
        magazineWell[] += {
            "Stanag_556x45",
            "CBA_556x45_STANAG",
            "CBA_556x45_STANAG_L",
            "CBA_556x45_STANAG_XL",
            "CBA_556x45_STANAG_2D",
            "CBA_556x45_STANAG_2D_XL"
        };
    };
};
