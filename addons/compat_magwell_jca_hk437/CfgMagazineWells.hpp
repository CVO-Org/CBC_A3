// The HK437 is a .300 BLK rifle, so it never accepts 5.56x45 STANAG magazines.
#define JCA_HK437_MAGS_300BLK \
    "JCA_30Rnd_300BLK_EMAG", \
    "JCA_30Rnd_300BLK_Red_EMAG", \
    "JCA_30Rnd_300BLK_Green_EMAG", \
    "JCA_30Rnd_300BLK_Yellow_EMAG", \
    "JCA_30Rnd_300BLK_IR_EMAG", \
    "JCA_30Rnd_300BLK_Tracer_Red_EMAG", \
    "JCA_30Rnd_300BLK_Tracer_Green_EMAG", \
    "JCA_30Rnd_300BLK_Tracer_Yellow_EMAG", \
    "JCA_30Rnd_300BLK_Tracer_IR_EMAG", \
    "JCA_30Rnd_300BLK_sand_EMAG", \
    "JCA_30Rnd_300BLK_Red_sand_EMAG", \
    "JCA_30Rnd_300BLK_Green_sand_EMAG", \
    "JCA_30Rnd_300BLK_Yellow_sand_EMAG", \
    "JCA_30Rnd_300BLK_IR_sand_EMAG", \
    "JCA_30Rnd_300BLK_Tracer_Red_sand_EMAG", \
    "JCA_30Rnd_300BLK_Tracer_Green_sand_EMAG", \
    "JCA_30Rnd_300BLK_Tracer_Yellow_sand_EMAG", \
    "JCA_30Rnd_300BLK_Tracer_IR_sand_EMAG"

class CfgMagazineWells {
    class CBA_300BLK_STANAG {
        JCA_Magazines[] = {JCA_HK437_MAGS_300BLK};
    };
};
