// Based on Weapons-Balance-RHS by johnb432 (https://github.com/johnb432/Weapons-Balance-RHS), MIT License,
// Copyright (c) 2021 johnb432. Display names only.
class CfgMagazines {
    class 1Rnd_HE_Grenade_shell;

    class rhs_VOG25: 1Rnd_HE_Grenade_shell {
        displayName = "VOG-25 (HE)";
    };
    class rhs_VOG25P: rhs_VOG25 {
        displayName = "VOG-25P (HE, Bounding)";
    };
    class rhs_GRD40_White: rhs_VOG25 {
        displayName = "GRD-40 (White Smoke)";
    };
    class rhs_GRD40_Green: rhs_GRD40_White {
        displayName = "GRD-40 (Green Smoke)";
    };
    class rhs_GRD40_Red: rhs_GRD40_White {
        displayName = "GRD-40 (Red Smoke)";
    };
    class rhs_GDM40: rhs_GRD40_White {
        displayName = "GDM-40 (White Smoke)";
    };
    class rhs_VG40MD: rhs_GRD40_White {
        displayName = "VG-40MD (White Smoke)";
    };
    class rhs_VG40OP_white: rhs_VOG25 {
        displayName = "VG-40OP (White Flare)";
    };
    class rhs_VG40OP_green: rhs_VG40OP_white {
        displayName = "VG-40OP (Green Flare)";
    };
    class rhs_VG40OP_red: rhs_VG40OP_white {
        displayName = "VG-40OP (Red Flare)";
    };
    class rhs_VG40SZ: rhs_VOG25 {
        displayName = "VG-40SZ (Stun)";
    };
    class rhs_VG40TB: rhs_VOG25 {
        displayName = "VG-40TB (Thermobaric)";
    };
};
