// Based on Weapons-Balance-GM by johnb432 (https://github.com/johnb432/Weapons-Balance-GM), MIT License,
// Copyright (c) 2021 johnb432. Attachment lists only.
class asdg_OpticSideMount;
class asdg_OpticSideRail_SVD: asdg_OpticSideMount {
    class compatibleItems;
};
class rhs_russian_svd_scopes_slot: asdg_OpticSideRail_SVD {
    class compatibleItems: compatibleItems {
        gm_zfk4x25_blk = 1;
        gm_pso1_gry = 1;
    };
};
