// Based on Weapons-Balance-GEIST by johnb432 (https://github.com/johnb432/Weapons-Balance-GEIST), MIT License,
// Copyright (c) 2021 johnb432. Config fixes only.
class CfgWeapons {
    class GLIB_USA_M1918A2_BAR;
    class LIB_M9130;
    class LIB_M38;
    class LIB_Colt_M1911;
    class LIB_P08;
    class LIB_M1895;
    class LIB_WaltherPPK;

    class GLIB_FIN_M26: GLIB_USA_M1918A2_BAR {
        magazineWell[] = {"CBA_762x54R_PK_M26"};
    };
    class GLIB_POL_WZ28: GLIB_USA_M1918A2_BAR {
        magazineWell[] = {"CBA_792x57_wz28"};
    };
    class GLIB_ITA_M91: LIB_M9130 {
        magazineWell[] = {};
    };
    class GLIB_FRA_MAS36: LIB_M38 {
        magazineWell[] = {"CBA_75x54mmFrench_MAS36"};
    };
    class GLIB_ITA_M38: LIB_M38 {
        magazineWell[] = {};
    };
    class GLIB_BEL_PISFNGP35: LIB_Colt_M1911 {
        magazineWell[] = {"CBA_9x19_HiPower"};
    };
    class GLIB_FRA_PA35A: LIB_Colt_M1911 {
        magazineWell[] = {"CBA_765x20mmLongue_PA"};
    };
    class GLIB_FIN_L35: LIB_P08 {
        magazineWell[] = {"CBA_9x19_L35"};
    };
    class GLIB_FRA_REV1892: LIB_M1895 {
        magazineWell[] = {"CBA_8x27_M1892"};
    };
    class GLIB_GBR_ENF2MK1: LIB_M1895 {
        magazineWell[] = {"CBA_38_200_Webley"};
    };
    class GLIB_ITA_REV1889: LIB_M1895 {
        magazineWell[] = {};
    };
    class GLIB_ITA_BerettaM1935: LIB_WaltherPPK {
        magazineWell[] = {};
    };
};
