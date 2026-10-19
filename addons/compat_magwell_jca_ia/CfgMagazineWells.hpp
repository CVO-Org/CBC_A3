// Same weapons and magazine classnames as the standalone JCA mods, so the magazine lists are shared with the standalone compat addons.
// JCA already uses its own JCA_* wells (and STANAG_556x45), so only the shared and CBA wells are extended here.
#include "\x\cbc\addons\compat_magwell_jca_awm\magazines.hpp"
#include "\x\cbc\addons\compat_magwell_jca_g17\magazines.hpp"
#include "\x\cbc\addons\compat_magwell_jca_gen4\magazines.hpp"
#include "\x\cbc\addons\compat_magwell_jca_hk433\magazines.hpp"
#include "\x\cbc\addons\compat_magwell_jca_hk437\magazines.hpp"
#include "\x\cbc\addons\compat_magwell_jca_m107\magazines.hpp"
#include "\x\cbc\addons\compat_magwell_jca_m9a1\magazines.hpp"
#include "\x\cbc\addons\compat_magwell_jca_mp5\magazines.hpp"
#include "\x\cbc\addons\compat_magwell_jca_mp7\magazines.hpp"
#include "\x\cbc\addons\compat_magwell_jca_p226\magazines.hpp"
#include "\x\cbc\addons\compat_magwell_jca_scar\magazines.hpp"
#include "\x\cbc\addons\compat_magwell_jca_ump\magazines.hpp"

class CfgMagazineWells {
    // 5.56x45 - Gen 4 PMAG, HK433 EMAG (M16A4 and SCAR-L only use vanilla magazines)
    class CBA_556x45_STANAG {
        JCA_Magazines[] = {JCA_GEN4_MAGS_556};
        JCA_HK433_Magazines[] = {JCA_HK433_MAGS_556};
    };
    class Stanag_556x45_Big {
        JCA_Magazines_Stanag_556x45[] = {JCA_GEN4_MAGS_556};
        JCA_HK433_Magazines_Stanag_556x45[] = {JCA_HK433_MAGS_556};
    };

    // 7.62x51 - Gen 4 SR PMAG / SMAG, SCAR-H
    class Stanag_762x51 {
        JCA_Magazines_Stanag_762x51[] = {JCA_GEN4_MAGS_762};
        JCA_SCAR_Magazines_Stanag_762x51[] = {JCA_SCAR_MAGS_762};
    };
    class Stanag_762x51_big {
        JCA_Magazines_Stanag_762x51[] = {JCA_GEN4_MAGS_762};
        JCA_SCAR_Magazines_Stanag_762x51[] = {JCA_SCAR_MAGS_762};
    };
    class CBA_762x51_SR25 {
        JCA_Magazines_Stanag_762x51[] = {JCA_GEN4_MAGS_762};
    };
    class CBA_762x51_AR10 {
        JCA_Magazines_Stanag_762x51[] = {JCA_GEN4_MAGS_762};
    };
    class CBA_762x51_SCAR {
        JCA_SCAR_Magazines_Stanag_762x51[] = {JCA_SCAR_MAGS_762};
    };

    // .300 BLK - HK437
    class CBA_300BLK_STANAG {
        JCA_Magazines[] = {JCA_HK437_MAGS_300BLK};
    };

    // Pistols / SMGs
    class CBA_9x19_Glock_Full {
        JCA_Magazines[] = {JCA_G17_MAGS};
    };
    class CBA_9x19_M9 {
        JCA_Magazines[] = {JCA_M9A1_MAGS};
    };
    class CBA_9x19_P226 {
        JCA_Magazines[] = {JCA_P226_MAGS};
    };
    class CBA_9x19_MP5 {
        JCA_Magazines[] = {JCA_MP5_MAGS};
    };
    class CBA_45ACP_UMP {
        JCA_Magazines[] = {JCA_UMP_MAGS};
    };
    class CBA_46x30_MP7 {
        JCA_Magazines[] = {JCA_MP7_MAGS};
    };

    // Long range rifles
    class CBA_338LM_AI {
        JCA_Magazines[] = {JCA_M115A3_MAGS};
    };
    class CBA_50BMG_M107 {
        JCA_Magazines[] = {JCA_M107_MAGS};
    };
};
