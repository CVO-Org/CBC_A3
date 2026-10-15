// JCA already uses its own JCA_SCAR_762x51 well. The SCAR-L only uses vanilla magazines.
#define JCA_SCAR_MAGS_762 \
    "JCA_20Rnd_762x51_SCAR_Mag", \
    "JCA_20Rnd_762x51_SCAR_Red_Mag", \
    "JCA_20Rnd_762x51_SCAR_Green_Mag", \
    "JCA_20Rnd_762x51_SCAR_Yellow_Mag", \
    "JCA_20Rnd_762x51_SCAR_IR_Mag", \
    "JCA_20Rnd_762x51_SCAR_Tracer_Red_Mag", \
    "JCA_20Rnd_762x51_SCAR_Tracer_Green_Mag", \
    "JCA_20Rnd_762x51_SCAR_Tracer_Yellow_Mag", \
    "JCA_20Rnd_762x51_SCAR_Tracer_IR_Mag", \
    "JCA_20Rnd_762x51_SCAR_sand_Mag", \
    "JCA_20Rnd_762x51_SCAR_Red_sand_Mag", \
    "JCA_20Rnd_762x51_SCAR_Green_sand_Mag", \
    "JCA_20Rnd_762x51_SCAR_Yellow_sand_Mag", \
    "JCA_20Rnd_762x51_SCAR_IR_sand_Mag", \
    "JCA_20Rnd_762x51_SCAR_Tracer_Red_sand_Mag", \
    "JCA_20Rnd_762x51_SCAR_Tracer_Green_sand_Mag", \
    "JCA_20Rnd_762x51_SCAR_Tracer_Yellow_sand_Mag", \
    "JCA_20Rnd_762x51_SCAR_Tracer_IR_sand_Mag"

class CfgMagazineWells {
    class Stanag_556x45_Big {};
    class Stanag_762x51 {
        JCA_Magazines_Stanag_762x51[] = {JCA_SCAR_MAGS_762};
    };
    class Stanag_762x51_big {
        JCA_Magazines_Stanag_762x51[] = {JCA_SCAR_MAGS_762};
    };
    class CBA_762x51_SCAR {
        JCA_Magazines_Stanag_762x51[] = {JCA_SCAR_MAGS_762};
    };
};
