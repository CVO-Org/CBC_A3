// JCA already uses its own JCA_G17_9x19 well, so only the CBA well is extended here.
#define JCA_G17_MAGS \
    "JCA_17Rnd_9x19_G17_Mag", \
    "JCA_17Rnd_9x19_G17_Red_Mag", \
    "JCA_17Rnd_9x19_G17_Green_Mag", \
    "JCA_17Rnd_9x19_G17_Yellow_Mag", \
    "JCA_17Rnd_9x19_G17_IR_Mag"

class CfgMagazineWells {
    class CBA_9x19_Glock_Full {
        JCA_Magazines[] = {JCA_G17_MAGS};
    };
};
