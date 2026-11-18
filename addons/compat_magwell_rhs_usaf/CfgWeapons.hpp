// Based on Weapons-Balance-RHS by johnb432 (https://github.com/johnb432/Weapons-Balance-RHS), MIT License,
// Copyright (c) 2021 johnb432. Magazine lists only.
class CfgWeapons {
    class rhs_weap_m14ebrri;
    class launch_O_Titan_F;

    // Replaced, not appended: the SR-25 inherits the M14 EBR-RI, which compat_magwell_rhs gives the M14 well.
    // Its own RHS magazines are in CBA_762x51_SR25 (see CfgMagazineWells.hpp).
    class rhs_weap_sr25: rhs_weap_m14ebrri {
        magazineWell[] = {"CBA_762x51_SR25"};
    };
    class rhs_weap_fim92: launch_O_Titan_F {
        magazineWell[] += {"CBA_FIM"};
    };
};
