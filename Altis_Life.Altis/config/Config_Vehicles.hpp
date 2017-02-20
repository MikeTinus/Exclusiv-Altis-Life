class CarShops {
    /*
    *    ARRAY FORMAT:
    *        0: STRING (Classname)
    *        1: ARRAY (This is for limiting items to certain things)
    *            0: Variable to read from
    *            1: Variable Value Type (SCALAR / BOOL /EQUAL)
    *            2: What to compare to (-1 = Check Disabled)
    *
    *   BLUFOR Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_WEST
    *   OPFOR Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EAST
    *   Independent Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_GUER
    *   Civilian Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_CIV
    */
    class civ_car {
        side = "civ";
        vehicles[] = {
            { "Mrshounka_r5_violet", { "", "", -1 } },
            { "Mrshounka_r5_rose", { "", "", -1 } },
            { "Mrshounka_r5_orange", { "", "", -1 } },
            { "Mrshounka_r5_noir", { "", "", -1 } },
            { "Mrshounka_r5_jaune", { "", "", -1 } },
            { "Mrshounka_r5_grise", { "", "", -1 } },
            { "Mrshounka_r5_bleufonce", { "", "", -1 } },
            { "Mrshounka_r5_civ", { "", "", -1 } },
            { "RDS_Gaz24_Civ_03", { "", "", -1 } },
            { "RDS_Gaz24_Civ_01", { "", "", -1 } },
            { "RDS_Gaz24_Civ_02", { "", "", -1 } },
            { "RDS_Golf4_Civ_01", { "", "", -1 } },
            { "RDS_S1203_Civ_01", { "", "", -1 } },
            { "RDS_Octavia_Civ_01", { "", "", -1 } },
            { "RDS_Lada_Civ_01", { "", "", -1 } },
            { "RDS_Lada_Civ_04", { "", "", -1 } },
            { "RDS_Lada_Civ_03", { "", "", -1 } },
            { "RDS_Lada_Civ_02", { "", "", -1 } },
            { "A3L_RX7_White", { "", "", -1 } },
            { "A3L_RX7_Blue", { "", "", -1 } },
            { "A3L_RX7_Red", { "", "", -1 } },
            { "A3L_RX7_Black", { "", "", -1 } },
            { "Jonzie_30CSL", { "", "", -1 } },
            { "Jonzie_Datsun_510", { "", "", -1 } },
            { "Jonzie_Datsun_Z432", { "", "", -1 } },
            { "Mrshounka_mercedes_190_p_civ", { "", "", -1 } },
            { "Mrshounka_mercedes_190_p_jaune", { "", "", -1 } },
            { "Mrshounka_mercedes_190_p_grise", { "", "", -1 } },
            { "shounka_clk", { "", "", -1 } },
            { "shounka_clk_bleufonce", { "", "", -1 } },
            { "shounka_clk_grise", { "", "", -1 } },
            { "shounka_clk_jaune", { "", "", -1 } },
            { "shounka_clk_noir", { "", "", -1 } },
            { "shounka_clk_orange", { "", "", -1 } },
            { "shounka_clk_rose", { "", "", -1 } },
			{ "shounka_clk_violet", { "", "", -1 } },
            { "S_Skyline_Yellow", { "", "", -1 } },
            { "S_Skyline_White", { "", "", -1 } },
            { "S_Skyline_Red", { "", "", -1 } },
			{ "S_Skyline_Black", { "", "", -1 } },
            { "S_Skyline_Blue", { "", "", -1 } },
            { "S_Skyline_Purple", { "", "", -1 } },
            { "Jonzie_Mini_Cooper", { "", "", -1 } },
            { "Jonzie_Mini_Cooper_R_spec", { "", "", -1 } },
            { "Jonzie_Galant", { "", "", -1 } },
            { "mrshounka_92_civ", { "", "", -1 } },
            { "mrshounka_92_civ_noir", { "", "", -1 } },
            { "mrshounka_92_civ_jaune", { "", "", -1 } },
            { "Jonzie_STI", { "", "", -1 } },
            { "ivory_wrx", { "", "", -1 } },
            { "Jonzie_Corolla", { "", "", -1 } },
            { "A3L_VolksWagenGolfGTiwhite", { "", "", -1 } },
            { "A3L_VolksWagenGolfGTired", { "", "", -1 } },
            { "A3L_VolksWagenGolfGTiblue", { "", "", -1 } },
            { "A3L_VolksWagenGolfGTiblack", { "", "", -1 } },
            { "shounka_transam_violet", { "", "", -1 } },
            { "shounka_transam_rose", { "", "", -1 } },
            { "shounka_transam_orange", { "", "", -1 } },
            { "shounka_transam_noir", { "", "", -1 } },
            { "shounka_transam_jaune", { "", "", -1 } },
            { "shounka_transam_grise", { "", "", -1 } },
            { "shounka_transam_bleufonce", { "", "", -1 } },
            { "shounka_transam", { "", "", -1 } },
			{ "Mrshounka_yamaha_p_v", { "", "", -1 } },
            { "Mrshounka_yamaha_p_rose", { "", "", -1 } },
            { "Mrshounka_yamaha_p_o", { "", "", -1 } },
            { "Mrshounka_yamaha_p_noir", { "", "", -1 } },
            { "Mrshounka_yamaha_p_j", { "", "", -1 } },
            { "Mrshounka_yamaha_p_g", { "", "", -1 } },
            { "Mrshounka_yamaha_p_bf", { "", "", -1 } },
            { "Mrshounka_yamaha_p", { "", "", -1 } },
            { "shounka_harley_a3_rouge", { "", "", -1 } },
            { "shounka_harley_a3_noir", { "", "", -1 } },
            { "shounka_harley_a3_lolz", { "", "", -1 } },
            { "shounka_harley_a3_bleu", { "", "", -1 } },
            { "shounka_harley_a3", { "", "", -1 } },
            { "Mrshounka_ducati_p_v", { "", "", -1 } },
            { "Mrshounka_ducati_p_rose", { "", "", -1 } },
            { "Mrshounka_ducati_p_o", { "", "", -1 } },
            { "Mrshounka_ducati_p_noir", { "", "", -1 } },
            { "Mrshounka_ducati_p_j", { "", "", -1 } },
            { "Mrshounka_ducati_p_g", { "", "", -1 } },
            { "Mrshounka_ducati_p_bf", { "", "", -1 } },
            { "Mrshounka_ducati_p", { "", "", -1 } },
			{ "B_Quadbike_01_F", { "", "", -1 } },
            { "C_Hatchback_01_F", { "", "", -1 } },
            { "C_Offroad_01_F", { "", "", -1 } },
			{ "C_Offroad_02_unarmed_F", { "", "", -1 } },
            { "C_SUV_01_F", { "", "", -1 } },
            { "C_Hatchback_01_sport_F", { "", "", -1 } },
			{ "C_Hatchback_01_beigecustom_F", { "", "", -1 } },
			{ "SUV_01_base_orange_F", { "", "", -1 } },
			{ "shounka_a3_cliors_civ", { "", "", -1 } },
			{ "shounka_a3_cliors_civ_bleufonce", { "", "", -1 } },
			{ "shounka_a3_cliors_civ_grise", { "", "", -1 } },
			{ "shounka_a3_cliors_civ_jaune", { "", "", -1 } },
			{ "shounka_a3_cliors_civ_noir", { "", "", -1 } },
			{ "shounka_a3_cliors_civ_orange", { "", "", -1 } },
			{ "shounka_a3_cliors_civ_rose", { "", "", -1 } },
			{ "shounka_a3_cliors_civ_violet", { "", "", -1 } },
			{ "Jonzie_Raptor", { "", "", -1 } },
			{ "Mrshounka_raptor_civ", { "", "", -1 } },
			{ "Mrshounka_raptor2_civ", { "", "", -1 } },
			{ "Mrshounka_raptor2_bleufonce", { "", "", -1 } },
			{ "Mrshounka_raptor2_grise", { "", "", -1 } },
			{ "Mrshounka_raptor2_jaune", { "", "", -1 } },
			{ "Mrshounka_raptor2_noir", { "", "", -1 } },
			{ "Mrshounka_raptor2_orange", { "", "", -1 } },
			{ "Mrshounka_raptor2_violet", { "", "", -1 } },
			{ "Mrshounka_raptor2_rouge", { "", "", -1 } },
			{ "Mrshounka_golfvi_civ", { "", "", -1 } },
			{ "Mrshounka_golfvi_bleufonce", { "", "", -1 } },
			{ "Mrshounka_golfvi_grise", { "", "", -1 } },
			{ "Mrshounka_golfvi_jaune", { "", "", -1 } },
			{ "Mrshounka_golfvi_noir", { "", "", -1 } },
			{ "Mrshounka_golfvi_orange", { "", "", -1 } },
			{ "Mrshounka_golfvi_rose", { "", "", -1 } },
			{ "Mrshounka_golfvi_violet", { "", "", -1 } },
			{ "Jonzie_VE", { "", "", -1 } },
			{ "Jonzie_Ute", { "", "", -1 } },
			{ "Mrshounka_hummer_civ_noir", { "", "", -1 } },
			{ "Mrshounka_hummer_civ_grise", { "", "", -1 } },
			{ "shounka_h2_bleufonce", { "", "", -1 } },
			{ "shounka_h2_jaune", { "", "", -1 } },
			{ "shounka_h2_noir", { "", "", -1 } },
			{ "Mrshounka_twingo_p_j", { "", "", -1 } },
			{ "Mrshounka_twingo_p_g", { "", "", -1 } },
			{ "Mrshounka_twingo_p_bf", { "", "", -1 } },
			{ "Mrshounka_twingo_p", { "", "", -1 } },
			{ "Mrshounka_megane_rs_2015_violet", { "", "", -1 } },
			{ "Mrshounka_megane_rs_2015_rouge", { "", "", -1 } },
			{ "Mrshounka_megane_rs_2015_rose", { "", "", -1 } },
			{ "Mrshounka_megane_rs_2015_orange", { "", "", -1 } },
			{ "Mrshounka_megane_rs_2015_noir", { "", "", -1 } },
			{ "Mrshounka_megane_rs_2015_jaune", { "", "", -1 } },
			{ "Mrshounka_megane_rs_2015_grise", { "", "", -1 } },
			{ "Mrshounka_megane_rs_2015_bleufonce", { "", "", -1 } },
			{ "Mrshounka_megane_rs_2015_civ", { "", "", -1 } },
			{ "Mrshounka_cherokee_noir", { "", "", -1 } },
			{ "Mrshounka_cherokee_noir_blanc", { "", "", -1 } },
			{ "Mrshounka_cherokee_noir_bleu", { "", "", -1 } },
			{ "Mrshounka_cherokee_noir_bleu_mat", { "", "", -1 } },
			{ "Mrshounka_cherokee_noir_mat", { "", "", -1 } },
			{ "Mrshounka_cherokee_noir_rouge", { "", "", -1 } },
			{ "Mrshounka_cherokee_noir_rouge_mat", { "", "", -1 } },
			{ "Mrshounka_cherokee_noir_violet", { "", "", -1 } },
			{ "Mrshounka_cherokee_noir_violet_mat", { "", "", -1 } },
			{ "Jonzie_Ceed", { "", "", -1 } },
			{ "Mrshounka_evox_civ", { "", "", -1 } },
			{ "Mrshounka_evox_bleufonce", { "", "", -1 } },
			{ "Mrshounka_evox_grise", { "", "", -1 } },
			{ "Mrshounka_evox_jaune", { "", "", -1 } },
			{ "Mrshounka_evox_noir", { "", "", -1 } },
			{ "Mrshounka_evox_orange", { "", "", -1 } },
			{ "Mrshounka_evox_rose", { "", "", -1 } },
			{ "Mrshounka_evox_violet", { "", "", -1 } },
			{ "Mrshounka_c63_2015_civ", { "", "", -1 } },
			{ "Mrshounka_c63_2015_mat", { "", "", -1 } },
			{ "Mrshounka_c63_2015_bleufonce", { "", "", -1 } },
			{ "Mrshounka_c63_2015_mat_b", { "", "", -1 } },
			{ "Mrshounka_c63_2015_grise", { "", "", -1 } },
			{ "Mrshounka_c63_2015_jaune", { "", "", -1 } },
			{ "Mrshounka_c63_2015_noir", { "", "", -1 } },
			{ "Mrshounka_c63_2015_mat_n", { "", "", -1 } },
			{ "Mrshounka_c63_2015_orange", { "", "", -1 } },
			{ "Mrshounka_c63_2015_rose", { "", "", -1 } },
			{ "Mrshounka_c63_2015_violet", { "", "", -1 } },
			{ "shounka_porsche911_violet", { "", "", -1 } },
			{ "shounka_porsche911_rose", { "", "", -1 } },
			{ "shounka_porsche911_orange", { "", "", -1 } },
			{ "shounka_porsche911_noir", { "", "", -1 } },
			{ "shounka_porsche911_jaune", { "", "", -1 } },
			{ "shounka_porsche911_grise", { "", "", -1 } },
			{ "shounka_porsche911_bleufonce", { "", "", -1 } },
			{ "shounka_porsche911", { "", "", -1 } },
			{ "shounka_a3_peugeot508_civ_violet", { "", "", -1 } },
			{ "shounka_a3_peugeot508_civ_rose", { "", "", -1 } },
			{ "shounka_a3_peugeot508_civ_orange", { "", "", -1 } },
			{ "shounka_a3_peugeot508_civ_noir", { "", "", -1 } },
			{ "shounka_a3_peugeot508_civ_jaune", { "", "", -1 } },
			{ "shounka_a3_peugeot508_civ_grise", { "", "", -1 } },
			{ "shounka_a3_peugeot508_civ_bleufoncea", { "", "", -1 } },
			{ "shounka_a3_peugeot508_civ", { "", "", -1 } },
			{ "Mrshounka_subaru08_violet", { "", "", -1 } },
			{ "Mrshounka_subaru08_rose", { "", "", -1 } },
			{ "Mrshounka_subaru08_orange", { "", "", -1 } },
			{ "Mrshounka_subaru08_noir", { "", "", -1 } },
			{ "Mrshounka_subaru08_jaune", { "", "", -1 } },
			{ "Mrshounka_subaru08_grise", { "", "", -1 } },
			{ "Mrshounka_subaru08_bleufonce", { "", "", -1 } },
			{ "Mrshounka_subaru08_civ", { "", "", -1 } },
			{ "Mrshounka_c4_picasso_p_violet", { "", "", -1 } },
			{ "Mrshounka_c4_picasso_p_rose", { "", "", -1 } },
			{ "Mrshounka_c4_picasso_p_orange", { "", "", -1 } },
			{ "Mrshounka_c4_picasso_p_noir", { "", "", -1 } },
			{ "Mrshounka_c4_picasso_p_jaune", { "", "", -1 } },
			{ "Mrshounka_c4_picasso_p_grise", { "", "", -1 } },
			{ "Mrshounka_c4_picasso_p_bleufonce", { "", "", -1 } },
			{ "Mrshounka_c4_picasso_p_civ", { "", "", -1 } },
			{ "Mrshounka_c4_p_violet", { "", "", -1 } },
			{ "Mrshounka_c4_p_rose", { "", "", -1 } },
			{ "Mrshounka_c4_p_orange", { "", "", -1 } },
			{ "Mrshounka_c4_p_noir", { "", "", -1 } },
			{ "Mrshounka_c4_p_jaune", { "", "", -1 } },
			{ "Mrshounka_c4_p_grise", { "", "", -1 } },
			{ "Mrshounka_c4_p_bleufonce", { "", "", -1 } },
			{ "Mrshounka_c4_p_civ", { "", "", -1 } },
			{ "shounka_avalanche_violet", { "", "", -1 } },
			{ "shounka_avalanche_rose", { "", "", -1 } },
			{ "shounka_avalanche_orange", { "", "", -1 } },
			{ "shounka_avalanche_noir", { "", "", -1 } },
			{ "shounka_avalanche_jaune", { "", "", -1 } },
			{ "shounka_avalanche_grise", { "", "", -1 } },
			{ "shounka_avalanche_bleufonce", { "", "", -1 } },
			{ "shounka_avalanche", { "", "", -1 } },
			{ "Quiet_Cadillac_rouge_f", { "", "", -1 } },
			{ "Quiet_Cadillac_noir_f", { "", "", -1 } },
			{ "Quiet_Cadillac_chrome_f", { "", "", -1 } },
			{ "Quiet_Cadillac_bleu_f", { "", "", -1 } },
			{ "Quiet_Cadillac_blanche_f", { "", "", -1 } },
			{ "Mrshounka_Bowler_c_violet", { "", "", -1 } },
			{ "Mrshounka_Bowler_c_rose", { "", "", -1 } },
			{ "Mrshounka_Bowler_c_orange", { "", "", -1 } },
			{ "Mrshounka_Bowler_c_noir", { "", "", -1 } },
			{ "Mrshounka_Bowler_c_jaune", { "", "", -1 } },
			{ "Mrshounka_Bowler_c_grise", { "", "", -1 } },
			{ "Mrshounka_Bowler_c_bleufonce", { "", "", -1 } },
			{ "Mrshounka_Bowler_c", { "", "", -1 } },
			{ "Mrshounka_a3_308_civ", { "", "", -1 } },
			{ "Mrshounka_a3_308_civ_bleufonce", { "", "", -1 } },
			{ "Mrshounka_a3_308_civ_grise", { "", "", -1 } },
			{ "Mrshounka_a3_308_civ_jaune", { "", "", -1 } },
			{ "Mrshounka_a3_308_civ_noir", { "", "", -1 } },
			{ "Mrshounka_a3_308_civ_orange", { "", "", -1 } },
			{ "Mrshounka_a3_308_civ_rose", { "", "", -1 } },
			{ "Mrshounka_a3_308_civ_violet", { "", "", -1 } },
			{ "Mrshounka_a3_308_rcz", { "", "", -1 } },
			{ "Mrshounka_a3_308_rcz_bleufonce", { "", "", -1 } },
			{ "Mrshounka_a3_308_rcz_grise", { "", "", -1 } },
			{ "Mrshounka_a3_308_rcz_jaune", { "", "", -1 } },
			{ "Mrshounka_a3_308_rcz_noir", { "", "", -1 } },
			{ "Mrshounka_a3_308_rcz_orange", { "", "", -1 } },
			{ "Mrshounka_a3_308_rcz_rose", { "", "", -1 } },
			{ "Mrshounka_a3_308_rcz_violet", { "", "", -1 } },
			{ "Mrshounka_rs4_civ", { "", "", -1 } },
			{ "Mrshounka_rs4_civ_bleufonce", { "", "", -1 } },
			{ "Mrshounka_rs4_civ_grise", { "", "", -1 } },
			{ "Mrshounka_rs4_civ_jaune", { "", "", -1 } },
			{ "Mrshounka_rs4_civ_noir", { "", "", -1 } },
			{ "Mrshounka_rs4_civ_orange", { "", "", -1 } },
			{ "Mrshounka_rs4_civ_rose", { "", "", -1 } },
			{ "Mrshounka_rs4_civ_violet", { "", "", -1 } },
			{ "shounka_a3_rs5_civ", { "", "", -1 } },
			{ "shounka_a3_rs5_civ_bleufonce", { "", "", -1 } },
			{ "shounka_a3_rs5_civ_grise", { "", "", -1 } },
			{ "shounka_a3_rs5_civ_jaune", { "", "", -1 } },
			{ "shounka_a3_rs5_civ_noir", { "", "", -1 } },
			{ "shounka_a3_rs5_civ_orange", { "", "", -1 } },
			{ "shounka_a3_rs5_civ_rose", { "", "", -1 } },
			{ "shounka_a3_rs5_civ_violet", { "", "", -1 } },
			{ "shounka_rs6", { "", "", -1 } },
			{ "shounka_rs6_bleufonce", { "", "", -1 } },
			{ "shounka_rs6_grise", { "", "", -1 } },
			{ "shounka_rs6_jaune", { "", "", -1 } },
			{ "shounka_rs6_noir", { "", "", -1 } },
			{ "shounka_rs6_orange", { "", "", -1 } },
			{ "shounka_rs6_rose", { "", "", -1 } },
			{ "shounka_rs6_violet", { "", "", -1 } },
			{ "A3L_BMW135Black", { "", "", -1 } },
			{ "A3L_BMW135Blue", { "", "", -1 } },
			{ "A3L_BMW135Sport1", { "", "", -1 } },
			{ "A3L_BMW135Sport3", { "", "", -1 } },
			{ "A3L_BMW135Sport5", { "", "", -1 } },
			{ "A3L_BMW135Sport2", { "", "", -1 } },
			{ "A3L_BMW135Sport4", { "", "", -1 } },
			{ "A3L_BMW135Purple", { "", "", -1 } },
			{ "A3L_BMW135Red", { "", "", -1 } },
			{ "A3L_BMW135White", { "", "", -1 } },
			{ "Mrshounka_bmwm6_civ", { "", "", -1 } },
			{ "Mrshounka_bmwm6_bleufonce", { "", "", -1 } },
			{ "Mrshounka_bmwm6_grise", { "", "", -1 } },
			{ "Mrshounka_bmwm6_jaune", { "", "", -1 } },
			{ "Mrshounka_bmwm6_noir", { "", "", -1 } },
			{ "Mrshounka_bmwm6_orange", { "", "", -1 } },
			{ "Mrshounka_bmwm6_rose", { "", "", -1 } },
			{ "Mrshounka_bmwm6_violet", { "", "", -1 } },
			{ "Mrshounka_cayenne_p_civ", { "", "", -1 } },
			{ "Mrshounka_cayenne_p_bleufonce", { "", "", -1 } },
			{ "Mrshounka_cayenne_p_grise", { "", "", -1 } },
			{ "Mrshounka_cayenne_p_jaune", { "", "", -1 } },
			{ "Mrshounka_cayenne_p_noir", { "", "", -1 } },
			{ "Mrshounka_cayenne_p_orange", { "", "", -1 } },
			{ "Mrshounka_cayenne_p_rose", { "", "", -1 } },
			{ "Mrshounka_cayenne_p_violet", { "", "", -1 } },
			{ "Mrshounka_twingo_p_v", { "", "", -1 } },
			{ "Mrshounka_twingo_p_rose", { "", "", -1 } },
			{ "Mrshounka_twingo_p_o", { "", "", -1 } },
			{ "Mrshounka_twingo_p_noir", { "", "", -1 } },
			{ "quiet_sub2015_blanche_f", { "", "", -1 } },
			{ "Mrshounka_a3_smart_civ", { "", "", -1 } },
			{ "Mrshounka_a3_smart_civ_bleu", { "", "", -1 } },
			{ "Mrshounka_a3_smart_civ_noir", { "", "", -1 } },
			{ "IVORY_R8SPYDER", { "", "", -1 } },
			{ "DAR_TahoeCivBlack", { "", "", -1 } },
			{ "DAR_TahoeCivBlue", { "", "", -1 } },
			{ "DAR_TahoeCivRed", { "", "", -1 } },
			{ "DAR_TahoeCivSilver", { "", "", -1 } },
			{ "DAR_TahoeCiv", { "", "", -1 } },
			{ "DAR_FusionCivBlack", { "", "", -1 } },
			{ "DAR_FusionCivBlue", { "", "", -1 } },
			{ "DAR_FusionCivRed", { "", "", -1 } },
			{ "DAR_FusionCiv", { "", "", -1 } },
			{ "DAR_TaurusCivBlack", { "", "", -1 } },
			{ "DAR_TaurusCivBlue", { "", "", -1 } },
			{ "DAR_TaurusCiv", { "", "", -1 } },
			{ "A3L_PuntoBlack", { "", "", -1 } },
			{ "A3L_PuntoBlue", { "", "", -1 } },
			{ "A3L_PuntoGrey", { "", "", -1 } },
			{ "A3L_PuntoRed", { "", "", -1 } },
			{ "A3L_PuntoWhite", { "", "", -1 } },
			{ "A3L_FordKaBlack", { "", "", -1 } },
			{ "A3L_FordKaGrey", { "", "", -1 } },
			{ "A3L_FordKaRed", { "", "", -1 } },
			{ "A3L_FordKaWhite", { "", "", -1 } },
			{ "A3L_FordKaBlue", { "", "", -1 } },
			{ "Mrshounka_Alfa_Romeo_civ", { "", "", -1 } },
			{ "Mrshounka_Alfa_Romeo_bleufonce", { "", "", -1 } },
			{ "Mrshounka_Alfa_Romeo_grise", { "", "", -1 } },
			{ "Mrshounka_Alfa_Romeo_jaune", { "", "", -1 } },
			{ "Mrshounka_Alfa_Romeo_noir", { "", "", -1 } },
			{ "Mrshounka_Alfa_Romeo_orange", { "", "", -1 } },
			{ "Mrshounka_Alfa_Romeo_rose", { "", "", -1 } },
			{ "Mrshounka_Alfa_Romeo_violet", { "", "", -1 } },
			{ "shounka_a3_audiq7_bleu", { "", "", -1 } },
			{ "Mrshounka_Volkswagen_Touareg_civ", { "", "", -1 } },
			{ "Mrshounka_Volkswagen_Touareg_bleufonce", { "", "", -1 } },
			{ "Mrshounka_Volkswagen_Touareg_grise", { "", "", -1 } },
			{ "Mrshounka_Volkswagen_Touareg_noir", { "", "", -1 } },
			{ "Mrshounka_Volkswagen_Touareg_orange", { "", "", -1 } },
			{ "Mrshounka_Volkswagen_Touareg_rose", { "", "", -1 } },
			{ "Mrshounka_Volkswagen_Touareg_violet", { "", "", -1 } },
			{ "shounka_nemo_violet", { "", "", -1 } },
			{ "shounka_nemo_rose", { "", "", -1 } },
			{ "shounka_nemo_orange", { "", "", -1 } },
			{ "shounka_nemo_noir", { "", "", -1 } },
			{ "shounka_nemo_jaune", { "", "", -1 } },
			{ "shounka_nemo_grise", { "", "", -1 } },
			{ "shounka_nemo_bleufonce", { "", "", -1 } },
			{ "shounka_nemo", { "", "", -1 } },
			{ "shounka_a3_ds4_violet", { "", "", -1 } },
			{ "shounka_a3_ds4_rose", { "", "", -1 } },
			{ "shounka_a3_ds4_orange", { "", "", -1 } },
			{ "shounka_a3_ds4_noir", { "", "", -1 } },
			{ "shounka_a3_ds4_jaune", { "", "", -1 } },
			{ "shounka_a3_ds4_grise", { "", "", -1 } },
			{ "shounka_a3_ds4_bleufonce", { "", "", -1 } },
			{ "shounka_a3_ds4_civ", { "", "", -1 } },
			{ "Mrshounka_a3_ds3_civ_civ_violet", { "", "", -1 } },
			{ "Mrshounka_a3_ds3_civ_civ_rose", { "", "", -1 } },
			{ "Mrshounka_a3_ds3_civ_civ_orange", { "", "", -1 } },
			{ "Mrshounka_a3_ds3_civ_noir", { "", "", -1 } },
			{ "Mrshounka_a3_ds3_civ_civ_jaune", { "", "", -1 } },
			{ "Mrshounka_a3_ds3_civ_civ_grise", { "", "", -1 } },
			{ "Mrshounka_a3_ds3_civ_bleufonce", { "", "", -1 } },
			{ "Mrshounka_a3_ds3_civ", { "", "", -1 } },
			{ "Quiet_c65amg_blanche_f", { "", "", -1 } },
			{ "Quiet_c65amg_bleu_f", { "", "", -1 } },
			{ "Quiet_c65amg_chrome_f", { "", "", -1 } },
			{ "Quiet_c65amg_noir_f", { "", "", -1 } },
			{ "Quiet_c65amg_rouge_f", { "", "", -1 } },
			{ "Mrshounka_207_civ", { "", "", -1 } },
			{ "Mrshounka_207_bleufonce", { "", "", -1 } },
			{ "Mrshounka_207_grise", { "", "", -1 } },
			{ "Mrshounka_207_jaune", { "", "", -1 } },
			{ "Mrshounka_207_noir", { "", "", -1 } },
			{ "Mrshounka_207_orange", { "", "", -1 } },
			{ "Mrshounka_207_rose", { "", "", -1 } },
			{ "Mrshounka_207_violet", { "", "", -1 } },
			{ "quiet_sub2015_bleu_f", { "", "", -1 } },
			{ "quiet_sub2015_chrome_f", { "", "", -1 } },
			{ "quiet_sub2015_noir_f", { "", "", -1 } },
			{ "quiet_sub2015_rouge_f", { "", "", -1 } },
			{ "Mrshounka_lincoln_violet", { "", "", -1 } },
            { "Mrshounka_lincoln_rose", { "", "", -1 } },
            { "Mrshounka_lincoln_orange", { "", "", -1 } },
            { "Mrshounka_lincoln_noir", { "", "", -1 } },
            { "Mrshounka_lincoln_jaune", { "", "", -1 } },
            { "Mrshounka_lincoln_grise", { "", "", -1 } },
            { "Mrshounka_lincoln_bleufonce", { "", "", -1 } },
            { "Mrshounka_lincoln_civ", { "", "", -1 } },
            { "quiet_Ford_shelbyGT5_rouge_f", { "", "", -1 } },
            { "quiet_Ford_shelbyGT5_noir_f", { "", "", -1 } },
            { "quiet_Ford_shelbyGT5_chrome_f", { "", "", -1 } },
            { "quiet_Ford_shelbyGT5_bleu_f", { "", "", -1 } },
            { "quiet_Ford_shelbyGT5_blanche_f", { "", "", -1 } },
            { "Mrshounka_mustang_violet", { "", "", -1 } },
            { "Mrshounka_mustang_rose", { "", "", -1 } },
            { "Mrshounka_mustang_orange", { "", "", -1 } },
            { "Mrshounka_mustang_mat_n", { "", "", -1 } },
            { "Mrshounka_mustang_noir", { "", "", -1 } },
            { "Mrshounka_mustang_jaune", { "", "", -1 } },
            { "Mrshounka_mustang_grise", { "", "", -1 } },
            { "Mrshounka_mustang_mat_b", { "", "", -1 } },
            { "Mrshounka_mustang_bleufonce", { "", "", -1 } },
            { "Mrshounka_mustang_mat", { "", "", -1 } },
            { "Mrshounka_mustang_civ", { "", "", -1 } },
            { "Jonzie_XB", { "", "", -1 } },
            { "Jonzie_Viper", { "", "", -1 } },
            { "Mrshounka_a3_dodge15_civ_violet", { "", "", -1 } },
            { "Mrshounka_a3_dodge15_civ_rose", { "", "", -1 } },
            { "Mrshounka_a3_dodge15_civ_orange", { "", "", -1 } },
            { "Mrshounka_a3_dodge15_civ_jaune", { "", "", -1 } },
            { "Mrshounka_a3_dodge15_civ_grise", { "", "", -1 } },
            { "Mrshounka_a3_dodge15_civ_bleufonce", { "", "", -1 } },
			{ "Mrshounka_a3_dodge15_civ", { "", "", -1 } },
            { "Quiet_dodge_15_noir_f", { "", "", -1 } },
            { "Quiet_dodge_15_chrome_f", { "", "", -1 } },
            { "Quiet_dodge_15_bleu_f", { "", "", -1 } },
            { "Quiet_dodge_15_blanche_f", { "", "", -1 } },
            { "Quiet_1969charger_rouge_f", { "", "", -1 } },
            { "Quiet_1969charger_noir_f", { "", "", -1 } },
            { "Quiet_1969charger_chrome_f", { "", "", -1 } },
            { "Quiet_1969charger_bleu_f", { "", "", -1 } },
            { "Quiet_1969charger_blanche_f", { "", "", -1 } },
            { "ivory_c", { "", "", -1 } },
            { "A3L_ChallengerBlue", { "", "", -1 } },
            { "A3L_ChallengerGreen", { "", "", -1 } },
            { "A3L_ChargerWhite", { "", "", -1 } },
            { "A3L_ChargerRed", { "", "", -1 } },
            { "A3L_Charger", { "", "", -1 } },
            { "A3L_ChargerBlue", { "", "", -1 } },
            { "A3L_ChargerBlack", { "", "", -1 } },
            { "DAR_ChallengerCivWhite", { "", "", -1 } },
            { "DAR_ChallengerCivRed", { "", "", -1 } },
            { "DAR_ChallengerCivOrange", { "", "", -1 } },
            { "DAR_ChallengerCivBlack", { "", "", -1 } },
			{ "Tal_Murci_PC", { "", "", -1 } },
            { "Tal_Murci_Orange", { "", "", -1 } },
            { "Tal_Murci_Lime", { "", "", -1 } },
            { "Tal_Murci_LightBlue", { "", "", -1 } },
            { "Tal_Murci_Grey", { "", "", -1 } },
            { "Tal_Murci_Green", { "", "", -1 } },
            { "Tal_Murci_Blue", { "", "", -1 } },
            { "Tal_Murci_Black", { "", "", -1 } },
			{ "Tal_Murci_Pink", { "", "", -1 } },
            { "Tal_Murci_Purple", { "", "", -1 } },
            { "Tal_Murci_Red", { "", "", -1 } },
            { "Tal_Murci_White", { "", "", -1 } },
            { "Tal_Murci_Yellow", { "", "", -1 } },
            { "Tal_Maserati_Yellow", { "", "", -1 } },
            { "Tal_Maserati_White", { "", "", -1 } },
            { "Tal_Maserati_Red", { "", "", -1 } },
            { "Tal_Maserati_Purple", { "", "", -1 } },
            { "Tal_Maserati_Pink", { "", "", -1 } },
            { "Tal_Maserati_Orange", { "", "", -1 } },
            { "Tal_Maserati_Lime", { "", "", -1 } },
            { "Tal_Maserati_LightBlue", { "", "", -1 } },
            { "Tal_Maserati_Grey", { "", "", -1 } },
            { "Tal_Maserati_Green", { "", "", -1 } },
            { "Tal_Maserati_Blue", { "", "", -1 } },
            { "Tal_Maserati_Black", { "", "", -1 } },
            { "S_PorscheRS_Black", { "", "", -1 } },
            { "S_PorscheRS_White", { "", "", -1 } },
            { "S_PorscheRS_Yellow", { "", "", -1 } },
            { "Mrshounka_agera_pd", { "", "", -1 } },
            { "Mrshounka_agera_p_bleu", { "", "", -1 } },
            { "Mrshounka_agera_p_jaune", { "", "", -1 } },
            { "Mrshounka_agera_p_noir", { "", "", -1 } },
            { "S_Vantage_Black", { "", "", -1 } },
            { "S_Vantage_Blue", { "", "", -1 } },
            { "S_Vantage_LightBlue", { "", "", -1 } },
            { "S_Vantage_Purple", { "", "", -1 } },
            { "S_Vantage_Red", { "", "", -1 } },
            { "S_Vantage_White", { "", "", -1 } },
			{ "S_Vantage_Yellow", { "", "", -1 } },
            { "Mrshounka_pagani_c_violet", { "", "", -1 } },
            { "Mrshounka_pagani_c_rose", { "", "", -1 } },
            { "Mrshounka_pagani_c_orange", { "", "", -1 } },
            { "Mrshounka_pagani_c_noir", { "", "", -1 } },
            { "Mrshounka_pagani_c_jaune", { "", "", -1 } },
            { "Mrshounka_pagani_c_grise", { "", "", -1 } },
            { "Mrshounka_pagani_c_bleufonce", { "", "", -1 } },
            { "Mrshounka_pagani_c", { "", "", -1 } },
            { "Mrshounka_bmwm1_civ_violet", { "", "", -1 } },
            { "Mrshounka_bmwm1_civ_rose", { "", "", -1 } },
            { "Mrshounka_bmwm1_civ_orange", { "", "", -1 } },
            { "Mrshounka_bmwm1_civ_noir", { "", "", -1 } },
            { "Mrshounka_bmwm1_civ_jaune", { "", "", -1 } },
            { "Mrshounka_bmwm1_civ_grise", { "", "", -1 } },
            { "Mrshounka_bmwm1_civ_bleufonce", { "", "", -1 } },
            { "Mrshounka_bmwm1_civ", { "", "", -1 } },
            { "Quiet_v2_r8plus_rouge_f", { "", "", -1 } },
            { "Quiet_v2_r8plus_noir_f", { "", "", -1 } },
            { "Quiet_v2_r8plus_chrome_f", { "", "", -1 } },
            { "Quiet_v2_r8plus_bleu_f", { "", "", -1 } },
            { "Quiet_v2_r8plus_blanche_f", { "", "", -1 } },
            { "shounka_gt_bleufonce", { "", "", -1 } },
            { "shounka_gt", { "", "", -1 } },
			{ "shounka_gt_grise", { "", "", -1 } },
            { "shounka_gt_jaune", { "", "", -1 } },
            { "shounka_gt_noir", { "", "", -1 } },
            { "shounka_gt_orange", { "", "", -1 } },
            { "shounka_gt_rose", { "", "", -1 } },
            { "shounka_gt_violet", { "", "", -1 } },
            { "shounka_f430_spider_violet", { "", "", -1 } },
            { "shounka_f430_spider_rose", { "", "", -1 } },
            { "shounka_f430_spider_orange", { "", "", -1 } },
            { "shounka_f430_spider_noir", { "", "", -1 } },
            { "shounka_f430_spider_jaune", { "", "", -1 } },
            { "shounka_f430_spider_grise", { "", "", -1 } },
            { "shounka_f430_spider_bleufonce", { "", "", -1 } },
            { "shounka_f430_spider", { "", "", -1 } },
            { "quiet_Bugatti_blanche_f", { "", "", -1 } },
            { "A3L_Veyron_red", { "", "", -1 } },
            { "A3L_Veyron_orange", { "", "", -1 } },
            { "A3L_Veyron", { "", "", -1 } },
            { "A3L_Veyron_black", { "", "", -1 } },
            { "S_McLarenP1_Black", { "", "", -1 } },
            { "S_McLarenP1_Blue", { "", "", -1 } },
            { "S_McLarenP1_Orange", { "", "", -1 } },
            { "S_McLarenP1_Silver", { "", "", -1 } },
            { "S_McLarenP1_White", { "", "", -1 } },
            { "S_McLarenP1_Yellow", { "", "", -1 } },
            { "Mrshounka_a3_gtr_civ_noir", { "", "", -1 } },
            { "Mrshounka_a3_gtr_civ_bleu", { "", "", -1 } },
            { "Mrshounka_a3_gtr_civ", { "", "", -1 } },
            { "mrshounka_huracan_c", { "", "", -1 } },
            { "mrshounka_huracan_c_bleufonce", { "", "", -1 } },
            { "mrshounka_huracan_c_grise", { "", "", -1 } },
            { "mrshounka_huracan_c_jaune", { "", "", -1 } },
            { "mrshounka_huracan_c_noir", { "", "", -1 } },
            { "mrshounka_huracan_c_orange", { "", "", -1 } },
            { "mrshounka_huracan_c_rose", { "", "", -1 } },
            { "mrshounka_huracan_c_violet", { "", "", -1 } },
            { "Mrshounka_veneno_c", { "", "", -1 } },
            { "Mrshounka_veneno_c_bleu", { "", "", -1 } },
            { "Mrshounka_veneno_c_jaune", { "", "", -1 } },
            { "Mrshounka_veneno_c_noir", { "", "", -1 } },
            { "ivory_lfa", { "", "", -1 } },
            { "Mrshounka_lykan_c", { "", "", -1 } },
            { "Mrshounka_lykan_c_bleufonce", { "", "", -1 } },
            { "Mrshounka_lykan_c_grise", { "", "", -1 } },
            { "Mrshounka_lykan_c_jaune", { "", "", -1 } },
            { "Mrshounka_lykan_c_noir", { "", "", -1 } },
            { "Mrshounka_lykan_c_orange", { "", "", -1 } },
            { "Mrshounka_lykan_c_rose", { "", "", -1 } },
            { "Mrshounka_lykan_c_violet", { "", "", -1 } },
            { "Jonzie_Quattroporte", { "", "", -1 } },
            { "shounka_mp4", { "", "", -1 } },
            { "shounka_mp4_bleufonce", { "", "", -1 } },
            { "shounka_mp4_grise", { "", "", -1 } },
            { "shounka_mp4_jaune", { "", "", -1 } },
            { "shounka_mp4_noir", { "", "", -1 } },
            { "shounka_mp4_orange", { "", "", -1 } },
            { "shounka_mp4_rose", { "", "", -1 } },
            { "shounka_mp4_violet", { "", "", -1 } }
        };
    };

    class kart_shop {
        side = "civ";
        vehicles[] = {
            { "C_Kart_01_Blu_F", { "", "", -1 } },
            { "C_Kart_01_Fuel_F", { "", "", -1 } },
            { "C_Kart_01_Red_F", { "", "", -1 } },
            { "C_Kart_01_Vrana_F", { "", "", -1 } }
        };
    };

    class civ_truck {
        side = "civ";
        vehicles[] = {
            { "C_Van_01_transport_F", { "", "", -1 } },
            { "C_Van_01_Fuel_F", { "", "", -1 } },
            { "C_Van_01_box_F", { "", "", -1 } },
            { "I_Truck_02_transport_F", { "", "", -1 } },
            { "I_Truck_02_covered_F", { "", "", -1 } },
            { "O_Truck_02_fuel_F", { "", "", -1 } },
            { "B_Truck_01_transport_F", { "", "", -1 } },
            { "B_Truck_01_covered_F", { "", "", -1 } },
			{ "B_Truck_01_fuel_F", { "", "", -1 } },
			{ "B_Truck_01_box_F", { "", "", -1 } },
			{ "Mrshounka_Vandura_civ_jaune", { "", "", -1 } },
			{ "Mrshounka_Vandura_civ_orange", { "", "", -1 } },
			{ "Mrshounka_Vandura_civ_noir", { "", "", -1 } },
			{ "Mrshounka_Vandura_civ", { "", "", -1 } },
			{ "Mrshounka_Vandura_civ_bleufonce", { "", "", -1 } },
			{ "Jonzie_Transit", { "", "", -1 } },
			{ "Mrshounka_Vandura_civ_rose", { "", "", -1 } },
			{ "Mrshounka_Vandura_civ_grise", { "", "", -1 } },
			{ "Mrshounka_Vandura_civ_rouge", { "", "", -1 } },
			{ "Mrshounka_Vandura_civ_violet", { "", "", -1 } },
			{ "shounka_a3_spr_civ_noir", { "", "", -1 } },
			{ "shounka_a3_spr_civ_orange", { "", "", -1 } },
			{ "shounka_a3_spr_civ_bleufonce", { "", "", -1 } },
			{ "shounka_a3_spr_civ_jaune", { "", "", -1 } },
			{ "shounka_a3_spr_civ", { "", "", -1 } },
			{ "shounka_a3_spr_civ_grise", { "", "", -1 } },
			{ "Jonzie_Log_Truck", { "", "", -1 } },
			{ "Jonzie_Flat_Bed", { "", "", -1 } },
			{ "Jonzie_Tanker_Truck", { "", "", -1 } },
			{ "shounka_a3_mantgs_2_2_in_noir", { "", "", -1 } },
			{ "Jonzie_Box_Truck", { "", "", -1 } },
			{ "shounka_a3_mantgs_2_2_in", { "", "", -1 } },
			{ "shounka_a3_dafxf_euro6_f", { "", "", -1 } },
			{ "Quiet_Man_TGX_petite_cabine_mq_noir", { "", "", -1 } },
			{ "shounka_ivceco_rouge", { "", "", -1 } },
			{ "shounka_a3_renaultmagnum_f", { "", "", -1 } },
			{ "shounka_ivceco_violet", { "", "", -1 } },
			{ "shounka_ivceco_jaune", { "", "", -1 } },
			{ "shounka_ivceco_grise", { "", "", -1 } },
			{ "shounka_ivceco_noir", { "", "", -1 } },
			{ "shounka_ivceco_orange", { "", "", -1 } },
			{ "shounka_ivceco_rose", { "", "", -1 } },
			{ "shounka_ivceco_bleufonce", { "", "", -1 } }
        };
    };

    class civ_air {
        side = "civ";
        vehicles[] = {
            { "B_Heli_Light_01_F", { "", "", -1 } },
            { "C_Heli_Light_01_civil_F", { "", "", -1 } },
			{ "O_Heli_Light_02_unarmed_F", { "", "", -1 } },
			{ "O_Heli_Transport_04_medevac_F", { "", "", -1 } },
			{ "B_Heli_Transport_03_unarmed_F", { "", "", -1 } },
			{ "I_Heli_Transport_02_F", { "", "", -1 } },
			{ "C_Plane_Civil_01_F", { "", "", -1 } },
			{ "Sab_Sikorsky38_3", { "", "", -1 } },
			{ "sab_stampe3", { "", "", -1 } },
			{ "sab_stampe2", { "", "", -1 } },
			{ "sab_stampe", { "", "", -1 } },
			{ "sab_stampe4", { "", "", -1 } },
			{ "sab_stampe5", { "", "", -1 } },
			{ "Sab_Sikorsky38_2", { "", "", -1 } },
			{ "sab_RobinDR4_3", { "", "", -1 } },
			{ "sab_RobinDR4_2", { "", "", -1 } },
			{ "sab_RobinDR4_5", { "", "", -1 } },
			{ "sab_piper3", { "", "", -1 } },
			{ "sab_RobinDR4_4", { "", "", -1 } },
			{ "sab_RobinDR4", { "", "", -1 } },
			{ "sab_piper2", { "", "", -1 } },
			{ "sab_piper4", { "", "", -1 } },
			{ "sab_piper5", { "", "", -1 } },
			{ "sab_FAAllegro_3", { "", "", -1 } },
			{ "sab_FAAllegro_2", { "", "", -1 } },
			{ "sab_FAAllegro_4", { "", "", -1 } },
			{ "sab_FAAllegro", { "", "", -1 } },
			{ "sab_FAAllegro_5", { "", "", -1 } },
			{ "sab_GrobAstir", { "", "", -1 } },
			{ "GNT_C185", { "", "", -1 } },
			{ "GNT_C185F", { "", "", -1 } },
			{ "Sab_Amphi_An2", { "", "", -1 } },
			{ "Sab_Snow_An2", { "", "", -1 } },
			{ "Sab_sea3_An2", { "", "", -1 } },
			{ "GR_UH1N_1", { "", "", -1 } },
			{ "IVORY_BELL512", { "", "", -1 } },
			{ "sab_BI_An2", { "", "", -1 } },
			{ "sab_AH_An2", { "", "", -1 } },
			{ "Sab_tk_An2", { "", "", -1 } }
        };
    };
	
	class civ_air_special {
        side = "civ";
        vehicles[] = {
            { "sab_do228_2", { "", "", -1 } },
            { "sab_falcon", { "", "", -1 } },
            { "sab_do228", { "", "", -1 } },
            { "IVORY_ERJ135_1", { "", "", -1 } },
            { "sab_falcon_2", { "", "", -1 } },
            { "ivory_yak42d_1", { "", "", -1 } },
            { "IVORY_CRJ2_1", { "", "", -1 } }
        };
    };

    class civ_ship {
        side = "civ";
        vehicles[] = {
            { "C_Scooter_Transport_01_F", { "", "", -1 } },
			{ "C_Rubberboat", { "", "", -1 } },
			{ "I_C_Boat_Transport_02_F", { "", "", -1 } },
            { "C_Boat_Civil_01_F", { "", "", -1 } },
            { "C_Boat_Transport_02_F", { "", "", -1 } }

        };
    };

    class reb_car {
        side = "civ";
        vehicles[] = {
            { "B_Quadbike_01_F", { "", "", -1 } },
			{ "I_C_Offroad_02_unarmed_F", { "", "", -1 } },
            { "B_G_Offroad_01_F", { "", "", -1 } },
			{ "O_T_LSV_02_armed_F", { "", "", -1 } },
			{ "O_T_LSV_02_unarmed_F", { "", "", -1 } },
			{ "ACR_Offroad_HMG", { "", "", -1 } },
			{ "BAF_Offroad_D_HMG", { "", "", -1 } },
			{ "BAF_Offroad_W_HMG", { "", "", -1 } },
			{ "DAR_M1151", { "", "", -1 } },
			{ "DAR_M1151Woodland", { "", "", -1 } },
			{ "DAR_M1151_Deploy", { "", "", -1 } },
            { "O_MRAP_02_F", { "", "", -1 } },
			{ "O_MRAP_02_hmg_F", { "", "", -1 } },
			{ "O_MRAP_02_gmg_F", { "", "", -1 } },
            { "B_Heli_Light_01_F", { "", "", -1 } },
            { "B_G_Offroad_01_armed_F", { "", "", -1 } },
			{ "O_Truck_03_transport_F", { "", "", -1 } },
			{ "O_Truck_03_covered_F", { "", "", -1 } },
			{ "B_Heli_Light_01_armed_F", { "", "", -1 } },
			{ "O_Truck_03_ammo_F", { "", "", -1 } },
			{ "O_Heli_Transport_04_bench_F", { "", "", -1 } },
			{ "O_Heli_Transport_04_F", { "", "", -1 } },
			{ "O_Truck_03_fuel_F", { "", "", -1 } },
			{ "O_Truck_03_device_F", { "", "", -1 } },
			{ "O_Heli_light_02_F", { "", "", -1 } },
			{ "O_Heli_Attack_02_F", { "", "", -1 } }

        };
    };

    class med_shop {
        side = "med";
        vehicles[] = {
            { "C_Van_01_box_F", { "", "", -1 } },
            { "C_Offroad_01_F", { "life_mediclevel", "SCALAR", 2 } },
            { "C_SUV_01_F", { "life_mediclevel", "SCALAR",3 } },
            { "B_Truck_01_medical_F", { "life_mediclevel", "SCALAR", 2 } }
        };
    };

    class med_air_hs {
        side = "med";
        vehicles[] = {
            { "O_Heli_Light_02_unarmed_F", { "life_mediclevel", "SCALAR", 2 } }
        };
    };

    class cop_car {
        side = "cop";
        vehicles[] = {
            //LanPol
			{ "EAL_Quad", { "", "", -1 } },
            { "EAL_Limousine", { "life_coplevel", "SCALAR", 2 } },
            { "EAL_Limousine_HW", { "life_coplevel", "SCALAR", 2 } },
			{ "EAL_Offroad_LanPol", { "life_coplevel", "SCALAR", 4 } },
			{ "shounka_a3_cliors_gend_civ", { "life_coplevel", "SCALAR", 6 } },
			{ "Mrshounka_a3_308_gend", { "life_coplevel", "SCALAR", 7 } },
			{ "Mrshounka_Volkswagen_Touareg_police_police", { "life_coplevel", "SCALAR", 8 } },
			{ "EAL_SUV", { "life_coplevel", "SCALAR", 9 } },
			{ "shounka_a3_audiq7_v2_gendarmerie", { "life_coplevel", "SCALAR", 10 } },
			{ "Mrshounka_rs_2015_g", { "life_coplevel", "SCALAR", 11 } },
			{ "shounka_a3_508gend", { "life_coplevel", "SCALAR", 12 } },
			{ "EAL_Limousine_sport", { "life_coplevel", "SCALAR", 13 } },
			{ "EAL_Limousine_sport_HW", { "life_coplevel", "SCALAR", 13 } },
			{ "Mrshounka_ducati_police_p", { "life_coplevel", "SCALAR", 14 } },
			{ "shounka_a3_gendsprinter", { "life_coplevel", "SCALAR", 15 } },
			{ "Mrshounka_bmw_gend", { "life_coplevel", "SCALAR", 16 } },
			{ "Mrshounka_agera_gend_p", { "life_coplevel", "SCALAR", 17 } },
			{ "EAL_Hunter_LanPol", { "life_coplevel", "SCALAR", 19 } },
			{ "EAL_Hunter_LanPol_HMG", { "life_coplevel", "SCALAR", 19 } },
			{ "EAL_Hunter_LanPol_GMG", { "life_coplevel", "SCALAR", 19 } },
			{ "EAL_Strider", { "life_coplevel", "SCALAR", 19 } },
			{ "EAL_Strider_HMG", { "life_coplevel", "SCALAR", 19 } },
			{ "B_APC_Wheeled_01_cannon_F", { "life_coplevel", "SCALAR", 19 } },
			{ "O_APC_Wheeled_02_rcws_F", { "life_coplevel", "SCALAR", 19 } }
        };
    };
	
	class cop_car_sek {
        side = "cop";
        vehicles[] = {
            //SEK
			{ "Mrshounka_Volkswagen_Touareg_noir", { "life_coplevel", "SCALAR", 6 } },
			{ "EAL_Offroad_SEK", { "life_coplevel", "SCALAR", 6 } },
			{ "A3L_BMW135Black", { "life_coplevel", "SCALAR", 7 } },
			{ "Mrshounka_cayenne_p_noir", { "life_coplevel", "SCALAR", 7 } },
			{ "C_SUV_01_F", { "life_coplevel", "SCALAR", 8 } },
			{ "B_T_LSV_01_unarmed_F", { "life_coplevel", "SCALAR", 8 } },
			{ "Mrshounka_c63_2015_noir", { "life_coplevel", "SCALAR", 8 } },
			{ "EAL_Hunter_SEK", { "life_coplevel", "SCALAR", 9 } },
			{ "Mrshounka_rs4_gend_p_noir", { "life_coplevel", "SCALAR", 9 } },
			{ "Quiet_c65amg_noir_f", { "life_coplevel", "SCALAR", 10 } },
			{ "EAL_Strider", { "life_coplevel", "SCALAR", 10 } },
			{ "EAL_Hunter_SEK_HMG", { "life_coplevel", "SCALAR", 12 } },
			{ "EAL_Strider_HMG", { "life_coplevel", "SCALAR", 12 } },
			{ "blx_ridgback_HMG_W", { "life_coplevel", "SCALAR", 13 } },
			{ "B_T_LSV_01_armed_F", { "life_coplevel", "SCALAR", 13 } },
			{ "O_APC_Wheeled_02_rcws_F", { "life_coplevel", "SCALAR", 14 } },
			{ "EAL_Hunter_SEK_GMG", { "life_coplevel", "SCALAR", 15 } },
			{ "EAL_Strider_GMG", { "life_coplevel", "SCALAR", 15 } },
			{ "B_APC_Wheeled_01_cannon_F", { "life_coplevel", "SCALAR", 16 } }
        };
    };
	
	class cop_car_bp {
        side = "cop";
        vehicles[] = {
            //BPol
			{ "EAL_Quad", { "", "", -1 } },
            { "EAL_Limousine", { "life_coplevel", "SCALAR", 2 } },
            { "EAL_Limousine_HW", { "life_coplevel", "SCALAR", 2 } },
			{ "EAL_Offroad_LanPol", { "life_coplevel", "SCALAR", 3 } },
			{ "shounka_a3_cliors_gend_civ", { "life_coplevel", "SCALAR", 4 } },
			{ "Mrshounka_a3_308_gend", { "life_coplevel", "SCALAR", 5 } },
			{ "Mrshounka_Volkswagen_Touareg_police_police", { "life_coplevel", "SCALAR", 6 } },
			{ "EAL_SUV", { "life_coplevel", "SCALAR", 7 } },
			{ "shounka_a3_audiq7_v2_gendarmerie", { "life_coplevel", "SCALAR", 8 } },
			{ "Mrshounka_rs_2015_g", { "life_coplevel", "SCALAR", 9 } },
			{ "shounka_a3_508gend", { "life_coplevel", "SCALAR", 10 } },
			{ "EAL_Limousine_sport", { "life_coplevel", "SCALAR", 11 } },
			{ "EAL_Limousine_sport_HW", { "life_coplevel", "SCALAR", 11 } },
			{ "Mrshounka_bmw_gend", { "life_coplevel", "SCALAR", 12 } },
			{ "EAL_Hunter_BPol", { "life_coplevel", "SCALAR", 13 } },
			{ "shounka_a3_gendsprinter", { "life_coplevel", "SCALAR", 14 } },
			{ "EAL_Hunter_BPol_HMG", { "life_coplevel", "SCALAR", 15 } },
			{ "O_APC_Wheeled_02_rcws_F", { "life_coplevel", "SCALAR", 16 } },
			{ "EAL_Hunter_BPol_GMG", { "life_coplevel", "SCALAR", 17 } },
			{ "Mrshounka_agera_gend_p", { "life_coplevel", "SCALAR", 18 } }
        };
    };
	
	class cop_car_kripo {
        side = "cop";
        vehicles[] = {
            //Kripo
			{ "C_Hatchback_01_F", { "life_coplevel", "SCALAR", 6 } },
			{ "Mrshounka_golfvi_grise", { "life_coplevel", "SCALAR", 6 } },
			{ "Mrshounka_golfvi_rouge", { "life_coplevel", "SCALAR", 6 } },
			{ "DAR_FusionCivBlue", { "life_coplevel", "SCALAR", 7 } },
			{ "DAR_FusionCiv", { "life_coplevel", "SCALAR", 7 } },
			{ "C_Offroad_01_F", { "life_coplevel", "SCALAR", 6 } },
			{ "DAR_TaurusCiv", { "life_coplevel", "SCALAR", 8 } },
			{ "DAR_TaurusCivBlack", { "life_coplevel", "SCALAR", 8 } },
			{ "RDS_Octavia_Civ_01", { "life_coplevel", "SCALAR", 8 } },
			{ "shounka_a3_audiq7_bleu", { "life_coplevel", "SCALAR", 9 } },
			{ "Mrshounka_Volkswagen_Touareg_grise", { "life_coplevel", "SCALAR", 9 } },
			{ "Mrshounka_Volkswagen_Touareg_noir", { "life_coplevel", "SCALAR", 9 } },
			{ "Mrshounka_Volkswagen_Touareg_rouge", { "life_coplevel", "SCALAR", 9 } },
			{ "C_Hatchback_01_sport_F", { "life_coplevel", "SCALAR", 9 } },
            { "C_SUV_01_F", { "life_coplevel", "SCALAR", 10 } },
			{ "Mrshounka_mustang_mat", { "life_coplevel", "SCALAR", 10 } },
			{ "Mrshounka_mustang_grise", { "life_coplevel", "SCALAR", 10 } },
			{ "Mrshounka_mustang_noir", { "life_coplevel", "SCALAR", 10 } },
			{ "Mrshounka_mustang_mat_n", { "life_coplevel", "SCALAR", 10 } },
			{ "shounka_a3_508banalise", { "life_coplevel", "SCALAR", 10 } },
			{ "A3L_BMW135Black", { "life_coplevel", "SCALAR", 13 } },
			{ "A3L_BMW135Sport1", { "life_coplevel", "SCALAR", 13 } },
			{ "A3L_BMW135Sport3", { "life_coplevel", "SCALAR", 13 } },
			{ "A3L_BMW135White", { "life_coplevel", "SCALAR", 13 } },
			{ "shounka_a3_rs5_civ_bleufonce", { "life_coplevel", "SCALAR", 13 } },
			{ "shounka_a3_rs5_civ_grise", { "life_coplevel", "SCALAR", 13 } },
			{ "shounka_a3_rs5_civ_noir", { "life_coplevel", "SCALAR", 13 } },
			{ "shounka_a3_rs5_civ_rouge", { "life_coplevel", "SCALAR", 13 } },
			{ "shounka_rs6_bleufonce", { "life_coplevel", "SCALAR", 13 } },
			{ "shounka_rs6_grise", { "life_coplevel", "SCALAR", 13 } },
			{ "shounka_rs6_noir", { "life_coplevel", "SCALAR", 13 } },
			{ "shounka_rs6_rouge", { "life_coplevel", "SCALAR", 13 } },
			{ "Mrshounka_c63_2015_mat", { "life_coplevel", "SCALAR", 14 } },
			{ "Mrshounka_c63_2015_mat_b", { "life_coplevel", "SCALAR", 14 } },
			{ "Mrshounka_c63_2015_grise", { "life_coplevel", "SCALAR", 14 } },
			{ "Mrshounka_c63_2015_noir", { "life_coplevel", "SCALAR", 14 } },
			{ "Mrshounka_c63_2015_mat_n", { "life_coplevel", "SCALAR", 14 } },
			{ "Mrshounka_c63_2015_rouge", { "life_coplevel", "SCALAR", 14 } },
			{ "Mrshounka_bmwm6_bleufonce", { "life_coplevel", "SCALAR", 14 } },
			{ "Mrshounka_bmwm6_grise", { "life_coplevel", "SCALAR", 14 } },
			{ "Mrshounka_bmwm6_noir", { "life_coplevel", "SCALAR", 14 } },
			{ "Mrshounka_bmwm6_rouge", { "life_coplevel", "SCALAR", 14 } },
			{ "Mrshounka_rs4_gend_p_bleufonce", { "life_coplevel", "SCALAR", 14 } },
			{ "Mrshounka_rs4_gend_p_blanc", { "life_coplevel", "SCALAR", 14 } },
			{ "Mrshounka_rs4_gend_p_jaune", { "life_coplevel", "SCALAR", 14 } },
			{ "Mrshounka_rs4_gend_p_noir", { "life_coplevel", "SCALAR", 14 } }
        };
    };

    class cop_air {
        side = "cop";
        vehicles[] = {
            //LanPol
			{ "EAL_Humming", { "life_coplevel", "SCALAR", 7 } },
			{ "GR_UH1H_1", { "life_coplevel", "SCALAR", 8 } },
			{ "EC635_Unarmed", { "life_coplevel", "SCALAR", 9 } },
            { "EAL_Orca", { "life_coplevel", "SCALAR", 10 } },
			{ "GR_UH1H_3", { "life_coplevel", "SCALAR", 11 } },
			{ "EAL_Hellcat_LanPol", { "life_coplevel", "SCALAR", 12 } },
			{ "EAL_Ghosthawk", , { "life_coplevel", "SCALAR", 13 } },
			{ "EAL_Humming_armed", { "life_coplevel", "SCALAR", 14 } },
			{ "EC635", { "life_coplevel", "SCALAR", 15 } },
			{ "EC635_AT", { "life_coplevel", "SCALAR", 15 } },
			{ "EAL_Orca_armed", { "life_coplevel", "SCALAR", 16 } },
			{ "EAL_Hellcat_LanPol_armed", { "life_coplevel", "SCALAR", 17 } },
			{ "B_Heli_Transport_03_black_F", { "life_coplevel", "SCALAR", 18 } },
			{ "MV22", { "life_coplevel", "SCALAR", 19 } },
			{ "B_T_VTOL_01_infantry_F", { "life_coplevel", "SCALAR", 19 } },
			{ "B_T_VTOL_01_vehicle_F", { "life_coplevel", "SCALAR", 19 } },
			{ "B_Heli_Attack_01_F", { "life_coplevel", "SCALAR", 20 } },
			{ "I_Plane_Fighter_03_AA_F", { "life_coplevel", "SCALAR", 20 } }
        };
    };
	
	class cop_air_sek {
        side = "cop";
        vehicles[] = {
            //SEK
			{ "EAL_Humming", { "life_coplevel", "SCALAR", 6 } },
			{ "EC635_Unarmed", { "life_coplevel", "SCALAR", 7 } },
			{ "GR_UH1H_3", { "life_coplevel", "SCALAR", 8 } },
			{ "EAL_Hellcat_SEK", { "life_coplevel", "SCALAR", 9 } },
			{ "EAL_Ghosthawk", { "life_coplevel", "SCALAR", 10 } },
			{ "EAL_Humming_armed", { "life_coplevel", "SCALAR", 12 } },
			{ "EC635", { "life_coplevel", "SCALAR", 13 } },
			{ "EC635_AT", { "life_coplevel", "SCALAR", 13 } },
			{ "B_Heli_Transport_03_black_F", { "life_coplevel", "SCALAR", 14 } },
			{ "MV22", { "life_coplevel", "SCALAR", 15 } },
			{ "B_T_VTOL_01_infantry_F", { "life_coplevel", "SCALAR", 15 } },
			{ "B_T_VTOL_01_vehicle_F", { "life_coplevel", "SCALAR", 15 } }
        };
    };
	
	class cop_air_bp {
        side = "cop";
        vehicles[] = {
            //BPol
			{ "EAL_Humming", { "life_coplevel", "SCALAR", 6 } },
			{ "EC635_Unarmed", { "life_coplevel", "SCALAR", 8 } },
			{ "GR_UH1H_3", { "life_coplevel", "SCALAR", 10 } },
			{ "EAL_Hellcat_BPol", { "life_coplevel", "SCALAR", 12 } },
			{ "EAL_Ghosthawk", { "life_coplevel", "SCALAR", 14 } },
			{ "B_Heli_Transport_03_black_F", { "life_coplevel", "SCALAR", 16 } },
			{ "MV22", { "life_coplevel", "SCALAR", 18 } }
        };
    };
	
	class cop_air_kripo {
        side = "cop";
        vehicles[] = {
            //Kripo
			{ "EAL_Humming", { "life_coplevel", "SCALAR", 7 } },
			{ "EC635_Unarmed", { "life_coplevel", "SCALAR", 9 } }
        };
    };

    class cop_airhq {
        side = "civ";
        vehicles[] = {
			//Pilot
			{ "EAL_Humming", { "", "", -1 } },
			{ "GR_UH1H_1", { "", "", -1 } },
			{ "EC635_Unarmed", { "", "", -1 } },
            { "EAL_Orca", { "", "", -1 } },
			{ "GR_UH1H_3", { "", "", -1 } },
			{ "EAL_Hellcat_LanPol", { "", "", -1 } },
			{ "EAL_Ghosthawk", { "", "", -1 } },
			{ "EAL_Humming_armed", { "", "", -1 } },
			{ "EC635", { "", "", -1 } },
			{ "EC635_AT", { "", "", -1 } },
			{ "EAL_Orca_armed", { "", "", -1 } },
			{ "EAL_Hellcat_LanPol_armed", { "", "", -1 } },
			{ "B_Heli_Transport_03_black_F", { "", "", -1 } },
			{ "MV22", { "", "", -1 } },
			{ "B_T_VTOL_01_infantry_F", { "", "", -1 } },
			{ "B_T_VTOL_01_vehicle_F", { "", "", -1 } },
			{ "B_Heli_Attack_01_F", { "", "", -1 } },
			{ "I_Plane_Fighter_03_AA_F", { "", "", -1 } }
        };
    };

    class cop_ship {
        side = "cop";
        vehicles[] = {
            { "B_Boat_Transport_01_F", { "life_coplevel", "SCALAR", 3 } },
            { "C_Boat_Civil_01_police_F", { "life_coplevel", "SCALAR", 5 } },
			{ "I_C_Boat_Transport_02_F", { "life_coplevel", "SCALAR", 7 } },
            { "B_Boat_Armed_01_minigun_F", { "life_coplevel", "SCALAR", 9 } },
            { "B_SDV_01_F", { "life_coplevel", "SCALAR", 9 } }
        };
    };
};

