// HLC (NIArms) muzzle devices and optics on the CBA Joint Rails slots.
// Based on Weapons Balance - NIArms by johnb432 (MIT), attachment lists only.
// Only items that physically fit the slot's calibre are listed: no 5.56 suppressors on 7.62 slots, no 10mm
// suppressors on .45, and no machine gun or 300 BLK specific muzzle devices on rifles.

class asdg_MuzzleSlot_556;
class UK3CB_MuzzleSlot_556_HK33: asdg_MuzzleSlot_556 {
    class compatibleItems {
        hlc_muzzle_556nato_m42000 = 1;
        hlc_muzzle_556NATO_rotexiiic_grey = 1;
        hlc_muzzle_556NATO_rotexiiic_tan = 1;
        hlc_muzzle_556NATO_KAC = 1;
        hlc_muzzle_KX3_comp = 1;
        hlc_muzzle_OEMDevice_556 = 1;
        hlc_muzzle_SF3P_556 = 1;
        hlc_muzzle_Gunfighter_comp = 1;
        hlc_muzzle_snds_ROTEX3P = 1;
    };
};

class asdg_MuzzleSlot_762;
class UK3CB_MuzzleSlot_762_G3: asdg_MuzzleSlot_762 {
    class compatibleItems {
        hlc_muzzle_AAC_762SDN6 = 1;
        hlc_muzzle_Miter18T = 1;
        hlc_muzzle_Brevis = 1;
        hlc_muzzle_17SBrake = 1;
        hlc_muzzle_OEMDevice = 1;
        hlc_muzzle_FSC30 = 1;
        hlc_muzzle_Cherrybomb = 1;
        hlc_muzzle_ThunderChicken = 1;
        hlc_muzzle_SF3P_762R = 1;
        hlc_muzzle_Gunfighter_comp = 1;
    };
};
class UK3CB_MuzzleSlot_762_M14: asdg_MuzzleSlot_762 {
    class compatibleItems {
        hlc_muzzle_AAC_762SDN6 = 1;
        hlc_muzzle_Miter18T = 1;
        hlc_muzzle_Brevis = 1;
        hlc_muzzle_17SBrake = 1;
        hlc_muzzle_OEMDevice = 1;
        hlc_muzzle_FSC30 = 1;
        hlc_muzzle_Cherrybomb = 1;
        hlc_muzzle_ThunderChicken = 1;
        hlc_muzzle_SF3P_762R = 1;
        hlc_muzzle_Gunfighter_comp = 1;
    };
};

class asdg_MuzzleSlot;
class asdg_MuzzleSlot_900_3CB: asdg_MuzzleSlot {
    class compatibleItems {
        hlc_muzzle_agendasix = 1;
    };
};
class asdg_MuzzleSlot_9MM_SMG: asdg_MuzzleSlot {
    class compatibleItems {
        hlc_muzzle_agendasix = 1;
    };
};

class asdg_OpticRail1913;
class UK3CB_OpticRail1913_G3: asdg_OpticRail1913 {
    class compatibleItems {
        hlc_optic_PVS4G3 = 1;
        hlc_optic_STANAGZF_G3 = 1;
        hlc_optic_STANAGZF2D_G3 = 1;
        hlc_optic_ZF95_g3 = 1;
        hlc_optic_LeupoldM3A_G3 = 1;
        hlc_optic_accupoint_g3 = 1;
        HLC_Optic_ZFSG1 = 1;
    };
};
class UK3CB_OpticRail1913_M14: asdg_OpticRail1913 {
    class compatibleItems {
        hlc_optic_PVS4M14 = 1;
        hlc_optic_LRT_m14 = 1;
        hlc_optic_artel_m14 = 1;
    };
};
