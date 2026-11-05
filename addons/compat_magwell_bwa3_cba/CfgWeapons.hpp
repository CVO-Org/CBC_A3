// Based on Weapons-Balance-BW by johnb432 (https://github.com/johnb432/Weapons-Balance-BW), MIT License,
// Copyright (c) 2021 johnb432. Magazine lists only.
class CfgWeapons {
    class Rifle_Long_Base_F;
    class Rifle_Short_Base_F;
    class Pistol_Base_F;
    class Launcher_Base_F;

    class BWA3_G28: Rifle_Long_Base_F {
        magazineWell[] += {"CBA_762x51_HK417_L", "CBA_762x51_HK417_XL"};
    };
    class BWA3_G82: Rifle_Long_Base_F {
        magazineWell[] += {"CBA_50BMG_M107"};
    };
    class BWA3_MG3: Rifle_Long_Base_F {
        magazineWell[] += {"CBA_762x51_LINKS", "CBA_762x51_MG3", "M240_762x51"};
    };
    class BWA3_MG4: Rifle_Long_Base_F {
        magazineWell[] += {"CBA_556x45_MINIMI"};
    };
    class BWA3_MG5: Rifle_Long_Base_F {
        magazineWell[] += {"CBA_762x51_LINKS", "M240_762x51"};
    };
    class BWA3_MP7: Rifle_Short_Base_F {
        magazineWell[] += {"CBA_46x30_MP7"};
    };
    class BWA3_P12: Pistol_Base_F {
        magazineWell[] += {"CBA_45ACP_USP"};
    };
    class BWA3_P8: Pistol_Base_F {
        magazineWell[] += {"CBA_9x19_USP"};
    };
    class BWA3_P2A1: Pistol_Base_F {
        magazineWell[] += {"CBA_FLARE_265"};
    };
    class BWA3_CarlGustav: Launcher_Base_F {
        magazineWell[] += {"CBA_Carl_Gustaf"};
    };
    class BWA3_Fliegerfaust: Launcher_Base_F {
        magazineWell[] += {"CBA_FIM"};
    };
};
