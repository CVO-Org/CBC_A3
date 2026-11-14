// Based on Weapons-Balance-PI by johnb432 (https://github.com/johnb432/Weapons-Balance-PI), MIT License,
// Copyright (c) 2021 johnb432. Attachment lists only.
class UnderBarrelSlot;
class UnderBarrelSlot_rail: UnderBarrelSlot {
    class compatibleItems {
        bnae_bipod_blk_virtual = 1;
        bnae_bipod_snd_virtual = 1;
    };
};

class CowsSlot;
class CowsSlot_Rail: CowsSlot {
    class compatibleItems {
        bnae_scope_blk_virtual = 1;
        bnae_scope_mtp_virtual = 1;
        bnae_scope_snd_virtual = 1;
        bnae_scope_v2_virtual = 1;
        bnae_truglo_blk_virtual = 1;
        bnae_truglo_snd_virtual = 1;
    };
};

class asdg_SlotInfo;
class asdg_OpticRail: asdg_SlotInfo {
    class compatibleItems;
};
class asdg_OpticRail1913: asdg_OpticRail {
    class compatibleItems: compatibleItems {
        bnae_scope_blk_virtual = 1;
        bnae_scope_mtp_virtual = 1;
        bnae_scope_snd_virtual = 1;
        bnae_scope_v2_virtual = 1;
        bnae_truglo_blk_virtual = 1;
        bnae_truglo_snd_virtual = 1;
    };
};

class asdg_MuzzleSlot;
class asdg_MuzzleSlot_338: asdg_MuzzleSlot {
    class compatibleItems {
        bnae_muzzle_blk_virtual = 1;
        bnae_muzzle_snd_virtual = 1;
        bnae_silencer_virtual = 1;
    };
};
class asdg_MuzzleSlot_762: asdg_MuzzleSlot {
    class compatibleItems {
        bnae_suppressor_v2_virtual = 1;
        bnae_suppressor_covblk_virtual = 1;
        bnae_suppressor_covdrt_virtual = 1;
    };
};

class MuzzleSlot;
class MuzzleSlot_762: MuzzleSlot {
    class compatibleItems {
        bnae_suppressor_v2_virtual = 1;
        bnae_suppressor_covblk_virtual = 1;
        bnae_suppressor_covdrt_virtual = 1;
    };
};
