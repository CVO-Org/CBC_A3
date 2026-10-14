// JCA already adds its magazines to STANAG_556x45 and JCA_SR_762x51, so only the shared wells are extended here.
#define JCA_GEN4_MAGS_556 \
    "JCA_30Rnd_556x45_PMAG", \
    "JCA_30Rnd_556x45_Red_PMAG", \
    "JCA_30Rnd_556x45_Green_PMAG", \
    "JCA_30Rnd_556x45_Yellow_PMAG", \
    "JCA_30Rnd_556x45_IR_PMAG", \
    "JCA_30Rnd_556x45_Tracer_Red_PMAG", \
    "JCA_30Rnd_556x45_Tracer_Green_PMAG", \
    "JCA_30Rnd_556x45_Tracer_Yellow_PMAG", \
    "JCA_30Rnd_556x45_Tracer_IR_PMAG", \
    "JCA_30Rnd_556x45_sand_PMAG", \
    "JCA_30Rnd_556x45_Red_sand_PMAG", \
    "JCA_30Rnd_556x45_Green_sand_PMAG", \
    "JCA_30Rnd_556x45_Yellow_sand_PMAG", \
    "JCA_30Rnd_556x45_IR_sand_PMAG", \
    "JCA_30Rnd_556x45_Tracer_Red_sand_PMAG", \
    "JCA_30Rnd_556x45_Tracer_Green_sand_PMAG", \
    "JCA_30Rnd_556x45_Tracer_Yellow_sand_PMAG", \
    "JCA_30Rnd_556x45_Tracer_IR_sand_PMAG"

#define JCA_GEN4_MAGS_762 \
    "JCA_20Rnd_762x51_PMAG", \
    "JCA_20Rnd_762x51_Red_PMAG", \
    "JCA_20Rnd_762x51_Green_PMAG", \
    "JCA_20Rnd_762x51_Yellow_PMAG", \
    "JCA_20Rnd_762x51_IR_PMAG", \
    "JCA_20Rnd_762x51_Tracer_Red_PMAG", \
    "JCA_20Rnd_762x51_Tracer_Green_PMAG", \
    "JCA_20Rnd_762x51_Tracer_Yellow_PMAG", \
    "JCA_20Rnd_762x51_Tracer_IR_PMAG", \
    "JCA_20Rnd_762x51_sand_PMAG", \
    "JCA_20Rnd_762x51_Red_sand_PMAG", \
    "JCA_20Rnd_762x51_Green_sand_PMAG", \
    "JCA_20Rnd_762x51_Yellow_sand_PMAG", \
    "JCA_20Rnd_762x51_IR_sand_PMAG", \
    "JCA_20Rnd_762x51_Tracer_Red_sand_PMAG", \
    "JCA_20Rnd_762x51_Tracer_Green_sand_PMAG", \
    "JCA_20Rnd_762x51_Tracer_Yellow_sand_PMAG", \
    "JCA_20Rnd_762x51_Tracer_IR_sand_PMAG", \
    "JCA_20Rnd_762x51_SMAG", \
    "JCA_20Rnd_762x51_Red_SMAG", \
    "JCA_20Rnd_762x51_Green_SMAG", \
    "JCA_20Rnd_762x51_Yellow_SMAG", \
    "JCA_20Rnd_762x51_IR_SMAG", \
    "JCA_20Rnd_762x51_Tracer_Red_SMAG", \
    "JCA_20Rnd_762x51_Tracer_Green_SMAG", \
    "JCA_20Rnd_762x51_Tracer_Yellow_SMAG", \
    "JCA_20Rnd_762x51_Tracer_IR_SMAG", \
    "JCA_20Rnd_762x51_sand_SMAG", \
    "JCA_20Rnd_762x51_Red_sand_SMAG", \
    "JCA_20Rnd_762x51_Green_sand_SMAG", \
    "JCA_20Rnd_762x51_Yellow_sand_SMAG", \
    "JCA_20Rnd_762x51_IR_sand_SMAG", \
    "JCA_20Rnd_762x51_Tracer_Red_sand_SMAG", \
    "JCA_20Rnd_762x51_Tracer_Green_sand_SMAG", \
    "JCA_20Rnd_762x51_Tracer_Yellow_sand_SMAG", \
    "JCA_20Rnd_762x51_Tracer_IR_sand_SMAG"

class CfgMagazineWells {
    class CBA_556x45_STANAG {
        JCA_Magazines[] = {JCA_GEN4_MAGS_556};
    };
    class Stanag_556x45_Big {
        JCA_Magazines_Stanag_556x45[] = {JCA_GEN4_MAGS_556};
    };
    class Stanag_762x51 {
        JCA_Magazines_Stanag_762x51[] = {JCA_GEN4_MAGS_762};
    };
    class Stanag_762x51_big {
        JCA_Magazines_Stanag_762x51[] = {JCA_GEN4_MAGS_762};
    };
    class CBA_762x51_SR25 {
        JCA_Magazines_Stanag_762x51[] = {JCA_GEN4_MAGS_762};
    };
    class CBA_762x51_AR10 {
        JCA_Magazines_Stanag_762x51[] = {JCA_GEN4_MAGS_762};
    };
};
