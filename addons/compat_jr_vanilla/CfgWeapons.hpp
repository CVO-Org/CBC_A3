// CBA Joint Rails has no entry for the Contact DLC MSBS, so it only has the vanilla optic and pointer slots.
// Based on the GSRI gear patch (MIT), slots only.
class asdg_OpticRail1913;
class asdg_FrontSideRail;

class CfgWeapons {
    class Rifle;
    class Rifle_Base_F: Rifle {
        class WeaponSlotsInfo;
    };

    class arifle_MSBS65_base_F: Rifle_Base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            class CowsSlot: asdg_OpticRail1913 {
                iconPosition[] = {0.45, 0.28};
                iconScale = 0.2;
            };
            class PointerSlot: asdg_FrontSideRail {
                iconPosition[] = {0.35, 0.45};
                iconScale = 0.2;
            };
        };
    };
};
