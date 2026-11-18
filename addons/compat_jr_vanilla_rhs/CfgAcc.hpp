// Based on Weapons-Balance-Vanilla by johnb432 (https://github.com/johnb432/Weapons-Balance-Vanilla), MIT License,
// Copyright (c) 2021 johnb432. Attachment lists only.
class UnderBarrelSlot;
class rhs_rifle_gripod_slot: UnderBarrelSlot {
    class compatibleItems;
};
class rhs_western_rifle_gripod_slot: rhs_rifle_gripod_slot {
    class compatibleItems: compatibleItems {
        bipod_01_F_blk = 1;
        bipod_01_F_khk = 1;
        bipod_01_F_mtp = 1;
        bipod_01_F_snd = 1;
        bipod_02_F_arid = 1;
        bipod_02_F_blk = 1;
        bipod_02_F_hex = 1;
        bipod_02_F_lush = 1;
        bipod_02_F_tan = 1;
        bipod_03_F_blk = 1;
        bipod_03_F_oli = 1;
    };
};

class asdg_MuzzleSlot;
class asdg_MuzzleSlot_556: asdg_MuzzleSlot {
    class compatibleItems;
};
class rhs_western_rifle_muzzle_slot: asdg_MuzzleSlot_556 {
    class compatibleItems: compatibleItems {
        muzzle_snds_M = 1;
    };
};
