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
                        sigma[0] = 0.669833583616; sigma[1] = 0.371889930928; sigma[2] = 0.900953845187; sigma[3] = 0.619498996748; sigma[4] = 0.287001159986; sigma[5] = 0.000790595726; sigma[6] = 1.1093359e-05; sigma[7] = 1.328007e-05; sigma[8] = 0.029503101995; sigma[9] = 0.028764697517; sigma[10] = 0.002943032652; sigma[11] = 0.000475008418; sigma[12] = 0.083873039857; sigma[13] = 0.080921861371; sigma[14] = 1.054668e-05; sigma[15] = 0.000206766141;
                        votes[0] = 0.359931005565 - gauss(x, theta, sigma);
                        theta[0] = -0.642049393805; theta[1] = -0.443025977335; theta[2] = -0.796483522728; theta[3] = -0.524436803667; theta[4] = -0.510645584448; theta[5] = 0.0; theta[6] = 0.0; theta[7] = 0.0; theta[8] = 0.999925071843; theta[9] = 7.4928157e-05; theta[10] = 0.0; theta[11] = 0.0; theta[12] = 0.998482043688; theta[13] = 0.001517956312; theta[14] = 0.0; theta[15] = 0.0;
                        sigma[0] = 0.106036967923; sigma[1] = 0.046355126392; sigma[2] = 0.492201977454; sigma[3] = 0.078119368075; sigma[4] = 0.185312609385; sigma[5] = 1e-05; sigma[6] = 1e-05; sigma[7] = 1e-05; sigma[8] = 8.4922543e-05; sigma[9] = 8.4922543e-05; sigma[10] = 1e-05; sigma[11] = 1e-05; sigma[12] = 0.001525652121; sigma[13] = 0.001525652121; sigma[14] = 1e-05; sigma[15] = 1e-05;
                        votes[1] = 0.223216595972 - gauss(x, theta, sigma);
                        theta[0] = 0.219284013788; theta[1] = 0.591680405792; theta[2] = 0.99369953027; theta[3] = 0.254840130844; theta[4] = 0.17121225617; theta[5] = 0.0; theta[6] = 0.0; theta[7] = 0.0; theta[8] = 0.764756247151; theta[9] = 0.235243752849; theta[10] = 0.0; theta[11] = 0.0; theta[12] = 0.490636058705; theta[13] = 0.509363941295; theta[14] = 0.0; theta[15] = 0.0;
                        sigma[0] = 0.881739910603; sigma[1] = 1.49953442438; sigma[2] = 0.146855516753; sigma[3] = 1.159916118781; sigma[4] = 1.067614383182; sigma[5] = 1e-05; sigma[6] = 1e-05; sigma[7] = 1e-05; sigma[8] = 0.179914129595; sigma[9] = 0.179914129595; sigma[10] = 1e-05; sigma[11] = 1e-05; sigma[12] = 0.249922316606; sigma[13] = 0.249922316606; sigma[14] = 1e-05; sigma[15] = 1e-05;
                        votes[2] = 0.145012670821 - gauss(x, theta, sigma);
                        theta[0] = 1.108532637851; theta[1] = -0.022260242065; theta[2] = 0.740983474502; theta[3] = 1.289765621943; theta[4] = 0.763601262093; theta[5] = 0.0; theta[6] = 0.0; theta[7] = 0.0; theta[8] = 0.997906740428; theta[9] = 0.002093259572; theta[10] = 0.0; theta[11] = 0.0; theta[12] = 0.981369825112; theta[13] = 0.018630174888; theta[14] = 0.0; theta[15] = 0.0;
                        sigma[0] = 0.132834275217; sigma[1] = 0.83322335201; sigma[2] = 0.071644444621; sigma[3] = 0.16509230479; sigma[4] = 0.311411389071; sigma[5] = 1e-05; sigma[6] = 1e-05; sigma[7] = 1e-05; sigma[8] = 0.002098877837; sigma[9] = 0.002098877837; sigma[10] = 1e-05; sigma[11] = 1e-05; sigma[12] = 0.018293091472; sigma[13] = 0.018293091472; sigma[14] = 1e-05; sigma[15] = 1e-05;
                        votes[3] = 0.119474458541 - gauss(x, theta, sigma);
                        theta[0] = 1.064951097651; theta[1] = 1.476005207004; theta[2] = 0.452433776195; theta[3] = 1.211902898573; theta[4] = 1.853450252711; theta[5] = 0.0; theta[6] = 0.0; theta[7] = 0.0; theta[8] = 0.971422222094; theta[9] = 0.028577777906; theta[10] = 0.0; theta[11] = 0.0; theta[12] = 0.997541075866; theta[13] = 0.002458924134; theta[14] = 0.0; theta[15] = 0.0;
                        sigma[0] = 0.200790240652; sigma[1] = 1.46240701037; sigma[2] = 0.124018133531; sigma[3] = 0.312607230022; sigma[4] = 1.779691074664; sigma[5] = 1e-05; sigma[6] = 1e-05; sigma[7] = 1e-05; sigma[8] = 0.027771088516; sigma[9] = 0.027771088516; sigma[10] = 1e-05; sigma[11] = 1e-05; sigma[12] = 0.002462877826; sigma[13] = 0.002462877826; sigma[14] = 1e-05; sigma[15] = 1e-05;
                        votes[4] = 0.068178441836 - gauss(x, theta, sigma);
                        theta[0] = -0.05548241495; theta[1] = -0.416682393875; theta[2] = 1.002789801961; theta[3] = -0.775502648608; theta[4] = -0.574282288877; theta[5] = 0.0; theta[6] = 0.0; theta[7] = 0.0; theta[8] = 0.9635928917; theta[9] = 0.0364071083; theta[10] = 0.0; theta[11] = 0.0; theta[12] = 0.144519516007; theta[13] = 0.855480483993; theta[14] = 0.0; theta[15] = 0.0;
                        sigma[0] = 3.272477614858; sigma[1] = 0.005583578229; sigma[2] = 0.717721953576; sigma[3] = 0.003914417188; sigma[4] = 0.002413824054; sigma[5] = 1e-05; sigma[6] = 1e-05; sigma[7] = 1e-05; sigma[8] = 0.035091630765; sigma[9] = 0.035091630765; sigma[10] = 1e-05; sigma[11] = 1e-05; sigma[12] = 0.1236436255; sigma[13] = 0.1236436255; sigma[14] = 1e-05; sigma[15] = 1e-05;
                        votes[5] = 0.0420534699 - gauss(x, theta, sigma);
                        theta[0] = 1.075308148329; theta[1] = 1.334951391306; theta[2] = 0.684899478603; theta[3] = 1.201805173223; theta[4] = 1.192550465681; theta[5] = 0.0; theta[6] = 0.0; theta[7] = 0.0; theta[8] = 0.843831740259; theta[9] = 0.156168259741; theta[10] = 0.0; theta[11] = 0.0; theta[12] = 0.948624575801; theta[13] = 0.051375424199; theta[14] = 0.0; theta[15] = 0.0;
                        sigma[0] = 0.183590166822; sigma[1] = 1.830939724806; sigma[2] = 0.065330086343; sigma[3] = 0.332515477175; sigma[4] = 0.976575222759; sigma[5] = 1e-05; sigma[6] = 1e-05; sigma[7] = 1e-05; sigma[8] = 0.131789734391; sigma[9] = 0.131789734391; sigma[10] = 1e-05; sigma[11] = 1e-05; sigma[12] = 0.048745989987; sigma[13] = 0.048745989987; sigma[14] = 1e-05; sigma[15] = 1e-05;
                        votes[6] = 0.040471461974 - gauss(x, theta, sigma);
                        theta[0] = 3.019260323807; theta[1] = -0.445778739913; theta[2] = 0.313128755455; theta[3] = -0.175043370408; theta[4] = -0.56360391186; theta[5] = 0.0; theta[6] = 0.0; theta[7] = 0.0; theta[8] = 0.993267326733; theta[9] = 0.006732673267; theta[10] = 0.0; theta[11] = 0.0; theta[12] = 0.991089108911; theta[13] = 0.008910891089; theta[14] = 0.0; theta[15] = 0.0;
                        sigma[0] = 0.132725625597; sigma[1] = 0.03790657145; sigma[2] = 0.015062782998; sigma[3] = 0.042696269707; sigma[4] = 0.036876890413; sigma[5] = 1e-05; sigma[6] = 1e-05; sigma[7] = 1e-05; sigma[8] = 0.006697344378; sigma[9] = 0.006697344378; sigma[10] = 1e-05; sigma[11] = 1e-05; sigma[12] = 0.008841487109; sigma[13] = 0.008841487109; sigma[14] = 1e-05; sigma[15] = 1e-05;
                        votes[7] = 0.000993674133 - gauss(x, theta, sigma);
                        theta[0] = -0.050282996364; theta[1] = -0.161053638425; theta[2] = 1.278821243268; theta[3] = -0.682337147901; theta[4] = -0.475515041324; theta[5] = 0.0; theta[6] = 0.0; theta[7] = 0.0; theta[8] = 0.942591810891; theta[9] = 0.057408189109; theta[10] = 0.0; theta[11] = 0.0; theta[12] = 0.056986070072; theta[13] = 0.943013929928; theta[14] = 0.0; theta[15] = 0.0;
                        sigma[0] = 0.798157089499; sigma[1] = 0.309303533404; sigma[2] = 0.196790084607; sigma[3] = 0.217824913529; sigma[4] = 0.253208007786; sigma[5] = 1e-05; sigma[6] = 1e-05; sigma[7] = 1e-05; sigma[8] = 0.054122488933; sigma[9] = 0.054122488933; sigma[10] = 1e-05; sigma[11] = 1e-05; sigma[12] = 0.05374865789; sigma[13] = 0.05374865789; sigma[14] = 1e-05; sigma[15] = 1e-05;
                        votes[8] = 0.00046614139 - gauss(x, theta, sigma);
                        theta[0] = 1.144002991377; theta[1] = 1.797210061315; theta[2] = 0.331514239134; theta[3] = 1.088279039561; theta[4] = -0.094873415142; theta[5] = 0.0; theta[6] = 0.0; theta[7] = 0.0; theta[8] = 0.997078870497; theta[9] = 0.002921129503; theta[10] = 0.0; theta[11] = 0.0; theta[12] = 0.997078870497; theta[13] = 0.002921129503; theta[14] = 0.0; theta[15] = 0.0;
                        sigma[0] = 0.20151408404; sigma[1] = 1.455102283303; sigma[2] = 0.103601235612; sigma[3] = 0.616064791641; sigma[4] = 0.206823091994; sigma[5] = 1e-05; sigma[6] = 1e-05; sigma[7] = 1e-05; sigma[8] = 0.002922596506; sigma[9] = 0.002922596506; sigma[10] = 1e-05; sigma[11] = 1e-05; sigma[12] = 0.002922596506; sigma[13] = 0.002922596506; sigma[14] = 1e-05; sigma[15] = 1e-05;
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
