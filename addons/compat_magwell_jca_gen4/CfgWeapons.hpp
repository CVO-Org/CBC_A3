class CfgWeapons {
    class Rifle_Base_F;

    class JCA_arifle_M4A1_base_F: Rifle_Base_F {
        magazineWell[] += {
            "Stanag_556x45_Big",
            "CBA_556x45_STANAG",
            "CBA_556x45_STANAG_L",
            "CBA_556x45_STANAG_XL",
            "CBA_556x45_STANAG_2D",
            "CBA_556x45_STANAG_2D_XL"
        };
    };
    class JCA_arifle_M4A4_base_F: Rifle_Base_F {
        magazineWell[] += {
            "Stanag_556x45_Big",
            "CBA_556x45_STANAG",
            "CBA_556x45_STANAG_L",
            "CBA_556x45_STANAG_XL",
            "CBA_556x45_STANAG_2D",
            "CBA_556x45_STANAG_2D_XL"
        };
    };
    // The AFG variant overrides magazineWell[], so it needs its own entry.
    class JCA_arifle_M4A4_AFG_base_F: JCA_arifle_M4A4_base_F {
        magazineWell[] += {
            "Stanag_556x45_Big",
            "CBA_556x45_STANAG",
            "CBA_556x45_STANAG_L",
            "CBA_556x45_STANAG_XL",
            "CBA_556x45_STANAG_2D",
            "CBA_556x45_STANAG_2D_XL"
        };
    };
    // CBA_762x51_SR25 is deprecated in CBA in favour of CBA_762x51_AR10.
    class JCA_arifle_SR10_base_F: Rifle_Base_F {
        magazineWell[] += {"CBA_762x51_AR10"};
    };
    class JCA_arifle_SR25_base_F: Rifle_Base_F {
        magazineWell[] += {"CBA_762x51_AR10"};
    };
};
