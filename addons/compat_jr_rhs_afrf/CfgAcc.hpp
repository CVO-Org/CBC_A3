// Based on Weapons-Balance-RHS by johnb432 (https://github.com/johnb432/Weapons-Balance-RHS), MIT License,
// Copyright (c) 2021 johnb432. Attachment lists only.
// Picatinny-mounted AFRF optics and lasers on the shared vanilla rails.
class CowsSlot;
class CowsSlot_Rail: CowsSlot {
    class compatibleItems {
        rhs_acc_rakurspm = 1;
        rhs_acc_1p87 = 1;
        rhs_acc_dh520x56 = 1;
        rhs_acc_ekp8_18 = 1;
        rhs_acc_okp7_picatinny = 1;
    };
};

class PointerSlot;
class PointerSlot_Rail: PointerSlot {
    class compatibleItems {
        rhs_acc_2dpzenit_ris = 1;
        rhs_acc_perst1ik_ris = 1;
        rhs_acc_perst3 = 1;
    };
};

// PSO-1 scopes on the Warsaw Pact side rail.
class asdg_OpticRail;
class asdg_OpticSideMount: asdg_OpticRail {
    class compatibleItems;
};
class asdg_OpticSideRail_AK: asdg_OpticSideMount {
    class compatibleItems: compatibleItems {
        rhs_acc_pso1m2 = 1;
        rhs_acc_pso1m2_ads = 1;
        rhs_acc_pso1m2_ads_night = 1;
        rhs_acc_pso1m2_ak = 1;
        rhs_acc_pso1m2_ak_ironsight = 1;
        rhs_acc_pso1m2_asval = 1;
        rhs_acc_pso1m2_asval_ironsight = 1;
        rhs_acc_pso1m2_ironsight = 1;
        rhs_acc_pso1m2_pkp = 1;
        rhs_acc_pso1m2_pkp_ironsight = 1;
        rhs_acc_pso1m21 = 1;
        rhs_acc_pso1m21_ads = 1;
        rhs_acc_pso1m21_ads_night = 1;
        rhs_acc_pso1m21_ak = 1;
        rhs_acc_pso1m21_ak_ironsight = 1;
        rhs_acc_pso1m21_ironsight = 1;
        rhs_acc_pso1m21_pkp = 1;
        rhs_acc_pso1m21_pkp_ironsight = 1;
        rhs_acc_pso1m21_svd = 1;
        rhs_acc_pso1m21_svd_ironsight = 1;
    };
};

// 5.45x39 AK muzzle devices (24x1.5 thread) on the 5.45 muzzle slots.
class asdg_MuzzleSlot;
class asdg_MuzzleSlot_545R: asdg_MuzzleSlot {
    class compatibleItems {
        rhs_acc_pbs4 = 1;
        rhs_acc_pgs64 = 1;
        rhs_acc_pgs64_74u = 1;
        rhs_acc_pgs64_74un = 1;
        rhs_acc_dtkrpk = 1;
    };
};

// AKM slant compensator (14x1 LH thread) on the 7.62x39 muzzle slots.
class asdg_MuzzleSlot_762R: asdg_MuzzleSlot {
    class compatibleItems {
        rhs_acc_dtkakm = 1;
    };
};

class MuzzleSlot;
class MuzzleSlot_545R: MuzzleSlot {
    class compatibleItems {
        rhs_acc_pbs4 = 1;
        rhs_acc_pgs64 = 1;
        rhs_acc_pgs64_74u = 1;
        rhs_acc_pgs64_74un = 1;
        rhs_acc_dtkrpk = 1;
    };
};
class MuzzleSlot_762R: MuzzleSlot {
    class compatibleItems {
        rhs_acc_dtkakm = 1;
    };
};
