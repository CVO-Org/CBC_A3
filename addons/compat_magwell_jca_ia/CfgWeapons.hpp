class CfgWeapons {
    class Rifle_Base_F;
    class Rifle_Long_Base_F: Rifle_Base_F {};
    class Rifle_Short_Base_F: Rifle_Base_F {};
    class Pistol_Base_F;

    // 5.56x45
    class JCA_arifle_M4A1_base_F: Rifle_Base_F {
        magazineWell[] += {
            "Stanag_556x45_Big",
            "CBA_556x45_STANAG",
            "CBA_556x45_STANAG_L",
            "CBA_556x45_STANAG_XL",
            "CBA_556x45_STANAG_2D",
            "CBA_556x45_STANAG_2D_XL"
        };
    };
    // In Infantry Arsenal the M4A4 AFG inherits magazineWell[] from the M4A4, so it needs no own entry.
    class JCA_arifle_M4A4_base_F: Rifle_Base_F {
        magazineWell[] += {
            "Stanag_556x45_Big",
            "CBA_556x45_STANAG",
            "CBA_556x45_STANAG_L",
            "CBA_556x45_STANAG_XL",
            "CBA_556x45_STANAG_2D",
            "CBA_556x45_STANAG_2D_XL"
        };
    };
    class JCA_arifle_M16A4_base_F: Rifle_Base_F {
        magazineWell[] += {
            "Stanag_556x45_Big",
            "CBA_556x45_STANAG",
            "CBA_556x45_STANAG_L",
            "CBA_556x45_STANAG_XL",
            "CBA_556x45_STANAG_2D",
            "CBA_556x45_STANAG_2D_XL"
        };
    };
    class JCA_arifle_HK433_base_F: Rifle_Base_F {
        magazineWell[] += {
            "Stanag_556x45_Big",
            "CBA_556x45_STANAG",
            "CBA_556x45_STANAG_L",
            "CBA_556x45_STANAG_XL",
            "CBA_556x45_STANAG_2D",
            "CBA_556x45_STANAG_2D_XL"
        };
    };
    class JCA_arifle_SCAR_L_base_F: Rifle_Base_F {
        magazineWell[] += {
            "Stanag_556x45_Big",
            "CBA_556x45_STANAG",
            "CBA_556x45_STANAG_L",
            "CBA_556x45_STANAG_XL",
            "CBA_556x45_STANAG_2D",
            "CBA_556x45_STANAG_2D_XL"
        };
    };

    // 7.62x51 (CBA_762x51_SR25 is deprecated in CBA in favour of CBA_762x51_AR10)
    class JCA_arifle_SR10_base_F: Rifle_Base_F {
        magazineWell[] += {"CBA_762x51_AR10"};
    };
    class JCA_arifle_SR25_base_F: Rifle_Base_F {
        magazineWell[] += {"CBA_762x51_AR10"};
    };
    class JCA_arifle_SCAR_H_base_F: Rifle_Base_F {
        magazineWell[] += {
            "CBA_762x51_SCAR"
        };
    };

    // .300 BLK - never accepts 5.56x45 STANAG magazines
    class JCA_arifle_HK437_base_F: Rifle_Base_F {
        magazineWell[] += {
            "CBA_300BLK_STANAG",
            "CBA_300BLK_STANAG_L",
            "CBA_300BLK_STANAG_XL",
            "CBA_300BLK_STANAG_2D",
            "CBA_300BLK_STANAG_2D_XL"
        };
    };

    // Pistols
    class JCA_hgun_G17_base_F: Pistol_Base_F {
        magazineWell[] += {
            "CBA_9x19_Glock_Full"
        };
    };
    class JCA_hgun_M9A1_base_F: Pistol_Base_F {
        magazineWell[] += {
            "CBA_9x19_M9"
        };
    };
    class JCA_hgun_P226_base_F: Pistol_Base_F {
        magazineWell[] += {
            "CBA_9x19_P226"
        };
    };

    // SMGs
    class JCA_smg_MP5_base_F: Rifle_Short_Base_F {
        magazineWell[] += {
            "CBA_9x19_MP5"
        };
    };
    class JCA_smg_UMP_base_F: Rifle_Short_Base_F {
        magazineWell[] += {
            "CBA_45ACP_UMP"
        };
    };
    class JCA_smg_MP7_base_F: Rifle_Short_Base_F {
        magazineWell[] += {
            "CBA_46x30_MP7"
        };
    };

    // Long range rifles
    class JCA_srifle_AWM_base_F: Rifle_Long_Base_F {
        magazineWell[] += {
            "CBA_338LM_AI"
        };
    };
    class JCA_srifle_M107_base_F: Rifle_Long_Base_F {
        magazineWell[] += {
            "CBA_50BMG_M107"
        };
    };
};
