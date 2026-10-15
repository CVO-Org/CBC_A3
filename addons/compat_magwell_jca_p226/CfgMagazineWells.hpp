// JCA already uses its own JCA_P226_9x19 well, so only the CBA well is extended here.
#define JCA_P226_MAGS \
    "JCA_15Rnd_9x19_P226_Mag", \
    "JCA_15Rnd_9x19_P226_Red_Mag", \
    "JCA_15Rnd_9x19_P226_Green_Mag", \
    "JCA_15Rnd_9x19_P226_Yellow_Mag", \
    "JCA_15Rnd_9x19_P226_IR_Mag"

class CfgMagazineWells {
    class CBA_9x19_P226 {
        JCA_Magazines[] = {JCA_P226_MAGS};
    };
};
