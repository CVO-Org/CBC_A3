class CfgWeapons {
    class Rifle_Base_F;
    class Rifle_Long_Base_F: Rifle_Base_F {};

    class JCA_srifle_M107_base_F: Rifle_Long_Base_F {
        magazineWell[] += {
            "CBA_50BMG_M107"
        };
    };
};
