// Based on Weapons-Balance-BW by johnb432 (https://github.com/johnb432/Weapons-Balance-BW), MIT License,
// Copyright (c) 2021 johnb432. Attachment lists only.
// B&T Rotex II is the MP7 suppressor.
class asdg_MuzzleSlot;
class asdg_MuzzleSlot_46: asdg_MuzzleSlot {
    class compatibleItems {
        bwa3_muzzle_snds_rotex_ii = 1;
    };
};

// Long scopes with a clip-on night sight need the long Picatinny rail.
class asdg_OpticRail;
class asdg_OpticRail1913: asdg_OpticRail {
    class compatibleItems;
};
class asdg_OpticRail1913_long: asdg_OpticRail1913 {
    class compatibleItems: compatibleItems {
        BWA3_optic_PMII_DMR_MicroT1_front_NSV = 1;
        BWA3_optic_PMII_DMR_MicroT1_front_NSV_pip = 1;
        BWA3_optic_PMII_DMR_MicroT1_rear_NSV = 1;
        BWA3_optic_PMII_DMR_MicroT1_rear_NSV_pip = 1;
        BWA3_optic_PMII_DMR_NSV = 1;
        BWA3_optic_PMII_DMR_NSV_pip = 1;
        BWA3_optic_Hensoldt_NSV = 1;
        BWA3_optic_M5Xi_MSR_MicroT2_NSV = 1;
        BWA3_optic_M5Xi_MSR_MicroT2_NSV_pip = 1;
        BWA3_optic_M5Xi_MSR_NSV = 1;
        BWA3_optic_M5Xi_MSR_NSV_pip = 1;
        BWA3_optic_M5Xi_Tremor3_MicroT2_NSV = 1;
        BWA3_optic_M5Xi_Tremor3_MicroT2_NSV_pip = 1;
        BWA3_optic_M5Xi_Tremor3_NSV = 1;
        BWA3_optic_M5Xi_Tremor3_NSV_pip = 1;
    };
};