class LifeCfgVehicles {
    /*
    *    Vehicle Configs (Contains textures and other stuff)
    *
    *    "price" is the price before any multipliers set in Master_Config are applied.
    *
    *    Default Multiplier Values & Calculations:
    *       Civilian [Purchase, Sell]: [1.0, 0.5]
    *       Cop [Purchase, Sell]: [0.5, 0.5]
    *       Medic [Purchase, Sell]: [0.75, 0.5]
    *       ChopShop: Payout = price * 0.25
    *       GarageSell: Payout = price * [0.5, 0.5, 0.5, -1]
    *       Cop Impound: Payout = price * 0.1
    *       Pull Vehicle from Garage: Cost = price * [1, 0.5, 0.75, -1] * [0.5, 0.5, 0.5, -1]
    *           -- Pull Vehicle & GarageSell Array Explanation = [civ,cop,medic,east]
    *
    *       1: ARRAY (license required)
    *         Ex: { "driver", "" , "" , "" } //civilian, west, independent, east
    *         licenses[] = { {"CIV"}, {"COP"}, {"MEDIC"}, {"EAST"} };
    *    Textures config follows { Texture Name, side, {texture(s)path}}
    *    Texture(s)path follows this format:
    *    INDEX 0: Texture Layer 0
    *    INDEX 1: Texture Layer 1
    *    INDEX 2: Texture Layer 2
    *    etc etc etc
    *
    */

