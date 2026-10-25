#define ACE_MAGS_762 \
    "ACE_20Rnd_762x51_Mag_Tracer", \
    "ACE_20Rnd_762x51_Mag_Tracer_Dim", \
    "ACE_20Rnd_762x51_Mag_SD", \
    "ACE_10Rnd_762x51_M118LR_Mag", \
    "ACE_10Rnd_762x51_Mk316_Mod_0_Mag", \
    "ACE_10Rnd_762x51_Mk319_Mod_0_Mag", \
    "ACE_10Rnd_762x51_M993_AP_Mag", \
    "ACE_20Rnd_762x51_M118LR_Mag", \
    "ACE_20Rnd_762x51_Mk316_Mod_0_Mag", \
    "ACE_20Rnd_762x51_Mk319_Mod_0_Mag", \
    "ACE_20Rnd_762x51_M993_AP_Mag"

// ACE ammo is generic, so it is added to the pattern-specific 7.62x51 wells as well as the shared ones, favouring broad availability over strict realism.
class CfgMagazineWells {
    class UGL_m230 {
        ACE[] = {"ACE_HuntIR_M203"};
    };
    class Stanag_762x51 {
        ACE_Magazines_Stanag_762x51[] = {ACE_MAGS_762};
    };
    class Stanag_762x51_big {
        ACE_Magazines_Stanag_762x51[] = {ACE_MAGS_762};
    };
    class CBA_762x51_AR10 {
        ACE_Magazines_762x51[] = {ACE_MAGS_762};
    };
    class CBA_762x51_HK417 {
        ACE_Magazines_762x51[] = {ACE_MAGS_762};
    };
    class CBA_762x51_M14 {
        ACE_Magazines_762x51[] = {ACE_MAGS_762};
    };
    class CBA_762x51_SCAR {
        ACE_Magazines_762x51[] = {ACE_MAGS_762};
    };
    class CBA_762x51_G3 {
        ACE_Magazines_762x51[] = {ACE_MAGS_762};
    };
    class Stanag_556x45 {
        ACE_Magazines_Stanag_556x45[] = {
            "ACE_30Rnd_556x45_Stanag_M995_AP_mag",
            "ACE_30Rnd_556x45_Stanag_Mk262_mag",
            "ACE_30Rnd_556x45_Stanag_Mk318_mag",
            "ACE_30Rnd_556x45_Stanag_Tracer_Dim"
        };
    };
    class Stanag_556x45_Big {
        ACE_Magazines_Stanag_556x45[] = {
            "ACE_30Rnd_556x45_Stanag_M995_AP_mag",
            "ACE_30Rnd_556x45_Stanag_Mk262_mag",
            "ACE_30Rnd_556x45_Stanag_Mk318_mag",
            "ACE_30Rnd_556x45_Stanag_Tracer_Dim"
        };
    };
};
