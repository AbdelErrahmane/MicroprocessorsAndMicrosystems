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
                            if (x[13] <= -0.48353181779384613) {
                                if (x[23] <= 0.5) {
                                    if (x[41] <= 0.5) {
                                        return 0;
                                    }

                                    else {
                                        return 1;
                                    }
                                }

                                else {
                                    if (x[5] <= -0.47520802915096283) {
                                        return 1;
                                    }

                                    else {
                                        return 0;
                                    }
                                }
                            }

                            else {
                                if (x[13] <= -0.48331035673618317) {
                                    if (x[23] <= 0.5) {
                                        return 0;
                                    }

                                    else {
                                        return 1;
                                    }
                                }

                                else {
                                    if (x[11] <= -0.03732512146234512) {
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
                                if (x[13] <= 1.360820472240448) {
                                    if (x[41] <= 0.5) {
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
                                if (x[14] <= 1.0264071226119995) {
                                    if (x[6] <= 0.9644178450107574) {
                                        return 2;
                                    }

                                    else {
                                        return 0;
                                    }
                                }

                                else {
                                    if (x[10] <= 0.19171935319900513) {
                                        return 4;
                                    }

                                    else {
                                        return 2;
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
