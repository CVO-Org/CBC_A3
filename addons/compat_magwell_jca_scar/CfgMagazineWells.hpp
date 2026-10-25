// JCA already uses its own JCA_SCAR_762x51 well. Add SCAR-pattern magazines to the dedicated CBA well.
#include "magazines.hpp"

class CfgMagazineWells {
    class Stanag_556x45_Big {};
    class CBA_762x51_SCAR {
        JCA_SCAR_Magazines_Stanag_762x51[] = {JCA_SCAR_MAGS_762};
    };
};
