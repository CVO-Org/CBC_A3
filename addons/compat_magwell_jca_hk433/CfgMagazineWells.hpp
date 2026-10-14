// JCA already adds its magazines to STANAG_556x45, so only the shared wells are extended here.
#define JCA_HK433_MAGS_556 \
    "JCA_30Rnd_556x45_EMAG", \
    "JCA_30Rnd_556x45_Red_EMAG", \
    "JCA_30Rnd_556x45_Green_EMAG", \
    "JCA_30Rnd_556x45_Yellow_EMAG", \
    "JCA_30Rnd_556x45_IR_EMAG", \
    "JCA_30Rnd_556x45_Tracer_Red_EMAG", \
    "JCA_30Rnd_556x45_Tracer_Green_EMAG", \
    "JCA_30Rnd_556x45_Tracer_Yellow_EMAG", \
    "JCA_30Rnd_556x45_Tracer_IR_EMAG", \
    "JCA_30Rnd_556x45_sand_EMAG", \
    "JCA_30Rnd_556x45_Red_sand_EMAG", \
    "JCA_30Rnd_556x45_Green_sand_EMAG", \
    "JCA_30Rnd_556x45_Yellow_sand_EMAG", \
    "JCA_30Rnd_556x45_IR_sand_EMAG", \
    "JCA_30Rnd_556x45_Tracer_Red_sand_EMAG", \
    "JCA_30Rnd_556x45_Tracer_Green_sand_EMAG", \
    "JCA_30Rnd_556x45_Tracer_Yellow_sand_EMAG", \
    "JCA_30Rnd_556x45_Tracer_IR_sand_EMAG"

class CfgMagazineWells {
    class CBA_556x45_STANAG {
        JCA_HK433_Magazines[] = {JCA_HK433_MAGS_556};
    };
    class Stanag_556x45_Big {
        JCA_HK433_Magazines_Stanag_556x45[] = {JCA_HK433_MAGS_556};
    };
};
