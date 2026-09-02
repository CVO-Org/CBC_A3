#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        author = "$STR_mod_author";
        url = "$STR_mod_URL";
        authors[] = {"Andx"};

        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tsp_breach_block","tsp_breach_linear","tsp_breach_package","tsp_breach_popper","tsp_breach_silhouette","tsp_breach_stick","tsp_breach_dip"};
        // If any requiredAddons[] entry is missing, the entire config is silently ignored (RPT only) - useful for a compat mod (since Arma 3 2.14)
        skipWhenMissingDependencies = 1;
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