    class Default {
        vItemSpace = -1;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = -1;
        textures[] = {};
    };

    class Land_Wreck_Traw_F {
        vItemSpace = 100000000;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = -1;
        textures[] = {};
    };
	
	class Land_Wreck_Traw2_F : Land_Wreck_Traw_F {};

    class I_Truck_02_medical_F {
        vItemSpace = 250;
        licenses[] = { {""}, {""}, {"medic"}, {""} };
        price = 60000;
        textures[] = {};
    };

    class O_Truck_03_medical_F : I_Truck_02_medical_F {};
    class B_Truck_01_medical_F : I_Truck_02_medical_F {};

    class C_Rubberboat {
        vItemSpace = 90;
        licenses[] = { {"boat"}, {""}, {""}, {""} };
        price = 10000;
        textures[] = { };
    };
	
	class I_C_Boat_Transport_02_F : C_Rubberboat {
        vItemSpace = 550;
        price = 25000;
    };
	
	class C_Boat_Transport_02_F : I_C_Boat_Transport_02_F {};
	
	class C_Scooter_Transport_01_F : C_Rubberboat {
        vItemSpace = 10;
        price = 5000;
    };

    class B_Heli_Transport_01_F {
        vItemSpace = 10;
        licenses[] = { {""}, {"cAir"}, {""}, {""} };
        price = 1000000;
        textures[] = {};
    };
	
