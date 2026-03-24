# Helmets

## Macro's for use
- For each helmet there is three sets of macro's, all will be explained below

## Macro Variables

### Scope
- Scope just fills in the scope for that helmet, it can be a 0, 1, or 2 depending on the scope you want to set.

### Name
- Name fills in the display name, class name, and file name for the helmet. The Name variable you set should be exactly the same name you use for your file name. So if your file is `Phase2Jimmy_co.paa` your name variable should be `Jimmy`.

### Color
- The color variable is only on the glow macro's. This defines the color of the visor used for that helmet. It will define the RVMAT and the Texture used.

## Different macro's used

### Rank macro's
- Rank macro's are for your default helmets. They use default information and get stored under the rank model for the XTD. They will always path to the rank folder under your helmet type

### Custom Macro's
- Custom macros are used for custom helmets. They use the custom information and get stored under the custom model for the XTD. THey will always path to the custom folder under your helmet type.

### Custom Glow Macro's
- Custom Glow Macros, are the same as custom macros, except they use a third variable. They allow you to change the color for the visor and will change the information accordingly.They will still path to the custom folder for the helmet and show up under the custom model fot the XTD.
