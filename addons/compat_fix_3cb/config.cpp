#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        author = ECSTRING(main,author);
        url = ECSTRING(main,url);

        name = ADDON_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"cba_main", "UK3CB_Factions_Weapons", "UK3CB_Factions_Weapons_A2Ports", "UK3CB_Factions_Weapons_ACR", "UK3CB_Factions_Weapons_AK47", "UK3CB_Factions_Weapons_AUG", "UK3CB_Factions_Weapons_Bren", "UK3CB_Factions_Weapons_Browning", "UK3CB_Factions_Weapons_Enfield", "UK3CB_Factions_Weapons_FAMAS", "UK3CB_Factions_Weapons_FNFAL", "UK3CB_Factions_Weapons_G3", "UK3CB_Factions_Weapons_G36", "UK3CB_Factions_Weapons_M14", "UK3CB_Factions_Weapons_M16", "UK3CB_Factions_Weapons_M1903Al", "UK3CB_Factions_Weapons_M60", "UK3CB_Factions_Weapons_MG3", "UK3CB_Factions_Weapons_MP5", "UK3CB_Factions_Weapons_PPSH", "UK3CB_Factions_Weapons_RPK", "UK3CB_Factions_Weapons_SKS", "UK3CB_Factions_Weapons_Sten", "UK3CB_Factions_Weapons_STGW", "UK3CB_Factions_Weapons_SVD_OLD", "UK3CB_Factions_Weapons_UKM", "UK3CB_Factions_Weapons_USP", "UK3CB_Factions_Weapons_Uzi", "UK3CB_Factions_Weapons2_AEK971", "UK3CB_Factions_Weapons2_AK12", "UK3CB_Factions_Weapons2_AR18", "UK3CB_Factions_Weapons2_M1", "UK3CB_Factions_Weapons2_RK62", "UK3CB_Factions_Weapons2_TMG", "UK3CB_Factions_Weapons2_UK59"};
        authors[] = {"johnb432", "Andx"};
        // If any requiredAddons[] entry is missing, the entire config is silently ignored (RPT only) - useful for a compat mod (since Arma 3 2.14)
        skipWhenMissingDependencies = 1;
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
