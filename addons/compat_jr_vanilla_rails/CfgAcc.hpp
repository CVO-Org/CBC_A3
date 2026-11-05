// Based on Weapons-Balance-Vanilla by johnb432 (https://github.com/johnb432/Weapons-Balance-Vanilla), MIT License,
// Copyright (c) 2021 johnb432. Attachment lists only.
// Pistol mini red dots on rifle Picatinny rails (with a mount, like a real RMR).
class CowsSlot;
class CowsSlot_Rail: CowsSlot {
    class compatibleItems {
        optic_mrd = 1;
        optic_mrd_black = 1;
        optic_yorris = 1;
    };
};

class asdg_SlotInfo;
class asdg_OpticRail: asdg_SlotInfo {
    class compatibleItems;
};
class asdg_OpticRail1913: asdg_OpticRail {
    class compatibleItems: compatibleItems {
        optic_mrd = 1;
        optic_mrd_black = 1;
    };
};
