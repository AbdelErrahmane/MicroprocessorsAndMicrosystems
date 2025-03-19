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
                        if (x[6] <= -0.6414494216442108) {
                            if (x[21] <= 0.5) {
                                if (x[0] <= -0.011844356078654528) {
                                    return 0;
                                }

                                else {
                                    if (x[2] <= 0.2726935148239136) {
                                        return 1;
                                    }

                                    else {
                                        return 2;
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 0.008583329617977142) {
                                    if (x[0] <= -0.001630512997508049) {
                                        return 1;
                                    }

                                    else {
                                        return 1;
                                    }
                                }

                                else {
                                    if (x[2] <= 0.27156397700309753) {
                                        return 1;
                                    }

                                    else {
                                        return 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[12] <= -0.18439995497465134) {
                                if (x[13] <= 0.17944138497114182) {
                                    if (x[19] <= 0.5) {
                                        return 3;
                                    }

                                    else {
                                        return 0;
                                    }
                                }

                                else {
                                    if (x[20] <= 0.5) {
                                        return 3;
                                    }

                                    else {
                                        return 3;
                                    }
                                }
                            }

                            else {
                                if (x[14] <= -0.1629696786403656) {
                                    if (x[2] <= 0.27280257642269135) {
                                        return 2;
                                    }

                                    else {
                                        return 1;
                                    }
                                }

                                else {
                                    if (x[14] <= 0.4232971854507923) {
                                        return 0;
                                    }

                                    else {
                                        return 3;
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
