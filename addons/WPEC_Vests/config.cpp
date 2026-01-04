class CfgPatches
{
    class WPEC_Vests
    {
        author = "Queue";
        units = "WPEC_Vest_Base", "WPEC_Vest_ARC_EOD", "WPEC_Vest_ARC_Graves", "WPEC_Vest_ARC_Medic", "WPEC_Vest_ARC_TL";
        requiredVersion = 0.1;
        requiredAddons[] = {"A3_characters_f", "A3_data_f"};
        weapons[] = {};
    };
};
class CfgWeapons
{
    class V_PlateCarrier1_rgr;
    class WPEC_Vest_Base: V_PlateCarrier1_rgr
    {
        scope = 1;
        author = "Queue";
        displayName = "WPEC Vest Base";
        picture = "\WPEC\WPEC_Vests\icons\logo_co.paa";
        allowedSlots[] = {"BACKPACK_SLOT"};
        class ItemInfo;
    };
    class WPEC_Vest_ARC_Trooper_A: WPEC_Vest_Base
    {
        scope = 2;
        scopecurator = 2;
        displayName = " [104th] ARC Attachmments (A)";
        model = "\WPEC\WPEC_Vests\ARCVestTrooperA.p3d";
        uniformModel = "\WPEC\WPEC_Vests\ARCVestTrooperA.p3d";
        hiddenSelections[] = {"Camo1","Camo2"};
        hiddenSelectionsTextures[] = {"WPEC\WPEC_Vests\data\ARCVestTopTrooper_co.paa", "WPEC\WPEC_Vests\data\ARCKamaA_co.paa"};
        hiddenSelectionsMaterials[] = {"WPEC\WPEC_Vests\data\ARCVestTop.rvmat", "WPEC\WPEC_Vests\data\ARCVestBottom.rvmat"};
        class ItemInfo: ItemInfo
        {
            uniformModel = "WPEC\WPEC_Vests\ARCVestTrooperA.p3d";
            containerClass = "Supply200";
            class HitpointsProtectionInfo
            {
                class Chest 
			    {
				    hitpointName = "HitChest"; 
				    armor = 6; 
				    passThrough	= 0.3; 
			    };
            };
        };
    };
    class WPEC_Vest_ARC_Trooper_B: WPEC_Vest_Base
    {
        scope = 2;
        scopecurator = 2;
        displayName = " [104th] ARC Attachmments (B)";
        model = "\WPEC\WPEC_Vests\ARCVestTrooperB.p3d";
        uniformModel = "\WPEC\WPEC_Vests\ARCVestTrooperB.p3d";
        hiddenSelections[] = {"Camo1","Camo2"};
        hiddenSelectionsTextures[] = {"WPEC\WPEC_Vests\data\ARCVestTopTrooper_co.paa", "WPEC\WPEC_Vests\data\ARCKamaB_co.paa"};
        hiddenSelectionsMaterials[] = {"WPEC\WPEC_Vests\data\ARCVestTop.rvmat", "WPEC\WPEC_Vests\data\ARCVestBottom.rvmat"};
        class ItemInfo: ItemInfo
        {
            uniformModel = "WPEC\WPEC_Vests\ARCVestTrooperB.p3d";
            containerClass = "Supply200";
            class HitpointsProtectionInfo
            {
                class Chest 
			    {
				    hitpointName = "HitChest"; 
				    armor = 6; 
				    passThrough	= 0.3; 
			    };
            };
        };
    };
    class WPEC_Vest_ARC_Trooper_C: WPEC_Vest_Base
    {
        scope = 2;
        scopecurator = 2;
        displayName = " [104th] ARC Attachmments (C)";
        model = "\WPEC\WPEC_Vests\ARCVestTrooperC.p3d";
        uniformModel = "\WPEC\WPEC_Vests\ARCVestTrooperC.p3d";
        hiddenSelections[] = {"Camo1","Camo2"};
        hiddenSelectionsTextures[] = {"WPEC\WPEC_Vests\data\ARCVestTopTrooper_co.paa", "WPEC\WPEC_Vests\data\ARCKamaC_co.paa"};
        hiddenSelectionsMaterials[] = {"WPEC\WPEC_Vests\data\ARCVestTop.rvmat", "WPEC\WPEC_Vests\data\ARCVestBottom.rvmat"};
        class ItemInfo: ItemInfo
        {
            uniformModel = "WPEC\WPEC_Vests\ARCVestTrooperC.p3d";
            containerClass = "Supply200";
            class HitpointsProtectionInfo
            {
                class Chest 
			    {
				    hitpointName = "HitChest"; 
				    armor = 6; 
				    passThrough	= 0.3; 
			    };
            };
        };
    };
    class WPEC_Vest_ARC_Trooper_D: WPEC_Vest_Base
    {
        scope = 2;
        scopecurator = 2;
        displayName = " [104th] ARC Attachmments (D)";
        model = "\WPEC\WPEC_Vests\ARCVestTrooperD.p3d";
        uniformModel = "\WPEC\WPEC_Vests\ARCVestTrooperD.p3d";
        hiddenSelections[] = {"Camo1","Camo2"};
        hiddenSelectionsTextures[] = {"WPEC\WPEC_Vests\data\ARCVestTopTrooper_co.paa", "WPEC\WPEC_Vests\data\ARCKamaD_co.paa"};
        hiddenSelectionsMaterials[] = {"WPEC\WPEC_Vests\data\ARCVestTop.rvmat", "WPEC\WPEC_Vests\data\ARCVestBottom.rvmat"};
        class ItemInfo: ItemInfo
        {
            uniformModel = "WPEC\WPEC_Vests\ARCVestTrooperD.p3d";
            containerClass = "Supply200";
            class HitpointsProtectionInfo
            {
                class Chest 
			    {
				    hitpointName = "HitChest"; 
				    armor = 6; 
				    passThrough	= 0.3; 
			    };
            };
        };
    };
    class WPEC_Vest_ARC_Trooper_E: WPEC_Vest_Base
    {
        scope = 2;
        scopecurator = 2;
        displayName = " [104th] ARC Attachmments (E)";
        model = "\WPEC\WPEC_Vests\ARCVestTrooperE.p3d";
        uniformModel = "\WPEC\WPEC_Vests\ARCVestTrooperE.p3d";
        hiddenSelections[] = {"Camo1","Camo2"};
        hiddenSelectionsTextures[] = {"WPEC\WPEC_Vests\data\ARCVestTopTrooper_co.paa", "WPEC\WPEC_Vests\data\ARCKamaE_co.paa"};
        hiddenSelectionsMaterials[] = {"WPEC\WPEC_Vests\data\ARCVestTop.rvmat", "WPEC\WPEC_Vests\data\ARCVestBottom.rvmat"};
        class ItemInfo: ItemInfo
        {
            uniformModel = "WPEC\WPEC_Vests\ARCVestTrooperE.p3d";
            containerClass = "Supply200";
            class HitpointsProtectionInfo
            {
                class Chest 
			    {
				    hitpointName = "HitChest"; 
				    armor = 6; 
				    passThrough	= 0.3; 
			    };
            };
        };
    };
    
