class CfgWeapons {
    class Rifle_Base_F;
    class Rifle_Short_Base_F: Rifle_Base_F {};

    class JCA_smg_MP7_base_F: Rifle_Short_Base_F {
        magazineWell[] += {
            "CBA_46x30_MP7"
        };
    };
};
