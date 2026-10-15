// JCA already uses its own JCA_UMP_45ACP well, so only the CBA well is extended here.
#define JCA_UMP_MAGS \
    "JCA_25Rnd_45ACP_UMP_Mag", \
    "JCA_25Rnd_45ACP_UMP_Red_Mag", \
    "JCA_25Rnd_45ACP_UMP_Green_Mag", \
    "JCA_25Rnd_45ACP_UMP_Yellow_Mag", \
    "JCA_25Rnd_45ACP_UMP_IR_Mag", \
    "JCA_25Rnd_45ACP_UMP_Tracer_Red_Mag", \
    "JCA_25Rnd_45ACP_UMP_Tracer_Green_Mag", \
    "JCA_25Rnd_45ACP_UMP_Tracer_Yellow_Mag", \
    "JCA_25Rnd_45ACP_UMP_Tracer_IR_Mag", \
    "JCA_25Rnd_45ACP_UMP_Sand_Mag", \
    "JCA_25Rnd_45ACP_UMP_Red_Sand_Mag", \
    "JCA_25Rnd_45ACP_UMP_Green_Sand_Mag", \
    "JCA_25Rnd_45ACP_UMP_Yellow_Sand_Mag", \
    "JCA_25Rnd_45ACP_UMP_IR_Sand_Mag", \
    "JCA_25Rnd_45ACP_UMP_Tracer_Red_Sand_Mag", \
    "JCA_25Rnd_45ACP_UMP_Tracer_Green_Sand_Mag", \
    "JCA_25Rnd_45ACP_UMP_Tracer_Yellow_Sand_Mag", \
    "JCA_25Rnd_45ACP_UMP_Tracer_IR_Sand_Mag"

class CfgMagazineWells {
    class CBA_45ACP_UMP {
        JCA_Magazines[] = {JCA_UMP_MAGS};
    };
};
