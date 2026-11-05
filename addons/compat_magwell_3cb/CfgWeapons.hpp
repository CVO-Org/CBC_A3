// Based on Weapons-Balance-3CBFactions by johnb432 (https://github.com/johnb432/Weapons-Balance-3CBFactions), MIT License,
// Copyright (c) 2021 johnb432. Magazine lists only.
class CfgWeapons {
    class Rifle_Base_F;
    class UK3CB_M60_base;
    class LMG_RCWS;
    class UK3CB_MG42_base;
    class SMG_02_F;
    class Rifle_Long_Base_F;
    class hgun_P07_F;
    class hgun_Rook40_F;

    class uk3cb_saiga12k: Rifle_Base_F {
        magazineWell[] += {"CBA_12g_SAIGA"};
    };
    class UK3CB_M60: UK3CB_M60_base {
        magazineWell[] += {"CBA_762x51_LINKS"};
    };
    class UK3CB_M60_mounted: LMG_RCWS {
        magazineWell[] += {"M240_762x51", "CBA_762x51_LINKS"};
    };
    class UK3CB_MG3: UK3CB_MG42_base {
        magazineWell[] += {"CBA_762x51_LINKS", "CBA_762x51_MG3"};
    };
    class UK3CB_FAMAS_F1_base: Rifle_Base_F {
        magazineWell[] += {"CBA_556x45_FAMAS"};
    };
    class UK3CB_Sten: SMG_02_F {
        magazineWell[] += {"CBA_9x19_STEN"};
    };
    class UK3CB_UK59: Rifle_Long_Base_F {
        magazineWell[] += {"CBA_762x54R_Vz59_LINKS"};
    };
    class UK3CB_BHP: hgun_P07_F {
        magazineWell[] += {"CBA_9x19_HiPower"};
    };
    class UK3CB_CZ75: hgun_Rook40_F {
        magazineWell[] += {"CBA_9x19_CZ75_Full"};
    };
};
