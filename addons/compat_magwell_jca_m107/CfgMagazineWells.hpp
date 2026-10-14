// JCA already uses its own JCA_M107_127x99 well, so only the CBA well is extended here.
#define JCA_M107_MAGS \
    "JCA_10Rnd_127x99_M107_Mag", \
    "JCA_10Rnd_127x99_M107_Tracer_Red_Mag", \
    "JCA_10Rnd_127x99_M107_Tracer_Green_Mag", \
    "JCA_10Rnd_127x99_M107_Tracer_Yellow_Mag", \
    "JCA_10Rnd_127x99_M107_Tracer_IR_Mag", \
    "JCA_10Rnd_127x99_M107_Sand_Mag", \
    "JCA_10Rnd_127x99_M107_Sand_Tracer_Red_Mag", \
    "JCA_10Rnd_127x99_M107_Sand_Tracer_Green_Mag", \
    "JCA_10Rnd_127x99_M107_Sand_Tracer_Yellow_Mag", \
    "JCA_10Rnd_127x99_M107_Sand_Tracer_IR_Mag", \
    "JCA_10Rnd_127x99_APDS_M107_Mag", \
    "JCA_10Rnd_127x99_APDS_M107_Tracer_Red_Mag", \
    "JCA_10Rnd_127x99_APDS_M107_Tracer_Green_Mag", \
    "JCA_10Rnd_127x99_APDS_M107_Tracer_Yellow_Mag", \
    "JCA_10Rnd_127x99_APDS_M107_Tracer_IR_Mag", \
    "JCA_10Rnd_127x99_APDS_M107_Sand_Mag", \
    "JCA_10Rnd_127x99_APDS_M107_Sand_Tracer_Red_Mag", \
    "JCA_10Rnd_127x99_APDS_M107_Sand_Tracer_Green_Mag", \
    "JCA_10Rnd_127x99_APDS_M107_Sand_Tracer_Yellow_Mag", \
    "JCA_10Rnd_127x99_APDS_M107_Sand_Tracer_IR_Mag"

class CfgMagazineWells {
    class CBA_50BMG_M107 {
        JCA_Magazines[] = {JCA_M107_MAGS};
    };
};
