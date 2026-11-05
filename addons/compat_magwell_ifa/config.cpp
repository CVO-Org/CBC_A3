#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        author = ECSTRING(main,author);
        url = ECSTRING(main,url);

        name = ADDON_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"Big_Three_Core_Patch", "Big_Three_Weapons_Patch", "Big_Three_Weapons_GER_Patch", "Big_Three_Weapons_Japan_Patch", "Big_Three_Weapons_UK_Patch", "Big_Three_Weapons_USSR_Patch", "Big_Three_Weapons_US_Patch", "ww2_assets_c_weapons_infantryweapons_c", "ww2_assets_t_weapons_flamethrowers_t", "ww2_assets_t_weapons_launchers_t", "ww2_assets_t_weapons_machinegun_heavy_t", "ww2_assets_t_weapons_machinegun_light_t", "ww2_assets_t_weapons_machinegun_sub_t", "ww2_assets_t_weapons_pistols_t", "ww2_assets_t_weapons_rifles_t", "ww2_assets_t_weapons_sniperrifles_t", "ww2_assets_t_weapons_weaponsmagazines_t"};
        authors[] = {"johnb432", "Andx"};
        // If any requiredAddons[] entry is missing, the entire config is silently ignored (RPT only) - useful for a compat mod (since Arma 3 2.14)
        skipWhenMissingDependencies = 1;
        VERSION_CONFIG;
    };
};

#include "CfgMagazineWells.hpp"
#include "CfgWeapons.hpp"
