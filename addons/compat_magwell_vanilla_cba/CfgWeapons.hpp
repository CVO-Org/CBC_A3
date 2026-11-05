// Based on Weapons-Balance-Vanilla by johnb432 (https://github.com/johnb432/Weapons-Balance-Vanilla), MIT License,
// Copyright (c) 2021 johnb432. Magazine lists only.
class CfgWeapons {
    class Rifle_Base_F;
    class Rifle_Long_Base_F;
    class Pistol_Base_F;
    class LMG_03_base_F;
    class arifle_MSBS65_base_F;

    // LIM-85 is an FN Minimi: takes M249 / Minimi boxes.
    class LMG_03_F: LMG_03_base_F {
        magazineWell[] += {"M249_556x45"};
    };
    // Zafir is a 7.62x54R belt-fed MG: takes PK belts.
    class LMG_Zafir_F: Rifle_Long_Base_F {
        magazineWell[] += {"PK_762x54R"};
    };
    // Kozlice (double barrel) and the MSBS underbarrel shotgun load any 12 gauge shells.
    class sgun_HunterShotgun_01_base_F: Rifle_Long_Base_F {
        magazineWell[] += {"CBA_12g_1rnd", "CBA_12g_2rnds"};
    };
    class arifle_MSBS65_UBS_base_F: arifle_MSBS65_base_F {
        class UBS_F: Rifle_Base_F {
            magazineWell[] += {"CBA_12g_1rnd", "CBA_12g_2rnds", "CBA_12g_3rnds", "CBA_12g_4rnds", "CBA_12g_5rnds", "CBA_12g_6rnds"};
        };
    };
    // The PM is a Makarov. (The Rook-40 is left alone: other mods, e.g. the 3CB CZ 75, are built on it.)
    class hgun_Pistol_01_F: Pistol_Base_F {
        magazineWell[] += {"CBA_9x18_PM"};
    };
};
