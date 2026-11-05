// Based on Weapons-Balance-BW by johnb432 (https://github.com/johnb432/Weapons-Balance-BW), MIT License,
// Copyright (c) 2021 johnb432. Attachment lists only.
class UnderBarrelSlot;
class rhs_rifle_gripod_slot: UnderBarrelSlot {
    class compatibleItems;
};
class rhs_western_rifle_gripod_slot: rhs_rifle_gripod_slot {
    class compatibleItems: compatibleItems {
        bwa3_bipod_atlas = 1;
        bwa3_bipod_harris = 1;
        bwa3_bipod_harris_green = 1;
        bwa3_bipod_harris_tan = 1;
    };
};