	class EAL_Ghosthawk : B_Heli_Transport_01_F {};

    class B_MRAP_01_hmg_F {
        vItemSpace = 10;
        licenses[] = { {""}, {"cDriver"}, {""}, {""} };
        price = 300000;
        textures[] = {};
    };
	
	class EAL_Hunter_LanPol_HMG : B_MRAP_01_hmg_F {};
	class EAL_Hunter_BPol_HMG : B_MRAP_01_hmg_F {};
	class EAL_Hunter_SEK_HMG : B_MRAP_01_hmg_F {};
	
	class EAL_Hunter_LanPol_GMG {
        vItemSpace = 10;
        licenses[] = { {""}, {"cDriver"}, {""}, {""} };
        price = 600000;
        textures[] = {};
    };
	
	class EAL_Hunter_BPol_GMG : EAL_Hunter_LanPol_GMG {};
	class EAL_Hunter_SEK_GMG : EAL_Hunter_LanPol_GMG {};

    class B_Boat_Armed_01_minigun_F {
        vItemSpace = 175;
        licenses[] = { {""}, {"cg"}, {""}, {""} };
        price = 200000;
        textures[] = { };
    };
	
	class O_Boat_Armed_01_hmg_F {
        vItemSpace = 175;
        licenses[] = { {"boat"}, {""}, {""}, {""} };
        price = 500000;
        textures[] = { };
    };
	
	class I_Boat_Armed_01_minigun_F : O_Boat_Armed_01_hmg_F {};

    class B_Boat_Transport_01_F {
        vItemSpace = 100;
        licenses[] = { {""}, {"cg"}, {""}, {""} };
        price = 20000;
        textures[] = { };
    };
	
	class B_G_Boat_Transport_01_F {
        vItemSpace = 100;
        licenses[] = { {"boat"}, {""}, {""}, {""} };
        price = 20000;
        textures[] = { };
    };

    class O_Truck_03_transport_F {
        vItemSpace = 550;
        licenses[] = { {"rebel"}, {""}, {""}, {""} };
        price = 820000;
        textures[] = { };
    };

    class O_Truck_03_device_F {
        vItemSpace = 1000;
        licenses[] = { {"rebel"}, {""}, {""}, {""} };
        price = 12000000;
        textures[] = { };
    };

