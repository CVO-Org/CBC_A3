// Based on Weapons-Balance-Unsung by johnb432 (https://github.com/johnb432/Weapons-Balance-Unsung), MIT License,
// Copyright (c) 2021 johnb432. Magazine lists only.
class CfgWeapons {
    class Uns_Rifle762;
    class Uns_Rifle;
    class uns_mosin_base;
    class uns_Rifle_boltaction_clip_base;
    class uns_model70_base;
    class Uns_HMG;
    class Uns_LMG;
    class Uns_Shotgun;
    class uns_ithaca37;
    class Uns_SMG;

    class uns_ak47_base: Uns_Rifle762 {
        magazineWell[] += {"AK_762x39", "CBA_762x39_AK", "CBA_762x39_RPK"};
    };
    class uns_m16: Uns_Rifle {
        magazineWell[] += {"UNS_556x45_STANAG"};
    };
    class uns_mosin: uns_mosin_base {
        magazineWell[] += {"CBA_762x54R_Mosin"};
    };
    class uns_kar98k: uns_mosin_base {
        magazineWell[] += {"CBA_792x57_K98"};
    };
    class uns_m1903: uns_Rifle_boltaction_clip_base {
        magazineWell[] += {"CBA_3006_Spring"};
    };
    class uns_smle_base: uns_Rifle_boltaction_clip_base {
        magazineWell[] += {"CBA_303B_LeeEn"};
    };
    class uns_type99: uns_Rifle_boltaction_clip_base {
        magazineWell[] += {"CBA_77x58_Arisaka"};
    };
    class uns_mas36: uns_Rifle_boltaction_clip_base {
        magazineWell[] += {"CBA_75x54mmFrench_MAS36"};
    };
    class uns_model70_iron: uns_model70_base {
        magazineWell[] += {"CBA_3006_Model70"};
    };
    class uns_fal_base: Uns_Rifle762 {
        magazineWell[] += {"CBA_762x51_FAL", "CBA_762x51_FAL_L"};
    };
    class uns_m1carbine: Uns_Rifle762 {
        magazineWell[] += {"CBA_30Carbine_M1Carbine"};
    };
    class uns_m1garand: Uns_Rifle762 {
        magazineWell[] += {"CBA_3006_Garand"};
    };
    class uns_rpk_base: Uns_HMG {
        magazineWell[] += {"AK_762x39", "CBA_762x39_AK", "CBA_762x39_RPK"};
    };
    class uns_rpd_base: Uns_HMG {
        magazineWell[] += {"CBA_762x39_RPD"};
    };
    class uns_PK_base: Uns_HMG {
        magazineWell[] += {"CBA_762x54R_LINKS"};
    };
    class uns_DP28_base: Uns_HMG {
        magazineWell[] += {"CBA_762x54R_DPM"};
    };
    class uns_MG42_base: Uns_HMG {
        magazineWell[] += {"CBA_792x57_LINKS"};
    };
    class uns_m60_base: Uns_HMG {
        magazineWell[] += {"CBA_762x51_LINKS", "M240_762x51"};
    };
    class uns_m1919a6: Uns_HMG {
        magazineWell[] += {"CBA_3006_Belt"};
    };
    class uns_bar_base: Uns_LMG {
        magazineWell[] += {"CBA_3006_BAR"};
    };
    class uns_sks: Uns_Rifle762 {
        magazineWell[] += {"CBA_762x39_SKS", "CBA_762x39_SKS_Clip"};
    };
    class uns_STG_44: Uns_Rifle762 {
        magazineWell[] += {"CBA_792x33_StG"};
    };
    class uns_mas4956_muzzle: Uns_Rifle762 {
        magazineWell[] += {"CBA_75x54mmFrench_MAS49"};
    };
    class uns_svd_base: Uns_Rifle762 {
        magazineWell[] += {"CBA_762x54R_SVD"};
    };
    class uns_svt: Uns_Rifle762 {
        magazineWell[] += {"CBA_762x54R_SVT", "CBA_762x54R_Mosin"};
    };
    class uns_M14_base: Uns_Rifle762 {
        magazineWell[] += {"CBA_762x51_M14", "CBA_762x51_M14_L"};
    };
    class uns_t233: Uns_Rifle {
        magazineWell[] += {"CBA_556x45_HK33"};
    };
    class uns_m870: Uns_Shotgun {
        magazineWell[] += {"CBA_12g_1rnd", "CBA_12g_2rnds", "CBA_12g_3rnds", "CBA_12g_4rnds", "CBA_12g_5rnds", "CBA_12g_6rnds", "CBA_12g_7rnds", "CBA_12g_8rnds"};
    };
    class uns_model12: uns_ithaca37 {
        magazineWell[] += {"CBA_12g_5rnds", "CBA_12g_6rnds"};
    };
    class uns_sten: Uns_SMG {
        magazineWell[] += {"CBA_9x19_STEN"};
    };
    class uns_m3a1: Uns_SMG {
        magazineWell[] += {"CBA_45ACP_Grease"};
    };
    class uns_m45: Uns_SMG {
        magazineWell[] += {"CBA_9x19_M45CarlG"};
    };
    class uns_m50: Uns_SMG {
        magazineWell[] += {"CBA_9x19_M50Madsen"};
    };
    class uns_mac10: Uns_SMG {
        magazineWell[] += {"CBA_9x19_MAC10"};
    };
    class uns_mat49: Uns_SMG {
        magazineWell[] += {"CBA_762x25_MAT49"};
    };
    class uns_pm63f: Uns_SMG {
        magazineWell[] += {"CBA_9x18_PM63"};
    };
    class uns_mp40: Uns_SMG {
        magazineWell[] += {"CBA_9x19_MP40"};
    };
    class uns_thompson: Uns_SMG {
        magazineWell[] += {"CBA_45ACP_Thompson_Stick"};
    };
    class uns_type100: Uns_SMG {
        magazineWell[] += {"CBA_8x22_Type100"};
    };
    class uns_uzif: Uns_SMG {
        magazineWell[] += {"CBA_9x19_UZI"};
    };
};
