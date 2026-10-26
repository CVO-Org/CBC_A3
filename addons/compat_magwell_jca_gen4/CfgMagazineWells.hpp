// JCA already adds its magazines to STANAG_556x45 and JCA_SR_762x51; extend the CBA wells used by these rifles.
#include "magazines.hpp"

class CfgMagazineWells {
    class CBA_556x45_STANAG {
        JCA_Magazines[] = {JCA_GEN4_MAGS_556};
    };
    class Stanag_556x45_Big {
        JCA_Magazines_Stanag_556x45[] = {JCA_GEN4_MAGS_556};
    };
    class CBA_762x51_AR10 {
        JCA_Magazines_Stanag_762x51[] = {JCA_GEN4_MAGS_762};
    };
};
