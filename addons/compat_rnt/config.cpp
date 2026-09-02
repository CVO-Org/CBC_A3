#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        author = "$STR_mod_author";
        url = "$STR_mod_URL";

        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "Redd_Tank_M120_Tampella",
            "m120_comp_ace",
            "rnt_ace_compatibility",
            "rnt_gmw_static",
            "rnt_mg3_static"
        };
        authors[] = {"Andx"};
        // If any requiredAddons[] entry is missing, the entire config is silently ignored (RPT only) - useful for a compat mod (since Arma 3 2.14)
        skipWhenMissingDependencies = 1;
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
