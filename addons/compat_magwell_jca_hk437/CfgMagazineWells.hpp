// The HK437 is a .300 BLK rifle, so it never accepts 5.56x45 STANAG magazines.
#include "magazines.hpp"

class CfgMagazineWells {
    class CBA_300BLK_STANAG {
        JCA_Magazines[] = {JCA_HK437_MAGS_300BLK};
    };
};
