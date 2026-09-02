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
            "CFP_I_WAGNER",
            "CFP_I_WAGNER_WDL",
            "CFP_I_WAGNER_WIN",
            "CFP_O_WAGNER",
            "CFP_O_WAGNER_WDL",
            "CFP_O_WAGNER_WIN",
            "CFP_O_SDARMY",
            "CFP_O_RUARMY_DES",
            "CFP_O_BOKOHARAM"
        };
        authors[] = {"Andx"};
        // If any requiredAddons[] entry is missing, the entire config is silently ignored (RPT only) - useful for a compat mod (since Arma 3 2.14)
        skipWhenMissingDependencies = 1;
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
