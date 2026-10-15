// JCA already uses its own JCA_M9A1_9x19 well, so only the CBA well is extended here.
#define JCA_M9A1_MAGS \
    "JCA_15Rnd_9x19_M9A1_Mag", \
    "JCA_15Rnd_9x19_M9A1_Red_Mag", \
    "JCA_15Rnd_9x19_M9A1_Green_Mag", \
    "JCA_15Rnd_9x19_M9A1_Yellow_Mag", \
    "JCA_15Rnd_9x19_M9A1_IR_Mag"

class CfgMagazineWells {
    class CBA_9x19_M9 {
        JCA_Magazines[] = {JCA_M9A1_MAGS};
    };
};
