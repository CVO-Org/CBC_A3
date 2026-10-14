class CfgWeapons {
    class Rifle_Base_F;
    class Rifle_Long_Base_F: Rifle_Base_F {};

    class JCA_srifle_AWM_base_F: Rifle_Long_Base_F {
        magazineWell[] += {
            "CBA_338LM_AI"
        };
    };
};
