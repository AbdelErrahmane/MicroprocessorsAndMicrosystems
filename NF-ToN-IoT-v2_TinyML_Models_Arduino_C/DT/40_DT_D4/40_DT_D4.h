#pragma once
namespace Eloquent {
    namespace ML {
        namespace Port {
            class DecisionTree {
                public:
                    /**
                    * Predict class for features vector
                    */
                    int predict(float *x) {
                        if (x[5] <= -0.448337659239769) {
                            if (x[8] <= -0.48353181779384613) {
                                if (x[5] <= -0.47520802915096283) {
                                    if (x[4] <= -0.6850155293941498) {
                                        return 1;
                                    }

                                    else {
                                        return 5;
                                    }
                                }

                                else {
                                    if (x[1] <= 2.1022881269454956) {
                                        return 0;
                                    }

                                    else {
                                        return 1;
                                    }
                                }
                            }

                            else {
                                if (x[8] <= -0.48331035673618317) {
                                    if (x[9] <= 0.7202410697937012) {
                                        return 1;
                                    }

                                    else {
                                        return 0;
                                    }
                                }

                                else {
                                    if (x[4] <= 2.939798355102539) {
                                        return 0;
                                    }

                                    else {
                                        return 7;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[5] <= -0.43386900424957275) {
                                if (x[8] <= 1.360820472240448) {
                                    if (x[7] <= 0.8014646768569946) {
                                        return 0;
                                    }

                                    else {
                                        return 5;
                                    }
                                }

                                else {
                                    if (x[7] <= 0.5325421392917633) {
                                        return 4;
                                    }

                                    else {
                                        return 3;
                                    }
                                }
                            }

                            else {
                                if (x[9] <= 1.0264071226119995) {
                                    if (x[6] <= 0.9644178450107574) {
                                        return 2;
                                    }

                                    else {
                                        return 0;
                                    }
                                }

                                else {
                                    if (x[5] <= 0.25442588329315186) {
                                        return 3;
                                    }

                                    else {
                                        return 4;
                                    }
                                }
                            }
                        }
                    }

                protected:
                };
            }
        }
    }
