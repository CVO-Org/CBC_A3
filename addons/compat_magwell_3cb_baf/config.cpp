#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        author = ECSTRING(main,author);
        url = ECSTRING(main,url);

        name = ADDON_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"cba_main", "UK3CB_BAF_Weapons_Accessories", "UK3CB_BAF_Weapons_Ammo", "UK3CB_BAF_Weapons_L1a1", "UK3CB_BAF_Weapons_L7", "UK3CB_BAF_Weapons_L9A1", "UK3CB_BAF_Weapons_L85A3", "UK3CB_BAF_Weapons_L105A1", "UK3CB_BAF_Weapons_L110", "UK3CB_BAF_Weapons_L115", "UK3CB_BAF_Weapons_L119", "UK3CB_BAF_Weapons_L129", "UK3CB_BAF_Weapons_L131A1", "UK3CB_BAF_Weapons_Launchers", "UK3CB_BAF_Weapons_SmallArms", "UK3CB_BAF_Weapons_Static", "UK3CB_BAF_Vehicles_Weapons"};
        authors[] = {"johnb432", "Andx"};
        // If any requiredAddons[] entry is missing, the entire config is silently ignored (RPT only) - useful for a compat mod (since Arma 3 2.14)
        skipWhenMissingDependencies = 1;
        VERSION_CONFIG;
    };
};

#include "CfgMagazineWells.hpp"
#include "CfgWeapons.hpp"