    class WPEC_Vest_ARC_EOD_A: WPEC_Vest_Base
    {
        scope = 2;
        scopecurator = 2;
        displayName = "[104th] ARC Attachmments [EOD] (A)";
        model = "\WPEC\WPEC_Vests\ARCVestEODA.p3d";
        uniformModel = "\WPEC\WPEC_Vests\ARCVestEODA.p3d";
        hiddenSelections[] = {"Camo1","Camo2"};
        hiddenSelectionsTextures[] = {"WPEC\WPEC_Vests\data\ARCVestTopEOD_co.paa", "WPEC\WPEC_Vests\data\ARCKamaA_co.paa"};
        hiddenSelectionsMaterials[] = {"WPEC\WPEC_Vests\data\ARCVestTop.rvmat", "WPEC\WPEC_Vests\data\ARCVestBottom.rvmat"};
        class ItemInfo: ItemInfo
        {
            uniformModel = "WPEC\WPEC_Vests\ARCVestEODA.p3d";
            containerClass = "Supply200";
            class HitpointsProtectionInfo
            {
                class Chest 
			    {
				    hitpointName = "HitChest"; 
				    armor = 6; 
				    passThrough	= 0.3; 
			    };
            };
        };
    };
    class WPEC_Vest_ARC_EOD_B: WPEC_Vest_Base
    {
        scope = 2;
        scopecurator = 2;
        displayName = "[104th] ARC Attachmments [EOD] (B)";
        model = "\WPEC\WPEC_Vests\ARCVestEODB.p3d";
        uniformModel = "\WPEC\WPEC_Vests\ARCVestEODB.p3d";
        hiddenSelections[] = {"Camo1","Camo2"};
        hiddenSelectionsTextures[] = {"WPEC\WPEC_Vests\data\ARCVestTopEOD_co.paa", "WPEC\WPEC_Vests\data\ARCKamaB_co.paa"};
        hiddenSelectionsMaterials[] = {"WPEC\WPEC_Vests\data\ARCVestTop.rvmat", "WPEC\WPEC_Vests\data\ARCVestBottom.rvmat"};
        class ItemInfo: ItemInfo
        {
            uniformModel = "WPEC\WPEC_Vests\ARCVestEODB.p3d";
            containerClass = "Supply200";
            class HitpointsProtectionInfo
            {
                class Chest 
			    {
				    hitpointName = "HitChest"; 
				    armor = 6; 
				    passThrough	= 0.3; 
			    };
            };
        };
    };
    class WPEC_Vest_ARC_EOD_C: WPEC_Vest_Base
    {
        scope = 2;
        scopecurator = 2;
        displayName = "[104th] ARC Attachmments [EOD] (C)";
        model = "\WPEC\WPEC_Vests\ARCVestEODC.p3d";
        uniformModel = "\WPEC\WPEC_Vests\ARCVestEODC.p3d";
        hiddenSelections[] = {"Camo1","Camo2"};
        hiddenSelectionsTextures[] = {"WPEC\WPEC_Vests\data\ARCVestTopEOD_co.paa", "WPEC\WPEC_Vests\data\ARCKamaC_co.paa"};
        hiddenSelectionsMaterials[] = {"WPEC\WPEC_Vests\data\ARCVestTop.rvmat", "WPEC\WPEC_Vests\data\ARCVestBottom.rvmat"};
        class ItemInfo: ItemInfo
        {
            uniformModel = "WPEC\WPEC_Vests\ARCVestEODC.p3d";
            containerClass = "Supply200";
            class HitpointsProtectionInfo
            {
                class Chest 
			    {
				    hitpointName = "HitChest"; 
				    armor = 6; 
				    passThrough	= 0.3; 
			    };
            };
        };
    };
    class WPEC_Vest_ARC_EOD_D: WPEC_Vest_Base
    {
        scope = 2;
        scopecurator = 2;
        displayName = "[104th] ARC Attachmments [EOD] (D)";
        model = "\WPEC\WPEC_Vests\ARCVestEODD.p3d";
        uniformModel = "\WPEC\WPEC_Vests\ARCVestEODD.p3d";
        hiddenSelections[] = {"Camo1","Camo2"};
        hiddenSelectionsTextures[] = {"WPEC\WPEC_Vests\data\ARCVestTopEOD_co.paa", "WPEC\WPEC_Vests\data\ARCKamaD_co.paa"};
        hiddenSelectionsMaterials[] = {"WPEC\WPEC_Vests\data\ARCVestTop.rvmat", "WPEC\WPEC_Vests\data\ARCVestBottom.rvmat"};
        class ItemInfo: ItemInfo
        {
            uniformModel = "WPEC\WPEC_Vests\ARCVestEODD.p3d";
            containerClass = "Supply200";
            class HitpointsProtectionInfo
            {
                class Chest 
			    {
				    hitpointName = "HitChest"; 
				    armor = 6; 
				    passThrough	= 0.3; 
			    };
            };
        };
    };
    class WPEC_Vest_ARC_EOD_E: WPEC_Vest_Base
    {
        scope = 2;
        scopecurator = 2;
        displayName = "[104th] ARC Attachmments [EOD] (E)";
        model = "\WPEC\WPEC_Vests\ARCVestEODE.p3d";
        uniformModel = "\WPEC\WPEC_Vests\ARCVestEODE.p3d";
        hiddenSelections[] = {"Camo1","Camo2"};
        hiddenSelectionsTextures[] = {"WPEC\WPEC_Vests\data\ARCVestTopEOD_co.paa", "WPEC\WPEC_Vests\data\ARCKamaE_co.paa"};
        hiddenSelectionsMaterials[] = {"WPEC\WPEC_Vests\data\ARCVestTop.rvmat", "WPEC\WPEC_Vests\data\ARCVestBottom.rvmat"};
        class ItemInfo: ItemInfo
        {
            uniformModel = "WPEC\WPEC_Vests\ARCVestEODE.p3d";
            containerClass = "Supply200";
            class HitpointsProtectionInfo
            {
                class Chest 
			    {
				    hitpointName = "HitChest"; 
				    armor = 6; 
				    passThrough	= 0.3; 
			    };
            };
        };
    };

