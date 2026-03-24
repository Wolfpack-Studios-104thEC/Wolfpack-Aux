#define SUBCOMPONENT customvests
#define SUBCOMPONENT_BEAUTIFIED Custom Works (Vests)
#include "\Z\wpec\addons\customworks\script_component.hpp"


#define UNIFORM_SUPPLYCLASS QUOTE(Supply100)

#define VEST_SUPPLYCLASS QUOTE(Supply120)
#define VEST_SUPPLYCLASS_CMD QUOTE(Supply300)
#define ARC_VEST_PROTRECTIONS class HitpointsProtectionInfo\
            {\
                class Chest\
                {\
                    hitpointName = "HitChest";\
                    armor = 6;\
                    passThrough	= 0.3;\
                };\
            }
