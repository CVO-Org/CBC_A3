// Based on Weapons-Balance-Unsung by johnb432 (https://github.com/johnb432/Weapons-Balance-Unsung), MIT License,
// Copyright (c) 2021 johnb432. Display names only.
class CfgWeapons {
    class uns_launcher_base;
    class uns_aks47;
    class uns_akms;
    class uns_akms_drum;
    class uns_ak47;
    class uns_m16;
    class uns_m16_xm148;
    class uns_M16A1;
    class uns_m16_m203;
    class uns_m63a_base;
    class uns_mosin_base;
    class uns_Rifle_boltaction_clip_base;
    class uns_smle_base;
    class uns_mas36;
    class uns_model70_base;
    class Uns_Rifle762;
    class uns_rpk_base;
    class uns_rpd_base;
    class uns_PK_base;
    class uns_DP28_base;
    class uns_MG42_base;
    class uns_m60_base;
    class Uns_HMG;
    class uns_bar_base;
    class uns_mas4956;
    class uns_M14_base;
    class Uns_Rifle;
    class Uns_Shotgun;
    class uns_PPS43;
    class Uns_SMG;

    class uns_rpg2: uns_launcher_base {
        displayName = "RPG-2";
    };
    class uns_B40: uns_rpg2 {
        displayName = "B40";
    };
    class uns_rpg7: uns_rpg2 {
        displayName = "RPG-7";
    };
    class uns_aks47f: uns_aks47 {
        displayName = "AKS-47 (Folded)";
    };
    class uns_akmsf: uns_akms {
        displayName = "AKMS (Folded)";
    };
    class uns_akmsf_drum: uns_akms_drum {
        displayName = "AKMS (Drum/Folded)";
    };
    class uns_sa58p: uns_ak47 {
        displayName = "Sa vz. 58 P";
    };
    class uns_sa58p_camo: uns_sa58p {
        displayName = "Sa vz. 58 P (Camo)";
    };
    class uns_sa58v: uns_sa58p {
        displayName = "Sa vz. 58 V";
    };
    class uns_sa58vf: uns_sa58v {
        displayName = "Sa vz. 58 V (Folded)";
    };
    class uns_m16_camo: uns_m16 {
        displayName = "M16 (Camo)";
    };
    class uns_m16_xm148_camo: uns_m16_xm148 {
        displayName = "M16 (Camo/XM148)";
    };
    class uns_m16A1_camo: uns_M16A1 {
        displayName = "M16A1 (Camo)";
    };
    class uns_xm177e1: uns_m16 {
        displayName = "XM177E1";
    };
    class uns_xm177e1_dm: uns_xm177e1 {
        displayName = "XM177E1 (Dual Mag)";
    };
    class uns_xm177e1_m203: uns_m16_m203 {
        displayName = "XM177E1 (M203)";
    };
    class uns_xm177e1_xm148: uns_xm177e1_m203 {
        displayName = "XM177E1 (XM148)";
    };
    class uns_xm177e2_m203: uns_xm177e1_m203 {
        displayName = "XM177E2 (M203)";
    };
    class uns_xm177e2_xm148: uns_xm177e2_m203 {
        displayName = "XM177E2 (XM148)";
    };
    class uns_xm177e2: uns_xm177e1 {
        displayName = "XM177E2";
    };
    class uns_xm177e2_grip: uns_xm177e2 {
        displayName = "XM177E2 (Grip)";
    };
    class uns_xm177e2_stock: uns_xm177e2 {
        displayName = "XM177E2 (M16 Stock)";
    };
    class uns_xm177e2_short: uns_xm177e2 {
        displayName = "XM177E2 (Short)";
    };
    class uns_M63a_AR_base: uns_m63a_base {
        displayName = "Stoner 63A Rifle";
    };
    class uns_M63a_drum_base: uns_M63a_AR_base {
        displayName = "Stoner 63A Commando";
    };
    class uns_M63a_LMG: uns_M63a_drum_base {
        displayName = "Stoner 63A LMG";
    };
    class uns_m63asupport: uns_M63a_LMG {
        displayName = "Stoner 63A LMG (Support)";
    };
    class uns_kar98k: uns_mosin_base {
        displayName = "Kar98k";
    };
    class uns_m1903: uns_Rifle_boltaction_clip_base {
        displayName = "M1903A1 Springfield";
    };
    class uns_smle: uns_smle_base {
        displayName = "Lee-Enfield No.1 Mk.III*";
    };
    class uns_smle_sniper: uns_smle_base {
        displayName = "Lee-Enfield No.1 Mk.III* (Sniper)";
    };
    class uns_type99: uns_Rifle_boltaction_clip_base {
        displayName = "Type 99 Arisaka";
    };
    class uns_type99_gl: uns_type99 {
        displayName = "Type 99 Arisaka (Rifle Grenade)";
    };
    class uns_type99_sniper: uns_type99 {
        displayName = "Type 99 Arisaka (Sniper)";
    };
    class uns_mas36_gl: uns_mas36 {
        displayName = "MAS-36 (Rifle Grenade)";
    };
    class uns_mas36short: uns_mas36 {
        displayName = "MAS-36 (Carbine)";
    };
    class uns_mas36short_gl: uns_mas36short {
        displayName = "MAS-36 (Carbine/Rifle Grenade)";
    };
    class uns_model70_iron: uns_model70_base {
        displayName = "Winchester Model 70";
    };
    class uns_M40_base: uns_model70_base {
        displayName = "M40 Remington";
    };
    class uns_m1carbine: Uns_Rifle762 {
        displayName = "M1 Carbine";
    };
    class uns_m2carbine: uns_m1carbine {
        displayName = "M2 Carbine";
    };
    class uns_m2carbine_shorty: uns_m2carbine {
        displayName = "M2 Carbine (Sawn-off)";
    };
    class uns_RPK_40: uns_rpk_base {
        displayName = "RPK";
    };
    class uns_RPK_drum: uns_rpk_base {
        displayName = "RPK (Drum)";
    };
    class uns_rpdsog: uns_rpd_base {
        displayName = "RPD (Sawn-off)";
    };
    class uns_rpd: uns_rpd_base {
        displayName = "RPD";
    };
    class uns_RPDsupport: uns_rpd {
        displayName = "RPD (Support)";
    };
    class uns_PK: uns_PK_base {
        displayName = "PK";
    };
    class uns_PKsupport: uns_PK {
        displayName = "PK (Support)";
    };
    class uns_DP28: uns_DP28_base {
        displayName = "DP-27";
    };
    class uns_MG42: uns_MG42_base {
        displayName = "MG 42";
    };
    class uns_mg42_bakelite: uns_MG42 {
        displayName = "MG 42 (Bakelite)";
    };
    class uns_MG42support: uns_MG42 {
        displayName = "MG 42 (Support)";
    };
    class uns_m60: uns_m60_base {
        displayName = "M60";
    };
    class uns_m60support: uns_m60 {
        displayName = "M60 (Support)";
    };
    class uns_m60grip: uns_m60_base {
        displayName = "M60 (Grip)";
    };
    class uns_m60shorty: uns_m60grip {
        displayName = "M60 (Shorty)";
    };
    class uns_m1919a6: Uns_HMG {
        displayName = "M1919A6";
    };
    class uns_bar: uns_bar_base {
        displayName = "M1918A2 BAR (Bipod)";
    };
    class uns_sks: Uns_Rifle762 {
        displayName = "SKS";
    };
    class uns_STG_44: Uns_Rifle762 {
        displayName = "StG 44";
    };
    class uns_mas4956_gl: uns_mas4956 {
        displayName = "MAS-49/56 (Rifle Grenade)";
    };
    class uns_svd_base: Uns_Rifle762 {
        displayName = "SVD";
    };
    class uns_SVD_CAMO_base: uns_svd_base {
        displayName = "SVD (Camo)";
    };
    class uns_svt: Uns_Rifle762 {
        displayName = "SVT-40";
    };
    class uns_m14: uns_M14_base {
        displayName = "M14";
    };
    class uns_m79: Uns_Rifle {
        displayName = "M79";
    };
    class uns_m870: Uns_Shotgun {
        displayName = "M870 (Express)";
    };
    class uns_m870_mk1: uns_m870 {
        displayName = "M870 (Mark 1)";
    };
    class uns_m1897: Uns_Shotgun {
        displayName = "M97";
    };
    class uns_m1897riot: uns_m1897 {
        displayName = "M97 (Riot)";
    };
    class uns_baikal: uns_m1897 {
        displayName = "Baikal";
    };
    class uns_baikal_sawnoff: uns_baikal {
        displayName = "Baikal (Sawn-off)";
    };
    class uns_ithaca37: Uns_Shotgun {
        displayName = "Ithaca 37";
    };
    class uns_ithaca37_grip: uns_ithaca37 {
        displayName = "Ithaca 37 (Grip)";
    };
    class uns_model12: uns_ithaca37 {
        displayName = "M12";
    };
    class uns_PPS43f: uns_PPS43 {
        displayName = "PPS-43 (Folded)";
    };
    class uns_PPS52: uns_PPS43 {
        displayName = "PPS wz. 1943/1952";
    };
    class uns_sten: Uns_SMG {
        displayName = "Sten Mk.II";
    };
    class uns_owen: uns_sten {
        displayName = "Owen Machine Carbine";
    };
    class uns_Sterling: uns_sten {
        displayName = "Sterling L2A3 (Mk.4)";
    };
    class uns_Sterling_f: uns_Sterling {
        displayName = "Sterling L2A3 (Mk.4/Folded)";
    };
    class uns_SterlingSD: uns_Sterling {
        displayName = "Sterling L34A1 (Mk.5)";
    };
    class uns_SterlingSD_f: uns_SterlingSD {
        displayName = "Sterling L34A1 (Mk.5/Folded)";
    };
    class uns_f1_smg: uns_Sterling {
        displayName = "F1";
    };
    class uns_m3a1: Uns_SMG {
        displayName = "M3A1";
    };
    class uns_m45: Uns_SMG {
        displayName = "Kpist m/45";
    };
    class uns_m45f: uns_m45 {
        displayName = "Kpist m/45 (Folded)";
    };
    class uns_m50: Uns_SMG {
        displayName = "Madsen M-50";
    };
    class uns_m50f: uns_m50 {
        displayName = "Madsen M-50 (Folded)";
    };
    class uns_pm63f: Uns_SMG {
        displayName = "PM-63 RAK (Folded)";
    };
    class uns_sa61f: uns_pm63f {
        displayName = "Sa vz. 61 (Folded)";
    };
    class uns_sa61: uns_sa61f {
        displayName = "Sa vz. 61";
    };
    class uns_mp40: Uns_SMG {
        displayName = "MP 40";
    };
    class uns_type100: Uns_SMG {
        displayName = "Type 100 SMG";
    };
    class uns_uzif: Uns_SMG {
        displayName = "UZI (Folded)";
    };
};
