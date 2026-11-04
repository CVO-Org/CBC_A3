// MCR56 swaps the weapon class to match the loaded magazine (stick mag, 100-round pouch, 200-round box) through
// MCR56_fnc_magSwitch, which looks the magazine up in mcr56_magSwitch and falls back to its "default" entry.
// Every belt is listed explicitly (including the weapon's own) so "default" only catches stick magazines.
// The CSAT 5.8mm variants are left alone: they define their own empty magazineWell[] and mcr56_magSwitch.

#define BELTS_100(TARGET) \
    100Rnd_556x45_Stanag_camo_blk_F = QUOTE(TARGET); \
    100Rnd_556x45_Stanag_reload_camo_blk_F = QUOTE(TARGET); \
    100Rnd_556x45_Stanag_camo_olive_F = QUOTE(TARGET); \
    100Rnd_556x45_Stanag_reload_camo_olive_F = QUOTE(TARGET); \
    100Rnd_556x45_Stanag_camo_sand_F = QUOTE(TARGET); \
    100Rnd_556x45_Stanag_reload_camo_sand_F = QUOTE(TARGET); \
    100Rnd_556x45_Stanag_aaf_F = QUOTE(TARGET); \
    100Rnd_556x45_Stanag_reload_aaf_F = QUOTE(TARGET); \
    rhsusf_100Rnd_556x45_soft_pouch = QUOTE(TARGET); \
    rhsusf_100Rnd_556x45_mixed_soft_pouch = QUOTE(TARGET); \
    rhsusf_100Rnd_556x45_soft_pouch_ucp = QUOTE(TARGET); \
    rhsusf_100Rnd_556x45_mixed_soft_pouch_ucp = QUOTE(TARGET); \
    rhsusf_100Rnd_556x45_soft_pouch_coyote = QUOTE(TARGET); \
    rhsusf_100Rnd_556x45_mixed_soft_pouch_coyote = QUOTE(TARGET); \
    rhsusf_100Rnd_556x45_M855_soft_pouch = QUOTE(TARGET); \
    rhsusf_100Rnd_556x45_M855_mixed_soft_pouch = QUOTE(TARGET); \
    rhsusf_100Rnd_556x45_M855_soft_pouch_ucp = QUOTE(TARGET); \
    rhsusf_100Rnd_556x45_M855_mixed_soft_pouch_ucp = QUOTE(TARGET); \
    rhsusf_100Rnd_556x45_M855_soft_pouch_coyote = QUOTE(TARGET); \
    rhsusf_100Rnd_556x45_M855_mixed_soft_pouch_coyote = QUOTE(TARGET); \
    rhsusf_100Rnd_556x45_M995_soft_pouch = QUOTE(TARGET); \
    rhsusf_100Rnd_556x45_M995_soft_pouch_ucp = QUOTE(TARGET); \
    rhsusf_100Rnd_556x45_M995_soft_pouch_coyote = QUOTE(TARGET); \
    rhsusf_100Rnd_556x45_M200_soft_pouch = QUOTE(TARGET); \
    rhsusf_100Rnd_556x45_M200_soft_pouch_ucp = QUOTE(TARGET); \
    rhsusf_100Rnd_556x45_M200_soft_pouch_coyote = QUOTE(TARGET); \
    CUP_100Rnd_TE4_Green_Tracer_556x45_M249 = QUOTE(TARGET); \
    CUP_100Rnd_TE4_Red_Tracer_556x45_M249 = QUOTE(TARGET); \
    CUP_100Rnd_TE4_Yellow_Tracer_556x45_M249 = QUOTE(TARGET)

#define BELTS_200(TARGET) \
    200Rnd_556x45_Box_F = QUOTE(TARGET); \
    200Rnd_556x45_Box_Red_F = QUOTE(TARGET); \
    200Rnd_556x45_Box_Tracer_F = QUOTE(TARGET); \
    200Rnd_556x45_Box_Tracer_Red_F = QUOTE(TARGET); \
    rhsusf_200Rnd_556x45_box = QUOTE(TARGET); \
    rhsusf_200rnd_556x45_mixed_box = QUOTE(TARGET); \
    rhsusf_200rnd_556x45_M855_box = QUOTE(TARGET); \
    rhsusf_200rnd_556x45_M855_mixed_box = QUOTE(TARGET); \
    rhsusf_200Rnd_556x45_soft_pouch = QUOTE(TARGET); \
    rhsusf_200Rnd_556x45_mixed_soft_pouch = QUOTE(TARGET); \
    rhsusf_200Rnd_556x45_soft_pouch_ucp = QUOTE(TARGET); \
    rhsusf_200Rnd_556x45_mixed_soft_pouch_ucp = QUOTE(TARGET); \
    rhsusf_200Rnd_556x45_soft_pouch_coyote = QUOTE(TARGET); \
    rhsusf_200Rnd_556x45_mixed_soft_pouch_coyote = QUOTE(TARGET); \
    rhsusf_200Rnd_556x45_M855_soft_pouch = QUOTE(TARGET); \
    rhsusf_200Rnd_556x45_M855_mixed_soft_pouch = QUOTE(TARGET); \
    rhsusf_200Rnd_556x45_M855_soft_pouch_ucp = QUOTE(TARGET); \
    rhsusf_200Rnd_556x45_M855_mixed_soft_pouch_ucp = QUOTE(TARGET); \
    rhsusf_200Rnd_556x45_M855_soft_pouch_coyote = QUOTE(TARGET); \
    rhsusf_200Rnd_556x45_M855_mixed_soft_pouch_coyote = QUOTE(TARGET); \
    CUP_200Rnd_TE4_Red_Tracer_556x45_M249 = QUOTE(TARGET); \
    CUP_200Rnd_TE4_Yellow_Tracer_556x45_M249 = QUOTE(TARGET); \
    CUP_200Rnd_TE4_Green_Tracer_556x45_M249 = QUOTE(TARGET); \
    CUP_200Rnd_TE1_Red_Tracer_556x45_M249 = QUOTE(TARGET); \
    CUP_200Rnd_TE4_Green_Tracer_556x45_M249_Pouch = QUOTE(TARGET); \
    CUP_200Rnd_TE4_Red_Tracer_556x45_M249_Pouch = QUOTE(TARGET); \
    CUP_200Rnd_TE4_Yellow_Tracer_556x45_M249_Pouch = QUOTE(TARGET); \
    CUP_200Rnd_TE1_Red_Tracer_556x45_M249_Pouch = QUOTE(TARGET); \
    CUP_200Rnd_TE4_Green_Tracer_556x45_L110A1 = QUOTE(TARGET); \
    CUP_200Rnd_TE4_Red_Tracer_556x45_L110A1 = QUOTE(TARGET); \
    CUP_200Rnd_TE4_Yellow_Tracer_556x45_L110A1 = QUOTE(TARGET)

