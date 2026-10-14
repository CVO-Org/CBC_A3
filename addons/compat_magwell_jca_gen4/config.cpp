#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        author = ECSTRING(main,author);
        url = ECSTRING(main,url);

        name = ADDON_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"Weapons_F_JCA_Gen4","Weapons_F_JCA_gen4_Rifles_M4A1","Weapons_F_JCA_gen4_Rifles_M4A4","Weapons_F_JCA_gen4_Rifles_SR10","Weapons_F_JCA_gen4_Rifles_SR25"};
        authors[] = {"Andx"};
        // If any requiredAddons[] entry is missing, the entire config is silently ignored (RPT only) - useful for a compat mod (since Arma 3 2.14)
        skipWhenMissingDependencies = 1;
        VERSION_CONFIG;
    };
};

#include "CfgMagazineWells.hpp"
#include "CfgWeapons.hpp"
