// JCA already uses its own JCA_MP5_9x19 well, so only the CBA well is extended here.
#define JCA_MP5_MAGS \
    "JCA_30Rnd_9x19_MP5_Mag", \
    "JCA_30Rnd_9x19_MP5_Red_Mag", \
    "JCA_30Rnd_9x19_MP5_Green_Mag", \
    "JCA_30Rnd_9x19_MP5_Yellow_Mag", \
    "JCA_30Rnd_9x19_MP5_IR_Mag", \
    "JCA_30Rnd_9x19_MP5_Tracer_Red_Mag", \
    "JCA_30Rnd_9x19_MP5_Tracer_Green_Mag", \
    "JCA_30Rnd_9x19_MP5_Tracer_Yellow_Mag", \
    "JCA_30Rnd_9x19_MP5_Tracer_IR_Mag", \
    "JCA_30Rnd_9x19_MP5_Sand_Mag", \
    "JCA_30Rnd_9x19_MP5_Red_Sand_Mag", \
    "JCA_30Rnd_9x19_MP5_Green_Sand_Mag", \
    "JCA_30Rnd_9x19_MP5_Yellow_Sand_Mag", \
    "JCA_30Rnd_9x19_MP5_IR_Sand_Mag", \
    "JCA_30Rnd_9x19_MP5_Tracer_Red_Sand_Mag", \
    "JCA_30Rnd_9x19_MP5_Tracer_Green_Sand_Mag", \
    "JCA_30Rnd_9x19_MP5_Tracer_Yellow_Sand_Mag", \
    "JCA_30Rnd_9x19_MP5_Tracer_IR_Sand_Mag"

class CfgMagazineWells {
    class CBA_9x19_MP5 {
        JCA_Magazines[] = {JCA_MP5_MAGS};
    };
};
