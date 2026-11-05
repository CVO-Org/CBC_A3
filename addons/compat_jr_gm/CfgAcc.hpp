// Based on Weapons-Balance-GM by johnb432 (https://github.com/johnb432/Weapons-Balance-GM), MIT License,
// Copyright (c) 2021 johnb432. Attachment lists only.
class asdg_OpticRail;
class asdg_OpticSideMount: asdg_OpticRail {
    class compatibleItems;
};
class asdg_OpticSideRail_AK: asdg_OpticSideMount {
    class compatibleItems: compatibleItems {
        gm_nspu_dovetail_blk = 1;
        gm_nspu_dovetail_gry = 1;
        gm_pka_dovetail_blk = 1;
        gm_pka_dovetail_gry = 1;
        gm_zfk4x25_blk = 1;
        gm_zln1k_grn_dovetail_blk = 1;
        gm_zln1k_grn_dovetail_gry = 1;
    };
};
class asdg_OpticSideRail_AKSVD: asdg_OpticSideMount {
    class compatibleItems: compatibleItems {
        gm_nspu_dovetail_blk = 1;
        gm_nspu_dovetail_gry = 1;
        gm_pka_dovetail_blk = 1;
        gm_pka_dovetail_gry = 1;
        gm_zfk4x25_blk = 1;
        gm_zln1k_grn_dovetail_blk = 1;
        gm_zln1k_grn_dovetail_gry = 1;
    };
};
class asdg_OpticSideRail_SVD: asdg_OpticSideMount {
    class compatibleItems: compatibleItems {
        gm_zfk4x25_blk = 1;
        gm_pso1_gry = 1;
    };
};

class asdg_OpticRail1913: asdg_OpticRail {
    class compatibleItems {
        gm_blits_ris_blk = 1;
        gm_c79a1_blk = 1;
        gm_c79a1_oli = 1;
        gm_feroz24_ris_blk = 1;
        gm_feroz51_ris_oli = 1;
        gm_ls1500_ir_ris_blk = 1;
        gm_ls1500_red_ris_blk = 1;
        gm_ls45_ir_ris_blk = 1;
        gm_ls45_red_ris_blk = 1;
        gm_lsminiv_ir_ris_blk = 1;
        gm_lsminiv_red_ris_blk = 1;
        gm_maglite_3d_ris_blk = 1;
        gm_rv_ris_blk = 1;
        gm_streamlight_sl20_ris_blk = 1;
        gm_streamlight_sl20_ris_brn = 1;
        gm_zf10x42_ris_blk = 1;
        gm_zf10x42_ris_oli = 1;
    };
};

class asdg_MuzzleSlot;
class asdg_MuzzleSlot_545R: asdg_MuzzleSlot {
    class compatibleItems {
        gm_suppressor_pbs4_545mm_blk = 1;
    };
};
class asdg_MuzzleSlot_556: asdg_MuzzleSlot {
    class compatibleItems {
        gm_suppressor_atec150_556mm_blk = 1;
        gm_suppressor_atec150_556mm_long_blk = 1;
    };
};
class asdg_MuzzleSlot_762R: asdg_MuzzleSlot {
    class compatibleItems {
        gm_suppressor_pbs1_762mm_blk = 1;
    };
};
class asdg_MuzzleSlot_762R_SVD: asdg_MuzzleSlot {
    class compatibleItems {
        gm_bayonet_6x3_wud = 1;
        gm_bayonet_6x3_blk = 1;
        gm_suppressor_tgpv_762mm_blk = 1;
    };
};

class MuzzleSlot;
class MuzzleSlot_545R: MuzzleSlot {
    class compatibleItems {
        gm_suppressor_pbs4_545mm_blk = 1;
    };
};
class MuzzleSlot_762: MuzzleSlot {
    class compatibleItems {
        gm_suppressor_atec150_762mm_long_blk = 1;
    };
};
class MuzzleSlot_762R: MuzzleSlot {
    class compatibleItems {
        gm_suppressor_pbs1_762mm_blk = 1;
    };
};
