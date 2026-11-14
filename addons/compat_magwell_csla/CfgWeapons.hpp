// Based on Weapons-Balance-CSLA by johnb432 (https://github.com/johnb432/Weapons-Balance-CSLA), MIT License,
// Copyright (c) 2021 johnb432. Magazine lists only.
class CfgWeapons {
    class US85_Launcher_AA;
    class US85_Launcher_AT;
    class CSLA_Launcher_AA;
    class CSLA_baseWeapon;
    class US85_weaponBase;
    class US85_MachinegunBase_5_56;
    class US85_MachinegunBase_7_62;

    class US85_FIM92: US85_Launcher_AA {
        magazineWell[] += {"CBA_FIM"};
    };
    class US85_SMAW: US85_Launcher_AT {
        magazineWell[] += {"CBA_SMAW"};
    };
    class CSLA_9K32: CSLA_Launcher_AA {
        magazineWell[] += {"CBA_STRELA"};
    };
    class CSLA_OP63_Base: CSLA_baseWeapon {
        magazineWell[] += {"SVD_762x54R"};
    };
    class US85_M16_base: US85_weaponBase {
        magazineWell[] += {"STANAG_556x45"};
    };
    class US85_M14_M21_Base: US85_weaponBase {
        magazineWell[] += {"M14_762x51"};
    };
    class US85_M249: US85_MachinegunBase_5_56 {
        magazineWell[] += {"M249_556x45"};
    };
    class US85_M60_base: US85_MachinegunBase_7_62 {
        magazineWell[] += {"M240_762x51"};
    };
};
