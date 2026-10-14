// The G36 only takes G36 magazines, never regular STANAG ones, so BWA3 joins the G36 well only.
// Stanag_556x45_Big is declared empty so the G38's magazineWell[] entry resolves even when no other addon defines it.
class CfgMagazineWells {
    class Stanag_556x45_Big {};
    class CBA_556x45_G36 {
        BWA3_Magazines[] = {
            "BWA3_30Rnd_556x45_G36",
            "BWA3_30Rnd_556x45_G36_Tracer",
            "BWA3_30Rnd_556x45_G36_Tracer_Dim",
            "BWA3_30Rnd_556x45_G36_SD",
            "BWA3_30Rnd_556x45_G36_AP"
        };
    };
    class Stanag_762x51 {
        BWA3_Magazines_Stanag_762x51[] = {
            "BWA3_20Rnd_762x51_G28",
            "BWA3_20Rnd_762x51_G28_Tracer",
            "BWA3_20Rnd_762x51_G28_Tracer_Dim",
            "BWA3_20Rnd_762x51_G28_SD",
            "BWA3_20Rnd_762x51_G28_AP",
            "BWA3_20Rnd_762x51_G28_LR",
            "BWA3_10Rnd_762x51_G28",
            "BWA3_10Rnd_762x51_G28_Tracer",
            "BWA3_10Rnd_762x51_G28_Tracer_Dim",
            "BWA3_10Rnd_762x51_G28_SD",
            "BWA3_10Rnd_762x51_G28_AP",
            "BWA3_10Rnd_762x51_G28_LR"
        };
    };
    class Stanag_762x51_big {
        BWA3_Magazines_Stanag_762x51[] = {
            "BWA3_20Rnd_762x51_G28",
            "BWA3_20Rnd_762x51_G28_Tracer",
            "BWA3_20Rnd_762x51_G28_Tracer_Dim",
            "BWA3_20Rnd_762x51_G28_SD",
            "BWA3_20Rnd_762x51_G28_AP",
            "BWA3_20Rnd_762x51_G28_LR",
            "BWA3_10Rnd_762x51_G28",
            "BWA3_10Rnd_762x51_G28_Tracer",
            "BWA3_10Rnd_762x51_G28_Tracer_Dim",
            "BWA3_10Rnd_762x51_G28_SD",
            "BWA3_10Rnd_762x51_G28_AP",
            "BWA3_10Rnd_762x51_G28_LR"
        };
    };
};
