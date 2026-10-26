// M2010_300wm is declared empty so the RHS weapons' magazineWell[] entry resolves even when HLC AWC (which fills it) is not loaded.
class CfgMagazineWells {
    class M2010_300wm {};
    // The M14 EBR-RI takes M14-pattern magazines only.
    class CBA_762x51_M14 {
        RHSUSF_Magazines_M14[] = {"rhsusf_20Rnd_762x51_m118_special_Mag","rhsusf_20Rnd_762x51_m993_Mag","rhsusf_20Rnd_762x51_m62_Mag"};
    };
    class Stanag_762x51_small {
        RHSUSF_Magazines_Stanag_762x51_small[] = {"rhsusf_5Rnd_762x51_m118_special_Mag","rhsusf_5Rnd_762x51_m993_Mag","rhsusf_5Rnd_762x51_m62_Mag"};
    };
    class Stanag_762x51 {
        RHSUSF_Magazines_Stanag_762x51_small[] = {"rhsusf_5Rnd_762x51_m118_special_Mag","rhsusf_5Rnd_762x51_m993_Mag","rhsusf_5Rnd_762x51_m62_Mag"};
        RHSUSF_Magazines_Stanag_762x51[] = {"rhsusf_20Rnd_762x51_m118_special_Mag","rhsusf_20Rnd_762x51_m993_Mag","rhsusf_20Rnd_762x51_m62_Mag"};
    };
    class Stanag_762x51_big {
        RHSUSF_Magazines_Stanag_762x51_small[] = {"rhsusf_5Rnd_762x51_m118_special_Mag","rhsusf_5Rnd_762x51_m993_Mag","rhsusf_5Rnd_762x51_m62_Mag"};
        RHSUSF_Magazines_Stanag_762x51[] = {"rhsusf_20Rnd_762x51_m118_special_Mag","rhsusf_20Rnd_762x51_m993_Mag","rhsusf_20Rnd_762x51_m62_Mag"};
    };
    class Stanag_556x45 {
        RHSUSF_Magazines_Stanag_556x45[] = {
            "rhs_mag_30Rnd_556x45_M855_Stanag",
            "rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red",
            "rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Green",
            "rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Yellow",
            "rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Orange",
            "rhs_mag_30Rnd_556x45_M855A1_Stanag",
            "rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer",
            "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
            "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green",
            "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Yellow",
            "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Orange",
            "rhs_mag_30Rnd_556x45_Mk318_Stanag",
            "rhs_mag_30Rnd_556x45_Mk262_Stanag",
            "rhs_mag_30Rnd_556x45_M200_Stanag"
        };
    };
    class Stanag_556x45_Big {
        RHSUSF_Magazines_Stanag_556x45[] = {
            "rhs_mag_30Rnd_556x45_M855_Stanag",
            "rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red",
            "rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Green",
            "rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Yellow",
            "rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Orange",
            "rhs_mag_30Rnd_556x45_M855A1_Stanag",
            "rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer",
            "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
            "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green",
            "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Yellow",
            "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Orange",
            "rhs_mag_30Rnd_556x45_Mk318_Stanag",
            "rhs_mag_30Rnd_556x45_Mk262_Stanag",
            "rhs_mag_30Rnd_556x45_M200_Stanag"
        };
    };
};
