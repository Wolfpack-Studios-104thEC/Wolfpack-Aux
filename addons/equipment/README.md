# Equipment

## Subaddons

Equipment PBO is split into subaddons to better organize the mod.

### Helmets
- Stores all custom helmets
- Helmets use the `GHELMET` Macro, which pushes the classname into `wpec_equipment_helmet_insertname`

### Uniforms
- Stores all uniforms and unit information
- Uniforms use the `GUNIFORM` Macro, which pushes the classname into `wpec_equipment_uniform_insertname`
- Units use the `GUNIT` Macro, which pushes the classname into `wpec_equipment_unit_insertname`

### Backpacks
- Stores all backpack and storage information
- Backpacks use the `GBACKPACK` Macro, which pushes the classname into `wpec_equipment_backpack_insertname`

### Vests
- Stores all vest information
- Vests use the `GVEST` Macro, which pushes the classname into `wpec_equipment_vest_insertname`

### NVGs
Stores all NVGs and facewear
- NVGs use the `GNVG` Macro, which pushes the classname into `wpec_equipment_nvg_insertname`
- Facewear use the `GFACEWEAR` Macro, which pushes the classname into `wpec_equipment_facewear_insertname`

## Macros

Within the equipment PBO, there is a `script_macros.hpp` which stores all macro information for this PBO.  
If you need to expand upon or search how something works, please look there.

Within the equipment PBO, there is also a `script_component.hpp`.  
This stores information required for the PBO to function, including:
- Armor values
- Storage values
- Base macros used across all subaddons
