// Based on Weapons-Balance-AMF by johnb432 (https://github.com/johnb432/Weapons-Balance-AMF), MIT License,
// Copyright (c) 2022 johnb432. Magazine lists only.
class CfgWeapons {
    class Rifle_Base_F;
    class amf_aanf1_base_f;
    class Rifle_Long_Base_F;
    class Rifle_Short_Base_F;
    class Pistol_Base_F;

    class AMF_FAMAS_01_Base_F: Rifle_Base_F {
        magazineWell[] += {"CBA_556x45_FAMAS"};
    };
    class AMF_Samas_G2_01_F: AMF_FAMAS_01_Base_F {
        magazineWell[] = {"CBA_556x45_STANAG", "CBA_556x45_STANAG_2D", "CBA_556x45_STANAG_2D_XL", "CBA_556x45_STANAG_L", "CBA_556x45_STANAG_XL", "STANAG_556x45_Large"};
    };
    class AMF_614_short_01_Base_F: Rifle_Base_F {
        magazineWell[] = {"CBA_556x45_STANAG", "CBA_556x45_STANAG_2D", "CBA_556x45_STANAG_2D_XL", "CBA_556x45_STANAG_L", "CBA_556x45_STANAG_XL", "STANAG_556x45_Large"};
    };
    class AMF_614_long_01_Base_F: Rifle_Base_F {
        magazineWell[] = {"CBA_556x45_STANAG", "CBA_556x45_STANAG_2D", "CBA_556x45_STANAG_2D_XL", "CBA_556x45_STANAG_L", "CBA_556x45_STANAG_XL", "STANAG_556x45_Large"};
    };
    class AMF_714_short_01_Base_F: Rifle_Base_F {
        magazineWell[] += {"CBA_762x51_HK417", "CBA_762x51_HK417_L", "CBA_762x51_HK417_XL"};
    };
    class AMF_714_Long_01_Base_F: Rifle_Base_F {
        magazineWell[] += {"CBA_762x51_HK417", "CBA_762x51_HK417_L", "CBA_762x51_HK417_XL"};
    };
    class amf_aanf1_01_f: amf_aanf1_base_f {
        magazineWell[] += {"CBA_762x51_LINKS", "M240_762x51"};
    };
    class amf_mag58_01_f: Rifle_Long_Base_F {
        magazineWell[] += {"CBA_762x51_LINKS", "M240_762x51"};
    };
    class AMF_Weapons_HK_MP5_01_base_f: Rifle_Short_Base_F {
        magazineWell[] += {"CBA_9x19_MP5"};
    };
    class amf_mini_mg_01_base_f: Rifle_Long_Base_F {
        magazineWell[] += {"CBA_556x45_MINIMI", "M249_556x45"};
    };
    class AMF_Glock_17: Pistol_Base_F {
        magazineWell[] += {"CBA_9x19_Glock_Full"};
    };
    class AMF_SCAR_H_01_Base_F: Rifle_Base_F {
        magazineWell[] += {"CBA_762x51_SCAR"};
    };
    class AMF_SCAR_L_01_Base_F: AMF_SCAR_H_01_Base_F {
        magazineWell[] = {"CBA_556x45_STANAG", "CBA_556x45_STANAG_2D", "CBA_556x45_STANAG_2D_XL", "CBA_556x45_STANAG_L", "CBA_556x45_STANAG_XL", "STANAG_556x45_Large"};
    };
};