    class Land_CargoBox_V1_F {
        vItemSpace = 5000;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = -1;
        textures[] = {};
    };

    class Box_IND_Grenades_F {
        vItemSpace = 350;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = -1;
        textures[] = {};
    };
	
	class B_Slingload_01_Cargo_F {
        vItemSpace = 500;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = -1;
        textures[] = {};
    };
	
	class Land_Pod_Heli_Transport_04_covered_F {
        vItemSpace = 1000;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = -1;
        textures[] = {};
    };

    class B_supplyCrate_F {
        vItemSpace = 700;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = -1;
        textures[] = {};
    };

    class B_G_Offroad_01_F {
        vItemSpace = 10;
        licenses[] = { {"rebel"}, {""}, {""}, {""} };
        price = 60000;
        textures[] = { };
    };

    class B_G_Offroad_01_armed_F {
        vItemSpace = 10;
        licenses[] = { {"rebel"}, {""}, {""}, {""} };
        price = 4000000;
        textures[] = { };
    };
	
	class ACR_Offroad_HMG : B_G_Offroad_01_armed_F {
        price = 3000000;
    };
	
	class BAF_Offroad_D_HMG : ACR_Offroad_HMG {};
	class BAF_Offroad_W_HMG : ACR_Offroad_HMG {};
	
	class DAR_M1151 : B_G_Offroad_01_armed_F {
        price = 8500000;
    };
	
	class DAR_M1151Woodland : DAR_M1151 {};
	
	class DAR_M1151_Deploy : B_G_Offroad_01_armed_F {
        price = 8750000;
    };
	
	class I_G_Van_01_transport_F {
        vItemSpace = 100;
        licenses[] = { {"rebel"}, {""}, {""}, {""} };
        price = 120000;
        textures[] = { };
    };

    class C_Boat_Civil_01_F {
        vItemSpace = 500;
        licenses[] = { {"boat"}, {""}, {""}, {""} };
        price = 22000;
        textures[] = { };
    };

    class C_Boat_Civil_01_police_F {
        vItemSpace = 500;
        licenses[] = { {""}, {"cg"}, {""}, {""} };
        price = 22000;
        textures[] = { };
    };
	
	class C_Boat_Civil_01_rescue_F {
        vItemSpace = 500;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 22000;
        textures[] = { };
    };

    class B_Truck_01_box_F {
        vItemSpace = 1500;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 5000000;
        textures[] = { };
    };
	
	class shounka_ivceco_rouge : B_Truck_01_box_F {};
	class shounka_ivceco_violet : B_Truck_01_box_F {};
	class shounka_ivceco_jaune : B_Truck_01_box_F {};
	class shounka_ivceco_grise : B_Truck_01_box_F {};
	class shounka_ivceco_noir : B_Truck_01_box_F {};
	class shounka_ivceco_orange : B_Truck_01_box_F {};
	class shounka_ivceco_rose : B_Truck_01_box_F {};
	class shounka_ivceco_bleufonce : B_Truck_01_box_F {};
	
    class B_Truck_01_transport_F {
        vItemSpace = 500;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 800000;
        textures[] = { };
    };
	
	class shounka_a3_mantgs_2_2_in_noir : B_Truck_01_transport_F {};
	class Jonzie_Box_Truck : B_Truck_01_transport_F {};
	class shounka_a3_mantgs_2_2_in : B_Truck_01_transport_F {};
	class Quiet_Man_TGX_petite_cabine_mq_noir : B_Truck_01_transport_F {};
	class shounka_a3_renaultmagnum_f : B_Truck_01_transport_F {};
	
	class B_Truck_01_covered_F {
        vItemSpace = 650;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1000000;
        textures[] = { };
    };
	
	class shounka_a3_dafxf_euro6_f : B_Truck_01_covered_F {};
	class Jonzie_Flat_Bed : B_Truck_01_covered_F {};
	class Jonzie_Log_Truck : B_Truck_01_covered_F {};
	
	class B_Truck_01_fuel_F {
        vItemSpace = 700;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1500000;
        textures[] = { };
    };
	
	class Jonzie_Tanker_Truck : B_Truck_01_fuel_F {};

    class O_MRAP_02_F {
        vItemSpace = 10;
        licenses[] = { {"rebel"}, {""}, {""}, {""} };
        price = 1500000;
        textures[] = { };
    };
	
	class O_MRAP_02_hmg_F : O_MRAP_02_F {
        price = 4000000;
    };
	
	class O_MRAP_02_gmg_F : O_MRAP_02_F {
        price = 8000000;
    };
	
	class I_MRAP_03_F {
        vItemSpace = 10;
        licenses[] = { {""}, {"cDriver"}, {""}, {""} };
        price = 300000;
        textures[] = { };
    };
	
	class EAL_Strider : I_MRAP_03_F {};
	
	class EAL_Strider_HMG : I_MRAP_03_F {
        price = 400000;
    };
	
	class EAL_Strider_GMG : I_MRAP_03_F {
        price = 700000;
    };

    class C_Offroad_01_F {
        vItemSpace = 10;
        licenses[] = { {"driver"}, {"cDriver"}, {"mDriver"}, {""} };
        price = 65000;
        textures[] = {
            { "Rot", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa"
            } },
            { "Gelb", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa"
            } },
            { "Weiß", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa"
            } },
            { "Blau", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa"
            } },
            { "Dunkelrot", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa"
            } },
            { "Blau/Weiß", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa"
            } },
            { "Gelb", "civ", {
                "#(argb,8,8,3)color(0.6,0.3,0.01,1)"
            } },
            { "Medic", "med", {
                "\EAL_Textures\Texturen\vehicles\medic_offroad.paa"
            } },
            { "Dunkelrot", "cop", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa"
            } },
            { "Blau/Weiß", "cop", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa"
            } }
        };
    };
	
	class C_Offroad_02_unarmed_F {
        vItemSpace = 10;
        licenses[] = { {"driver"}, {"cDriver"}, {"mDriver"}, {""} };
        price = 55000;
        textures[] = {};
    };
	
	class I_C_Offroad_02_unarmed_F : C_Offroad_02_unarmed_F {
        price = 60000;
    };
	
	class EAL_Offroad_LanPol : C_Offroad_01_F{
        price = 35000;
        textures[] = {};
    };
	
	class EAL_Offroad_SEK : EAL_Offroad_LanPol {};

    class C_Kart_01_Blu_F {
        vItemSpace = 5;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 15000;
        textures[] = {};
    };
