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
                        float theta[12] = { 0 };
                        float sigma[12] = { 0 };
                        theta[0] = 2.152750476462; theta[1] = -1.192992037488; theta[2] = 1.063025708674; theta[3] = -0.265961816276; theta[4] = -0.03996573478; theta[5] = 0.314625063889; theta[6] = 0.639326307591; theta[7] = 0.04604862852; theta[8] = 4.8677197e-05; theta[9] = 0.891766252099; theta[10] = 0.108160732105; theta[11] = 2.4338599e-05;
                        sigma[0] = 1.241881269826; sigma[1] = 3.641401747563; sigma[2] = 14.688158983117; sigma[3] = 2.10396084406; sigma[4] = 0.554327851884; sigma[5] = 0.215636233062; sigma[6] = 0.230588280013; sigma[7] = 0.043928252331; sigma[8] = 4.8774828e-05; sigma[9] = 0.096519303716; sigma[10] = 0.096462088136; sigma[11] = 2.4438006e-05;
                        votes[0] = 0.003626694206 - gauss(x, theta, sigma);
                        theta[0] = -0.484653451695; theta[1] = 0.203858929043; theta[2] = -0.645771755312; theta[3] = -0.838207028275; theta[4] = -0.1846249069; theta[5] = 5.3813485e-05; theta[6] = 0.005636053581; theta[7] = 0.994310132934; theta[8] = 0.0; theta[9] = 0.005640235034; theta[10] = 0.994359764966; theta[11] = 0.0;
                        sigma[0] = 0.019940401637; sigma[1] = 0.2644865373; sigma[2] = 0.009845947719; sigma[3] = 0.015691864639; sigma[4] = 0.001218151423; sigma[5] = 5.3910589e-05; sigma[6] = 0.00560438848; sigma[7] = 0.005657592479; sigma[8] = 1e-07; sigma[9] = 0.005608522783; sigma[10] = 0.005608522783; sigma[11] = 1e-07;
                        votes[1] = 0.485519968576 - gauss(x, theta, sigma);
                        theta[0] = 0.119084847791; theta[1] = 0.099354021731; theta[2] = 0.660007562744; theta[3] = 1.006707946325; theta[4] = -0.105930622714; theta[5] = 0.000105786607; theta[6] = 0.993539617884; theta[7] = 0.006354595508; theta[8] = 0.0; theta[9] = 0.993743392087; theta[10] = 0.006256607913; theta[11] = 0.0;
                        sigma[0] = 0.828565237757; sigma[1] = 0.650689257566; sigma[2] = 0.089197979448; sigma[3] = 0.376021087498; sigma[4] = 0.433814529289; sigma[5] = 0.000105875417; sigma[6] = 0.006418745579; sigma[7] = 0.006314314624; sigma[8] = 1e-07; sigma[9] = 0.006217562771; sigma[10] = 0.006217562771; sigma[11] = 1e-07;
                        votes[2] = 0.441399146442 - gauss(x, theta, sigma);
                        theta[0] = 2.519446226064; theta[1] = -1.993957604212; theta[2] = 0.256102941848; theta[3] = -0.524568550838; theta[4] = 1.967174130837; theta[5] = 0.586961748203; theta[6] = 0.39631207442; theta[7] = 0.016726177377; theta[8] = 0.000679274372; theta[9] = 0.998679612737; theta[10] = 0.000641112891; theta[11] = 0.0;
                        sigma[0] = 0.60728714527; sigma[1] = 3.819377858631; sigma[2] = 3.604865910774; sigma[3] = 0.157630355016; sigma[4] = 7.431022385099; sigma[5] = 0.24243775435; sigma[6] = 0.239248914088; sigma[7] = 0.016446512368; sigma[8] = 0.000678912958; sigma[9] = 0.00131874384; sigma[10] = 0.000640801865; sigma[11] = 1e-07;
                        votes[3] = 0.06939090215 - gauss(x, theta, sigma);
                        theta[0] = 1.753304682555; theta[1] = -2.263074819392; theta[2] = 9.193185958462; theta[3] = -0.457128660378; theta[4] = 0.596020587926; theta[5] = 0.827057182706; theta[6] = 0.0; theta[7] = 0.172942817294; theta[8] = 0.34170153417; theta[9] = 0.65829846583; theta[10] = 0.0; theta[11] = 0.0;
                        sigma[0] = 2.772435915938; sigma[1] = 3.590493826861; sigma[2] = 3850.377872418954; sigma[3] = 0.166142740983; sigma[4] = 3.310377837806; sigma[5] = 0.143033699241; sigma[6] = 1e-07; sigma[7] = 0.143033699241; sigma[8] = 0.224941695716; sigma[9] = 0.224941695716; sigma[10] = 1e-07; sigma[11] = 1e-07;
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

                        for (uint16_t i = 0; i < 12; i++) {
                            gauss += log(sigma[i]);
                            gauss += abs(x[i] - theta[i]) / sigma[i];
                        }

                        return gauss;
                    }
                };
            }
        }
    }
