// Based on Weapons-Balance-CSLA by johnb432 (https://github.com/johnb432/Weapons-Balance-CSLA), MIT License,
// Copyright (c) 2021 johnb432. Attachment lists only.
class asdg_OpticRail;
class asdg_OpticSideMount: asdg_OpticRail {
    class compatibleItems;
};
class asdg_OpticSideRail_AK: asdg_OpticSideMount {
    class compatibleItems: compatibleItems {
        CSLA_NSPU = 1;
        CSLA_ZD4x8 = 1;
    };
};
class asdg_OpticSideRail_AKSVD: asdg_OpticSideMount {
    class compatibleItems: compatibleItems {
        CSLA_NSPU = 1;
        CSLA_ZD4x8 = 1;
    };
};
