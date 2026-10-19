// JCA already uses its own JCA_UMP_45ACP well, so only the CBA well is extended here.
#include "magazines.hpp"

class CfgMagazineWells {
    class CBA_45ACP_UMP {
        JCA_Magazines[] = {JCA_UMP_MAGS};
    };
};
