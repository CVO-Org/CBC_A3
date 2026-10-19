#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        author = ECSTRING(main,author);
        url = ECSTRING(main,url);

        name = ADDON_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "Weapons_F_JCA_IA",
            "Weapons_F_JCA_IA_LongRangeRifles_AWM",
            "Weapons_F_JCA_IA_LongRangeRifles_M107",
            "Weapons_F_JCA_IA_Pistols_G17",
            "Weapons_F_JCA_IA_Pistols_M9A1",
            "Weapons_F_JCA_IA_Pistols_P226",
            "Weapons_F_JCA_IA_Rifles_HK433",
            "Weapons_F_JCA_IA_Rifles_HK437",
            "Weapons_F_JCA_IA_Rifles_M16A4",
            "Weapons_F_JCA_IA_Rifles_M4A1",
            "Weapons_F_JCA_IA_Rifles_M4A4",
            "Weapons_F_JCA_IA_Rifles_SCAR_H",
            "Weapons_F_JCA_IA_Rifles_SCAR_L",
            "Weapons_F_JCA_IA_Rifles_SR10",
            "Weapons_F_JCA_IA_Rifles_SR25",
            "Weapons_F_JCA_IA_SMGs_MP5",
            "Weapons_F_JCA_IA_SMGs_MP7",
            "Weapons_F_JCA_IA_SMGs_UMP"
        };
        authors[] = {"Andx"};
        // If any requiredAddons[] entry is missing, the entire config is silently ignored (RPT only) - useful for a compat mod (since Arma 3 2.14)
        // The standalone compat_magwell_jca_* addons skip themselves when Weapons_F_JCA_IA is loaded, so only this one applies then.
        skipWhenMissingDependencies = 1;
        VERSION_CONFIG;
    };
};

#include "CfgMagazineWells.hpp"
#include "CfgWeapons.hpp"