/*
To edit another information in this classes you can use this exemple.
class C_Kart_01_Fuel_F : C_Kart_01_Blu_F{
    vItemSpace = 40;
    price = ;
};

will modify the virtual space and the price of the vehicle, but other information such as license and textures will pick up the vehicle declare at : Vehicle {};
*/
    class C_Kart_01_Fuel_F : C_Kart_01_Blu_F{}; // Get all information of C_Kart_01_Blu_F
    class C_Kart_01_Red_F  : C_Kart_01_Blu_F{};
    class C_Kart_01_Vrana_F : C_Kart_01_Blu_F{};

    class C_Hatchback_01_sport_F {
        vItemSpace = 10;
        licenses[] = { {"driver"}, {"cDriver"}, {""}, {""} };
        price = 120000;
        textures[] = {
            { "Rot", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport01_co.paa"
            } },
            { "Dunkelblau", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport02_co.paa"
            } },
            { "Orange", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport03_co.paa"
            } },
            { "Schwarz/Weiß", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport04_co.paa"
            } },
            { "Beige", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport05_co.paa"
            } },
            { "Grün", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport06_co.paa"
            } },
            { "Dunkelblau", "cop", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport02_co.paa"
            } },
            { "Beige", "cop", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport05_co.paa"
            } }
        };
    };
	
	class EAL_Limousine_sport : C_Hatchback_01_sport_F {
        price = 90000;
        textures[] = {};
    };
	
	class EAL_Limousine_sport_HW : EAL_Limousine_sport {
        price = 92000;
    };

    class B_Quadbike_01_F {
        vItemSpace = 5;
        licenses[] = { {"driver"}, {"cDriver"}, {""}, {""} };
        price = 8000;
        textures[] = {
            { "Opfor", "reb", {
                "\A3\Soft_F\Quadbike_01\Data\quadbike_01_opfor_co.paa"
            } },
            { "Schwarz", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_black_co.paa"
            } },
            { "Blau", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_blue_co.paa"
            } },
            { "Rot", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_red_co.paa"
            } },
            { "Weiß", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_white_co.paa"
            } },
            { "Indep", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_indp_co.paa"
            } },
            { "Hunter Camo", "civ", {
                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
            } },
            { "Rebel Camo", "reb", {
                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
            } }
        };
    };
	
	class EAL_Quad : B_Quadbike_01_F {
        textures[] = {};
    };

    class I_Truck_02_covered_F {
        vItemSpace = 350;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 550000;
        textures[] = {
            { "Orange", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
            } },
            { "Green", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_indp.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_indp.paa"
            } }
        };
    };
	
	class shounka_a3_spr_civ_noir : I_Truck_02_covered_F {
        textures[] = {};
    };
	
	class shounka_a3_spr_civ_orange : shounka_a3_spr_civ_noir {};
	class shounka_a3_spr_civ_bleufonce : shounka_a3_spr_civ_noir {};
	class shounka_a3_spr_civ_jaune : shounka_a3_spr_civ_noir {};
	class shounka_a3_spr_civ : shounka_a3_spr_civ_noir {};
	class shounka_a3_spr_civ_grise : shounka_a3_spr_civ_noir {};

    class I_Truck_02_transport_F : I_Truck_02_covered_F {
        vItemSpace = 250;
        price = 500000;
    };
	
	class Mrshounka_Vandura_civ_jaune : I_Truck_02_transport_F {};
	class Mrshounka_Vandura_civ_orange : I_Truck_02_transport_F {};
	class Mrshounka_Vandura_civ_noir : I_Truck_02_transport_F {};
	class Mrshounka_Vandura_civ : I_Truck_02_transport_F {};
	class Mrshounka_Vandura_civ_bleufonce : I_Truck_02_transport_F {};
	class Mrshounka_Vandura_civ_rose : I_Truck_02_transport_F {};
	class Mrshounka_Vandura_civ_grise : I_Truck_02_transport_F {};
	class Mrshounka_Vandura_civ_rouge : I_Truck_02_transport_F {};
	class Mrshounka_Vandura_civ_violet : I_Truck_02_transport_F {};
	
	class O_Truck_02_fuel_F {
        vItemSpace = 400;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 600000;
        textures[] = {};
    };

    class O_Truck_03_covered_F {
        vItemSpace = 750;
        licenses[] = { {"rebel"}, {""}, {""}, {""} };
        price = 1700000;
        textures[] = {};
    };
	
	class O_Truck_03_fuel_F : O_Truck_03_covered_F {
        price = 3000000;
    };
	
	class O_Truck_03_ammo_F : O_Truck_03_covered_F {
        vItemSpace = 10;
		price = 90000000;
    };

    class C_Hatchback_01_F {
        vItemSpace = 10;
        licenses[] = { {"driver"}, {"cDriver"}, {""}, {""} };
        price = 55000;
        textures[] = {
            { "Beige", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base01_co.paa"
            } },
            { "Grün", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base02_co.paa"
            } },
            { "Blau", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base03_co.paa"
            } },
            { "Dunkelblau", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base04_co.paa"
            } },
            { "Gelb", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base06_co.paa"
            } },
            { "Weiß", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base07_co.paa"
            } },
            { "Grau", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base08_co.paa"
            } },
            { "Schwarz", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base09_co.paa"
            } },
			{ "Beige", "cop", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base01_co.paa"
            } },
            { "Dunkelblau", "cop", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base04_co.paa"
            } },
            { "Grau", "cop", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base08_co.paa"
            } },
            { "Schwarz", "cop", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base09_co.paa"
            } }
        };
    };
	
	class C_Hatchback_01_beigecustom_F : C_Hatchback_01_F {
        licenses[] = { {"taxi"}, {""}, {""}, {""} };
        textures[] = {
            { "Taxi", "civ", {
                "\EAL_Textures\Texturen\vehicles\taxi_hatchback.paa"
            } }
        };
    };
	
	class EAL_Limousine : C_Hatchback_01_F {
        price = 15000;
        textures[] = {};
    };
	
	class EAL_Limousine_HW : EAL_Limousine {};
	
	class shounka_a3_cliors_civ : C_Hatchback_01_F {
        price = 100000;
        textures[] = {};
    };
	
	class shounka_a3_cliors_civ_bleufonce : shounka_a3_cliors_civ {};
	class shounka_a3_cliors_civ_grise : shounka_a3_cliors_civ {};
	class shounka_a3_cliors_civ_jaune : shounka_a3_cliors_civ {};
	class shounka_a3_cliors_civ_noir : shounka_a3_cliors_civ {};
	class shounka_a3_cliors_civ_orange : shounka_a3_cliors_civ {};
	class shounka_a3_cliors_civ_rose : shounka_a3_cliors_civ {};
	class shounka_a3_cliors_civ_violet : shounka_a3_cliors_civ {};
	
	class Jonzie_Raptor : shounka_a3_cliors_civ {
        price = 120000;
    };
	
	class Mrshounka_raptor_civ : Jonzie_Raptor {};
	class Mrshounka_raptor2_civ : Jonzie_Raptor {};
	class Mrshounka_raptor2_bleufonce : Jonzie_Raptor {};
	class Mrshounka_raptor2_grise : Jonzie_Raptor {};
	class Mrshounka_raptor2_jaune : Jonzie_Raptor {};
	class Mrshounka_raptor2_noir : Jonzie_Raptor {};
	class Mrshounka_raptor2_orange : Jonzie_Raptor {};
	class Mrshounka_raptor2_violet : Jonzie_Raptor {};
	class Mrshounka_raptor2_rouge : Jonzie_Raptor {};
	
	class Mrshounka_golfvi_civ : shounka_a3_cliors_civ {
        price = 70000;
    };
	
	class Mrshounka_golfvi_bleufonce : Mrshounka_golfvi_civ {};
	class Mrshounka_golfvi_grise : Mrshounka_golfvi_civ {};
	class Mrshounka_golfvi_jaune : Mrshounka_golfvi_civ {};
	class Mrshounka_golfvi_noir : Mrshounka_golfvi_civ {};
	class Mrshounka_golfvi_orange : Mrshounka_golfvi_civ {};
	class Mrshounka_golfvi_rose : Mrshounka_golfvi_civ {};
	class Mrshounka_golfvi_violet : Mrshounka_golfvi_civ {};
	class Jonzie_Ceed : Mrshounka_golfvi_civ {};
	
	class Jonzie_VE : shounka_a3_cliors_civ {
        price = 80000;
    };
	
	class Jonzie_Ute : Jonzie_VE {};
	class Mrshounka_hummer_civ_noir : Jonzie_Raptor {};
	class Mrshounka_hummer_civ_grise : Jonzie_Raptor {};
	class shounka_h2_bleufonce : Jonzie_Raptor {};
	class shounka_h2_jaune : Jonzie_Raptor {};
	class shounka_h2_noir : Jonzie_Raptor {};
	
	class Mrshounka_twingo_p_j : shounka_a3_cliors_civ {
        price = 60000;
    };
	
	class Mrshounka_twingo_p_g : Mrshounka_twingo_p_j {};
	class Mrshounka_twingo_p_bf : Mrshounka_twingo_p_j {};
	class Mrshounka_twingo_p : Mrshounka_twingo_p_j {};
	class Mrshounka_twingo_p_v : Mrshounka_twingo_p_j {};
	class Mrshounka_twingo_p_rose : Mrshounka_twingo_p_v {};
	class Mrshounka_twingo_p_o : Mrshounka_twingo_p_v {};
	class Mrshounka_twingo_p_noir : Mrshounka_twingo_p_v {};
	
	class Mrshounka_megane_rs_2015_violet : shounka_a3_cliors_civ {
        price = 95000;
    };
	
	class Mrshounka_megane_rs_2015_rouge : Mrshounka_megane_rs_2015_violet {};
	class Mrshounka_megane_rs_2015_rose : Mrshounka_megane_rs_2015_violet {};
	class Mrshounka_megane_rs_2015_orange : Mrshounka_megane_rs_2015_violet {};
	class Mrshounka_megane_rs_2015_noir : Mrshounka_megane_rs_2015_violet {};
	class Mrshounka_megane_rs_2015_jaune : Mrshounka_megane_rs_2015_violet {};
	class Mrshounka_megane_rs_2015_grise : Mrshounka_megane_rs_2015_violet {};
	class Mrshounka_megane_rs_2015_bleufonce : Mrshounka_megane_rs_2015_violet {};
	class Mrshounka_megane_rs_2015_civ : Mrshounka_megane_rs_2015_violet {};
	
	class Mrshounka_cherokee_noir : shounka_a3_cliors_civ {
        price = 110000;
    };
	
	class Mrshounka_cherokee_noir_blanc : Mrshounka_cherokee_noir {};
	class Mrshounka_cherokee_noir_bleu : Mrshounka_cherokee_noir {};
	class Mrshounka_cherokee_noir_bleu_mat : Mrshounka_cherokee_noir {};
	class Mrshounka_cherokee_noir_mat : Mrshounka_cherokee_noir {};
	class Mrshounka_cherokee_noir_rouge : Mrshounka_cherokee_noir {};
	class Mrshounka_cherokee_noir_rouge_mat : Mrshounka_cherokee_noir {};
	class Mrshounka_cherokee_noir_violet : Mrshounka_cherokee_noir {};
	class Mrshounka_cherokee_noir_violet_mat : Mrshounka_cherokee_noir {};
	class Mrshounka_evox_civ : Jonzie_VE {};
	class Mrshounka_evox_bleufonce : Jonzie_VE {};
	class Mrshounka_evox_grise : Jonzie_VE {};
	class Mrshounka_evox_jaune : Jonzie_VE {};
	class Mrshounka_evox_noir : Jonzie_VE {};
	class Mrshounka_evox_orange : Jonzie_VE {};
	class Mrshounka_evox_rose : Jonzie_VE {};
	class Mrshounka_evox_violet : Jonzie_VE {};
	class Mrshounka_c63_2015_civ : Jonzie_Raptor {};
	class Mrshounka_c63_2015_mat : Jonzie_Raptor {};
	class Mrshounka_c63_2015_bleufonce : Jonzie_Raptor {};
	class Mrshounka_c63_2015_mat_b : Jonzie_Raptor {};
	class Mrshounka_c63_2015_grise : Jonzie_Raptor {};
	class Mrshounka_c63_2015_jaune : Jonzie_Raptor {};
	class Mrshounka_c63_2015_noir : Jonzie_Raptor {};
	class Mrshounka_c63_2015_mat_n : Jonzie_Raptor {};
	class Mrshounka_c63_2015_orange : Jonzie_Raptor {};
	class Mrshounka_c63_2015_rose : Jonzie_Raptor {};
	class Mrshounka_c63_2015_violet : Jonzie_Raptor {};
	
	class shounka_porsche911_violet : shounka_a3_cliors_civ {
        price = 200000;
    };
	
	class shounka_porsche911_rose : shounka_porsche911_violet {};
	class shounka_porsche911_orange : shounka_porsche911_violet {};
	class shounka_porsche911_noir : shounka_porsche911_violet {};
	class shounka_porsche911_jaune : shounka_porsche911_violet {};
	class shounka_porsche911_grise : shounka_porsche911_violet {};
	class shounka_porsche911_bleufonce : shounka_porsche911_violet {};
	class shounka_porsche911 : shounka_porsche911_violet {};
	class shounka_a3_peugeot508_civ_violet : Mrshounka_megane_rs_2015_violet {};
	class shounka_a3_peugeot508_civ_rose : Mrshounka_megane_rs_2015_violet {};
	class shounka_a3_peugeot508_civ_orange : Mrshounka_megane_rs_2015_violet {};
	class shounka_a3_peugeot508_civ_noir : Mrshounka_megane_rs_2015_violet {};
	class shounka_a3_peugeot508_civ_jaune : Mrshounka_megane_rs_2015_violet {};
	class shounka_a3_peugeot508_civ_grise : Mrshounka_megane_rs_2015_violet {};
	class shounka_a3_peugeot508_civ_bleufoncea : Mrshounka_megane_rs_2015_violet {};
	class shounka_a3_peugeot508_civ : Mrshounka_megane_rs_2015_violet {};
	class Mrshounka_subaru08_violet : Mrshounka_megane_rs_2015_violet {};
	class Mrshounka_subaru08_rose : Mrshounka_megane_rs_2015_violet {};
	class Mrshounka_subaru08_orange : Mrshounka_megane_rs_2015_violet {};
	class Mrshounka_subaru08_noir : Mrshounka_megane_rs_2015_violet {};
	class Mrshounka_subaru08_jaune : Mrshounka_megane_rs_2015_violet {};
	class Mrshounka_subaru08_grise : Mrshounka_megane_rs_2015_violet {};
	class Mrshounka_subaru08_bleufonce : Mrshounka_megane_rs_2015_violet {};
	class Mrshounka_subaru08_civ : Mrshounka_megane_rs_2015_violet {};
	class Mrshounka_c4_picasso_p_violet : Jonzie_VE {};
	class Mrshounka_c4_picasso_p_rose : Jonzie_VE {};
	class Mrshounka_c4_picasso_p_orange : Jonzie_VE {};
	class Mrshounka_c4_picasso_p_noir : Jonzie_VE {};
	class Mrshounka_c4_picasso_p_jaune : Jonzie_VE {};
	class Mrshounka_c4_picasso_p_grise : Jonzie_VE {};
	class Mrshounka_c4_picasso_p_bleufonce : Jonzie_VE {};
	class Mrshounka_c4_picasso_p_civ : Jonzie_VE {};
	
	class Mrshounka_c4_p_violet : shounka_a3_cliors_civ {
        price = 75000;
    };
	
	class Mrshounka_c4_p_rose : Mrshounka_c4_p_violet {};
	class Mrshounka_c4_p_orange : Mrshounka_c4_p_violet {};
	class Mrshounka_c4_p_noir : Mrshounka_c4_p_violet {};
	class Mrshounka_c4_p_jaune : Mrshounka_c4_p_violet {};
	class Mrshounka_c4_p_grise : Mrshounka_c4_p_violet {};
	class Mrshounka_c4_p_bleufonce : Mrshounka_c4_p_violet {};
	class Mrshounka_c4_p_civ : Mrshounka_c4_p_violet {};
	
	class shounka_avalanche_violet : shounka_a3_cliors_civ {
        price = 85000;
    };
	
	class shounka_avalanche_rose : shounka_avalanche_violet {};
	class shounka_avalanche_orange : shounka_avalanche_violet {};
	class shounka_avalanche_noir : shounka_avalanche_violet {};
	class shounka_avalanche_jaune : shounka_avalanche_violet {};
	class shounka_avalanche_grise : shounka_avalanche_violet {};
	class shounka_avalanche_bleufonce : shounka_avalanche_violet {};
	class shounka_avalanche : shounka_avalanche_violet {};
	class Quiet_Cadillac_rouge_f : Mrshounka_megane_rs_2015_violet {};
	class Quiet_Cadillac_noir_f : Mrshounka_megane_rs_2015_violet {};
	class Quiet_Cadillac_chrome_f : Mrshounka_megane_rs_2015_violet {};
	class Quiet_Cadillac_bleu_f : Mrshounka_megane_rs_2015_violet {};
	class Quiet_Cadillac_blanche_f : Mrshounka_megane_rs_2015_violet {};
	class Mrshounka_Bowler_c_violet : Mrshounka_megane_rs_2015_violet {};
	class Mrshounka_Bowler_c_rose : Mrshounka_megane_rs_2015_violet {};
	class Mrshounka_Bowler_c_orange : Mrshounka_megane_rs_2015_violet {};
	class Mrshounka_Bowler_c_noir : Mrshounka_megane_rs_2015_violet {};
	class Mrshounka_Bowler_c_jaune : Mrshounka_megane_rs_2015_violet {};
	class Mrshounka_Bowler_c_grise : Mrshounka_megane_rs_2015_violet {};
	class Mrshounka_Bowler_c_bleufonce : Mrshounka_megane_rs_2015_violet {};
	class Mrshounka_Bowler_c : Mrshounka_megane_rs_2015_violet {};
	
	class Mrshounka_a3_308_civ : shounka_a3_cliors_civ {
        price = 65000;
    };
	
	class Mrshounka_a3_308_civ_bleufonce : Mrshounka_a3_308_civ {};
	class Mrshounka_a3_308_civ_grise : Mrshounka_a3_308_civ {};
	class Mrshounka_a3_308_civ_jaune : Mrshounka_a3_308_civ {};
	class Mrshounka_a3_308_civ_noir : Mrshounka_a3_308_civ {};
	class Mrshounka_a3_308_civ_orange : Mrshounka_a3_308_civ {};
	class Mrshounka_a3_308_civ_rose : Mrshounka_a3_308_civ {};
	class Mrshounka_a3_308_civ_violet : Mrshounka_a3_308_civ {};
	class Mrshounka_a3_308_rcz : Mrshounka_golfvi_civ {};
	class Mrshounka_a3_308_rcz_bleufonce : Mrshounka_golfvi_civ {};
	class Mrshounka_a3_308_rcz_grise : Mrshounka_golfvi_civ {};
	class Mrshounka_a3_308_rcz_jaune : Mrshounka_golfvi_civ {};
	class Mrshounka_a3_308_rcz_noir : Mrshounka_golfvi_civ {};
	class Mrshounka_a3_308_rcz_orange : Mrshounka_golfvi_civ {};
	class Mrshounka_a3_308_rcz_rose : Mrshounka_golfvi_civ {};
	class Mrshounka_a3_308_rcz_violet : Mrshounka_golfvi_civ {};
	
	class Mrshounka_rs4_civ : shounka_a3_cliors_civ {
        price = 150000;
    };
	
	class Mrshounka_rs4_civ_bleufonce : Mrshounka_rs4_civ {};
	class Mrshounka_rs4_civ_grise : Mrshounka_rs4_civ {};
	class Mrshounka_rs4_civ_jaune : Mrshounka_rs4_civ {};
	class Mrshounka_rs4_civ_noir : Mrshounka_rs4_civ {};
	class Mrshounka_rs4_civ_orange : Mrshounka_rs4_civ {};
	class Mrshounka_rs4_civ_rose : Mrshounka_rs4_civ {};
	class Mrshounka_rs4_civ_violet : Mrshounka_rs4_civ {};
	
	class shounka_a3_rs5_civ : shounka_a3_cliors_civ {
        price = 180000;
    };
	
	class shounka_a3_rs5_civ_bleufonce : shounka_a3_rs5_civ {};
	class shounka_a3_rs5_civ_grise : shounka_a3_rs5_civ {};
	class shounka_a3_rs5_civ_jaune : shounka_a3_rs5_civ {};
	class shounka_a3_rs5_civ_noir : shounka_a3_rs5_civ {};
	class shounka_a3_rs5_civ_orange : shounka_a3_rs5_civ {};
	class shounka_a3_rs5_civ_rose : shounka_a3_rs5_civ {};
	class shounka_a3_rs5_civ_violet : shounka_a3_rs5_civ {};
	
	class shounka_rs6 : shounka_a3_cliors_civ {
        price = 190000;
    };
	
	class shounka_rs6_bleufonce : shounka_rs6 {};
	class shounka_rs6_grise : shounka_rs6 {};
	class shounka_rs6_jaune : shounka_rs6 {};
	class shounka_rs6_noir : shounka_rs6 {};
	class shounka_rs6_orange : shounka_rs6 {};
	class shounka_rs6_rose : shounka_rs6 {};
	class shounka_rs6_violet : shounka_rs6 {};
	class A3L_BMW135Black : Jonzie_Raptor {};
	class A3L_BMW135Blue : Jonzie_Raptor {};
	class A3L_BMW135Sport1 : Jonzie_Raptor {};
	class A3L_BMW135Sport3 : Jonzie_Raptor {};
	class A3L_BMW135Sport5 : Jonzie_Raptor {};
	class A3L_BMW135Sport2 : Jonzie_Raptor {};
	class A3L_BMW135Sport4 : Jonzie_Raptor {};
	class A3L_BMW135Purple : Jonzie_Raptor {};
	class A3L_BMW135Red : Jonzie_Raptor {};
	class A3L_BMW135White : Jonzie_Raptor {};
	class Mrshounka_bmwm6_civ : shounka_porsche911_violet {};
	class Mrshounka_bmwm6_bleufonce : shounka_porsche911_violet {};
	class Mrshounka_bmwm6_grise : shounka_porsche911_violet {};
	class Mrshounka_bmwm6_jaune : shounka_porsche911_violet {};
	class Mrshounka_bmwm6_noir : shounka_porsche911_violet {};
	class Mrshounka_bmwm6_orange : shounka_porsche911_violet {};
	class Mrshounka_bmwm6_rose : shounka_porsche911_violet {};
	class Mrshounka_bmwm6_violet : shounka_porsche911_violet {};
	class Mrshounka_cayenne_p_civ : shounka_porsche911_violet {};
	class Mrshounka_cayenne_p_bleufonce : shounka_porsche911_violet {};
	class Mrshounka_cayenne_p_grise : shounka_porsche911_violet {};
	class Mrshounka_cayenne_p_jaune : shounka_porsche911_violet {};
	class Mrshounka_cayenne_p_noir : shounka_porsche911_violet {};
	class Mrshounka_cayenne_p_orange : shounka_porsche911_violet {};
	class Mrshounka_cayenne_p_rose : shounka_porsche911_violet {};
	class Mrshounka_cayenne_p_violet : shounka_porsche911_violet {};
	
	class quiet_sub2015_blanche_f : Mrshounka_megane_rs_2015_violet {};
	
	class Mrshounka_a3_smart_civ : shounka_a3_cliors_civ {
        price = 55000;
    };
	
	class Mrshounka_a3_smart_civ_bleu : Mrshounka_a3_smart_civ {};
	class Mrshounka_a3_smart_civ_noir : Mrshounka_a3_smart_civ {};
	class IVORY_R8SPYDER : shounka_porsche911_violet {};
	
	class DAR_TahoeCivBlack : shounka_a3_cliors_civ {
        price = 88000;
    };
	
	class DAR_TahoeCivBlue : DAR_TahoeCivBlack {};
	class DAR_TahoeCivRed : DAR_TahoeCivBlack {};
	class DAR_TahoeCivSilver : DAR_TahoeCivBlack {};
	class DAR_TahoeCiv : DAR_TahoeCivBlack {};
	class DAR_FusionCivBlack : Mrshounka_c4_p_violet {};
	class DAR_FusionCivBlue : Mrshounka_c4_p_violet {};
	class DAR_FusionCivRed : Mrshounka_c4_p_violet {};
	class DAR_FusionCiv : Mrshounka_c4_p_violet {};
	class DAR_TaurusCivBlack : Jonzie_VE {};
	class DAR_TaurusCivBlue : Jonzie_VE {};
	class DAR_TaurusCiv : Jonzie_VE {};
	class A3L_PuntoBlack : Mrshounka_twingo_p_j {};
	class A3L_PuntoBlue : Mrshounka_twingo_p_j {};
	class A3L_PuntoGrey : Mrshounka_twingo_p_j {};
	class A3L_PuntoRed : Mrshounka_twingo_p_j {};
	class A3L_PuntoWhite : Mrshounka_twingo_p_j {};
	class A3L_FordKaBlack : Mrshounka_twingo_p_j {};
	class A3L_FordKaGrey : Mrshounka_twingo_p_j {};
	class A3L_FordKaRed : Mrshounka_twingo_p_j {};
	class A3L_FordKaWhite : Mrshounka_twingo_p_j {};
	class A3L_FordKaBlue : Mrshounka_twingo_p_j {};
	class Mrshounka_Alfa_Romeo_civ : Jonzie_Raptor {};
	class Mrshounka_Alfa_Romeo_bleufonce : Jonzie_Raptor {};
	class Mrshounka_Alfa_Romeo_grise : Jonzie_Raptor {};
	class Mrshounka_Alfa_Romeo_jaune : Jonzie_Raptor {};
	class Mrshounka_Alfa_Romeo_noir : Jonzie_Raptor {};
	class Mrshounka_Alfa_Romeo_orange : Jonzie_Raptor {};
	class Mrshounka_Alfa_Romeo_rose : Jonzie_Raptor {};
	class Mrshounka_Alfa_Romeo_violet : Jonzie_Raptor {};
	
	class shounka_a3_audiq7_bleu : shounka_a3_cliors_civ {
        price = 130000;
    };
	
	class Mrshounka_Volkswagen_Touareg_civ : Mrshounka_cherokee_noir {};
	class Mrshounka_Volkswagen_Touareg_bleufonce : Mrshounka_cherokee_noir {};
	class Mrshounka_Volkswagen_Touareg_grise : Mrshounka_cherokee_noir {};
	class Mrshounka_Volkswagen_Touareg_noir : Mrshounka_cherokee_noir {};
	class Mrshounka_Volkswagen_Touareg_orange : Mrshounka_cherokee_noir {};
	class Mrshounka_Volkswagen_Touareg_rose : Mrshounka_cherokee_noir {};
	class Mrshounka_Volkswagen_Touareg_violet : Mrshounka_cherokee_noir {};
	class shounka_a3_ds4_violet : Mrshounka_golfvi_civ {};
	class shounka_a3_ds4_rose : Mrshounka_golfvi_civ {};
	class shounka_a3_ds4_orange : Mrshounka_golfvi_civ {};
	class shounka_a3_ds4_noir : Mrshounka_golfvi_civ {};
	class shounka_a3_ds4_jaune : Mrshounka_golfvi_civ {};
	class shounka_a3_ds4_grise : Mrshounka_golfvi_civ {};
	class shounka_a3_ds4_bleufonce : Mrshounka_golfvi_civ {};
	class shounka_a3_ds4_civ : Mrshounka_golfvi_civ {};
	class Mrshounka_a3_ds3_civ_civ_violet : Mrshounka_a3_308_civ {};
	class Mrshounka_a3_ds3_civ_civ_rose : Mrshounka_a3_308_civ {};
	class Mrshounka_a3_ds3_civ_civ_orange : Mrshounka_a3_308_civ {};
	class Mrshounka_a3_ds3_civ_noir : Mrshounka_a3_308_civ {};
	class Mrshounka_a3_ds3_civ_civ_jaune : Mrshounka_a3_308_civ {};
	class Mrshounka_a3_ds3_civ_civ_grise : Mrshounka_a3_308_civ {};
	class Mrshounka_a3_ds3_civ_bleufonce : Mrshounka_a3_308_civ {};
	class Mrshounka_a3_ds3_civ : Mrshounka_a3_308_civ {};
	
	class Quiet_c65amg_blanche_f : shounka_a3_cliors_civ {
        price = 250000;
    };
	
	class Quiet_c65amg_bleu_f : Quiet_c65amg_blanche_f {};
	class Quiet_c65amg_noir_f : Quiet_c65amg_blanche_f {};
	class Quiet_c65amg_rouge_f : Quiet_c65amg_blanche_f {};
	
	class Quiet_c65amg_chrome_f : shounka_a3_cliors_civ {
        price = 290000;
    };
	
	class Mrshounka_207_civ : shounka_avalanche_violet {};
	class Mrshounka_207_bleufonce : shounka_avalanche_violet {};
	class Mrshounka_207_grise : shounka_avalanche_violet {};
	class Mrshounka_207_jaune : shounka_avalanche_violet {};
	class Mrshounka_207_noir : shounka_avalanche_violet {};
	class Mrshounka_207_orange : shounka_avalanche_violet {};
	class Mrshounka_207_rose : shounka_avalanche_violet {};
	class Mrshounka_207_violet : shounka_avalanche_violet {};
	class quiet_sub2015_bleu_f : Mrshounka_cherokee_noir {};
	class quiet_sub2015_chrome_f : Mrshounka_cherokee_noir {};
	class quiet_sub2015_noir_f : Mrshounka_cherokee_noir {};
	class quiet_sub2015_rouge_f : Mrshounka_cherokee_noir {};
	
	class Mrshounka_r5_violet : shounka_a3_cliors_civ {
        price = 20000;
    };
	
	class Mrshounka_r5_rose : Mrshounka_r5_violet {};
	class Mrshounka_r5_orange : Mrshounka_r5_violet {};
	class Mrshounka_r5_noir : Mrshounka_r5_violet {};
	class Mrshounka_r5_jaune : Mrshounka_r5_violet {};
	class Mrshounka_r5_grise : Mrshounka_r5_violet {};
	class Mrshounka_r5_bleufonce : Mrshounka_r5_violet {};
	class Mrshounka_r5_civ : Mrshounka_r5_violet {};
	class RDS_Gaz24_Civ_03 : Mrshounka_r5_violet {};
	class RDS_Gaz24_Civ_01 : Mrshounka_r5_violet {};
	class RDS_Gaz24_Civ_02 : Mrshounka_r5_violet {};
	class RDS_Golf4_Civ_01 : Mrshounka_r5_violet {};
	class RDS_S1203_Civ_01 : Mrshounka_r5_violet {};
	
	class RDS_Octavia_Civ_01 : shounka_a3_cliors_civ {
        price = 55000;
    };
	
	class RDS_Lada_Civ_01 : Mrshounka_r5_violet {};
	class RDS_Lada_Civ_04 : Mrshounka_r5_violet {};
	class RDS_Lada_Civ_03 : Mrshounka_r5_violet {};
	class RDS_Lada_Civ_02 : Mrshounka_r5_violet {};
	
	class A3L_RX7_White : shounka_a3_cliors_civ {
        price = 45000;
    };
	
	class A3L_RX7_Blue : A3L_RX7_White {};
	class A3L_RX7_Red : A3L_RX7_White {};
	class A3L_RX7_Black : A3L_RX7_White {};
	
	class Jonzie_30CSL : shounka_a3_cliors_civ {
        price = 30000;
    };
	
	class Jonzie_Datsun_510 : Jonzie_30CSL {};
	class Jonzie_Datsun_Z432 : Jonzie_30CSL {};
	
	class Mrshounka_mercedes_190_p_civ : shounka_a3_cliors_civ {
        price = 35000;
    };
	
	class Mrshounka_mercedes_190_p_jaune : Mrshounka_mercedes_190_p_civ {};
	class Mrshounka_mercedes_190_p_grise : Mrshounka_mercedes_190_p_civ {};
	
	class shounka_clk : shounka_a3_cliors_civ {
        price = 40000;
    };
	
	class shounka_clk_bleufonce : shounka_clk {};
	class shounka_clk_grise : shounka_clk {};
	class shounka_clk_jaune : shounka_clk {};
	class shounka_clk_noir : shounka_clk {};
	class shounka_clk_orange : shounka_clk {};
	class shounka_clk_rose : shounka_clk {};
	class shounka_clk_violet : shounka_clk {};
	class S_Skyline_Yellow : RDS_Octavia_Civ_01 {};
	class S_Skyline_White : RDS_Octavia_Civ_01 {};
	class S_Skyline_Red : RDS_Octavia_Civ_01 {};
	class S_Skyline_Black : RDS_Octavia_Civ_01 {};
	class S_Skyline_Blue : RDS_Octavia_Civ_01 {};
	class S_Skyline_Purple : RDS_Octavia_Civ_01 {};
	class Jonzie_Mini_Cooper : Mrshounka_r5_violet {};
	
	class Jonzie_Mini_Cooper_R_spec : shounka_a3_cliors_civ {
        price = 25000;
    };
	
	class Jonzie_Galant : Jonzie_30CSL {};
	class mrshounka_92_civ : RDS_Octavia_Civ_01 {};
	class mrshounka_92_civ_noir : RDS_Octavia_Civ_01 {};
	class mrshounka_92_civ_jaune : RDS_Octavia_Civ_01 {};
	class Jonzie_STI : Jonzie_30CSL {};
	class ivory_wrx : shounka_clk {};
	class Jonzie_Corolla : Jonzie_Mini_Cooper_R_spec {};
	class A3L_VolksWagenGolfGTiwhite : Mrshounka_r5_violet {};
	class A3L_VolksWagenGolfGTired : Mrshounka_r5_violet {};
	class A3L_VolksWagenGolfGTiblue : Mrshounka_r5_violet {};
	class A3L_VolksWagenGolfGTiblack : Mrshounka_r5_violet {};
	class shounka_transam_violet : Mrshounka_mercedes_190_p_civ {};
	class shounka_transam_rose : Mrshounka_mercedes_190_p_civ {};
	class shounka_transam_orange : Mrshounka_mercedes_190_p_civ {};
	class shounka_transam_noir : Mrshounka_mercedes_190_p_civ {};
	class shounka_transam_jaune : Mrshounka_mercedes_190_p_civ {};
	class shounka_transam_grise : Mrshounka_mercedes_190_p_civ {};
	class shounka_transam_bleufonce : Mrshounka_mercedes_190_p_civ {};
	class shounka_transam : Mrshounka_mercedes_190_p_civ {};
	
	class Tal_Murci_PC : shounka_a3_cliors_civ {
        price = 300000;
    };
	
	class Tal_Murci_Orange : Tal_Murci_PC {};
	class Tal_Murci_Lime : Tal_Murci_PC {};
	class Tal_Murci_LightBlue : Tal_Murci_PC {};
	class Tal_Murci_Grey : Tal_Murci_PC {};
	class Tal_Murci_Green : Tal_Murci_PC {};
	class Tal_Murci_Blue : Tal_Murci_PC {};
	class Tal_Murci_Black : Tal_Murci_PC {};
	class Tal_Murci_Pink : Tal_Murci_PC {};
	class Tal_Murci_Purple : Tal_Murci_PC {};
	class Tal_Murci_Red : Tal_Murci_PC {};
	class Tal_Murci_White : Tal_Murci_PC {};
	class Tal_Murci_Yellow : Tal_Murci_PC {};
	
	class Tal_Maserati_Yellow : shounka_a3_cliors_civ {
        price = 350000;
    };
	
	class Tal_Maserati_White : Tal_Maserati_Yellow {};
	class Tal_Maserati_Red : Tal_Maserati_Yellow {};
	class Tal_Maserati_Purple : Tal_Maserati_Yellow {};
	class Tal_Maserati_Pink : Tal_Maserati_Yellow {};
	class Tal_Maserati_Orange : Tal_Maserati_Yellow {};
	class Tal_Maserati_Lime : Tal_Maserati_Yellow {};
	class Tal_Maserati_LightBlue : Tal_Maserati_Yellow {};
	class Tal_Maserati_Grey : Tal_Maserati_Yellow {};
	class Tal_Maserati_Green : Tal_Maserati_Yellow {};
	class Tal_Maserati_Blue : Tal_Maserati_Yellow {};
	class Tal_Maserati_Black : Tal_Maserati_Yellow {};
	
	class S_PorscheRS_Black : shounka_a3_cliors_civ {
        price = 250000;
    };
	
	class S_PorscheRS_White : S_PorscheRS_Black {};
	class S_PorscheRS_Yellow : S_PorscheRS_Black {};
	
	class Mrshounka_agera_pd : shounka_a3_cliors_civ {
        price = 500000;
    };
	
	class Mrshounka_agera_p_bleu : Mrshounka_agera_pd {};
	class Mrshounka_agera_p_jaune : Mrshounka_agera_pd {};
	class Mrshounka_agera_p_noir : Mrshounka_agera_pd {};
	class S_Vantage_Black : Tal_Maserati_Yellow {};
	class S_Vantage_Blue : Tal_Maserati_Yellow {};
	class S_Vantage_LightBlue : Tal_Maserati_Yellow {};
	class S_Vantage_Purple : Tal_Maserati_Yellow {};
	class S_Vantage_Red : Tal_Maserati_Yellow {};
	class S_Vantage_White : Tal_Maserati_Yellow {};
	class S_Vantage_Yellow : Tal_Maserati_Yellow {};
	class Mrshounka_pagani_c_violet : Mrshounka_agera_pd {};
	class Mrshounka_pagani_c_rose : Mrshounka_agera_pd {};
	class Mrshounka_pagani_c_orange : Mrshounka_agera_pd {};
	class Mrshounka_pagani_c_noir : Mrshounka_agera_pd {};
	class Mrshounka_pagani_c_jaune : Mrshounka_agera_pd {};
	class Mrshounka_pagani_c_grise : Mrshounka_agera_pd {};
	class Mrshounka_pagani_c_bleufonce : Mrshounka_agera_pd {};
	class Mrshounka_pagani_c : Mrshounka_agera_pd {};
	
	class Mrshounka_bmwm1_civ_violet : shounka_a3_cliors_civ {
        price = 400000;
    };
	
	class Mrshounka_bmwm1_civ_rose : Mrshounka_bmwm1_civ_violet {};
	class Mrshounka_bmwm1_civ_orange : Mrshounka_bmwm1_civ_violet {};
	class Mrshounka_bmwm1_civ_noir : Mrshounka_bmwm1_civ_violet {};
	class Mrshounka_bmwm1_civ_jaune : Mrshounka_bmwm1_civ_violet {};
	class Mrshounka_bmwm1_civ_grise : Mrshounka_bmwm1_civ_violet {};
	class Mrshounka_bmwm1_civ_bleufonce : Mrshounka_bmwm1_civ_violet {};
	class Mrshounka_bmwm1_civ : Mrshounka_bmwm1_civ_violet {};
	class Quiet_v2_r8plus_rouge_f : Mrshounka_agera_pd {};
	class Quiet_v2_r8plus_noir_f : Mrshounka_agera_pd {};
	
	class Quiet_v2_r8plus_chrome_f : shounka_a3_cliors_civ {
        price = 520000;
    };
	
	class Quiet_v2_r8plus_bleu_f : Mrshounka_agera_pd {};
	class Quiet_v2_r8plus_blanche_f : Mrshounka_agera_pd {};
	class shounka_gt_bleufonce : Tal_Murci_PC {};
	class shounka_gt : Tal_Murci_PC {};
	class shounka_gt_jaune : Tal_Murci_PC {};
	class shounka_gt_noir : Tal_Murci_PC {};
	class shounka_gt_orange : Tal_Murci_PC {};
	class shounka_gt_rose : Tal_Murci_PC {};
	class shounka_gt_violet : Tal_Murci_PC {};
	class shounka_gt_grise : Tal_Murci_PC {};
	class shounka_f430_spider_violet : Mrshounka_bmwm1_civ_violet {};
	class shounka_f430_spider_rose : Mrshounka_bmwm1_civ_violet {};
	class shounka_f430_spider_orange : Mrshounka_bmwm1_civ_violet {};
	class shounka_f430_spider_noir : Mrshounka_bmwm1_civ_violet {};
	class shounka_f430_spider_jaune : Mrshounka_bmwm1_civ_violet {};
	class shounka_f430_spider_grise : Mrshounka_bmwm1_civ_violet {};
	class shounka_f430_spider_bleufonce : Mrshounka_bmwm1_civ_violet {};
	class shounka_f430_spider : Mrshounka_bmwm1_civ_violet {};
	
	class quiet_Bugatti_blanche_f : shounka_a3_cliors_civ {
        price = 700000;
    };
	
	class A3L_Veyron_red : quiet_Bugatti_blanche_f {};
	class A3L_Veyron_orange : quiet_Bugatti_blanche_f {};
	class A3L_Veyron : quiet_Bugatti_blanche_f {};
	class A3L_Veyron_black : quiet_Bugatti_blanche_f {};
	class S_McLarenP1_Black : Mrshounka_agera_pd {};
	class S_McLarenP1_Blue : Mrshounka_agera_pd {};
	class S_McLarenP1_Orange : Mrshounka_agera_pd {};
	class S_McLarenP1_Silver : Mrshounka_agera_pd {};
	class S_McLarenP1_White : Mrshounka_agera_pd {};
	class S_McLarenP1_Yellow : Mrshounka_agera_pd {};
	class Mrshounka_a3_gtr_civ_noir : Mrshounka_agera_pd {};
	class Mrshounka_a3_gtr_civ_bleu : Mrshounka_agera_pd {};
	class Mrshounka_a3_gtr_civ : Mrshounka_agera_pd {};
	class mrshounka_huracan_c : Mrshounka_agera_pd {};
	class mrshounka_huracan_c_bleufonce : Mrshounka_agera_pd {};
	class mrshounka_huracan_c_grise : Mrshounka_agera_pd {};
	class mrshounka_huracan_c_jaune : Mrshounka_agera_pd {};
	class mrshounka_huracan_c_noir : Mrshounka_agera_pd {};
	class mrshounka_huracan_c_orange : Mrshounka_agera_pd {};
	class mrshounka_huracan_c_rose : Mrshounka_agera_pd {};
	class mrshounka_huracan_c_violet : Mrshounka_agera_pd {};
	class Mrshounka_veneno_c : Mrshounka_agera_pd {};
	class Mrshounka_veneno_c_bleu : Mrshounka_agera_pd {};
	class Mrshounka_veneno_c_jaune : Mrshounka_agera_pd {};
	class Mrshounka_veneno_c_noir : Mrshounka_agera_pd {};
	class ivory_lfa : Mrshounka_agera_pd {};
	class Mrshounka_lykan_c : Mrshounka_agera_pd {};
	class Mrshounka_lykan_c_bleufonce : Mrshounka_agera_pd {};
	class Mrshounka_lykan_c_grise : Mrshounka_agera_pd {};
	class Mrshounka_lykan_c_jaune : Mrshounka_agera_pd {};
	class Mrshounka_lykan_c_noir : Mrshounka_agera_pd {};
	class Mrshounka_lykan_c_orange : Mrshounka_agera_pd {};
	class Mrshounka_lykan_c_rose : Mrshounka_agera_pd {};
	class Mrshounka_lykan_c_violet : Mrshounka_agera_pd {};
	class Jonzie_Quattroporte : Mrshounka_agera_pd {};
	class shounka_mp4 : Mrshounka_agera_pd {};
	class shounka_mp4_bleufonce : Mrshounka_agera_pd {};
	class shounka_mp4_grise : Mrshounka_agera_pd {};
	class shounka_mp4_jaune : Mrshounka_agera_pd {};
	class shounka_mp4_noir : Mrshounka_agera_pd {};
	class shounka_mp4_orange : Mrshounka_agera_pd {};
	class shounka_mp4_rose : Mrshounka_agera_pd {};
	class shounka_mp4_violet : Mrshounka_agera_pd {};
	class Mrshounka_lincoln_violet : S_PorscheRS_Black {};
	class Mrshounka_lincoln_rose : S_PorscheRS_Black {};
	class Mrshounka_lincoln_orange : S_PorscheRS_Black {};
	class Mrshounka_lincoln_noir : S_PorscheRS_Black {};
	class Mrshounka_lincoln_jaune : S_PorscheRS_Black {};
	class Mrshounka_lincoln_grise : S_PorscheRS_Black {};
	class Mrshounka_lincoln_bleufonce : S_PorscheRS_Black {};
	class Mrshounka_lincoln_civ : S_PorscheRS_Black {};
	
	class quiet_Ford_shelbyGT500_rouge_f : shounka_a3_cliors_civ {
        price = 220000;
    };
	
	class quiet_Ford_shelbyGT500_chrome_f : shounka_a3_cliors_civ {
        price = 240000;
    };
	
	class quiet_Ford_shelbyGT500_noir_f : quiet_Ford_shelbyGT500_rouge_f {};
	class quiet_Ford_shelbyGT500_bleu_f : quiet_Ford_shelbyGT500_rouge_f {};
	class quiet_Ford_shelbyGT500_blanche_f : quiet_Ford_shelbyGT500_rouge_f {};
	class Mrshounka_mustang_violet : shounka_porsche911_violet {};
	class Mrshounka_mustang_rose : shounka_porsche911_violet {};
	class Mrshounka_mustang_orange : shounka_porsche911_violet {};
	class Mrshounka_mustang_mat_n : shounka_porsche911_violet {};
	class Mrshounka_mustang_noir : shounka_porsche911_violet {};
	class Mrshounka_mustang_jaune : shounka_porsche911_violet {};
	class Mrshounka_mustang_grise : shounka_porsche911_violet {};
	class Mrshounka_mustang_mat_b : shounka_porsche911_violet {};
	class Mrshounka_mustang_bleufonce : shounka_porsche911_violet {};
	class Mrshounka_mustang_mat : shounka_porsche911_violet {};
	class Mrshounka_mustang_civ : shounka_porsche911_violet {};
	class Jonzie_XB : shounka_porsche911_violet {};
	class Jonzie_Viper : shounka_porsche911_violet {};
	class Mrshounka_a3_dodge15_civ_violet : S_PorscheRS_Black {};
	class Mrshounka_a3_dodge15_civ_rose : S_PorscheRS_Black {};
	class Mrshounka_a3_dodge15_civ_orange : S_PorscheRS_Black {};
	class Mrshounka_a3_dodge15_civ_jaune : S_PorscheRS_Black {};
	class Mrshounka_a3_dodge15_civ_grise : S_PorscheRS_Black {};
	class Mrshounka_a3_dodge15_civ_bleufonce : S_PorscheRS_Black {};
	class Mrshounka_a3_dodge15_civ : S_PorscheRS_Black {};
	class Quiet_dodge_15_noir_f : S_PorscheRS_Black {};
	
	class Quiet_dodge_15_chrome_f : shounka_a3_cliors_civ {
        price = 270000;
    };
	
	class Quiet_dodge_15_bleu_f : S_PorscheRS_Black {};
	class Quiet_dodge_15_blanche_f : S_PorscheRS_Black {};
	class Quiet_1969charger_rouge_f : shounka_a3_rs5_civ {};
	class Quiet_1969charger_noir_f : shounka_a3_rs5_civ {};
	class Quiet_1969charger_chrome_f : shounka_a3_rs5_civ {};
	class Quiet_1969charger_bleu_f : shounka_a3_rs5_civ {};
	class Quiet_1969charger_blanche_f : shounka_a3_rs5_civ {};
	
	class ivory_c : shounka_a3_cliors_civ {
        price = 190000;
    };
	
	class A3L_ChallengerBlue : shounka_a3_rs5_civ {};
	class A3L_ChallengerGreen : shounka_a3_rs5_civ {};
	class A3L_ChargerWhite : shounka_a3_rs5_civ {};
	class A3L_ChargerRed : shounka_a3_rs5_civ {};
	class A3L_Charger : shounka_a3_rs5_civ {};
	class A3L_ChargerBlue : shounka_a3_rs5_civ {};
	class A3L_ChargerBlack : shounka_a3_rs5_civ {};
	class DAR_ChallengerCivWhite : shounka_a3_rs5_civ {};
	class DAR_ChallengerCivRed : shounka_a3_rs5_civ {};
	class DAR_ChallengerCivOrange : shounka_a3_rs5_civ {};
	class DAR_ChallengerCivBlack : shounka_a3_rs5_civ {};
	class Mrshounka_yamaha_p_v : Jonzie_Raptor {};
	class Mrshounka_yamaha_p_rose : Jonzie_Raptor {};
	class Mrshounka_yamaha_p_o : Jonzie_Raptor {};
	class Mrshounka_yamaha_p_noir : Jonzie_Raptor {};
	class Mrshounka_yamaha_p_j : Jonzie_Raptor {};
	class Mrshounka_yamaha_p_g : Jonzie_Raptor {};
	class Mrshounka_yamaha_p_bf : Jonzie_Raptor {};
	class Mrshounka_yamaha_p : Jonzie_Raptor {};
	class shounka_harley_a3_rouge : Mrshounka_cherokee_noir {};
	class shounka_harley_a3_noir : Mrshounka_cherokee_noir {};
	class shounka_harley_a3_lolz : Mrshounka_cherokee_noir {};
	class shounka_harley_a3_bleu : Mrshounka_cherokee_noir {};
	class shounka_harley_a3 : Mrshounka_cherokee_noir {};
	class Mrshounka_ducati_p_v : shounka_a3_audiq7_bleu {};
	class Mrshounka_ducati_p_rose : shounka_a3_audiq7_bleu {};
	class Mrshounka_ducati_p_o : shounka_a3_audiq7_bleu {};
	class Mrshounka_ducati_p_noir : shounka_a3_audiq7_bleu {};
	class Mrshounka_ducati_p_j : shounka_a3_audiq7_bleu {};
	class Mrshounka_ducati_p_g : shounka_a3_audiq7_bleu {};
	class Mrshounka_ducati_p_bf : shounka_a3_audiq7_bleu {};
	class Mrshounka_ducati_p : shounka_a3_audiq7_bleu {};
	
	class shounka_a3_cliors_gend_civ : shounka_a3_cliors_civ {
        price = 55000;
    };
	
	class Mrshounka_a3_308_gend : shounka_a3_cliors_civ {
        price = 65000;
    };
	
	class Mrshounka_Volkswagen_Touareg_police_police : shounka_a3_cliors_civ {
        price = 75000;
    };
	
	class shounka_a3_audiq7_v2_gendarmerie : shounka_a3_cliors_civ {
        price = 80000;
    };
	
	class Mrshounka_rs_2015_g : shounka_a3_cliors_civ {
        price = 80000;
    };
	
	class shounka_a3_508gend : shounka_a3_cliors_civ {
        price = 85000;
    };
	
	class Mrshounka_ducati_police_p : shounka_a3_cliors_civ {
        price = 95000;
    };
	
	class shounka_a3_gendsprinter : shounka_a3_cliors_civ {
        price = 100000;
    };
	
	class Mrshounka_bmw_gend : shounka_a3_cliors_civ {
        price = 120000;
    };
	
	class Mrshounka_agera_gend_p : shounka_a3_cliors_civ {
        price = 200000;
    };
	
	class shounka_a3_508banalise : shounka_a3_cliors_civ {
        price = 80000;
    };
	
	class Mrshounka_rs4_gend_p_bleufonce : shounka_a3_cliors_civ {
        price = 100000;
    };
	
	class Mrshounka_rs4_gend_p_blanc : Mrshounka_rs4_gend_p_bleufonce {};
	class Mrshounka_rs4_gend_p_jaune : Mrshounka_rs4_gend_p_bleufonce {};
	class Mrshounka_rs4_gend_p_noir : Mrshounka_rs4_gend_p_bleufonce {};

    class C_SUV_01_F {
        vItemSpace = 10;
        licenses[] = { {"driver"}, {"cDriver"}, {""}, {""} };
        price = 95000;
        textures[] = {
            { "Dunkelrot", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_co.paa"
            } },
            { "Schwarz", "cop", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_02_co.paa"
            } },
			{ "Silber", "cop", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_03_co.paa"
            } },
			{ "Schwarz", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_02_co.paa"
            } },
            { "Silber", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_03_co.paa"
            } },
            { "Orange", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_04_co.paa"
            } },
            { "Medic", "med", {
                "\EAL_Textures\Texturen\vehicles\medic_suv.paa"
            } }
        };
    };
	
	class SUV_01_base_orange_F : C_SUV_01_F {
        licenses[] = { {"taxi"}, {""}, {""}, {""} };
        textures[] = {
            { "Taxi", "civ", {
                "\EAL_Textures\Texturen\vehicles\taxi_suv.paa"
            } }
        };
    };
	
	class EAL_SUV : C_SUV_01_F {
        price = 75000;
        textures[] = {};
    };
	
	class shounka_nemo_violet : EAL_SUV {
		price = 80000;
	};
	class shounka_nemo_rose : shounka_nemo_violet {};
	class shounka_nemo_orange : shounka_nemo_violet {};
	class shounka_nemo_noir : shounka_nemo_violet {};
	class shounka_nemo_jaune : shounka_nemo_violet {};
	class shounka_nemo_grise : shounka_nemo_violet {};
	class shounka_nemo_bleufonce : shounka_nemo_violet {};
	class shounka_nemo : shounka_nemo_violet {};

    class C_Van_01_transport_F {
        vItemSpace = 100;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 120000;
        textures[] = {
            { "Weiß", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            } },
            { "Rot", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            } }
        };
    };
	
	class C_Van_01_box_F : C_Van_01_transport_F {
        vItemSpace = 150;
        price = 185000;
    };
	
	class Jonzie_Transit : C_Van_01_box_F {};
	
	class C_Van_01_fuel_F : C_Van_01_transport_F {
        vItemSpace = 180;
        price = 150000;
    };

    class B_MRAP_01_F {
        vItemSpace = 10;
        licenses[] = { {""}, {"cDriver"}, {""}, {""} };
        price = 130000;
        textures[] = {};
    };
	
	class EAL_Hunter_SEK: B_MRAP_01_F {};
	class EAL_Hunter_BPol: B_MRAP_01_F {};
	class EAL_Hunter_LanPol: B_MRAP_01_F {};

    class B_Heli_Light_01_stripped_F {
        vItemSpace = 10;
        licenses[] = { {"rebel"}, {""}, {""}, {""} };
        price = 2;
        textures[] = {
            { "Rebel Digital", "reb", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
            } }
        };
    };

    class B_Heli_Light_01_F {
        vItemSpace = 10;
        licenses[] = { {"pilot"}, {"cAir"}, {"mAir"}, {""} };
        price = 550000;
        textures[] = {
            { "Sheriff", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sheriff_co.paa"
            } },
            { "Civ Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_blue_co.paa"
            } },
            { "Civ Red", "civ", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_co.paa"
            } },
			{ "Blueline", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_blueline_co.paa"
            } },
            { "Elliptical", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_elliptical_co.paa"
            } },
            { "Furious", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_furious_co.paa"
            } },
            { "Jeans Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_jeans_co.paa"
            } },
            { "Speedy Redline", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_speedy_co.paa"
            } },
            { "Sunset", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sunset_co.paa"
            } },
            { "Vrana", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_vrana_co.paa"
            } },
            { "Waves Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wave_co.paa"
            } },
            { "Rebel Digital", "reb", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
            } }
        };
    };

    class C_Heli_Light_01_civil_F : B_Heli_Light_01_F {
        price = 500000;
    };
	
	class B_Heli_Light_01_armed_F : B_Heli_Light_01_F {
        price = 4000000;
        textures[] = {
            { "Special", "reb", {
                "\EAL_Textures\Texturen\vehicles\pawnee.paa"
            } },
            { "Special", "cop", {
                "\EAL_Textures\Texturen\vehicles\pawnee.paa"
            } }
        };
    };
	
	class EAL_Humming : B_Heli_Light_01_F {
        price = 400000;
        textures[] = {};
    };
	
	class EAL_Humming_armed : EAL_Humming {
        price = 1100000;
    };

    class O_Heli_Light_02_unarmed_F {
        vItemSpace = 20;
        licenses[] = { {"pilot"}, {"cAir"}, {"mAir"}, {""} };
        price = 650000;
        textures[] = {
            { "Black", "cop", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_co.paa"
            } },
            { "Weiß/Blau", "civ", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_civilian_co.paa"
            } },
            { "Indep", "civ", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_indp_co.paa"
            } },
            { "Opfor", "reb", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_opfor_co.paa"
            } },
            { "Medic", "med", {
                "\EAL_Textures\Texturen\vehicles\medic_orca.paa"
            } }
        };
    };
	
	class O_Heli_Light_02_v2_F : O_Heli_Light_02_unarmed_F {
        price = 5000000;
		licenses[] = { {"rebel"}, {""}, {""}, {""} };
        textures[] = {};
    };
	
	class O_Heli_Light_02_F : O_Heli_Light_02_v2_F {};
	
	class EAL_Orca : O_Heli_Light_02_unarmed_F {
        textures[] = {};
    };
	
	class EAL_Orca_armed : EAL_Orca {
        price = 1300000;
    };
	
	class I_Heli_light_03_unarmed_F {
        vItemSpace = 20;
        licenses[] = { {""}, {"cAir"}, {""}, {""} };
        price = 900000;
        textures[] = {};
    };
	
	class I_Heli_light_03_F : I_Heli_light_03_unarmed_F {
        price = 1400000;
    };
	
	class EAL_Hellcat_LanPol : I_Heli_light_03_unarmed_F {};
	class EAL_Hellcat_LanPol_armed : I_Heli_light_03_F {};
	class EAL_Hellcat_BPol : I_Heli_light_03_unarmed_F {};
	class EAL_Hellcat_BPol_armed : I_Heli_light_03_F {};
	class EAL_Hellcat_SEK : I_Heli_light_03_unarmed_F {};
	class EAL_Hellcat_SEK_armed : I_Heli_light_03_F {};
	
	class I_Heli_Transport_02_F {
        vItemSpace = 100;
        licenses[] = { {"pilot"}, {""}, {""}, {""} };
        price = 4000000;
        textures[] = {
            { "Ion", "civ", {
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_1_ion_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_2_ion_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_3_ion_co.paa"
            } },
            { "Dahoman", "civ", {
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_1_dahoman_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_2_dahoman_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_3_dahoman_co.paa"
            } }
        };
    };
	
	class O_Heli_Transport_04_F {
        vItemSpace = 50;
        licenses[] = { {"rebel"}, {""}, {""}, {""} };
        price = 3000000;
        textures[] = {};
    };
	
	class O_Heli_Transport_04_bench_F : O_Heli_Transport_04_F {};
	
	class B_Heli_Transport_03_unarmed_F {
        vItemSpace = 600;
        licenses[] = { {"pilot"}, {"cAir"}, {""}, {""} };
        price = 20000000;
        textures[] = {};
    };
	
	class C_Plane_Civil_01_F : B_Heli_Transport_03_unarmed_F {
		vItemSpace = 90;
		price = 500000;
	};
	class B_T_VTOL_01_infantry_F : B_Heli_Transport_03_unarmed_F {
		price = 30000000;
	};
	class B_T_VTOL_01_vehicle_F : B_Heli_Transport_03_unarmed_F {
		price = 30000000;
	};
	class Sab_Sikorsky38_3 : B_Heli_Transport_03_unarmed_F {};
	class sab_stampe3 : B_Heli_Transport_03_unarmed_F {};
	class sab_stampe2 : B_Heli_Transport_03_unarmed_F {};
	class sab_stampe : B_Heli_Transport_03_unarmed_F {};
	class sab_stampe4 : B_Heli_Transport_03_unarmed_F {};
	class sab_stampe5 : B_Heli_Transport_03_unarmed_F {};
	class Sab_Sikorsky38_2 : B_Heli_Transport_03_unarmed_F {};
	class sab_RobinDR400_3 : B_Heli_Transport_03_unarmed_F {};
	class sab_RobinDR400_2 : B_Heli_Transport_03_unarmed_F {};
	class sab_RobinDR400_5 : B_Heli_Transport_03_unarmed_F {};
	class sab_piper3 : B_Heli_Transport_03_unarmed_F {};
	class sab_RobinDR400_4 : B_Heli_Transport_03_unarmed_F {};
	class sab_RobinDR400 : B_Heli_Transport_03_unarmed_F {};
	class sab_piper2 : B_Heli_Transport_03_unarmed_F {};
	class sab_piper4 : B_Heli_Transport_03_unarmed_F {};
	class sab_piper5 : B_Heli_Transport_03_unarmed_F {};
	class sab_FAAllegro_3 : B_Heli_Transport_03_unarmed_F {};
	class sab_FAAllegro_2 : B_Heli_Transport_03_unarmed_F {};
	class sab_FAAllegro_4 : B_Heli_Transport_03_unarmed_F {};
	class sab_FAAllegro : B_Heli_Transport_03_unarmed_F {};
	class sab_FAAllegro_5 : B_Heli_Transport_03_unarmed_F {};
	class sab_GrobAstir : B_Heli_Transport_03_unarmed_F {};
	class GNT_C185 : B_Heli_Transport_03_unarmed_F {};
	class GNT_C185F : B_Heli_Transport_03_unarmed_F {};
	class Sab_Amphi_An2 : B_Heli_Transport_03_unarmed_F {};
	class Sab_Snow_An2 : B_Heli_Transport_03_unarmed_F {};
	class Sab_sea3_An2 : B_Heli_Transport_03_unarmed_F {};
	class sab_BI_An2 : B_Heli_Transport_03_unarmed_F {};
	class sab_AH_An2 : B_Heli_Transport_03_unarmed_F {};
	class Sab_tk_An2 : B_Heli_Transport_03_unarmed_F {};

    class B_SDV_01_F {
        vItemSpace = 50;
        licenses[] = { {""}, {"cg"}, {""}, {""} };
        price = 200000;
        textures[] = {};
    };
	
	class O_Heli_Attack_02_F {
        vItemSpace = 10;
        licenses[] = { {"rebel"}, {""}, {""}, {""} };
        price = 12000000;
        textures[] = {};
    };
	
	class B_Heli_Attack_01_F {
        vItemSpace = 10;
        licenses[] = { {""}, {"cAir"}, {""}, {""} };
        price = 4000000;
        textures[] = {};
    };
	
	class I_Plane_Fighter_03_AA_F {
        vItemSpace = 10;
        licenses[] = { {""}, {"cAir"}, {""}, {""} };
        price = 5000000;
        textures[] = {};
    };
	
	class B_APC_Wheeled_01_cannon_F {
        vItemSpace = 10;
        licenses[] = { {""}, {"cDriver"}, {""}, {""} };
        price = 800000;
        textures[] = {};
    };
	
	class O_APC_Wheeled_02_rcws_F {
        vItemSpace = 10;
        licenses[] = { {""}, {"cDriver"}, {""}, {""} };
        price = 800000;
        textures[] = {};
    };
	
	class blx_ridgback_HMG_W {
        vItemSpace = 10;
        licenses[] = { {""}, {"cDriver"}, {""}, {""} };
        price = 500000;
        textures[] = {};
    };
	
	class B_T_LSV_01_armed_F {
        vItemSpace = 10;
        licenses[] = { {""}, {"cDriver"}, {""}, {""} };
        price = 500000;
        textures[] = {};
    };
	
	class B_T_LSV_01_unarmed_F {
        vItemSpace = 10;
        licenses[] = { {""}, {"cDriver"}, {""}, {""} };
        price = 200000;
        textures[] = {};
    };
	
	class O_T_LSV_02_armed_F {
        vItemSpace = 10;
        licenses[] = { {"rebel"}, {""}, {""}, {""} };
        price = 4000000;
        textures[] = {};
    };
	
	class O_T_LSV_02_unarmed_F {
        vItemSpace = 10;
        licenses[] = { {"rebel"}, {""}, {""}, {""} };
        price = 900000;
        textures[] = {};
    };
	
	class O_Heli_Transport_04_medevac_F {
        vItemSpace = 10;
        licenses[] = { {"pilot"}, {""}, {"mAir"}, {""} };
        price = 3000000;
        textures[] = {};
    };
	
	class sab_do228_2 {
        vItemSpace = 100;
        licenses[] = { {"zPilot"}, {""}, {""}, {""} };
        price = 5500000;
        textures[] = {};
    };
	
	class sab_falcon : sab_do228_2 {};
	class sab_do228 : sab_do228_2 {};
	class IVORY_ERJ135_1 : sab_do228_2 {};
	class sab_falcon_2 : sab_do228_2 {};
	class ivory_yak42d_1 : sab_do228_2 {};
	class IVORY_CRJ200_1 : sab_do228_2 {};
	
	class GR_UH1H_1 {
        vItemSpace = 10;
        licenses[] = { {""}, {"cAir"}, {""}, {""} };
        price = 500000;
        textures[] = {};
    };
	
	class GR_UH1H_3 : GR_UH1H_1 {
        price = 650000;
    };
	
	class EC635 {
        vItemSpace = 10;
        licenses[] = { {""}, {"cAir"}, {""}, {""} };
        price = 1200000;
        textures[] = {};
    };
	
	class EC635_AT : EC635 {
		price = 600000;
	};
	
	class MV22 {
        vItemSpace = 10;
        licenses[] = { {""}, {"cAir"}, {""}, {""} };
        price = 3000000;
        textures[] = {};
    };
};
