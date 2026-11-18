// Based on Weapons-Balance-RHS by johnb432 (https://github.com/johnb432/Weapons-Balance-RHS), MIT License,
// Copyright (c) 2021 johnb432. Attachment lists only.
// Picatinny-mounted USAF optics, lasers and bipods on the shared vanilla rails.
class CowsSlot;
class CowsSlot_Rail: CowsSlot {
    class compatibleItems {
        rhsusf_acc_anpas13gv1 = 1;
        rhsusf_acc_acog2_usmc = 1;
        rhsusf_acc_acog3_usmc = 1;
        rhsusf_acc_acog_usmc = 1;
        rhsusf_acc_anpvs27 = 1;
        rhsusf_acc_eotech = 1;
        rhsusf_acc_g33_t1 = 1;
        rhsusf_acc_g33_xps3 = 1;
        rhsusf_acc_g33_xps3_tan = 1;
        rhsusf_acc_elcan = 1;
        rhsusf_acc_elcan_ard = 1;
        rhsusf_acc_acog = 1;
        rhsusf_acc_acog2 = 1;
        rhsusf_acc_acog3 = 1;
        rhsusf_acc_m2a1 = 1;
        rhsusf_acc_eotech_552 = 1;
        rhsusf_acc_eotech_552_d = 1;
        rhsusf_acc_eotech_552_wd = 1;
        rhsusf_acc_compm4 = 1;
        rhsusf_acc_m8541 = 1;
        rhsusf_acc_m8541_low = 1;
        rhsusf_acc_m8541_low_d = 1;
        rhsusf_acc_m8541_low_wd = 1;
        rhsusf_acc_m8541_mrds = 1;
        rhsusf_acc_premier_low = 1;
        rhsusf_acc_premier = 1;
        rhsusf_acc_premier_mrds = 1;
        rhsusf_acc_leupoldmk4 = 1;
        rhsusf_acc_leupoldmk4_2 = 1;
        rhsusf_acc_leupoldmk4_d = 1;
        rhsusf_acc_leupoldmk4_wd = 1;
        rhsusf_acc_leupoldmk4_2_d = 1;
        rhsusf_acc_leupoldmk4_2_mrds = 1;
        rhsusf_acc_mrds = 1;
        rhsusf_acc_mrds_c = 1;
        rhsusf_acc_rm05 = 1;
        rhsusf_acc_rx01_nofilter = 1;
        rhsusf_acc_rx01 = 1;
        rhsusf_acc_rx01_nofilter_tan = 1;
        rhsusf_acc_rx01_tan = 1;
        rhsusf_acc_su230 = 1;
        rhsusf_acc_su230_c = 1;
        rhsusf_acc_su230_mrds = 1;
        rhsusf_acc_su230_mrds_c = 1;
        rhsusf_acc_su230a = 1;
        rhsusf_acc_su230a_c = 1;
        rhsusf_acc_su230a_mrds = 1;
        rhsusf_acc_su230a_mrds_c = 1;
        rhsusf_acc_acog_mdo = 1;
        rhsusf_acc_t1_high = 1;
        rhsusf_acc_t1_low = 1;
        rhsusf_acc_acog_rmr = 1;
        rhsusf_acc_acog_d = 1;
        rhsusf_acc_acog_wd = 1;
        rhsusf_acc_eotech_xps3 = 1;
    };
};

class PointerSlot;
class PointerSlot_Rail: PointerSlot {
    class compatibleItems {
        rhsusf_acc_anpeq15side = 1;
        rhsusf_acc_anpeq15_top = 1;
        rhsusf_acc_anpeq15_wmx = 1;
        rhsusf_acc_anpeq15_wmx_light = 1;
        rhsusf_acc_anpeq15side_bk = 1;
        rhsusf_acc_anpeq15_bk_top = 1;
        rhsusf_acc_anpeq15 = 1;
        rhsusf_acc_anpeq15_light = 1;
        rhsusf_acc_anpeq15_bk = 1;
        rhsusf_acc_anpeq15_bk_light = 1;
        rhsusf_acc_anpeq15a = 1;
        rhsusf_acc_anpeq16a = 1;
        rhsusf_acc_anpeq16a_light = 1;
        rhsusf_acc_anpeq16a_top = 1;
        rhsusf_acc_anpeq16a_light_top = 1;
        rhsusf_acc_m952v = 1;
        rhsusf_acc_wmx = 1;
        rhsusf_acc_wmx_bk = 1;
    };
};

class UnderBarrelSlot;
class UnderBarrelSlot_rail: UnderBarrelSlot {
    class compatibleItems {
        rhsusf_acc_harris_bipod = 1;
        rhs_acc_harris_swivel = 1;
    };
};

// Long-eye-relief scopes on the long CBA Picatinny rail.
class asdg_OpticRail;
class asdg_OpticRail1913: asdg_OpticRail {
    class compatibleItems;
};
class asdg_OpticRail1913_long: asdg_OpticRail1913 {
    class compatibleItems: compatibleItems {
        rhsusf_acc_M8541_low = 1;
        rhsusf_acc_m8541_low_d = 1;
        rhsusf_acc_m8541_low_wd = 1;
        rhsusf_acc_leupoldmk4 = 1;
        rhsusf_acc_leupoldmk4_d = 1;
        rhsusf_acc_leupoldmk4_wd = 1;
    };
};

class asdg_MuzzleSlot;
class asdg_MuzzleSlot_9MM_SMG: asdg_MuzzleSlot {
    class compatibleItems {
        rhsusf_acc_omega9k = 1;
    };
};

// Harris bipods on the RHS western rifle / MG gripod slots and the M14 sling swivel.
class rhs_rifle_gripod_slot: UnderBarrelSlot {
    class compatibleItems;
};
class rhs_western_rifle_gripod_slot: rhs_rifle_gripod_slot {
    class compatibleItems: compatibleItems {
        rhsusf_acc_harris_bipod = 1;
        rhs_acc_harris_swivel = 1;
    };
};
class rhs_western_mg_gripod_slot: rhs_western_rifle_gripod_slot {
    class compatibleItems: compatibleItems {
        rhsusf_acc_grip2 = 1;
        rhsusf_acc_grip2_tan = 1;
        rhsusf_acc_grip2_wd = 1;
    };
};
class rhs_western_m14_underbarrel_slot: UnderBarrelSlot {
    class compatibleItems {
        rhs_acc_harris_swivel = 1;
    };
};
