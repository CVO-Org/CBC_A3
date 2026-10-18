// JCA already adds its magazines to STANAG_556x45, so only the shared wells are extended here.
#include "magazines.hpp"

class CfgMagazineWells {
    class CBA_556x45_STANAG {
        JCA_HK433_Magazines[] = {JCA_HK433_MAGS_556};
    };
    class Stanag_556x45_Big {
        JCA_HK433_Magazines_Stanag_556x45[] = {JCA_HK433_MAGS_556};
    };
};
