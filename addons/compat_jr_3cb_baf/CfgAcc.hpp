// Based on Weapons-Balance-3CBBAF by johnb432 (https://github.com/johnb432/Weapons-Balance-3CBBAF), MIT License,
// Copyright (c) 2021 johnb432. Attachment lists only.
// Picatinny lights / lasers and optics on the shared vanilla rails.
class PointerSlot;
class PointerSlot_Rail: PointerSlot {
    class compatibleItems {
        uk3cb_baf_llm_flashlight_black = 1;
        uk3cb_baf_llm_flashlight_tan = 1;
        uk3cb_baf_llm_ir_black = 1;
        uk3cb_baf_llm_ir_tan = 1;
    };
};

class CowsSlot;
class CowsSlot_Rail: CowsSlot {
    class compatibleItems {
        RKSL_optic_EOT552 = 1;
        RKSL_optic_EOT552_C = 1;
        RKSL_optic_EOT552X = 1;
        RKSL_optic_EOT552X_C = 1;
        RKSL_optic_LDS = 1;
        RKSL_optic_LDS_C = 1;
        RKSL_optic_LDS_C_PiP = 1;
        RKSL_optic_LDS_PiP = 1;
        RKSL_optic_PMII_312 = 1;
        RKSL_optic_PMII_312_des = 1;
        RKSL_optic_PMII_312_des_PiP = 1;
        RKSL_optic_PMII_312_PiP = 1;
        RKSL_optic_PMII_312_sunshade = 1;
        RKSL_optic_PMII_312_sunshade_des = 1;
        RKSL_optic_PMII_312_sunshade_des_PiP = 1;
        RKSL_optic_PMII_312_sunshade_PiP = 1;
        RKSL_optic_PMII_312_sunshade_wdl = 1;
        RKSL_optic_PMII_312_sunshade_wdl_PiP = 1;
        RKSL_optic_PMII_312_wdl = 1;
        RKSL_optic_PMII_312_wdl_PiP = 1;
        RKSL_optic_PMII_525 = 1;
        RKSL_optic_PMII_525_des = 1;
        RKSL_optic_PMII_525_des_PiP = 1;
        RKSL_optic_PMII_525_PiP = 1;
        RKSL_optic_PMII_525_wdl = 1;
        RKSL_optic_PMII_525_wdl_PiP = 1;
        RKSL_optic_RMR_MS19 = 1;
        RKSL_optic_RMR_MS19_FDE = 1;
        RKSL_optic_RMR_RM33 = 1;
        RKSL_optic_RMR_RM33_FDE = 1;
        UK3CB_BAF_Eotech = 1;
        UK3CB_BAF_Kite = 1;
        UK3CB_BAF_MaxiKite = 1;
        UK3CB_BAF_SB31250 = 1;
        UK3CB_BAF_SB31250_Desert = 1;
        UK3CB_BAF_SB31250_Desert_Ghillie = 1;
        UK3CB_BAF_SB31250_ghillie = 1;
        UK3CB_BAF_SpecterLDS = 1;
        UK3CB_BAF_SpecterLDS_3D = 1;
        UK3CB_BAF_SpecterLDS_Dot = 1;
        UK3CB_BAF_SpecterLDS_Dot_3D = 1;
        UK3CB_BAF_TA31F = 1;
        UK3CB_BAF_TA31F_3D = 1;
        UK3CB_BAF_TA31F_hornbill = 1;
        UK3CB_BAF_TA31F_hornbill_3D = 1;
        UK3CB_BAF_TA648 = 1;
        UK3CB_BAF_TA648_308 = 1;
    };
};

// The SUIT sits on the L1A1's own optic mount.
class asdg_OpticRail;
class asdg_OpticRailL1A1: asdg_OpticRail {
    class compatibleItems {
        uk3cb_baf_suit = 1;
    };
};

// SureFire flash hider, 1/2x28 like any 5.56 NATO muzzle.
class asdg_MuzzleSlot;
class asdg_MuzzleSlot_556: asdg_MuzzleSlot {
    class compatibleItems {
        uk3cb_baf_sffh = 1;
    };
};

class MuzzleSlot;
class MuzzleSlot_556: MuzzleSlot {
    class compatibleItems {
        uk3cb_baf_sffh = 1;
    };
};
