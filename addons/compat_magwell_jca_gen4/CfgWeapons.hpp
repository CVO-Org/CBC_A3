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
    class JCA_arifle_SR10_base_F: Rifle_Base_F {
        magazineWell[] += {
            "Stanag_762x51_big",
            "CBA_762x51_M14",
            "CBA_762x51_HK417",
            "CBA_762x51_SR25",
            "CBA_762x51_SCAR",
            "CBA_762x51_FAL",
            "CBA_762x51_G3",
            "CBA_762x51_SIGAMT"
        };
    };
    class JCA_arifle_SR25_base_F: Rifle_Base_F {
        magazineWell[] += {
            "Stanag_762x51_big",
            "CBA_762x51_M14",
            "CBA_762x51_HK417",
            "CBA_762x51_SR25",
            "CBA_762x51_SCAR",
            "CBA_762x51_FAL",
            "CBA_762x51_G3",
            "CBA_762x51_SIGAMT"
        };
    };
};
