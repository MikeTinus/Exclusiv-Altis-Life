/*
*    ARRAY FORMAT:
*        0: STRING (Classname)
*        1: STRING (Display Name, leave as "" for default)
*        2: SCALAR (Price)
*        4: ARRAY (This is for limiting items to certain things)
*            0: Variable to read from
*            1: Variable Value Type (SCALAR / BOOL / EQUAL)
*            2: What to compare to (-1 = Check Disabled)
*
*   Clothing classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Equipment
*   Backpacks/remaining classnames can be found here (TIP: Search page for "pack"): https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EMPTY
*   DLC Clothing Items added by [TIG] Alex
*
*/
class Clothing {
    class bruce {
        title = "STR_Shops_C_Bruce";
        license = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_C_Poloshirt_stripped", "Poloshirt stripped", 125, { "", "", -1 } },
            { "U_C_Poloshirt_redwhite", "Poloshirt Red/White", 150, { "", "", -1 } },
            { "U_C_Poloshirt_salmon", "Poloshirt Salmon", 175, { "", "", -1 } },
            { "U_C_Poloshirt_blue", "Poloshirt Blue", 250, { "", "", -1 } },
            { "U_C_Poor_2", "Rag tagged clothes", 250, { "", "", -1 } },
            { "U_C_Poloshirt_burgundy", "Poloshirt Burgundy", 275, { "", "", -1 } },
            { "U_C_Poloshirt_tricolour", "Poloshirt Tricolor", 350, { "", "", -1 } },
            { "U_IG_Guerilla2_2", "Green stripped shirt & Pants", 650, { "", "", -1 } },
            { "U_IG_Guerilla3_1", "Brown Jacket & Pants", 735, { "", "", -1 } },
            { "U_OrestesBody", "Surfing On Land", 1100, { "", "", -1 } },
            { "U_IG_Guerilla2_3", "The Outback Rangler", 1200, { "", "", -1 } },
            { "U_C_HunterBody_grn", "The Hunters Look", 1500, { "", "", -1 } },
            { "U_C_WorkerCoveralls", "Mechanic Coveralls", 2500, { "", "", -1 } },
            { "U_C_Man_casual_1_F", "Casual Wears", 5000, { "", "", -1 } },
            { "U_C_Man_casual_2_F", "Casual Wears", 5000, { "", "", -1 } }, //Apex DLC
            { "U_C_Man_casual_3_F", "Casual Wears", 5000, { "", "", -1 } }, //Apex DLC
            { "U_C_Man_casual_4_F", "Casual Wears", 5000, { "", "", -1 } }, //Apex DLC
            { "U_C_Man_casual_5_F", "Casual Wears", 5000, { "", "", -1 } }, //Apex DLC
            { "U_C_Man_casual_6_F", "Casual Wears", 5000, { "", "", -1 } }, //Apex DLC
            { "U_C_man_sport_1_F", "Casual Wears", 5000, { "", "", -1 } }, //Apex DLC
            { "U_C_man_sport_2_F", "Casual Wears", 5000, { "", "", -1 } }, //Apex DLC
            { "U_C_man_sport_3_F", "Casual Wears", 5000, { "", "", -1 } } //Apex DLC


        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_Bandanna_camo", "Camo Bandanna", 120, { "", "", -1 } },
            { "H_Bandanna_surfer", "Surfer Bandanna", 130, { "", "", -1 } },
            { "H_Bandanna_surfer", "", 135, { "", "", -1 } },
            { "H_Bandanna_khk", "Khaki Bandanna", 145, { "", "", -1 } },
            { "H_Cap_blu", "", 150, { "", "", -1 } },
            { "H_Cap_grn", "", 150, { "", "", -1 } },
            { "H_Cap_grn_BI", "", 150, { "", "", -1 } },
            { "H_Cap_oli", "", 150, { "", "", -1 } },
            { "H_Cap_red", "", 150, { "", "", -1 } },
            { "H_Cap_tan", "", 150, { "", "", -1 } },
            { "H_Helmet_Skate", "", 150, { "", "", -1 } }, //Apex DLC
            { "H_Bandanna_gry", "Grey Bandanna", 150, { "", "", -1 } },
            { "H_Bandanna_sgg", "Sage Bandanna", 160, { "", "", -1 } },
            { "H_Bandanna_cbr", "", 165, { "", "", -1 } },
            { "H_StrawHat", "Straw Fedora", 225, { "", "", -1 } },
            { "H_Hat_tan", "", 265, { "", "", -1 } },
            { "H_Hat_brown", "", 276, { "", "", -1 } },
            { "H_Hat_grey", "", 280, { "", "", -1 } },
            { "H_BandMask_blk", "Hat & Bandanna", 300, { "", "", -1 } },
            { "H_Hat_blue", "", 310, { "", "", -1 } },
            { "H_Hat_checker", "", 340, { "", "", -1 } },
            { "H_Booniehat_grn", "", 425, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Shades_Black", "", 20, { "", "", -1 } },
            { "G_Shades_Blue", "", 20, { "", "", -1 } },
            { "G_Shades_Green", "", 20, { "", "", -1 } },
            { "G_Shades_Red", "", 20, { "", "", -1 } },
            { "G_Sport_Blackred", "", 25, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 25, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 25, { "", "", -1 } },
            { "G_Sport_Checkered", "", 25, { "", "", -1 } },
            { "G_Sport_Greenblack", "", 25, { "", "", -1 } },
            { "G_Sport_Red", "", 25, { "", "", -1 } },
            { "G_Lowprofile", "", 30, { "", "", -1 } },
            { "G_Squares", "", 50, { "", "", -1 } },
            { "G_Aviator", "", 100, { "", "", -1 } },
            { "G_Combat", "", 125, { "", "", -1 } },
            { "G_Lady_Mirror", "", 150, { "", "", -1 } },
            { "G_Lady_Dark", "", 150, { "", "", -1 } },
            { "G_Lady_Blue", "", 150, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_OutdoorPack_blk", "", 500, { "", "", -1 } },
            { "B_AssaultPack_khk", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_dgtl", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_rgr", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_sgg", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_blk", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_cbr", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_mcamo", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_tna_f", "", 2000, { "", "", -1 } }, //Apex DLC
            { "B_TacticalPack_oli", "", 2500, { "", "", -1 } },
            { "B_Kitbag_mcamo", "", 3500, { "", "", -1 } },
            { "B_Kitbag_sgg", "", 3500, { "", "", -1 } },
            { "B_Kitbag_cbr", "", 3500, { "", "", -1 } },
            { "B_FieldPack_blk", "", 5000, { "", "", -1 } },
            { "B_FieldPack_ocamo", "", 5000, { "", "", -1 } },
            { "B_FieldPack_oucamo", "", 5000, { "", "", -1 } },
            { "B_FieldPack_ghex_f", "", 5000, { "", "", -1 } }, //Apex DLC
            { "B_Bergen_sgg", "", 6500, { "", "", -1 } },
            { "B_Bergen_mcamo", "", 6500, { "", "", -1 } },
            { "B_Bergen_rgr", "", 6500, { "", "", -1 } },
            { "B_Bergen_blk", "", 6500, { "", "", -1 } },
            { "B_Carryall_ocamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_oucamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_mcamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_oli", "", 7500, { "", "", -1 } },
            { "B_Carryall_khk", "", 7500, { "", "", -1 } },
            { "B_Carryall_cbr", "", 7500, { "", "", -1 } },
            { "B_Carryall_ghex_f", "", 7500, { "", "", -1 } }, //Apex DLC
            { "B_Bergen_dgtl_f", "", 6500, { "", "", -1 } }, //Apex DLC
            { "B_Bergen_tna_f", "", 6500, { "", "", -1 } } //Apex DLC
        };
    };
	
	class sek {
        title = "STR_Shops_C_Police";
        license = "sek";
        side = "cop";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "EAL_sek_uniform", "", 25, { "life_coplevel", "SCALAR", 6 } },
			{ "EAL_sek_uniform_leitung", "", 25, { "life_coplevel", "SCALAR", 15 } }
        };
        headgear[] = {	
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "H_HelmetB_black", "SEK-Helm", 10000, { "life_coplevel", "SCALAR", 6 } },
			{ "H_Watchcap_blk", "Wollmütze", 2500, { "life_coplevel", "SCALAR", 6 } },
			{ "H_HelmetSpecB_blk", "SEK-Helm equipped", 75, { "life_coplevel", "SCALAR", 8 } },
			{ "EAL_helmet_visor", "", 30000, { "life_coplevel", "SCALAR", 9 } },
			{ "EAL_polizei_uscap", "SEK-Mütze", 2500, { "life_coplevel", "SCALAR", 9 } },
			{ "TRYK_H_headsetcap_blk_Glasses", "Mütze mit Brille", 2500, { "life_coplevel", "SCALAR", 10 } },
			{ "H_Beret_blk_POLICE", "SEK-Beret", 3000, { "life_coplevel", "SCALAR", 12 } },
			{ "H_HelmetB_light_black", "SEK-Helm leicht", 17500, { "life_coplevel", "SCALAR", 13 } },
			{ "EAL_balaclava", "", 2500, { "life_coplevel", "SCALAR", 14 } },
			{ "H_Beret_Colonel", "PD Beret", 7500, { "life_coplevel", "SCALAR", 15 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Bandanna_shades", "", 25, { "", "", -1 } },
            { "G_Bandanna_blk", "", 20, { "", "", -1 } },
            { "G_Balaclava_blk", "", 20, { "", "", -1 } },
            { "G_Bandanna_beast", "", 20, { "", "", -1 } },
            { "G_Tactical_Clear", "", 20, { "", "", -1 } },
			{ "TRYK_kio_balaclava_BLK", "", 2000, { "", "", -1 } },
			{ "TRYK_kio_balaclavas", "", 2000, { "", "", -1 } },
			{ "TRYK_kio_balaclava_BLK_ear", "", 2000, { "", "", -1 } },
			{ "TRYK_kio_balaclava_ear", "", 2000, { "", "", -1 } },
			{ "TRYK_TAC_EARMUFF_Gs", "Peltor", 2000, { "life_coplevel", "SCALAR", 8 } },
			{ "TRYK_TAC_EARMUFF_SHADE_Gs", "Peltor und Brille", 2000, { "life_coplevel", "SCALAR", 8 } },
            { "G_Aviator", "", 100, { "life_coplevel", "SCALAR", 15 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "TAC_V_Sheriff_BA_TB", "SEK-Plattenträger", 35000, { "life_coplevel", "SCALAR", 6 } },
			{ "EAL_polizei_guertel", "SEK-Battlebelt", 800, { "life_coplevel", "SCALAR", 6 } },
			{ "TAC_HSG_ABH_B", "SEK-Battlebelt", 800, { "life_coplevel", "SCALAR", 6 } },
			{ "TAC_HSG_ABL_B", "SEK-Battlebelt", 800, { "life_coplevel", "SCALAR", 6 } },
			{ "TAC_V_Sheriff_BA_TBL7", "SEK-Plattenträger", 35000, { "life_coplevel", "SCALAR", 7 } },
			{ "TAC_V_Sheriff_BA_TB2", "SEK-Plattenträger Assault", 35000, { "life_coplevel", "SCALAR", 7 } },
			{ "TAC_V_Sheriff_BA_TB3", "SEK-Plattenträger CQB", 35000, { "life_coplevel", "SCALAR", 7 } },
			{ "TAC_V_Sheriff_BA_TB7", "SEK-Plattenträger Gren", 35000, { "life_coplevel", "SCALAR", 7 } },
			{ "TAC_V_Sheriff_BA_TB4", "SEK-Plattenträger Medic", 35000, { "life_coplevel", "SCALAR", 7 } },
			{ "TAC_V_Sheriff_BA_TB6", "SEK-Plattenträger Pointman", 35000, { "life_coplevel", "SCALAR", 7 } },
			{ "TAC_V_Sheriff_BA_TB5", "SEK-Plattenträger MG", 35000, { "life_coplevel", "SCALAR", 7 } },
			{ "TAC_V_Sheriff_BA_TBL", "SEK-Plattenträger schwer", 35000, { "life_coplevel", "SCALAR", 8 } },
			{ "TAC_V_Sheriff_BA_TBL3_BK", "SEK-Plattenträger schwer", 35000, { "life_coplevel", "SCALAR", 8 } },
			{ "TAC_V_Sheriff_BA_TBL4", "SEK-Plattenträger schwer", 35000, { "life_coplevel", "SCALAR", 8 } },
			{ "EAL_polizei_plattentraeger_schwer", "schwerer SEK-Plattenträger (SK IV)", 75000, { "life_coplevel", "SCALAR", 9 } },
			{ "EAL_polizei_plattentraeger_breacher", "Explosionsgeschützter SEK-Plattenträger (SK III)", 50000, { "life_coplevel", "SCALAR", 10 } },
			{ "EAL_polizei_plattentraeger_leicht", "SEK-Plattenträger", 25000, { "life_coplevel", "SCALAR", 12 } },
			{ "TAC_FS_FOL_B", "SEK-JPC", 25000, { "life_coplevel", "SCALAR", 13 } },
			{ "TAC_V_CTBA", "SEK-Plattenträger", 25000, { "life_coplevel", "SCALAR", 13 } },
			{ "TAC_V_CTBA2", "SEK-Plattenträger", 25000, { "life_coplevel", "SCALAR", 13 } },
			{ "EAL_polizei_weste_leicht", "leichte SEK-Weste", 35000, { "life_coplevel", "SCALAR", 15 } },
			{ "EAL_polizei_weste_schwer", "SEK-Weste", 10000, { "life_coplevel", "SCALAR", 16 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_I_Parachute_02_F", "", 5000, { "", "", -1 } },
            { "B_Carryall_mcamo", "", 250, { "", "", -1 } },
			{ "tf_anarc210", "Langstreckenfunk", 25000, { "life_coplevel", "SCALAR", 12 } },
            { "B_AssaultPack_blk", "", 700, { "", "", -1 } }
        };
    };
	
	class bp {
        title = "STR_Shops_C_Police";
        license = "bp";
        side = "cop";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "EAL_bp_uniform", "BP-Uniform", 25, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_Watchcap_blk", "Beanie", 75, { "life_coplevel", "SCALAR", 1 } },
			{ "H_Cap_blk", "Polizeimütze", 250, { "life_coplevel", "SCALAR", 4 } },
			{ "EAL_polizei_uscap", "Polizeimütze mit Headset", 5000, { "life_coplevel", "SCALAR", 10 } },
			{ "H_Beret_blk_POLICE", "Beret", 75, { "life_coplevel", "SCALAR", 12 } },
			{ "H_Beret_Colonel", "PD Beret", 75, { "life_coplevel", "SCALAR", 15 } },
			{ "H_Beret_02", "PP Beret", 75, { "life_coplevel", "SCALAR", 17 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Shades_Black", "", 25, { "", "", -1 } },
            { "G_Shades_Blue", "", 20, { "", "", -1 } },
            { "G_Sport_Blackred", "", 20, { "", "", -1 } },
            { "G_Sport_Checkered", "", 20, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 20, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 20, { "", "", -1 } },
            { "G_Squares", "", 10, { "", "", -1 } },
            { "G_Aviator", "", 100, { "life_coplevel", "SCALAR", 15 } },
            { "G_Lady_Mirror", "", 150, { "", "", -1 } },
            { "G_Lady_Dark", "", 150, { "", "", -1 } },
            { "G_Lady_Blue", "", 150, { "", "", -1 } },
            { "G_Lowprofile", "", 30, { "", "", -1 } },
			{ "G_Tactical_Clear", "", 30, { "life_coplevel", "SCALAR", 9 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "TAC_HGB_B", "Polizeigürtel", 800, { "life_coplevel", "SCALAR", 1 } },
			{ "EAL_polizei_guertel", "Polizeigürtel", 800, { "life_coplevel", "SCALAR", 3 } },
			{ "TAC_FS_FOL_B", "JPC", 50000, { "life_coplevel", "SCALAR", 5 } },
			{ "EAL_polizei_weste_leicht", "", 35000, { "life_coplevel", "SCALAR", 7 } },
			{ "EAL_polizei_weste_schwer", "Nur im Notfall! schwere Polizeiweste", 50000, { "life_coplevel", "SCALAR", 9 } },
			{ "TAC_PBDFG2CPL_BK", "PdZ-Weste leicht Kragen Battlebelt", 80000, { "life_coplevel", "SCALAR", 11 } },
			{ "TAC_V_Sheriff_BA_TB3", "Plattenträger OHK", 60000, { "life_coplevel", "SCALAR", 13 } },
			{ "V_BandollierB_blk", "Polizeigurt", 250, { "life_coplevel", "SCALAR", 15 } },
			{ "EAL_polizei_plattentraeger_schwer", "schwerer Plattenträger", 50000, { "life_coplevel", "SCALAR", 17 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_I_Parachute_02_F", "", 5000, { "", "", -1 } },
            { "B_Carryall_mcamo", "", 250, { "", "", -1 } },
			{ "B_Bergen_blk", "Polizeirucksack", 2500, { "life_coplevel", "SCALAR", 6 } },
			{ "tf_anarc210", "Langstreckenfunk", 25000, { "life_coplevel", "SCALAR", 6 } },
            { "B_AssaultPack_blk", "", 700, { "life_coplevel", "SCALAR", 6 } }
        };
    };
	
	class kripo {
        title = "STR_Shops_C_Police";
        license = "kripo";
        side = "cop";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_IG_Guerilla2_2", "Zivilkleidung", 25, { "", "", -1 } },
			{ "U_IG_Guerilla2_3", "Zivilkleidung", 25, { "", "", -1 } },
			{ "U_I_G_resistanceLeader_F", "Rebell", 25, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_Watchcap_blk", "Beanie", 75, { "", "", -1 } },
			{ "H_Cap_tan", "", 250, { "", "", -1 } },
			{ "H_Cap_blk", "Polizeimütze", 250, { "life_coplevel", "SCALAR", 10 } },
			{ "H_Beret_blk_POLICE", "Beret", 75, { "life_coplevel", "SCALAR", 13 } },
			{ "H_Shemag_olive", "Rebell", 25000, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Shades_Black", "", 25, { "", "", -1 } },
            { "G_Shades_Blue", "", 20, { "", "", -1 } },
            { "G_Sport_Blackred", "", 20, { "", "", -1 } },
            { "G_Sport_Checkered", "", 20, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 20, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 20, { "", "", -1 } },
            { "G_Squares", "", 10, { "", "", -1 } },
            { "G_Lady_Mirror", "", 150, { "", "", -1 } },
            { "G_Lady_Dark", "", 150, { "", "", -1 } },
            { "G_Lady_Blue", "", 150, { "", "", -1 } },
			{ "G_Aviator", "", 100, { "life_coplevel", "SCALAR", 8 } },
            { "G_Lowprofile", "", 30, { "", "", -1 } },
			{ "G_Combat", "", 30, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
			{ "TAC_HGB_B", "Polizeigürtel", 800, { "life_coplevel", "SCALAR", 6 } },
			{ "TAC_PBDFG2_B_1", "PdZ-Weste", 60000, { "life_coplevel", "SCALAR", 7 } },
            { "V_Rangemaster_belt", "Battlebelt", 800, { "life_coplevel", "SCALAR", 8 } },
			{ "V_HarnessO_brn", "Rebell", 25000, { "", "", -1 } },
			{ "EAL_polizei_weste_leicht", "", 35000, { "life_coplevel", "SCALAR", 9 } },
			{ "EAL_polizei_weste_warn", "", 35000, { "life_coplevel", "SCALAR", 9 } },
			{ "EAL_polizei_weste_schwer", "", 55000, { "life_coplevel", "SCALAR", 10 } },
			{ "TAC_Jvest_U", "Weste", 35000, { "life_coplevel", "SCALAR", 13 } },
			{ "TAC_FS_FO_B", "Polizei-JPC", 70000, { "life_coplevel", "SCALAR", 14 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_I_Parachute_02_F", "", 5000, { "", "", -1 } },
            { "B_Carryall_mcamo", "", 250, { "", "", -1 } },
            { "B_Carryall_oli", "Zivilistenrucksack/Rebell", 700, { "", "", -1 } },
			{ "tf_anarc210", "Langstreckenfunk", 25000, { "", "", -1 } }
        };
    };
	
	class pilot {
        title = "STR_Shops_C_Police";
        license = "cAir";
        side = "cop";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "EAL_pilot_uniform", "Pilotenoverall", 25, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "EAL_helm_pilot", "", 75, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Aviator", "", 100, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_I_Parachute_02_F", "", 5000, { "", "", -1 } }
        };
    };
	
	class sniper {
        title = "STR_Shops_C_Police";
        license = "sniper";
        side = "cop";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "U_B_FullGhillie_lsh", "Ghillie grün", 10000, { "", "", -1 } },
			{ "U_B_FullGhillie_sard", "Ghillie halbtrocken", 10000, { "", "", -1 } },
			{ "U_B_FullGhillie_ard", "Ghillie trocken", 10000, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Bandanna_beast", "", 25, { "", "", -1 } },
            { "G_Bandanna_khk", "", 20, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_Chestrig_rgr", "leichte Scharfschützenweste", 25000, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } }
        };
    };

    class cop {
        title = "STR_Shops_C_Police";
        license = "";
        side = "cop";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "", "Uniform Hemd", -1, { "", "", -1 } },
            { "EAL_uniform_hemd_1", "Polizeimeisteranwärteruniform", 25, { "life_coplevel", "SCALAR", 1 } },
			{ "EAL_uniform_hemd_2", "Polizeimeisteruniform", 25, { "life_coplevel", "SCALAR", 2 } },
			{ "EAL_uniform_hemd_3", "Polizeiobermeisteruniform", 25, { "life_coplevel", "SCALAR", 3 } },
			{ "EAL_uniform_hemd_4", "Polizeihauptmeisteruniform", 25, { "life_coplevel", "SCALAR", 4 } },
			{ "EAL_uniform_hemd_5", "Polizeihauptmeister-mit-Zulage-Uniform", 25, { "life_coplevel", "SCALAR", 5 } },
			{ "EAL_uniform_hemd_6", "Polizeikommissaranwärteruniform", 25, { "life_coplevel", "SCALAR", 6 } },
			{ "EAL_uniform_hemd_7", "Polizeikommissaruniform", 25, { "life_coplevel", "SCALAR", 7 } },
			{ "EAL_uniform_hemd_8", "Polizeioberkommissaruniform", 25, { "life_coplevel", "SCALAR", 8 } },
			{ "EAL_uniform_hemd_9", "Polizeihauptkommissaruniform", 25, { "life_coplevel", "SCALAR", 9 } },
			{ "EAL_uniform_hemd_10", "Polizeihauptkommissar-mit-Zulage-Uniform", 25, { "life_coplevel", "SCALAR", 10 } },
			{ "EAL_uniform_hemd_11", "Erster-Polizeihauptkommissaruniform", 25, { "life_coplevel", "SCALAR", 11 } },
			{ "EAL_uniform_hemd_12", "Polizeiratsanwärteruniform", 25, { "life_coplevel", "SCALAR", 12 } },
			{ "EAL_uniform_hemd_13", "Polizeiratsuniform", 25, { "life_coplevel", "SCALAR", 13 } },
			{ "EAL_uniform_hemd_14", "Polizeioberratsuniform", 25, { "life_coplevel", "SCALAR", 14 } },
			{ "EAL_uniform_hemd_15", "Polizeidirektorenuniform", 25, { "life_coplevel", "SCALAR", 15 } },
			{ "EAL_uniform_hemd_16", "Leitender-Polizeidirektorenuniform", 25, { "life_coplevel", "SCALAR", 16 } },
			{ "EAL_uniform_hemd_17", "Vizepolizeipräsidentenuniform", 25, { "life_coplevel", "SCALAR", 17 } },
			{ "EAL_uniform_hemd_18", "Polizeipräsidentenuniform", 25, { "life_coplevel", "SCALAR", 18 } },
			{ "EAL_uniform_hemd_19", "Vizelandespolizeipräsidentenuniform", 25, { "life_coplevel", "SCALAR", 19 } },
			{ "EAL_uniform_hemd_20", "Landespolizeipräsidentenuniform", 25, { "life_coplevel", "SCALAR", 20 } },
			{ "", "Uniform Jacke", -1, { "", "", -1 } },
			{ "EAL_uniform_jacke_1", "Polizeimeisteranwärteruniform", 25, { "life_coplevel", "SCALAR", 1 } },
			{ "EAL_uniform_jacke_2", "Polizeimeisteruniform", 25, { "life_coplevel", "SCALAR", 2 } },
			{ "EAL_uniform_jacke_3", "Polizeiobermeisteruniform", 25, { "life_coplevel", "SCALAR", 3 } },
			{ "EAL_uniform_jacke_4", "Polizeihauptmeisteruniform", 25, { "life_coplevel", "SCALAR", 4 } },
			{ "EAL_uniform_jacke_5", "Polizeihauptmeister-mit-Zulage-Uniform", 25, { "life_coplevel", "SCALAR", 5 } },
			{ "EAL_uniform_jacke_6", "Polizeikommissaranwärteruniform", 25, { "life_coplevel", "SCALAR", 6 } },
			{ "EAL_uniform_jacke_7", "Polizeikommissaruniform", 25, { "life_coplevel", "SCALAR", 7 } },
			{ "EAL_uniform_jacke_8", "Polizeioberkommissaruniform", 25, { "life_coplevel", "SCALAR", 8 } },
			{ "EAL_uniform_jacke_9", "Polizeihauptkommissaruniform", 25, { "life_coplevel", "SCALAR", 9 } },
			{ "EAL_uniform_jacke_10", "Polizeihauptkommissar-mit-Zulage-Uniform", 25, { "life_coplevel", "SCALAR", 10 } },
			{ "EAL_uniform_jacke_11", "Erster-Polizeihauptkommissaruniform", 25, { "life_coplevel", "SCALAR", 11 } },
			{ "EAL_uniform_jacke_12", "Polizeiratsanwärteruniform", 25, { "life_coplevel", "SCALAR", 12 } },
			{ "EAL_uniform_jacke_13", "Polizeiratsuniform", 25, { "life_coplevel", "SCALAR", 13 } },
			{ "EAL_uniform_jacke_14", "Polizeioberratsuniform", 25, { "life_coplevel", "SCALAR", 14 } },
			{ "EAL_uniform_jacke_15", "Polizeidirektorenuniform", 25, { "life_coplevel", "SCALAR", 15 } },
			{ "EAL_uniform_jacke_16", "Leitender-Polizeidirektorenuniform", 25, { "life_coplevel", "SCALAR", 16 } },
			{ "EAL_uniform_jacke_17", "Vizepolizeipräsidentenuniform", 25, { "life_coplevel", "SCALAR", 17 } },
			{ "EAL_uniform_jacke_18", "Polizeipräsidentenuniform", 25, { "life_coplevel", "SCALAR", 18 } },
			{ "EAL_uniform_jacke_19", "Vizelandespolizeipräsidentenuniform", 25, { "life_coplevel", "SCALAR", 19 } },
			{ "EAL_uniform_jacke_20", "Landespolizeipräsidentenuniform", 25, { "life_coplevel", "SCALAR", 20 } },
			{ "", "Uniform Pullover", -1, { "", "", -1 } },
			{ "EAL_uniform_pullover_1", "Polizeimeisteranwärteruniform", 25, { "life_coplevel", "SCALAR", 1 } },
			{ "EAL_uniform_pullover_2", "Polizeimeisteruniform", 25, { "life_coplevel", "SCALAR", 2 } },
			{ "EAL_uniform_pullover_3", "Polizeiobermeisteruniform", 25, { "life_coplevel", "SCALAR", 3 } },
			{ "EAL_uniform_pullover_4", "Polizeihauptmeisteruniform", 25, { "life_coplevel", "SCALAR", 4 } },
			{ "EAL_uniform_pullover_5", "Polizeihauptmeister-mit-Zulage-Uniform", 25, { "life_coplevel", "SCALAR", 5 } },
			{ "EAL_uniform_pullover_6", "Polizeikommissaranwärteruniform", 25, { "life_coplevel", "SCALAR", 6 } },
			{ "EAL_uniform_pullover_7", "Polizeikommissaruniform", 25, { "life_coplevel", "SCALAR", 7 } },
			{ "EAL_uniform_pullover_8", "Polizeioberkommissaruniform", 25, { "life_coplevel", "SCALAR", 8 } },
			{ "EAL_uniform_pullover_9", "Polizeihauptkommissaruniform", 25, { "life_coplevel", "SCALAR", 9 } },
			{ "EAL_uniform_pullover_10", "Polizeihauptkommissar-mit-Zulage-Uniform", 25, { "life_coplevel", "SCALAR", 10 } },
			{ "EAL_uniform_pullover_11", "Erster-Polizeihauptkommissaruniform", 25, { "life_coplevel", "SCALAR", 11 } },
			{ "EAL_uniform_pullover_12", "Polizeiratsanwärteruniform", 25, { "life_coplevel", "SCALAR", 12 } },
			{ "EAL_uniform_pullover_13", "Polizeiratsuniform", 25, { "life_coplevel", "SCALAR", 13 } },
			{ "EAL_uniform_pullover_14", "Polizeioberratsuniform", 25, { "life_coplevel", "SCALAR", 14 } },
			{ "EAL_uniform_pullover_15", "Polizeidirektorenuniform", 25, { "life_coplevel", "SCALAR", 15 } },
			{ "EAL_uniform_pullover_16", "Leitender-Polizeidirektorenuniform", 25, { "life_coplevel", "SCALAR", 16 } },
			{ "EAL_uniform_pullover_17", "Vizepolizeipräsidentenuniform", 25, { "life_coplevel", "SCALAR", 17 } },
			{ "EAL_uniform_pullover_18", "Polizeipräsidentenuniform", 25, { "life_coplevel", "SCALAR", 18 } },
			{ "EAL_uniform_pullover_19", "Vizelandespolizeipräsidentenuniform", 25, { "life_coplevel", "SCALAR", 19 } },
			{ "EAL_uniform_pullover_20", "Landespolizeipräsidentenuniform", 25, { "life_coplevel", "SCALAR", 20 } },
			{ "U_B_Wetsuit", "Tauchanzug", 10000, { "life_coplevel", "SCALAR", 6 } },
			{ "U_B_FullGhillie_lsh", "Ghillie grün", 10000, { "life_coplevel", "SCALAR", 20 } },
			{ "U_B_FullGhillie_sard", "Ghillie halbtrocken", 10000, { "life_coplevel", "SCALAR", 20 } },
			{ "U_B_FullGhillie_ard", "Ghillie trocken", 10000, { "life_coplevel", "SCALAR", 20 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_Watchcap_blk", "Beanie", 75, { "life_coplevel", "SCALAR", 1 } },
			{ "H_Cap_blk", "Polizeimütze", 250, { "life_coplevel", "SCALAR", 4 } },
			{ "H_HelmetB_black", "Polizeihelm", 25000, { "life_coplevel", "SCALAR", 8 } },
			{ "EAL_polizei_uscap", "Polizeimütze mit Headset", 5000, { "life_coplevel", "SCALAR", 10 } },
			{ "H_Beret_blk_POLICE", "Beret", 75, { "life_coplevel", "SCALAR", 12 } },
			{ "H_Beret_Colonel", "PD Beret", 75, { "life_coplevel", "SCALAR", 15 } },
			{ "H_Beret_02", "PP Beret", 75, { "life_coplevel", "SCALAR", 17 } },
			{ "H_HelmetB_light_black", "Helm schwarz", 75, { "life_coplevel", "SCALAR", 20 } },
			{ "EAL_balaclava", "", 75, { "life_coplevel", "SCALAR", 20 } },
			{ "EAL_helmet_visor", "", 75, { "life_coplevel", "SCALAR", 20 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Shades_Black", "", 25, { "", "", -1 } },
            { "G_Shades_Blue", "", 20, { "", "", -1 } },
            { "G_Sport_Blackred", "", 20, { "", "", -1 } },
            { "G_Sport_Checkered", "", 20, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 20, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 20, { "", "", -1 } },
            { "G_Squares", "", 10, { "", "", -1 } },
            { "G_Aviator", "", 100, { "life_coplevel", "SCALAR", 15 } },
            { "G_Lady_Mirror", "", 150, { "", "", -1 } },
            { "G_Lady_Dark", "", 150, { "", "", -1 } },
            { "G_Lady_Blue", "", 150, { "", "", -1 } },
            { "G_Lowprofile", "", 30, { "", "", -1 } },
			{ "G_Diving", "", 30, { "life_coplevel", "SCALAR", 6 } },
			{ "G_Tactical_Clear", "", 30, { "life_coplevel", "SCALAR", 9 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "TAC_HGB_B", "Polizeigürtel", 800, { "life_coplevel", "SCALAR", 1 } },
			{ "EAL_polizei_guertel", "Polizeigürtel", 800, { "life_coplevel", "SCALAR", 2 } },
			{ "TAC_HSG_ABH_B", "Polizeibattlebelt", 8000, { "life_coplevel", "SCALAR", 3 } },
			{ "TAC_HSG_ABL_B", "Polizeibattlebelt", 8000, { "life_coplevel", "SCALAR", 4 } },
			{ "TAC_PBDFG2_B_1", "PdZ-Weste", 70000, { "life_coplevel", "SCALAR", 5 } },
			{ "V_RebreatherB", "", 25000, { "life_coplevel", "SCALAR", 6 } },
			{ "EAL_polizei_weste_leicht", "", 35000, { "life_coplevel", "SCALAR", 6 } },
			{ "EAL_polizei_weste_warn", "", 35000, { "life_coplevel", "SCALAR", 6 } },
			{ "EAL_polizei_weste_schwer", "", 50000, { "life_coplevel", "SCALAR", 7 } },
			{ "TAC_FS_FO_B", "Polizei-JPC", 75000, { "life_coplevel", "SCALAR", 8 } },
			{ "TAC_FS_FOL_B", "Polizei-JPC Battlebelt", 80000, { "life_coplevel", "SCALAR", 9 } },
			{ "TAC_PBDFG2C_B_1", "PdZ-Weste Kragen", 75000, { "life_coplevel", "SCALAR", 10 } },
			{ "TAC_V_Sheriff_BA_TB", "Polizei-Plattenträger", 90000, { "life_coplevel", "SCALAR", 11 } },
			{ "TAC_PBDFG2CPL_BK", "PdZ-Weste Kragen Battlebelt", 85000, { "life_coplevel", "SCALAR", 12 } },
			{ "TAC_PBDFG2D_B", "PdZ-Weste Kragen Battlebelt Beintasche", 88000, { "life_coplevel", "SCALAR", 13 } },
			{ "TAC_V_Sheriff_BA_TB3", "Polizei-Plattenträger", 90000, { "life_coplevel", "SCALAR", 14 } },
			{ "V_BandollierB_blk", "Polizeigurt", 25000, { "life_coplevel", "SCALAR", 15 } },
			{ "TAC_V_CTBA", "Polizei-Plattenträger", 95000, { "life_coplevel", "SCALAR", 16 } },
			{ "TAC_V_CTBA2", "Polizei-Plattenträger", 95000, { "life_coplevel", "SCALAR", 16 } },
			{ "EAL_polizei_plattentraeger_leicht", "schwerere Polizeiweste", 50000, { "life_coplevel", "SCALAR", 17 } },
			{ "EAL_polizei_plattentraeger_schwer", "sehr schwere Polizeiweste", 50000, { "life_coplevel", "SCALAR", 18 } },
			{ "EAL_polizei_plattentraeger_breacher", "schwerste Polizeiweste", 50000, { "life_coplevel", "SCALAR", 19 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_I_Parachute_02_F", "", 5000, { "", "", -1 } },
            { "B_Carryall_mcamo", "", 250, { "", "", -1 } },
			{ "tf_anarc210", "Langstreckenfunk", 25000, { "life_coplevel", "SCALAR", 3 } },
            { "B_Bergen_blk", "Polizeirucksack", 2500, { "life_coplevel", "SCALAR", 3 } },
			{ "B_AssaultPack_blk", "", 700, { "life_coplevel", "SCALAR", 6 } }
        };
    };

    class dive {
        title = "STR_Shops_C_Diving";
        license = "dive";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_B_Wetsuit", "", 2000, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Diving", "", 500, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_RebreatherB", "", 5000, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } }
        };
    };

    class gun_clothing {
        title = "STR_Shops_C_Gun";
        license = "gun";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_Rangemaster_belt", "", 4900, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } }
        };
    };

    class gang_clothing {
        title = "STR_Shops_C_Gang";
        license = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_Rangemaster_belt", "", 1900, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } }
        };
    };

    class med_clothing {
        title = "STR_MAR_EMS_Clothing_Shop";
        license = "medic";
        side = "med";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "EAL_medic_man_uniform", "Sanitätskleidung 1", 25, { "", "", -1 } },
			{ "EAL_medicDoc_man_uniform", "Sanitätskleidung 2", 25, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "H_Watchcap_blk", "", 25, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Shades_Black", "", 25, { "", "", -1 } },
            { "G_Shades_Blue", "", 20, { "", "", -1 } },
            { "G_Sport_Blackred", "", 20, { "", "", -1 } },
            { "G_Sport_Checkered", "", 20, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 20, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 20, { "", "", -1 } },
            { "G_Squares", "", 10, { "", "", -1 } },
            { "G_Aviator", "", 100, { "", "", -1 } },
            { "G_Lady_Mirror", "", 150, { "", "", -1 } },
            { "G_Lady_Dark", "", 150, { "", "", -1 } },
            { "G_Lady_Blue", "", 150, { "", "", -1 } },
            { "G_Lowprofile", "", 30, { "", "", -1 } },
            { "G_Combat", "", 55, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_BandollierB_blk", "", 25, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
			{ "B_MedicBergen_sgg", "", 25, { "", "", -1 } }
        };
    };
	
	class adac {
        title = "STR_Shops_C_ADAC";
        license = "adac";
        side = "med";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "H_Watchcap_blk", "", 25, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Shades_Black", "", 25, { "", "", -1 } },
            { "G_Shades_Blue", "", 20, { "", "", -1 } },
            { "G_Sport_Blackred", "", 20, { "", "", -1 } },
            { "G_Sport_Checkered", "", 20, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 20, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 20, { "", "", -1 } },
            { "G_Squares", "", 10, { "", "", -1 } },
            { "G_Aviator", "", 100, { "", "", -1 } },
            { "G_Lady_Mirror", "", 150, { "", "", -1 } },
            { "G_Lady_Dark", "", 150, { "", "", -1 } },
            { "G_Lady_Blue", "", 150, { "", "", -1 } },
            { "G_Lowprofile", "", 30, { "", "", -1 } },
            { "G_Combat", "", 55, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_BandollierB_blk", "", 25, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } }
        };
    };
	
	class reb {
        title = "STR_Shops_C_Rebel";
        license = "rebel";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "U_I_C_Soldier_Para_1_F", "", 55000, { "", "", -1 } },
			{ "U_I_C_Soldier_Para_2_F", "", 55000, { "", "", -1 } },
			{ "U_I_C_Soldier_Para_3_F", "", 55000, { "", "", -1 } },
			{ "U_I_C_Soldier_Para_4_F", "", 55000, { "", "", -1 } },
			{ "U_I_C_Soldier_Para_5_F", "", 55000, { "", "", -1 } },
            { "U_I_C_Soldier_Bandit_1_F", "", 50000, { "", "", -1 } },
            { "U_I_C_Soldier_Bandit_2_F", "", 51000, { "", "", -1 } }, //Apex DLC
            { "U_I_C_Soldier_Bandit_3_F", "", 50032, { "", "", -1 } }, //Apex DLC
            { "U_I_C_Soldier_Bandit_4_F", "", 50020, { "", "", -1 } }, //Apex DLC
            { "U_I_C_Soldier_Bandit_5_F", "", 50020, { "", "", -1 } }, //Apex DLC
            { "U_I_C_Soldier_Camo_F", "", 57000, { "", "", -1 } } //Apex DLC
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_ShemagOpen_tan", "", 850, { "", "", -1 } },
            { "H_Shemag_olive", "", 850, { "", "", -1 } },
            { "H_ShemagOpen_khk", "", 800, { "", "", -1 } },
            { "H_MilCap_oucamo", "", 1200, { "", "", -1 } },
            { "H_Bandanna_camo", "", 650, { "", "", -1 } },
			{ "H_Bandanna_mcamo", "", 650, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Shades_Black", "", 25, { "", "", -1 } },
            { "G_Shades_Blue", "", 20, { "", "", -1 } },
            { "G_Sport_Blackred", "", 20, { "", "", -1 } },
            { "G_Sport_Checkered", "", 20, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 20, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 20, { "", "", -1 } },
            { "G_Squares", "", 10, { "", "", -1 } },
            { "G_Lowprofile", "", 30, { "", "", -1 } },
            { "G_Combat", "", 55, { "", "", -1 } },
            // BI
            { "G_Balaclava_blk", "", 150, { "", "", -1 } },
            { "G_Balaclava_combat", "", 150, { "", "", -1 } },
            { "G_Balaclava_lowprofile", "", 150, { "", "", -1 } },
            { "G_Balaclava_oli", "", 150, { "", "", -1 } },
            { "G_Bandanna_aviator", "", 150, { "", "", -1 } },
            { "G_Bandanna_beast", "", 150, { "", "", -1 } },
            { "G_Bandanna_blk", "", 150, { "", "", -1 } },
            { "G_Bandanna_khk", "", 150, { "", "", -1 } },
            { "G_Bandanna_oli", "", 150, { "", "", -1 } },
            { "G_Bandanna_shades", "", 150, { "", "", -1 } },
            { "G_Bandanna_sport", "", 150, { "", "", -1 } },
            { "G_Bandanna_tan", "", 150, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_TacVest_khk", "", 12500, { "", "", -1 } },
            { "V_BandollierB_cbr", "", 4500, { "", "", -1 } },
            { "V_HarnessO_brn", "", 7500, { "", "", -1 } },
			{ "V_TacChestrig_grn_F", "", 12500, { "", "", -1 } },
			{ "V_TacChestrig_oli_F", "", 12500, { "", "", -1 } },
			{ "V_TacChestrig_cbr_F", "", 12500, { "", "", -1 } },
			{ "V_TacVestIR_blk", "Suicide Vest!", 2500000, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_AssaultPack_khk", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_dgtl", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_rgr", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_sgg", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_blk", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_cbr", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_mcamo", "", 2000, { "", "", -1 } },
            { "B_TacticalPack_oli", "", 2500, { "", "", -1 } },
            { "B_Kitbag_mcamo", "", 3500, { "", "", -1 } },
            { "B_Kitbag_sgg", "", 3500, { "", "", -1 } },
            { "B_Kitbag_cbr", "", 3500, { "", "", -1 } },
            { "B_Bergen_sgg", "", 6500, { "", "", -1 } },
            { "B_Bergen_mcamo", "", 6500, { "", "", -1 } },
            { "B_Bergen_rgr", "", 6500, { "", "", -1 } },
            { "B_Bergen_blk", "", 6500, { "", "", -1 } },
            { "B_FieldPack_blk", "", 5000, { "", "", -1 } },
            { "B_FieldPack_ocamo", "", 5000, { "", "", -1 } },
            { "B_FieldPack_oucamo", "", 5000, { "", "", -1 } },
            { "B_Carryall_ocamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_oucamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_mcamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_oli", "", 7500, { "", "", -1 } },
            { "B_Carryall_khk", "", 7500, { "", "", -1 } },
            { "B_Carryall_cbr", "", 7500, { "", "", -1 } },
            { "B_OutdoorPack_blk", "", 500, { "", "", -1 } }
        };
    };
	
	class schwarz {
        title = "STR_Shops_C_Rebel";
        license = "schwarz";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "U_I_C_Soldier_Para_1_F", "", 55000, { "", "", -1 } },
			{ "U_I_C_Soldier_Para_2_F", "", 55000, { "", "", -1 } },
			{ "U_I_C_Soldier_Para_3_F", "", 55000, { "", "", -1 } },
			{ "U_I_C_Soldier_Para_4_F", "", 55000, { "", "", -1 } },
			{ "U_I_C_Soldier_Para_5_F", "", 55000, { "", "", -1 } },
            { "U_I_C_Soldier_Bandit_1_F", "", 50000, { "", "", -1 } },
            { "U_I_C_Soldier_Bandit_2_F", "", 51000, { "", "", -1 } }, //Apex DLC
            { "U_I_C_Soldier_Bandit_3_F", "", 50032, { "", "", -1 } }, //Apex DLC
            { "U_I_C_Soldier_Bandit_4_F", "", 50020, { "", "", -1 } }, //Apex DLC
            { "U_I_C_Soldier_Bandit_5_F", "", 50020, { "", "", -1 } }, //Apex DLC
            { "U_I_C_Soldier_Camo_F", "", 57000, { "", "", -1 } }, //Apex DLC
            { "U_IG_Guerilla1_1", "", 5000, {"", "", -1} },
            { "U_I_G_resistanceLeader_F", "", 11500, { "", "", -1 } },
            { "U_IG_leader", "Guerilla Leader", 15340, { "", "", -1 } },
			{ "U_C_Scientist", "Strahlenanzug", 100000, { "", "", -1 } },
            { "U_B_survival_uniform", "alte Nato-Uniform", 20000, { "", "", -1 } },
			{ "U_O_OfficerUniform_ocamo", "Russischer Offizier", 15000, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_ShemagOpen_tan", "", 850, { "", "", -1 } },
            { "H_Shemag_olive", "", 850, { "", "", -1 } },
            { "H_ShemagOpen_khk", "", 800, { "", "", -1 } },
            { "H_MilCap_oucamo", "", 1200, { "", "", -1 } },
            { "H_Bandanna_camo", "", 650, { "", "", -1 } },
			{ "H_Bandanna_mcamo", "", 650, { "", "", -1 } },
			{ "H_HelmetB_plain_mcamo", "alter NATO-Helm", 9000, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Shades_Black", "", 25, { "", "", -1 } },
            { "G_Shades_Blue", "", 20, { "", "", -1 } },
            { "G_Sport_Blackred", "", 20, { "", "", -1 } },
            { "G_Sport_Checkered", "", 20, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 20, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 20, { "", "", -1 } },
            { "G_Squares", "", 10, { "", "", -1 } },
            { "G_Lowprofile", "", 30, { "", "", -1 } },
            { "G_Combat", "", 55, { "", "", -1 } },
            // BI
            { "G_Balaclava_blk", "", 150, { "", "", -1 } },
            { "G_Balaclava_combat", "", 150, { "", "", -1 } },
            { "G_Balaclava_lowprofile", "", 150, { "", "", -1 } },
            { "G_Balaclava_oli", "", 150, { "", "", -1 } },
            { "G_Bandanna_aviator", "", 150, { "", "", -1 } },
            { "G_Bandanna_beast", "", 150, { "", "", -1 } },
            { "G_Bandanna_blk", "", 150, { "", "", -1 } },
            { "G_Bandanna_khk", "", 150, { "", "", -1 } },
            { "G_Bandanna_oli", "", 150, { "", "", -1 } },
            { "G_Bandanna_shades", "", 150, { "", "", -1 } },
            { "G_Bandanna_sport", "", 150, { "", "", -1 } },
            { "G_Bandanna_tan", "", 150, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_TacVest_khk", "", 12500, { "", "", -1 } },
            { "V_BandollierB_cbr", "", 4500, { "", "", -1 } },
            { "V_HarnessO_brn", "", 7500, { "", "", -1 } },
			{ "V_TacChestrig_grn_F", "", 12500, { "", "", -1 } },
			{ "V_TacChestrig_oli_F", "", 12500, { "", "", -1 } },
			{ "V_TacChestrig_cbr_F", "", 12500, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_AssaultPack_khk", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_dgtl", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_rgr", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_sgg", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_blk", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_cbr", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_mcamo", "", 2000, { "", "", -1 } },
            { "B_TacticalPack_oli", "", 2500, { "", "", -1 } },
            { "B_Kitbag_mcamo", "", 3500, { "", "", -1 } },
            { "B_Kitbag_sgg", "", 3500, { "", "", -1 } },
            { "B_Kitbag_cbr", "", 3500, { "", "", -1 } },
            { "B_Bergen_sgg", "", 6500, { "", "", -1 } },
            { "B_Bergen_mcamo", "", 6500, { "", "", -1 } },
            { "B_Bergen_rgr", "", 6500, { "", "", -1 } },
            { "B_Bergen_blk", "", 6500, { "", "", -1 } },
            { "B_FieldPack_blk", "", 5000, { "", "", -1 } },
            { "B_FieldPack_ocamo", "", 5000, { "", "", -1 } },
            { "B_FieldPack_oucamo", "", 5000, { "", "", -1 } },
            { "B_Carryall_ocamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_oucamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_mcamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_oli", "", 7500, { "", "", -1 } },
            { "B_Carryall_khk", "", 7500, { "", "", -1 } },
            { "B_Carryall_cbr", "", 7500, { "", "", -1 } },
            { "B_OutdoorPack_blk", "", 500, { "", "", -1 } },
			{ "B_ViperHarness_khk_F", "", 10000, { "", "", -1 } },
			{ "B_ViperHarness_oli_F", "", 10000, { "", "", -1 } },
			{ "B_ViperLightHarness_khk_F", "", 9000, { "", "", -1 } },
			{ "B_ViperLightHarness_oli_F", "", 9000, { "", "", -1 } }
        };
    };
	
	class sonder {
        title = "STR_Shops_C_Rebel";
        license = "schwarz";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "U_I_C_Soldier_Para_1_F", "", 55000, { "", "", -1 } },
			{ "U_I_C_Soldier_Para_2_F", "", 55000, { "", "", -1 } },
			{ "U_I_C_Soldier_Para_3_F", "", 55000, { "", "", -1 } },
			{ "U_I_C_Soldier_Para_4_F", "", 55000, { "", "", -1 } },
			{ "U_I_C_Soldier_Para_5_F", "", 55000, { "", "", -1 } },
            { "U_I_C_Soldier_Bandit_1_F", "", 50000, { "", "", -1 } },
            { "U_I_C_Soldier_Bandit_2_F", "", 51000, { "", "", -1 } }, //Apex DLC
            { "U_I_C_Soldier_Bandit_3_F", "", 50032, { "", "", -1 } }, //Apex DLC
            { "U_I_C_Soldier_Bandit_4_F", "", 50020, { "", "", -1 } }, //Apex DLC
            { "U_I_C_Soldier_Bandit_5_F", "", 50020, { "", "", -1 } }, //Apex DLC
            { "U_I_C_Soldier_Camo_F", "", 57000, { "", "", -1 } }, //Apex DLC
            { "U_IG_Guerilla1_1", "", 5000, {"", "", -1} },
            { "U_I_G_resistanceLeader_F", "", 11500, { "", "", -1 } },
            { "U_O_SpecopsUniform_ocamo", "", 17500, { "", "", -1 } },
            { "U_O_PilotCoveralls", "", 15610, { "", "", -1 } },
            { "U_IG_leader", "Guerilla Leader", 15340, { "", "", -1 } },
            { "U_O_GhillieSuit", "Ghillie", 15000, { "", "", -1 } },
			{ "U_C_Scientist", "Strahlenanzug", 100000, { "", "", -1 } },
            { "U_B_survival_uniform", "alte Nato-Uniform", 20000, { "", "", -1 } },
			{ "U_O_OfficerUniform_ocamo", "Russischer Offizier", 15000, { "", "", -1 } },
			{ "U_O_CombatUniform_oucamo", "", 15000, { "", "", -1 } },
			{ "U_O_FullGhillie_lsh", "", 15000, { "", "", -1 } },
			{ "U_O_FullGhillie_sard", "", 15000, { "", "", -1 } },
			{ "U_O_FullGhillie_ard", "", 15000, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_HelmetO_ocamo", "", 2500, { "", "", -1 } },
			{ "H_ShemagOpen_tan", "", 850, { "", "", -1 } },
            { "H_Shemag_olive", "", 850, { "", "", -1 } },
            { "H_ShemagOpen_khk", "", 800, { "", "", -1 } },
            { "H_MilCap_oucamo", "", 1200, { "", "", -1 } },
            { "H_Bandanna_camo", "", 650, { "", "", -1 } },
			{ "H_Bandanna_mcamo", "", 650, { "", "", -1 } },
			{ "H_HelmetB_plain_mcamo", "alter NATO-Helm", 9000, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Shades_Black", "", 25, { "", "", -1 } },
            { "G_Shades_Blue", "", 20, { "", "", -1 } },
            { "G_Sport_Blackred", "", 20, { "", "", -1 } },
            { "G_Sport_Checkered", "", 20, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 20, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 20, { "", "", -1 } },
            { "G_Squares", "", 10, { "", "", -1 } },
            { "G_Lowprofile", "", 30, { "", "", -1 } },
            { "G_Combat", "", 55, { "", "", -1 } },
            // BI
            { "G_Balaclava_blk", "", 150, { "", "", -1 } },
            { "G_Balaclava_combat", "", 150, { "", "", -1 } },
            { "G_Balaclava_lowprofile", "", 150, { "", "", -1 } },
            { "G_Balaclava_oli", "", 150, { "", "", -1 } },
            { "G_Bandanna_aviator", "", 150, { "", "", -1 } },
            { "G_Bandanna_beast", "", 150, { "", "", -1 } },
            { "G_Bandanna_blk", "", 150, { "", "", -1 } },
            { "G_Bandanna_khk", "", 150, { "", "", -1 } },
            { "G_Bandanna_oli", "", 150, { "", "", -1 } },
            { "G_Bandanna_shades", "", 150, { "", "", -1 } },
            { "G_Bandanna_sport", "", 150, { "", "", -1 } },
            { "G_Bandanna_tan", "", 150, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_TacVest_khk", "", 12500, { "", "", -1 } },
            { "V_BandollierB_cbr", "", 4500, { "", "", -1 } },
            { "V_HarnessO_brn", "", 7500, { "", "", -1 } },
			{ "V_TacChestrig_grn_F", "", 12500, { "", "", -1 } },
			{ "V_TacChestrig_oli_F", "", 12500, { "", "", -1 } },
			{ "V_TacChestrig_cbr_F", "", 12500, { "", "", -1 } },
			{ "V_PlateCarrier1_rgr_noflag_F", "", 50500, { "", "", -1 } },
			{ "V_PlateCarrier2_rgr_noflag_F", "", 50500, { "", "", -1 } },
			{ "V_TacVestIR_blk", "Suicide Vest!", 2500000, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_AssaultPack_khk", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_dgtl", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_rgr", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_sgg", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_blk", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_cbr", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_mcamo", "", 2000, { "", "", -1 } },
            { "B_TacticalPack_oli", "", 2500, { "", "", -1 } },
            { "B_Kitbag_mcamo", "", 3500, { "", "", -1 } },
            { "B_Kitbag_sgg", "", 3500, { "", "", -1 } },
            { "B_Kitbag_cbr", "", 3500, { "", "", -1 } },
            { "B_Bergen_sgg", "", 6500, { "", "", -1 } },
            { "B_Bergen_mcamo", "", 6500, { "", "", -1 } },
            { "B_Bergen_rgr", "", 6500, { "", "", -1 } },
            { "B_Bergen_blk", "", 6500, { "", "", -1 } },
            { "B_FieldPack_blk", "", 5000, { "", "", -1 } },
            { "B_FieldPack_ocamo", "", 5000, { "", "", -1 } },
            { "B_FieldPack_oucamo", "", 5000, { "", "", -1 } },
            { "B_Carryall_ocamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_oucamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_mcamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_oli", "", 7500, { "", "", -1 } },
            { "B_Carryall_khk", "", 7500, { "", "", -1 } },
            { "B_Carryall_cbr", "", 7500, { "", "", -1 } },
            { "B_OutdoorPack_blk", "", 500, { "", "", -1 } },
			{ "B_ViperHarness_khk_F", "", 10000, { "", "", -1 } },
			{ "B_ViperHarness_oli_F", "", 10000, { "", "", -1 } },
			{ "B_ViperLightHarness_khk_F", "", 9000, { "", "", -1 } },
			{ "B_ViperLightHarness_oli_F", "", 9000, { "", "", -1 } }
        };
    };

    class kart {
        title = "STR_Shops_C_Kart";
        license = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_C_Driver_1_black", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_blue", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_red", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_orange", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_green", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_white", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_yellow", "", 1500, { "", "", -1 } },
            { "U_C_Driver_2", "", 3500, { "", "", -1 } },
            { "U_C_Driver_1", "", 3600, { "", "", -1 } },
            { "U_C_Driver_3", "", 3700, { "", "", -1 } },
            { "U_C_Driver_4", "", 3700, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_RacingHelmet_1_black_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_red_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_white_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_blue_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_yellow_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_green_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_F", "", 2500, { "", "", -1 } },
            { "H_RacingHelmet_2_F", "", 2500, { "", "", -1 } },
            { "H_RacingHelmet_3_F", "", 2500, { "", "", -1 } },
            { "H_RacingHelmet_4_F", "", 2500, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } }
        };
    };
};