    class WPEC_Vest_ARC_Graves: WPEC_Vest_Base
    {
        scope = 2;
        scopecurator = 2;
        displayName = "[104th] ARC Attachmments (Graves)";
        model = "\WPEC\WPEC_Vests\ARCVestGraves.p3d";
        uniformModel = "\WPEC\WPEC_Vests\ARCVestGraves.p3d";
        hiddenSelections[] = {"Camo1","Camo2"};
        hiddenSelectionsTextures[] = {"WPEC\WPEC_Vests\data\ARCVestTopGraves_co.paa", "WPEC\WPEC_Vests\data\ARCVestBottomGraves_co.paa"};
        hiddenSelectionsMaterials[] = {"WPEC\WPEC_Vests\data\ARCVestTop.rvmat", "WPEC\WPEC_Vests\data\ARCVestBottom.rvmat"};
        class ItemInfo: ItemInfo
        {
            uniformModel = "WPEC\WPEC_Vests\ARCVestGraves.p3d";
            containerClass = "Supply200";
            class HitpointsProtectionInfo
            {
                class Chest 
			    {
				    hitpointName = "HitChest"; 
				    armor = 8; 
				    passThrough	= 0.2; 
			    };
            };
        };
    };
    
    class WPEC_Vest_ARC_Medic_A: WPEC_Vest_Base
    {
        scope = 2;
        scopecurator = 2;
        displayName = "[104th] ARC Attachmments [Medic] (A)";
        model = "\WPEC\WPEC_Vests\ARCVestMedicA.p3d";
        uniformModel = "\WPEC\WPEC_Vests\ARCVestMedicA.p3d";
        hiddenSelections[] = {"Camo1","Camo2"};
        hiddenSelectionsTextures[] = {"WPEC\WPEC_Vests\data\ARCVestTopMedic_co.paa", "WPEC\WPEC_Vests\data\ARCKamaA_co.paa"};
        hiddenSelectionsMaterials[] = {"WPEC\WPEC_Vests\data\ARCVestTop.rvmat", "WPEC\WPEC_Vests\data\ARCVestBottom.rvmat"};
        class ItemInfo: ItemInfo
        {
            uniformModel = "WPEC\WPEC_Vests\ARCVestMedicA.p3d";
            containerClass = "Supply200";
            class HitpointsProtectionInfo
            {
                class Chest 
			    {
				    hitpointName = "HitChest"; 
				    armor = 6; 
				    passThrough	= 0.3; 
			    };
            };
        };
    };
    class WPEC_Vest_ARC_Medic_B: WPEC_Vest_Base
    {
        scope = 2;
        scopecurator = 2;
        displayName = "[104th] ARC Attachmments [Medic] (B)";
        model = "\WPEC\WPEC_Vests\ARCVestMedicB.p3d";
        uniformModel = "\WPEC\WPEC_Vests\ARCVestMedicB.p3d";
        hiddenSelections[] = {"Camo1","Camo2"};
        hiddenSelectionsTextures[] = {"WPEC\WPEC_Vests\data\ARCVestTopMedic_co.paa", "WPEC\WPEC_Vests\data\ARCKamaB_co.paa"};
        hiddenSelectionsMaterials[] = {"WPEC\WPEC_Vests\data\ARCVestTop.rvmat", "WPEC\WPEC_Vests\data\ARCVestBottom.rvmat"};
        class ItemInfo: ItemInfo
        {
            uniformModel = "WPEC\WPEC_Vests\ARCVestMedicB.p3d";
            containerClass = "Supply200";
            class HitpointsProtectionInfo
            {
                class Chest 
			    {
				    hitpointName = "HitChest"; 
				    armor = 6; 
				    passThrough	= 0.3; 
			    };
            };
        };
    };
    class WPEC_Vest_ARC_Medic_C: WPEC_Vest_Base
    {
        scope = 2;
        scopecurator = 2;
        displayName = "[104th] ARC Attachmments [Medic] (C)";
        model = "\WPEC\WPEC_Vests\ARCVestMedicC.p3d";
        uniformModel = "\WPEC\WPEC_Vests\ARCVestMedicC.p3d";
        hiddenSelections[] = {"Camo1","Camo2"};
        hiddenSelectionsTextures[] = {"WPEC\WPEC_Vests\data\ARCVestTopMedic_co.paa", "WPEC\WPEC_Vests\data\ARCKamaC_co.paa"};
        hiddenSelectionsMaterials[] = {"WPEC\WPEC_Vests\data\ARCVestTop.rvmat", "WPEC\WPEC_Vests\data\ARCVestBottom.rvmat"};
        class ItemInfo: ItemInfo
        {
            uniformModel = "WPEC\WPEC_Vests\ARCVestMedicC.p3d";
            containerClass = "Supply200";
            class HitpointsProtectionInfo
            {
                class Chest 
			    {
				    hitpointName = "HitChest"; 
				    armor = 6; 
				    passThrough	= 0.3; 
			    };
            };
        };
    };
    class WPEC_Vest_ARC_Medic_D: WPEC_Vest_Base
    {
        scope = 2;
        scopecurator = 2;
        displayName = "[104th] ARC Attachmments [Medic] (D)";
        model = "\WPEC\WPEC_Vests\ARCVestMedicD.p3d";
        uniformModel = "\WPEC\WPEC_Vests\ARCVestMedicD.p3d";
        hiddenSelections[] = {"Camo1","Camo2"};
        hiddenSelectionsTextures[] = {"WPEC\WPEC_Vests\data\ARCVestTopMedic_co.paa", "WPEC\WPEC_Vests\data\ARCKamaD_co.paa"};
        hiddenSelectionsMaterials[] = {"WPEC\WPEC_Vests\data\ARCVestTop.rvmat", "WPEC\WPEC_Vests\data\ARCVestBottom.rvmat"};
        class ItemInfo: ItemInfo
        {
            uniformModel = "WPEC\WPEC_Vests\ARCVestMedicD.p3d";
            containerClass = "Supply200";
            class HitpointsProtectionInfo
            {
                class Chest 
			    {
				    hitpointName = "HitChest"; 
				    armor = 6; 
				    passThrough	= 0.3; 
			    };
            };
        };
    };
    class WPEC_Vest_ARC_Medic_E: WPEC_Vest_Base
    {
        scope = 2;
        scopecurator = 2;
        displayName = "[104th] ARC Attachmments [Medic] (E)";
        model = "\WPEC\WPEC_Vests\ARCVestMedicE.p3d";
        uniformModel = "\WPEC\WPEC_Vests\ARCVestMedicE.p3d";
        hiddenSelections[] = {"Camo1","Camo2"};
        hiddenSelectionsTextures[] = {"WPEC\WPEC_Vests\data\ARCVestTopMedic_co.paa", "WPEC\WPEC_Vests\data\ARCKamaE_co.paa"};
        hiddenSelectionsMaterials[] = {"WPEC\WPEC_Vests\data\ARCVestTop.rvmat", "WPEC\WPEC_Vests\data\ARCVestBottom.rvmat"};
        class ItemInfo: ItemInfo
        {
            uniformModel = "WPEC\WPEC_Vests\ARCVestMedicE.p3d";
            containerClass = "Supply200";
            class HitpointsProtectionInfo
            {
                class Chest 
			    {
				    hitpointName = "HitChest"; 
				    armor = 6; 
				    passThrough	= 0.3; 
			    };
            };
        };
    };

