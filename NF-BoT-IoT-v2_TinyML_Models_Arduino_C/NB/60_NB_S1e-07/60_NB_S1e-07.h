#pragma once
namespace Eloquent {
    namespace ML {
        namespace Port {
            class GaussianNB {
                public:
                    /**
                    * Predict class for features vector
                    */
                    int predict(float *x) {
                        float votes[5] = { 0.0f };
                        float theta[30] = { 0 };
                        float sigma[30] = { 0 };
                        theta[0] = 1.213226246077; theta[1] = 2.152750476462; theta[2] = -1.192992037488; theta[3] = -1.444882306515; theta[4] = 6.301169622215; theta[5] = -2.445701596978; theta[6] = 1.063025708674; theta[7] = -0.265961816276; theta[8] = 4.178653667034; theta[9] = 4.772932296201; theta[10] = 0.776006013195; theta[11] = 0.417603503721; theta[12] = 0.290048197237; theta[13] = 6.462256685124; theta[14] = -0.03996573478; theta[15] = 0.990824348334; theta[16] = 0.009175651666; theta[17] = 0.95463285224; theta[18] = 0.04536714776; theta[19] = 0.314625063889; theta[20] = 0.639326307591; theta[21] = 0.04604862852; theta[22] = 4.8677197e-05; theta[23] = 0.891766252099; theta[24] = 0.108160732105; theta[25] = 2.4338599e-05; theta[26] = 0.990824348334; theta[27] = 0.009175651666; theta[28] = 0.968092097257; theta[29] = 0.031907902743;
                        sigma[0] = 273.263978778582; sigma[1] = 1.241881269826; sigma[2] = 3.641401747563; sigma[3] = 1.08717304975; sigma[4] = 69.349479627768; sigma[5] = 4.351484687082; sigma[6] = 14.688158983117; sigma[7] = 2.10396084406; sigma[8] = 220.972731945716; sigma[9] = 220.509457907425; sigma[10] = 235.115316439384; sigma[11] = 79.446812860234; sigma[12] = 222.918308142071; sigma[13] = 39.625985968497; sigma[14] = 0.554327851884; sigma[15] = 0.009091559082; sigma[16] = 0.009091559082; sigma[17] = 0.043309069664; sigma[18] = 0.043309069664; sigma[19] = 0.215636233062; sigma[20] = 0.230588280013; sigma[21] = 0.043928252331; sigma[22] = 4.8774828e-05; sigma[23] = 0.096519303716; sigma[24] = 0.096462088136; sigma[25] = 2.4438006e-05; sigma[26] = 0.009091559082; sigma[27] = 0.009091559082; sigma[28] = 0.030889888486; sigma[29] = 0.030889888486;
                        votes[0] = 0.003626694206 - gauss(x, theta, sigma);
                        theta[0] = -0.003388555628; theta[1] = -0.484653451695; theta[2] = 0.203858929043; theta[3] = -0.240708775824; theta[4] = -0.06076091186; theta[5] = 0.224154644487; theta[6] = -0.645771755312; theta[7] = -0.838207028275; theta[8] = -0.014476051626; theta[9] = -0.016474026508; theta[10] = -0.140536562679; theta[11] = -0.0177823583; theta[12] = -0.372560375929; theta[13] = -0.197382677269; theta[14] = -0.1846249069; theta[15] = 0.998573760835; theta[16] = 0.001426239165; theta[17] = 1.0; theta[18] = 0.0; theta[19] = 5.3813485e-05; theta[20] = 0.005636053581; theta[21] = 0.994310132934; theta[22] = 0.0; theta[23] = 0.005640235034; theta[24] = 0.994359764966; theta[25] = 0.0; theta[26] = 0.998573760835; theta[27] = 0.001426239165; theta[28] = 1.0; theta[29] = 0.0;
                        sigma[0] = 5.7711386e-05; sigma[1] = 0.019940401637; sigma[2] = 0.2644865373; sigma[3] = 0.380681128983; sigma[4] = 0.065151007529; sigma[5] = 0.249118684261; sigma[6] = 0.009845947719; sigma[7] = 0.015691864639; sigma[8] = 0.110486168218; sigma[9] = 0.147560197473; sigma[10] = 0.001435426943; sigma[11] = 1.6297337e-05; sigma[12] = 0.00371776489; sigma[13] = 0.03368773467; sigma[14] = 0.001218151423; sigma[15] = 0.001424305007; sigma[16] = 0.001424305007; sigma[17] = 1e-07; sigma[18] = 1e-07; sigma[19] = 5.3910589e-05; sigma[20] = 0.00560438848; sigma[21] = 0.005657592479; sigma[22] = 1e-07; sigma[23] = 0.005608522783; sigma[24] = 0.005608522783; sigma[25] = 1e-07; sigma[26] = 0.001424305007; sigma[27] = 0.001424305007; sigma[28] = 1e-07; sigma[29] = 1e-07;
                        votes[1] = 0.485519968576 - gauss(x, theta, sigma);
                        theta[0] = -0.005302087069; theta[1] = 0.119084847791; theta[2] = 0.099354021731; theta[3] = 0.476927551842; theta[4] = -0.002312820279; theta[5] = 0.05279946995; theta[6] = 0.660007562744; theta[7] = 1.006707946325; theta[8] = -0.016039630339; theta[9] = -0.018234715175; theta[10] = 0.147043911476; theta[11] = -0.007599384257; theta[12] = 0.430305390364; theta[13] = 0.029348888889; theta[14] = -0.105930622714; theta[15] = 0.714826103015; theta[16] = 0.285173896985; theta[17] = 1.0; theta[18] = 0.0; theta[19] = 0.000105786607; theta[20] = 0.993539617884; theta[21] = 0.006354595508; theta[22] = 0.0; theta[23] = 0.993743392087; theta[24] = 0.006256607913; theta[25] = 0.0; theta[26] = 0.714826103015; theta[27] = 0.285173896985; theta[28] = 1.0; theta[29] = 0.0;
                        sigma[0] = 3.0765156e-05; sigma[1] = 0.828565237757; sigma[2] = 0.650689257566; sigma[3] = 1.07685907323; sigma[4] = 0.912455343222; sigma[5] = 0.827043835315; sigma[6] = 0.089197979448; sigma[7] = 0.376021087498; sigma[8] = 0.06165102229; sigma[9] = 0.087903573357; sigma[10] = 0.012208148764; sigma[11] = 0.001277163289; sigma[12] = 0.040874653139; sigma[13] = 0.088721261095; sigma[14] = 0.433814529289; sigma[15] = 0.203849845448; sigma[16] = 0.203849845448; sigma[17] = 1e-07; sigma[18] = 1e-07; sigma[19] = 0.000105875417; sigma[20] = 0.006418745579; sigma[21] = 0.006314314624; sigma[22] = 1e-07; sigma[23] = 0.006217562771; sigma[24] = 0.006217562771; sigma[25] = 1e-07; sigma[26] = 0.203849845448; sigma[27] = 0.203849845448; sigma[28] = 1e-07; sigma[29] = 1e-07;
                        votes[2] = 0.441399146442 - gauss(x, theta, sigma);
                        theta[0] = -0.006800097282; theta[1] = 2.519446226064; theta[2] = -1.993957604212; theta[3] = -1.272880889179; theta[4] = 0.110558337551; theta[5] = -1.775262380064; theta[6] = 0.256102941848; theta[7] = -0.524568550838; theta[8] = -0.016292083322; theta[9] = -0.018535313741; theta[10] = 0.004935792739; theta[11] = 0.14392309317; theta[12] = -0.146298740411; theta[13] = 0.849189803102; theta[14] = 1.967174130837; theta[15] = 0.944421618225; theta[16] = 0.055578381775; theta[17] = 0.999801560296; theta[18] = 0.000198439704; theta[19] = 0.586961748203; theta[20] = 0.39631207442; theta[21] = 0.016726177377; theta[22] = 0.000679274372; theta[23] = 0.998679612737; theta[24] = 0.000641112891; theta[25] = 0.0; theta[26] = 0.944441971015; theta[27] = 0.055558028985; theta[28] = 1.0; theta[29] = 0.0;
                        sigma[0] = 0.02989392611; sigma[1] = 0.60728714527; sigma[2] = 3.819377858631; sigma[3] = 1.256905556898; sigma[4] = 2.413282904165; sigma[5] = 3.340575561188; sigma[6] = 3.604865910774; sigma[7] = 0.157630355016; sigma[8] = 0.049938361233; sigma[9] = 0.044289774159; sigma[10] = 0.638994572767; sigma[11] = 4.674029951747; sigma[12] = 0.232181348429; sigma[13] = 8.263855438819; sigma[14] = 7.431022385099; sigma[15] = 0.052489525255; sigma[16] = 0.052489525255; sigma[17] = 0.000198500326; sigma[18] = 0.000198500326; sigma[19] = 0.24243775435; sigma[20] = 0.239248914088; sigma[21] = 0.016446512368; sigma[22] = 0.000678912958; sigma[23] = 0.00131874384; sigma[24] = 0.000640801865; sigma[25] = 1e-07; sigma[26] = 0.0524714344; sigma[27] = 0.0524714344; sigma[28] = 1e-07; sigma[29] = 1e-07;
                        votes[3] = 0.06939090215 - gauss(x, theta, sigma);
                        theta[0] = 0.907152199039; theta[1] = 1.753304682555; theta[2] = -2.263074819392; theta[3] = -1.264010777744; theta[4] = -0.04179626747; theta[5] = -1.269216901139; theta[6] = 9.193185958462; theta[7] = -0.457128660378; theta[8] = 1.329063256116; theta[9] = 0.370884656855; theta[10] = 2.708462228446; theta[11] = 7.68824226852; theta[12] = 0.773527392656; theta[13] = 8.152828949501; theta[14] = 0.596020587926; theta[15] = 0.662482566248; theta[16] = 0.337517433752; theta[17] = 1.0; theta[18] = 0.0; theta[19] = 0.827057182706; theta[20] = 0.0; theta[21] = 0.172942817294; theta[22] = 0.34170153417; theta[23] = 0.65829846583; theta[24] = 0.0; theta[25] = 0.0; theta[26] = 0.672245467225; theta[27] = 0.327754532775; theta[28] = 1.0; theta[29] = 0.0;
                        sigma[0] = 22.559737664607; sigma[1] = 2.772435915938; sigma[2] = 3.590493826861; sigma[3] = 0.838462943326; sigma[4] = 0.026284332604; sigma[5] = 4.655900981166; sigma[6] = 3850.377872418954; sigma[7] = 0.166142740983; sigma[8] = 799.616082155608; sigma[9] = 60.54894213192; sigma[10] = 1186.62188946947; sigma[11] = 6019.631864050827; sigma[12] = 73.245267664979; sigma[13] = 36.960608875929; sigma[14] = 3.310377837806; sigma[15] = 0.223599515665; sigma[16] = 0.223599515665; sigma[17] = 1e-07; sigma[18] = 1e-07; sigma[19] = 0.143033699241; sigma[20] = 1e-07; sigma[21] = 0.143033699241; sigma[22] = 0.224941695716; sigma[23] = 0.224941695716; sigma[24] = 1e-07; sigma[25] = 1e-07; sigma[26] = 0.220331599021; sigma[27] = 0.220331599021; sigma[28] = 1e-07; sigma[29] = 1e-07;
                        votes[4] = 6.3288625e-05 - gauss(x, theta, sigma);
                        // return argmax of votes
                        uint8_t classIdx = 0;
                        float maxVotes = votes[0];

                        for (uint8_t i = 1; i < 5; i++) {
                            if (votes[i] > maxVotes) {
                                classIdx = i;
                                maxVotes = votes[i];
                            }
                        }

                        return classIdx;
                    }

                protected:
                    /**
                    * Compute gaussian value
                    */
                    float gauss(float *x, float *theta, float *sigma) {
                        float gauss = 0.0f;

                        for (uint16_t i = 0; i < 30; i++) {
                            gauss += log(sigma[i]);
                            gauss += abs(x[i] - theta[i]) / sigma[i];
                        }

                        return gauss;
                    }
                };
            }
        }
    }
