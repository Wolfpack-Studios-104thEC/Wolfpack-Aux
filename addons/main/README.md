# Main

## Overview
- The `Main` PBO in your mod is really never touched. It houses basic mod information, major macros and components that you need in every other part of your mod to function.
- For the most part, this is an untouched PBO, all functions and such should be houses either in `common` or its own PBO
- The only thing that should be updated regularly here is your `script_version`

## Script Version
- The script version tells players which version of the mod your on. For the most part this is used as a roadmap, so see how progression has been made on the mod and what's been worked on for each part. 
- You can also tie this into a script to check if players have updated their mod, effectively this checks the players `script_version` against the server, very nice
- To update the `script_version` just update the numbers, in normal fashsion the decimal part should be minor updates while the whole number should be major pushes.
