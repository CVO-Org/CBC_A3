class CfgWeapons {
    class Rifle_Base_F;
    class arifle_MX_Base_F: Rifle_Base_F {};
    class rhs_weap_m14ebrri_base;

    class rhs_weap_XM2010_Base_F: Rifle_Base_F {
        magazineWell[] += {
            "M2010_300wm",
            "CBA_300WM_AI"
        };
    };
    class rhs_weap_m4_Base: arifle_MX_Base_F {
        magazineWell[] += {
            "Stanag_556x45_Big",
            "CBA_556x45_STANAG",
            "CBA_556x45_STANAG_L",
            "CBA_556x45_STANAG_XL",
            "CBA_556x45_STANAG_2D",
            "CBA_556x45_STANAG_2D_XL"
        };
    };
    class rhs_weap_m14ebrri: rhs_weap_m14ebrri_base {
        magazineWell[] += {"CBA_762x51_M14"};
    };
};