    class WPEC_Vest_ARC_TL_A: WPEC_Vest_Base
    {
        scope = 2;
        scopecurator = 2;
        displayName = "[104th] ARC Attachmments [Team Lead] (A)";
        model = "\WPEC\WPEC_Vests\ARCVestTLA.p3d";
        uniformModel = "\WPEC\WPEC_Vests\ARCVestTLA.p3d";
        hiddenSelections[] = {"Camo1","Camo2"};
        hiddenSelectionsTextures[] = {"WPEC\WPEC_Vests\data\ARCVestTopTL_co.paa", "WPEC\WPEC_Vests\data\ARCKamaA_co.paa"};
        hiddenSelectionsMaterials[] = {"WPEC\WPEC_Vests\data\ARCVestTop.rvmat", "WPEC\WPEC_Vests\data\ARCVestBottom.rvmat"};
        class ItemInfo: ItemInfo
        {
            uniformModel = "WPEC\WPEC_Vests\ARCVestTLA.p3d";
            containerClass = "Supply200";
            class HitpointsProtectionInfo
            {
                class Chest 
			    {
				    hitpointName = "HitChest"; 
				    armor = 6; 
				    passThrough	= 0.3; 
			    };
            };
        };
    };
    class WPEC_Vest_ARC_TL_B: WPEC_Vest_Base
    {
        scope = 2;
        scopecurator = 2;
        displayName = "[104th] ARC Attachmments [Team Lead] (B)";
        model = "\WPEC\WPEC_Vests\ARCVestTLB.p3d";
        uniformModel = "\WPEC\WPEC_Vests\ARCVestTLB.p3d";
        hiddenSelections[] = {"Camo1","Camo2"};
        hiddenSelectionsTextures[] = {"WPEC\WPEC_Vests\data\ARCVestTopTL_co.paa", "WPEC\WPEC_Vests\data\ARCKamaB_co.paa"};
        hiddenSelectionsMaterials[] = {"WPEC\WPEC_Vests\data\ARCVestTop.rvmat", "WPEC\WPEC_Vests\data\ARCVestBottom.rvmat"};
        class ItemInfo: ItemInfo
        {
            uniformModel = "WPEC\WPEC_Vests\ARCVestTLB.p3d";
            containerClass = "Supply200";
            class HitpointsProtectionInfo
            {
                class Chest 
			    {
				    hitpointName = "HitChest"; 
				    armor = 6; 
				    passThrough	= 0.3; 
			    };
            };
        };
    };
    class WPEC_Vest_ARC_TL_C: WPEC_Vest_Base
    {
        scope = 2;
        scopecurator = 2;
        displayName = "[104th] ARC Attachmments [Team Lead] (C)";
        model = "\WPEC\WPEC_Vests\ARCVestTLC.p3d";
        uniformModel = "\WPEC\WPEC_Vests\ARCVestTLC.p3d";
        hiddenSelections[] = {"Camo1","Camo2"};
        hiddenSelectionsTextures[] = {"WPEC\WPEC_Vests\data\ARCVestTopTL_co.paa", "WPEC\WPEC_Vests\data\ARCKamaC_co.paa"};
        hiddenSelectionsMaterials[] = {"WPEC\WPEC_Vests\data\ARCVestTop.rvmat", "WPEC\WPEC_Vests\data\ARCVestBottom.rvmat"};
        class ItemInfo: ItemInfo
        {
            uniformModel = "WPEC\WPEC_Vests\ARCVestTLC.p3d";
            containerClass = "Supply200";
            class HitpointsProtectionInfo
            {
                class Chest 
			    {
				    hitpointName = "HitChest"; 
				    armor = 6; 
				    passThrough	= 0.3; 
			    };
            };
        };
    };
    class WPEC_Vest_ARC_TL_D: WPEC_Vest_Base
    {
        scope = 2;
        scopecurator = 2;
        displayName = "[104th] ARC Attachmments [Team Lead] (D)";
        model = "\WPEC\WPEC_Vests\ARCVestTLD.p3d";
        uniformModel = "\WPEC\WPEC_Vests\ARCVestTLD.p3d";
        hiddenSelections[] = {"Camo1","Camo2"};
        hiddenSelectionsTextures[] = {"WPEC\WPEC_Vests\data\ARCVestTopTL_co.paa", "WPEC\WPEC_Vests\data\ARCKamaD_co.paa"};
        hiddenSelectionsMaterials[] = {"WPEC\WPEC_Vests\data\ARCVestTop.rvmat", "WPEC\WPEC_Vests\data\ARCVestBottom.rvmat"};
        class ItemInfo: ItemInfo
        {
            uniformModel = "WPEC\WPEC_Vests\ARCVestTLD.p3d";
            containerClass = "Supply200";
            class HitpointsProtectionInfo
            {
                class Chest 
			    {
				    hitpointName = "HitChest"; 
				    armor = 6; 
				    passThrough	= 0.3; 
			    };
            };
        };
    };
    class WPEC_Vest_ARC_TL_E: WPEC_Vest_Base
    {
        scope = 2;
        scopecurator = 2;
        displayName = "[104th] ARC Attachmments [Team Lead] (E)";
        model = "\WPEC\WPEC_Vests\ARCVestTLE.p3d";
        uniformModel = "\WPEC\WPEC_Vests\ARCVestTLE.p3d";
        hiddenSelections[] = {"Camo1","Camo2"};
        hiddenSelectionsTextures[] = {"WPEC\WPEC_Vests\data\ARCVestTopTL_co.paa", "WPEC\WPEC_Vests\data\ARCKamaE_co.paa"};
        hiddenSelectionsMaterials[] = {"WPEC\WPEC_Vests\data\ARCVestTop.rvmat", "WPEC\WPEC_Vests\data\ARCVestBottom.rvmat"};
        class ItemInfo: ItemInfo
        {
            uniformModel = "WPEC\WPEC_Vests\ARCVestTLE.p3d";
            containerClass = "Supply200";
            class HitpointsProtectionInfo
            {
                class Chest 
			    {
				    hitpointName = "HitChest"; 
				    armor = 6; 
				    passThrough	= 0.3; 
			    };
            };
        };
    };
};
