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
            "Weapons_F_JCA_HF_Explosives",
            "ace_main"
        };
        authors[] = {"Sky"};
        // If any requiredAddons[] entry is missing, the entire config is silently ignored (RPT only) - useful for a compat mod (since Arma 3 2.14)
        // The standalone compat_magwell_jca_* addons skip themselves when Weapons_F_JCA_IA is loaded, so only this one applies then.
        skipWhenMissingDependencies = 1;
        skipWhenAnyAddonPresent[] = {
            "Weapons_F_JCA_IA"
        };
        VERSION_CONFIG;
    };
};

#include "CfgAmmo.hpp"
