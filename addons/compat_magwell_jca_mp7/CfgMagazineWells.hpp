// JCA already uses its own JCA_MP7_460x30 well, so only the CBA well is extended here.
#define JCA_MP7_MAGS \
    "JCA_40Rnd_460x30_MP7_Mag", \
    "JCA_40Rnd_460x30_MP7_Red_Mag", \
    "JCA_40Rnd_460x30_MP7_Green_Mag", \
    "JCA_40Rnd_460x30_MP7_Yellow_Mag", \
    "JCA_40Rnd_460x30_MP7_IR_Mag", \
    "JCA_40Rnd_460x30_MP7_Tracer_Red_Mag", \
    "JCA_40Rnd_460x30_MP7_Tracer_Green_Mag", \
    "JCA_40Rnd_460x30_MP7_Tracer_Yellow_Mag", \
    "JCA_40Rnd_460x30_MP7_Tracer_IR_Mag"

class CfgMagazineWells {
    class CBA_46x30_MP7 {
        JCA_Magazines[] = {JCA_MP7_MAGS};
    };
};