#define MAGSWITCH(STICK,BELT100,BELT200) \
    class mcr56_magSwitch { \
        default = QUOTE(STICK); \
        BELTS_100(BELT100); \
        BELTS_200(BELT200); \
    }

// Long barrel: 200-round box (_F), 100-round pouch (_2_F), stick mag (stick_)
#define LONG(COLOUR) MAGSWITCH(LMG_MCR56_stick_##COLOUR##_F,LMG_MCR56_##COLOUR##_2_F,LMG_MCR56_##COLOUR##_F)
// Commando: 100-round pouch (pouch_), 200-round box (pouch_..._2_F), stick mag (stick_2_)
#define COMMANDO(COLOUR) MAGSWITCH(LMG_MCR56_stick_2_##COLOUR##_F,LMG_MCR56_pouch_##COLOUR##_F,LMG_MCR56_pouch_##COLOUR##_2_F)

class CfgWeapons {
    class LMG_03_base_F;

    // Long barrel
    // The base mod overwrites magazineWell[] with "=", dropping the CBA_556x45_MINIMI that CBA adds to LMG_03_base_F
    class LMG_MCR56_blk_F: LMG_03_base_F {
        magazineWell[] += {"CBA_556x45_MINIMI"};
        LONG(blk);
    };
    class LMG_MCR56_olive_F: LMG_MCR56_blk_F {
        LONG(olive);
    };
    class LMG_MCR56_sand_F: LMG_MCR56_blk_F {
        LONG(sand);
    };
    class LMG_MCR56_aaf_F: LMG_MCR56_blk_F {
        LONG(aaf);
    };
    class LMG_MCR56_blk_2_F: LMG_MCR56_blk_F {
        LONG(blk);
    };
    class LMG_MCR56_olive_2_F: LMG_MCR56_blk_F {
        LONG(olive);
    };
    class LMG_MCR56_sand_2_F: LMG_MCR56_blk_F {
        LONG(sand);
    };
    class LMG_MCR56_aaf_2_F: LMG_MCR56_blk_F {
        LONG(aaf);
    };
    class LMG_MCR56_stick_blk_F: LMG_MCR56_blk_F {
        magazineWell[] += {"CBA_556x45_MINIMI"};
        LONG(blk);
    };
    class LMG_MCR56_stick_olive_F: LMG_MCR56_stick_blk_F {
        LONG(olive);
    };
    class LMG_MCR56_stick_sand_F: LMG_MCR56_stick_blk_F {
        LONG(sand);
    };
    class LMG_MCR56_stick_aaf_F: LMG_MCR56_stick_blk_F {
        LONG(aaf);
    };

    // Commando
    class LMG_MCR56_pouch_blk_F: LMG_MCR56_blk_F {
        COMMANDO(blk);
    };
    class LMG_MCR56_pouch_olive_F: LMG_MCR56_pouch_blk_F {
        COMMANDO(olive);
    };
    class LMG_MCR56_pouch_sand_F: LMG_MCR56_pouch_blk_F {
        COMMANDO(sand);
    };
    class LMG_MCR56_pouch_aaf_F: LMG_MCR56_pouch_blk_F {
        COMMANDO(aaf);
    };
    class LMG_MCR56_pouch_blk_2_F: LMG_MCR56_pouch_blk_F {
        COMMANDO(blk);
    };
    class LMG_MCR56_pouch_olive_2_F: LMG_MCR56_pouch_blk_F {
        COMMANDO(olive);
    };
    class LMG_MCR56_pouch_sand_2_F: LMG_MCR56_pouch_blk_F {
        COMMANDO(sand);
    };
    class LMG_MCR56_pouch_aaf_2_F: LMG_MCR56_pouch_blk_F {
        COMMANDO(aaf);
    };
    class LMG_MCR56_stick_2_blk_F: LMG_MCR56_blk_F {
        magazineWell[] += {"CBA_556x45_MINIMI"};
        COMMANDO(blk);
    };
    class LMG_MCR56_stick_2_olive_F: LMG_MCR56_stick_blk_F {
        COMMANDO(olive);
    };
    class LMG_MCR56_stick_2_sand_F: LMG_MCR56_stick_blk_F {
        COMMANDO(sand);
    };
    class LMG_MCR56_stick_2_aaf_F: LMG_MCR56_stick_blk_F {
        COMMANDO(aaf);
    };
};
