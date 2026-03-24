#define SUBCOMPONENT customhelmets
#define SUBCOMPONENT_BEAUTIFIED Custom Works (helmets)
#include "\Z\wpec\addons\customworks\script_component.hpp"

// todo:
#define ACEAX_LABEL_HELMET_CUSTOM "Custom Trooper Helmet"

#define HELMET_PROTECTION \
        class HitpointsProtectionInfo {\
            class Head {\
                armor = 8;\
                hitpointName = "HitHead";\
                passThrough = 0.5;\
            };\
        }

#define HEARING_PROTECTION 0.80
#define HEARING_MUFFLING 0.50

#define HELMET_ACE_HEARING ace_hearing_protection = HEARING_PROTECTION;\
ace_hearing_lowerVolume = HEARING_MUFFLING
