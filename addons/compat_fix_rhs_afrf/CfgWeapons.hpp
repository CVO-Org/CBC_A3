// Based on Weapons-Balance-RHS by johnb432 (https://github.com/johnb432/Weapons-Balance-RHS), MIT License,
// Copyright (c) 2021 johnb432. Config fixes only.
class CfgWeapons {
    class rhs_weap_ak74m;
    class rhs_weap_aks74;

    class rhs_weap_ak74: rhs_weap_ak74m {
        rhs_fold = "";
    };
    class rhs_weap_akm: rhs_weap_ak74m {
        rhs_fold = "";
    };
    class rhs_weap_svd: rhs_weap_ak74m {
        rhs_fold = "";
    };
    class rhs_weap_aks74n_folded: rhs_weap_aks74 {
        rhs_npz = "rhs_weap_aks74n_npz";
    };
    class rhs_weap_aks74n_2_folded: rhs_weap_aks74n_folded {
        rhs_npz = "rhs_weap_aks74n_2_npz";
    };
};
