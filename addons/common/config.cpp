#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {QE_ADDON(main)};
        author = AUTHOR;
        authors[] = {AUTHOR};
        url = CSTRING(URL);
        VERSION_CONFIG;
    };
};

#include "CfgFactionClasses.hpp"
#include "CfgEditorCategories.hpp"
#include "CfgEditorSubcategories.hpp"
