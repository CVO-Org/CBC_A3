class CfgWeapons {
    class Rifle_Base_F;
    class UGL_F;
    class R3F_HK417M: Rifle_Base_F {
        magazineWell[] += {"CBA_762x51_HK417"};
    };
    class R3F_HK416M: Rifle_Base_F {
        magazineWell[] += {
            "Stanag_556x45_Big",
            "CBA_556x45_STANAG",
            "CBA_556x45_STANAG_L",
            "CBA_556x45_STANAG_XL",
            "CBA_556x45_STANAG_2D",
            "CBA_556x45_STANAG_2D_XL"
        };
        class Lance_Grenades: UGL_F {
            magazineWell[] += {"UGL_m230", "CBA_40mm_M203", "UGL_40x36"};
        };
    };
    class R3F_SIG551: Rifle_Base_F {
        magazineWell[] += {
            "Stanag_556x45_Big",
            "CBA_556x45_STANAG",
            "CBA_556x45_STANAG_L",
            "CBA_556x45_STANAG_XL",
            "CBA_556x45_STANAG_2D",
            "CBA_556x45_STANAG_2D_XL"
        };
    };
};
