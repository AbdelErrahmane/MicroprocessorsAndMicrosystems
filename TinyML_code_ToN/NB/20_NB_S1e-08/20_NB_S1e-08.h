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
                        float votes[10] = { 0.0f };
                        float theta[16] = { 0 };
                        float sigma[16] = { 0 };
                        theta[0] = -0.383198135282; theta[1] = -0.336820806222; theta[2] = -0.434942905264; theta[3] = -0.478885954644; theta[4] = -0.421615261456; theta[5] = 0.000781206009; theta[6] = 1.09336e-06; theta[7] = 3.280081e-06; theta[8] = 0.969581620174; theta[9] = 0.029632800375; theta[10] = 0.002941686169; theta[11] = 0.000465224852; theta[12] = 0.907599018818; theta[13] = 0.088796718607; theta[14] = 5.4668e-07; theta[15] = 0.000196804873;
                        sigma[0] = 0.669823593616; sigma[1] = 0.371879940928; sigma[2] = 0.900943855187; sigma[3] = 0.619489006748; sigma[4] = 0.286991169986; sigma[5] = 0.000780605726; sigma[6] = 1.103359e-06; sigma[7] = 3.29007e-06; sigma[8] = 0.029493111995; sigma[9] = 0.028754707517; sigma[10] = 0.002933042652; sigma[11] = 0.000465018418; sigma[12] = 0.083863049857; sigma[13] = 0.080911871371; sigma[14] = 5.5668e-07; sigma[15] = 0.000196776141;
                        votes[0] = 0.359931005565 - gauss(x, theta, sigma);
                        theta[0] = -0.642049393805; theta[1] = -0.443025977335; theta[2] = -0.796483522728; theta[3] = -0.524436803667; theta[4] = -0.510645584448; theta[5] = 0.0; theta[6] = 0.0; theta[7] = 0.0; theta[8] = 0.999925071843; theta[9] = 7.4928157e-05; theta[10] = 0.0; theta[11] = 0.0; theta[12] = 0.998482043688; theta[13] = 0.001517956312; theta[14] = 0.0; theta[15] = 0.0;
                        sigma[0] = 0.106026977923; sigma[1] = 0.046345136392; sigma[2] = 0.492191987454; sigma[3] = 0.078109378075; sigma[4] = 0.185302619385; sigma[5] = 1e-08; sigma[6] = 1e-08; sigma[7] = 1e-08; sigma[8] = 7.4932543e-05; sigma[9] = 7.4932543e-05; sigma[10] = 1e-08; sigma[11] = 1e-08; sigma[12] = 0.001515662121; sigma[13] = 0.001515662121; sigma[14] = 1e-08; sigma[15] = 1e-08;
                        votes[1] = 0.223216595972 - gauss(x, theta, sigma);
                        theta[0] = 0.219284013788; theta[1] = 0.591680405792; theta[2] = 0.99369953027; theta[3] = 0.254840130844; theta[4] = 0.17121225617; theta[5] = 0.0; theta[6] = 0.0; theta[7] = 0.0; theta[8] = 0.764756247151; theta[9] = 0.235243752849; theta[10] = 0.0; theta[11] = 0.0; theta[12] = 0.490636058705; theta[13] = 0.509363941295; theta[14] = 0.0; theta[15] = 0.0;
                        sigma[0] = 0.881729920603; sigma[1] = 1.49952443438; sigma[2] = 0.146845526753; sigma[3] = 1.159906128781; sigma[4] = 1.067604393182; sigma[5] = 1e-08; sigma[6] = 1e-08; sigma[7] = 1e-08; sigma[8] = 0.179904139595; sigma[9] = 0.179904139595; sigma[10] = 1e-08; sigma[11] = 1e-08; sigma[12] = 0.249912326606; sigma[13] = 0.249912326606; sigma[14] = 1e-08; sigma[15] = 1e-08;
                        votes[2] = 0.145012670821 - gauss(x, theta, sigma);
                        theta[0] = 1.108532637851; theta[1] = -0.022260242065; theta[2] = 0.740983474502; theta[3] = 1.289765621943; theta[4] = 0.763601262093; theta[5] = 0.0; theta[6] = 0.0; theta[7] = 0.0; theta[8] = 0.997906740428; theta[9] = 0.002093259572; theta[10] = 0.0; theta[11] = 0.0; theta[12] = 0.981369825112; theta[13] = 0.018630174888; theta[14] = 0.0; theta[15] = 0.0;
                        sigma[0] = 0.132824285217; sigma[1] = 0.83321336201; sigma[2] = 0.071634454621; sigma[3] = 0.16508231479; sigma[4] = 0.311401399071; sigma[5] = 1e-08; sigma[6] = 1e-08; sigma[7] = 1e-08; sigma[8] = 0.002088887837; sigma[9] = 0.002088887837; sigma[10] = 1e-08; sigma[11] = 1e-08; sigma[12] = 0.018283101472; sigma[13] = 0.018283101472; sigma[14] = 1e-08; sigma[15] = 1e-08;
                        votes[3] = 0.119474458541 - gauss(x, theta, sigma);
                        theta[0] = 1.064951097651; theta[1] = 1.476005207004; theta[2] = 0.452433776195; theta[3] = 1.211902898573; theta[4] = 1.853450252711; theta[5] = 0.0; theta[6] = 0.0; theta[7] = 0.0; theta[8] = 0.971422222094; theta[9] = 0.028577777906; theta[10] = 0.0; theta[11] = 0.0; theta[12] = 0.997541075866; theta[13] = 0.002458924134; theta[14] = 0.0; theta[15] = 0.0;
                        sigma[0] = 0.200780250652; sigma[1] = 1.46239702037; sigma[2] = 0.124008143531; sigma[3] = 0.312597240022; sigma[4] = 1.779681084664; sigma[5] = 1e-08; sigma[6] = 1e-08; sigma[7] = 1e-08; sigma[8] = 0.027761098516; sigma[9] = 0.027761098516; sigma[10] = 1e-08; sigma[11] = 1e-08; sigma[12] = 0.002452887826; sigma[13] = 0.002452887826; sigma[14] = 1e-08; sigma[15] = 1e-08;
                        votes[4] = 0.068178441836 - gauss(x, theta, sigma);
                        theta[0] = -0.05548241495; theta[1] = -0.416682393875; theta[2] = 1.002789801961; theta[3] = -0.775502648608; theta[4] = -0.574282288877; theta[5] = 0.0; theta[6] = 0.0; theta[7] = 0.0; theta[8] = 0.9635928917; theta[9] = 0.0364071083; theta[10] = 0.0; theta[11] = 0.0; theta[12] = 0.144519516007; theta[13] = 0.855480483993; theta[14] = 0.0; theta[15] = 0.0;
                        sigma[0] = 3.272467624858; sigma[1] = 0.005573588229; sigma[2] = 0.717711963576; sigma[3] = 0.003904427188; sigma[4] = 0.002403834054; sigma[5] = 1e-08; sigma[6] = 1e-08; sigma[7] = 1e-08; sigma[8] = 0.035081640765; sigma[9] = 0.035081640765; sigma[10] = 1e-08; sigma[11] = 1e-08; sigma[12] = 0.1236336355; sigma[13] = 0.1236336355; sigma[14] = 1e-08; sigma[15] = 1e-08;
                        votes[5] = 0.0420534699 - gauss(x, theta, sigma);
                        theta[0] = 1.075308148329; theta[1] = 1.334951391306; theta[2] = 0.684899478603; theta[3] = 1.201805173223; theta[4] = 1.192550465681; theta[5] = 0.0; theta[6] = 0.0; theta[7] = 0.0; theta[8] = 0.843831740259; theta[9] = 0.156168259741; theta[10] = 0.0; theta[11] = 0.0; theta[12] = 0.948624575801; theta[13] = 0.051375424199; theta[14] = 0.0; theta[15] = 0.0;
                        sigma[0] = 0.183580176822; sigma[1] = 1.830929734806; sigma[2] = 0.065320096343; sigma[3] = 0.332505487175; sigma[4] = 0.976565232759; sigma[5] = 1e-08; sigma[6] = 1e-08; sigma[7] = 1e-08; sigma[8] = 0.131779744391; sigma[9] = 0.131779744391; sigma[10] = 1e-08; sigma[11] = 1e-08; sigma[12] = 0.048735999987; sigma[13] = 0.048735999987; sigma[14] = 1e-08; sigma[15] = 1e-08;
                        votes[6] = 0.040471461974 - gauss(x, theta, sigma);
                        theta[0] = 3.019260323807; theta[1] = -0.445778739913; theta[2] = 0.313128755455; theta[3] = -0.175043370408; theta[4] = -0.56360391186; theta[5] = 0.0; theta[6] = 0.0; theta[7] = 0.0; theta[8] = 0.993267326733; theta[9] = 0.006732673267; theta[10] = 0.0; theta[11] = 0.0; theta[12] = 0.991089108911; theta[13] = 0.008910891089; theta[14] = 0.0; theta[15] = 0.0;
                        sigma[0] = 0.132715635597; sigma[1] = 0.03789658145; sigma[2] = 0.015052792998; sigma[3] = 0.042686279707; sigma[4] = 0.036866900413; sigma[5] = 1e-08; sigma[6] = 1e-08; sigma[7] = 1e-08; sigma[8] = 0.006687354378; sigma[9] = 0.006687354378; sigma[10] = 1e-08; sigma[11] = 1e-08; sigma[12] = 0.008831497109; sigma[13] = 0.008831497109; sigma[14] = 1e-08; sigma[15] = 1e-08;
                        votes[7] = 0.000993674133 - gauss(x, theta, sigma);
                        theta[0] = -0.050282996364; theta[1] = -0.161053638425; theta[2] = 1.278821243268; theta[3] = -0.682337147901; theta[4] = -0.475515041324; theta[5] = 0.0; theta[6] = 0.0; theta[7] = 0.0; theta[8] = 0.942591810891; theta[9] = 0.057408189109; theta[10] = 0.0; theta[11] = 0.0; theta[12] = 0.056986070072; theta[13] = 0.943013929928; theta[14] = 0.0; theta[15] = 0.0;
                        sigma[0] = 0.798147099499; sigma[1] = 0.309293543404; sigma[2] = 0.196780094607; sigma[3] = 0.217814923529; sigma[4] = 0.253198017786; sigma[5] = 1e-08; sigma[6] = 1e-08; sigma[7] = 1e-08; sigma[8] = 0.054112498933; sigma[9] = 0.054112498933; sigma[10] = 1e-08; sigma[11] = 1e-08; sigma[12] = 0.05373866789; sigma[13] = 0.05373866789; sigma[14] = 1e-08; sigma[15] = 1e-08;
                        votes[8] = 0.00046614139 - gauss(x, theta, sigma);
                        theta[0] = 1.144002991377; theta[1] = 1.797210061315; theta[2] = 0.331514239134; theta[3] = 1.088279039561; theta[4] = -0.094873415142; theta[5] = 0.0; theta[6] = 0.0; theta[7] = 0.0; theta[8] = 0.997078870497; theta[9] = 0.002921129503; theta[10] = 0.0; theta[11] = 0.0; theta[12] = 0.997078870497; theta[13] = 0.002921129503; theta[14] = 0.0; theta[15] = 0.0;
                        sigma[0] = 0.20150409404; sigma[1] = 1.455092293303; sigma[2] = 0.103591245612; sigma[3] = 0.616054801641; sigma[4] = 0.206813101994; sigma[5] = 1e-08; sigma[6] = 1e-08; sigma[7] = 1e-08; sigma[8] = 0.002912606506; sigma[9] = 0.002912606506; sigma[10] = 1e-08; sigma[11] = 1e-08; sigma[12] = 0.002912606506; sigma[13] = 0.002912606506; sigma[14] = 1e-08; sigma[15] = 1e-08;
                        votes[9] = 0.000202079868 - gauss(x, theta, sigma);
                        // return argmax of votes
                        uint8_t classIdx = 0;
                        float maxVotes = votes[0];

                        for (uint8_t i = 1; i < 10; i++) {
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

                        for (uint16_t i = 0; i < 16; i++) {
                            gauss += log(sigma[i]);
                            gauss += abs(x[i] - theta[i]) / sigma[i];
                        }

                        return gauss;
                    }
                };
            }
        }
    }
