// JCA already uses its own JCA_AWM_338LM well, so only the CBA well is extended here.
#define JCA_M115A3_MAGS \
    "JCA_5Rnd_338LM_AWM_Mag", \
    "JCA_5Rnd_338LM_AWM_Tracer_Red_Mag", \
    "JCA_5Rnd_338LM_AWM_Tracer_Green_Mag", \
    "JCA_5Rnd_338LM_AWM_Tracer_Yellow_Mag", \
    "JCA_5Rnd_338LM_AWM_Tracer_IR_Mag"

class CfgMagazineWells {
    class CBA_338LM_AI {
        JCA_Magazines[] = {JCA_M115A3_MAGS};
    };
};
