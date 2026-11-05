#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        author = ECSTRING(main,author);
        url = ECSTRING(main,url);

        name = ADDON_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"cba_main", "amf_aanf1", "AMF_Backpack", "AMF_FAMAS", "AMF_Glock_17", "amf_mag58_mg", "amf_mini_mg", "AMF_PERSEIS_II", "amf_perseis_ii_poly", "AMF_PGM_ULTIMA_RATIO", "AMF_RFF2", "AMF_weapon_F", "AMF_weapon_F_scar", "AMF_weapon_F_S", "AMF_Weapons_HK_MP5_01"};
        authors[] = {"johnb432", "Andx"};
        // If any requiredAddons[] entry is missing, the entire config is silently ignored (RPT only) - useful for a compat mod (since Arma 3 2.14)
        skipWhenMissingDependencies = 1;
        VERSION_CONFIG;
    };
};

#include "CfgMagazineWells.hpp"
#include "CfgWeapons.hpp"
