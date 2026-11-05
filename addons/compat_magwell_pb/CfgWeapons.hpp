// Based on Weapons-Balance-PB by johnb432 (https://github.com/johnb432/Weapons-Balance-PB), MIT License,
// Copyright (c) 2021 johnb432. Magazine lists only.
class CfgWeapons {
    class Rifle_Base_F;
    class rhs_weap_rpk74m;
    class rhs_weap_m249_pip;
    class rhs_weap_mg42;
    class PB_Famas_G2;

    class PB_QIN_CZ_BREN2_Base: Rifle_Base_F {
        magazineWell[] += {"STANAG_556x45", "STANAG_556x45_Large", "CBA_556x45_STANAG", "CBA_556x45_STANAG_L", "CBA_556x45_STANAG_XL", "CBA_556x45_STANAG_2D", "CBA_556x45_STANAG_2D_XL"};
    };
    class PB_ARM1_BASE: Rifle_Base_F {
        magazineWell[] += {"CBA_556x45_AK"};
    };
    class PB_LMG556: rhs_weap_rpk74m {
        magazineWell[] += {"CBA_556x45_AK"};
    };
    class PB_c7_base: Rifle_Base_F {
        magazineWell[] += {"STANAG_556x45", "STANAG_556x45_Large", "CBA_556x45_STANAG", "CBA_556x45_STANAG_L", "CBA_556x45_STANAG_XL", "CBA_556x45_STANAG_2D", "CBA_556x45_STANAG_2D_XL"};
    };
    class PB_C9: Rifle_Base_F {
        magazineWell[] += {"STANAG_556x45", "CBA_556x45_STANAG", "CBA_556x45_STANAG_L", "CBA_556x45_STANAG_XL", "M249_556x45", "CBA_556x45_MINIMI"};
    };
    class PB_K2: Rifle_Base_F {
        magazineWell[] += {"STANAG_556x45", "STANAG_556x45_Large", "CBA_556x45_STANAG", "CBA_556x45_STANAG_L", "CBA_556x45_STANAG_XL", "CBA_556x45_STANAG_2D", "CBA_556x45_STANAG_2D_XL"};
    };
    class PB_K2C1: Rifle_Base_F {
        magazineWell[] += {"STANAG_556x45", "STANAG_556x45_Large", "CBA_556x45_STANAG", "CBA_556x45_STANAG_L", "CBA_556x45_STANAG_XL", "CBA_556x45_STANAG_2D", "CBA_556x45_STANAG_2D_XL"};
    };
    class PB_MINIMI_762: rhs_weap_m249_pip {
        magazineWell[] += {"M240_762x51", "CBA_762x51_LINKS"};
    };
    class PB_G3: Rifle_Base_F {
        magazineWell[] += {"CBA_762x51_G3", "CBA_762x51_G3_L", "CBA_762x51_G3_XL"};
    };
    class PB_G36: Rifle_Base_F {
        magazineWell[] += {"CBA_556x45_G36"};
    };
    class PB_HK417: Rifle_Base_F {
        magazineWell[] += {"CBA_762x51_HK417", "CBA_762x51_HK417_L", "CBA_762x51_HK417_XL"};
    };
    class PB_MG3: rhs_weap_mg42 {
        magazineWell[] += {"CBA_762x51_LINKS", "CBA_762x51_MG3"};
    };
    class PB_MSBS_Grot: Rifle_Base_F {
        magazineWell[] += {"STANAG_556x45", "STANAG_556x45_Large", "CBA_556x45_STANAG", "CBA_556x45_STANAG_L", "CBA_556x45_STANAG_XL", "CBA_556x45_STANAG_2D", "CBA_556x45_STANAG_2D_XL"};
    };
    class PB_RK62M2: Rifle_Base_F {
        magazineWell[] += {"AK_762x39", "CBA_762x39_AK", "CBA_762x39_RPK"};
    };
    class PB_WZ96C_556: PB_RK62M2 {
        magazineWell[] += {"CBA_556x45_AK"};
    };
    class PB_WZ96C_M545: PB_WZ96C_556 {
        magazineWell[] += {"AK_545x39", "CBA_545x39_AK", "CBA_545x39_RPK"};
    };
    class PB_WZ96C_M762: PB_WZ96C_556 {
        magazineWell[] += {"AK_762x39", "CBA_762x39_AK", "CBA_762x39_RPK"};
    };
    class PB_Famas_F1: PB_Famas_G2 {
        magazineWell[] += {"CBA_556x45_FAMAS"};
    };
    class PB_SCARL: Rifle_Base_F {
        magazineWell[] += {"STANAG_556x45", "STANAG_556x45_Large", "CBA_556x45_STANAG", "CBA_556x45_STANAG_L", "CBA_556x45_STANAG_XL", "CBA_556x45_STANAG_2D", "CBA_556x45_STANAG_2D_XL"};
    };
};
