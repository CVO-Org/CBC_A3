#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        author = ECSTRING(main,author);
        url = ECSTRING(main,url);

        name = ADDON_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"PB_C_Weapons", "PB_QIN_CZ_BREN2", "PB_Universal_Kit", "PB_Austrian_Kit", "PB_Australian_Kit", "PB_Belgian_Kit", "PB_British_Kit", "PB_Canadian_Kit", "PB_Danish_Kit", "PB_Estonian_Kit", "PB_Finnish_Kit", "PB_French_Kit", "PB_German_Kit", "PB_Greek_Kit", "PB_Hungary_Kit", "PB_Irish_Kit", "PB_Japan_Kit", "PB_Korean_Kit", "PB_Latvian_Kit", "PB_Norway_Kit", "PB_Polish_Kit", "PB_Slovakian_Kit", "PB_Spain_Kit", "PB_Swedish_Kit", "PB_Ukraine_Kit", "PB_AUS_F", "PB_BEL_F", "PB_CAN_F"};
        authors[] = {"johnb432", "Andx"};
        // If any requiredAddons[] entry is missing, the entire config is silently ignored (RPT only) - useful for a compat mod (since Arma 3 2.14)
        skipWhenMissingDependencies = 1;
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
