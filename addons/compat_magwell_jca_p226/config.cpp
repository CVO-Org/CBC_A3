#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        author = ECSTRING(main,author);
        url = ECSTRING(main,url);

        name = ADDON_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"Weapons_F_JCA_P226","Weapons_F_JCA_P226_Pistols_P226"};
        authors[] = {"Andx"};
        // If any requiredAddons[] entry is missing, the entire config is silently ignored (RPT only) - useful for a compat mod (since Arma 3 2.14)
        skipWhenMissingDependencies = 1;
        // Skipped when JCA - Infantry Arsenal is loaded, compat_magwell_jca_ia handles that case (since Arma 3 2.22)
        skipWhenAnyAddonPresent[] = {"Weapons_F_JCA_IA"};
        VERSION_CONFIG;
    };
};

#include "CfgMagazineWells.hpp"
#include "CfgWeapons.hpp"
