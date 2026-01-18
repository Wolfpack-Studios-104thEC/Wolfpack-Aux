## Wolfpack Aux Mod

# General

- This is the AUX mod of Wolfpack eclipse company. Within this Read Me, you will find basic tutorials for functioning parts of the mod. If you have questions please reach out to Rat for more information

# Mod Structure

- This mod is split into a few different addons as well as subaddons. The intention of this is to create a modular mod that allows usage for many people. Below are the PBOs found within the mod 

## Equipment 

- This PBO houses all custom textures for uniforms, helmets, etc. There are multiple subaddons splitting up the equipment to ensure organization within the mod. 
- The Equipment PBO houses all macro's and information for the inputting of customs, to see any guides and infromation, please check out the read me found in the equipment PBO. 

# HEMMT Information

- HEMTT is the building tool we use within the mod. Hemtt is developed and run by the ace team, and works very well to ensure code is proper and up to date. Below is the how to use

## Setup 

- Within the tools folder, you will find a `setup.bat`. Any time you need to download or update hemtt, run this bat and it will do it automatically. You will need to run this setup for every mod you work with. 

## How to use

- Before we get started, to use hemtt you need to use the terminal for VSC. Please make sure you have the proper terminal, and its opened into the proper file path.
- Hemtt has a few key commands, you will find them below.
    - `hemtt build` builds the mod. It's output is put in the `hemttout` folder, under the build folder. This is what you should be using to test and build your mod initially.
    - `hemtt release` builds your mod for release. It ensures that everything is bianrized, and creates keys for your mod. This is what you should be using when you are ready to push your mod to the workshop. This will build under the `release` folder.
    - `hemtt launch` builds your mod and launches your game with the modlist provided in the `project.tml` file. This isn't working right now for you but I will set it up later
    - `hemtt photoshoot` will create editor previews for any nonexistent editor preview currently in your code. All you have to do is add in the code for it, and have the file open, and when you run this script it will create them for you!

## Warnings VS errors

- Hemmt works in two ways, warnings and errors.
- Warnings are problems with the code that should be fixed, however isn't going to break the game if they're not. You can choose to ignore them if you wish but for the betterment of you and your players, fix them!
- Errors are probelms with the code that need to be fixed. It will be a big red error and show you what's wrong. These NEED to be fixed otherwise your mod will not build or run.
- ALl of this information will popup in the terminal when you run `hemtt build` or `hemtt release`

# TODO
- Fix Icons for Helmets
- Set up framework for the rest of the equipment PBO
- Nuke unneeded PBOs
- rewrite teh vehicles PBO into subaddons
- nuke weapon folder
- remove P3Ds
