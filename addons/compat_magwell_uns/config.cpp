#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        author = ECSTRING(main,author);
        url = ECSTRING(main,url);

        name = ADDON_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"cba_main", "cba_xeh", "uns_ammo_c", "uns_base", "uns_compat", "uns_main", "uns_weap_a", "uns_weap_c", "uns_weap_e", "uns_weap_s", "uns_weap_t", "uns_weap_t_s", "uns_weap_w"};
        authors[] = {"johnb432", "Andx"};
        // If any requiredAddons[] entry is missing, the entire config is silently ignored (RPT only) - useful for a compat mod (since Arma 3 2.14)
        skipWhenMissingDependencies = 1;
        VERSION_CONFIG;
    };
};

#include "CfgMagazineWells.hpp"
#include "CfgWeapons.hpp"
