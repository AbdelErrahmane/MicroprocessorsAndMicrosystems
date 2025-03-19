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
                        if (x[6] <= -0.827590674161911) {
                            if (x[12] <= 0.5) {
                                if (x[2] <= 0.5571882128715515) {
                                    if (x[2] <= -0.47286057472229004) {
                                        return 1;
                                    }

                                    else {
                                        return 1;
                                    }
                                }

                                else {
                                    if (x[2] <= 0.5624435544013977) {
                                        return 1;
                                    }

                                    else {
                                        return 1;
                                    }
                                }
                            }

                            else {
                                if (x[2] <= -1.7166270017623901) {
                                    return 0;
                                }

                                else {
                                    if (x[1] <= 0.2726935148239136) {
                                        return 1;
                                    }

                                    else {
                                        return 2;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[7] <= -0.18439995497465134) {
                                if (x[8] <= 0.17944138497114182) {
                                    if (x[12] <= 0.5) {
                                        return 3;
                                    }

                                    else {
                                        return 0;
                                    }
                                }

                                else {
                                    if (x[13] <= 0.5) {
                                        return 3;
                                    }

                                    else {
                                        return 3;
                                    }
                                }
                            }

                            else {
                                if (x[9] <= -0.1629696786403656) {
                                    if (x[1] <= 0.27280257642269135) {
                                        return 2;
                                    }

                                    else {
                                        return 1;
                                    }
                                }

                                else {
                                    if (x[9] <= 0.4232971854507923) {
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
