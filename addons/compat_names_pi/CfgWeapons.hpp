// Based on Weapons-Balance-PI by johnb432 (https://github.com/johnb432/Weapons-Balance-PI), MIT License,
// Copyright (c) 2021 johnb432. Display names only.
class CfgWeapons {
    class bnae_mk1_base;
    class bnae_m97_base;
    class bnae_rk95_base;
    class bnae_spr220_base;
    class bnae_spr220_so_base;

    class bnae_mk1_virtual: bnae_mk1_base {
        displayName = "Lee-Enfield No.4 Mk.I";
    };
    class bnae_mk1_t_virtual: bnae_mk1_base {
        displayName = "Lee-Enfield No.4 Mk.I (T)";
    };
    class bnae_mk1_t_camo1_virtual: bnae_mk1_t_virtual {
        displayName = "Lee-Enfield No.4 Mk.I (T) (Paint)";
    };
    class bnae_mk1_short_virtual: bnae_mk1_base {
        displayName = "Lee-Enfield No.4 Mk.I Carbine";
    };
    class bnae_m97_s_virtual: bnae_m97_base {
        displayName = "Model 97 (Short)";
    };
    class bnae_rk95_virtual: bnae_rk95_base {
        displayName = "RK 95 TP";
    };
    class bnae_rk95_camo1_virtual: bnae_rk95_base {
        displayName = "RK 95 TP (Desert)";
    };
    class bnae_rk95r_virtual: bnae_rk95_virtual {
        displayName = "RK 95 TP (Rail)";
    };
    class bnae_rk95r_camo1_virtual: bnae_rk95r_virtual {
        displayName = "RK 95 TP (Desert/Rail)";
    };
    class bnae_spr220_virtual: bnae_spr220_base {
        displayName = "SPR 220";
    };
    class bnae_spr220_camo1_virtual: bnae_spr220_base {
        displayName = "SPR 220 (Digital)";
    };
    class bnae_spr220_so_virtual: bnae_spr220_so_base {
        displayName = "SPR 220 (Sawn-off)";
    };
    class bnae_spr220_so_camo1_virtual: bnae_spr220_so_base {
        displayName = "SPR 220 (Digital/Sawn-off)";
    };
};
