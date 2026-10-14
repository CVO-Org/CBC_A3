class CfgWeapons {
    class Rifle_Base_F;
    class arifle_MX_Base_F: Rifle_Base_F {};
    class EBR_base_F;
    class srifle_EBR_F: EBR_base_F {};

    class rhs_weap_XM2010_Base_F: Rifle_Base_F {
        magazineWell[] += {"M2010_300wm", "Stanag_762x51_small", "CBA_762x51_M14","CBA_762x51_HK417","CBA_762x51_SR25","CBA_762x51_SCAR","CBA_762x51_FAL","CBA_762x51_G3","CBA_762x51_SIGAMT", "CBA_300WM_AI"};
    };
    class rhs_weap_m4_Base: arifle_MX_Base_F {
        magazineWell[] += {"Stanag_556x45_Big","CBA_556x45_STANAG","CBA_556x45_STANAG_L","CBA_556x45_STANAG_XL","CBA_556x45_STANAG_2D","CBA_556x45_STANAG_2D_XL"};
    };
    class rhs_weap_m14ebrri: srifle_EBR_F {
        magazineWell[] += {"Stanag_762x51_big","CBA_762x51_M14","CBA_762x51_HK417","CBA_762x51_SR25","CBA_762x51_SCAR","CBA_762x51_FAL","CBA_762x51_G3","CBA_762x51_SIGAMT"};
    };
};
