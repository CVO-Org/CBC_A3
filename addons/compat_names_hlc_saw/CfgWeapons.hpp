// Based on Weapons-Balance-NIArms by johnb432 (https://github.com/johnb432/Weapons-Balance-NIArms), MIT License,
// Copyright (c) 2021 johnb432. Display names only.
class CfgWeapons {
    class hlc_lmg_minimipara;
    class bipod_01_F_snd;

    class hlc_lmg_minimipara_railed: hlc_lmg_minimipara {
        displayName = "FN Minimi Para (Short/Rail)";
    };
    class hlc_lmg_minimi_railed: hlc_lmg_minimipara {
        displayName = "FN Minimi (Long/Rail)";
    };
    class hlc_lmg_minimipara_long_railed: hlc_lmg_minimipara {
        displayName = "FN Minimi Para (Long/Rail)";
    };
    class hlc_lmg_m249para: hlc_lmg_minimipara {
        displayName = "M249E2 (Short/Para)";
    };
    class hlc_m249_pip1: hlc_lmg_minimi_railed {
        displayName = "M249 PIP (Long/Rail)";
    };
    class hlc_m249_pip2: hlc_lmg_minimi_railed {
        displayName = "M249E2 (Short/Rail)";
    };
    class hlc_m249_pip3: hlc_lmg_minimi_railed {
        displayName = "M249 PIP (Short/Savit/Rail)";
    };
    class hlc_m249_pip4: hlc_lmg_minimi_railed {
        displayName = "M249 PIP (Long/Savit)";
    };
    class hlc_m249_SQuantoon: hlc_m249_pip4 {
        displayName = "M249 PIP (Long/Savit/'Squantoon')";
    };
    class hlc_grip_saw_grip1: bipod_01_F_snd {
        displayName = "SAW Pistol Grip (Black)";
    };
    class hlc_grip_saw_grip2: hlc_grip_saw_grip1 {
        displayName = "SAW Pistol Grip (Tan)";
    };
};
