// JCA already uses its own JCA_SCAR_762x51 well. The SCAR-L only uses vanilla magazines.
#include "magazines.hpp"

class CfgMagazineWells {
    class Stanag_556x45_Big {};
    class Stanag_762x51 {
        JCA_SCAR_Magazines_Stanag_762x51[] = {JCA_SCAR_MAGS_762};
    };
    class Stanag_762x51_big {
        JCA_SCAR_Magazines_Stanag_762x51[] = {JCA_SCAR_MAGS_762};
    };
    class CBA_762x51_SCAR {
        JCA_SCAR_Magazines_Stanag_762x51[] = {JCA_SCAR_MAGS_762};
    };
};
