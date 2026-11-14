#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        author = ECSTRING(main,author);
        url = ECSTRING(main,url);

        name = ADDON_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"cba_jr", "hlcweapons_core", "bnae_attachments", "bnae_Colt_SAA", "bnae_core", "bnae_falkor", "bnae_lahti", "bnae_m97", "bnae_mk1", "bnae_r1", "bnae_rk95", "bnae_spr220", "bnae_trg42"};
        authors[] = {"johnb432", "Andx"};
        // If any requiredAddons[] entry is missing, the entire config is silently ignored (RPT only) - useful for a compat mod (since Arma 3 2.14)
        skipWhenMissingDependencies = 1;
        VERSION_CONFIG;
    };
};

#include "CfgAcc.hpp"
