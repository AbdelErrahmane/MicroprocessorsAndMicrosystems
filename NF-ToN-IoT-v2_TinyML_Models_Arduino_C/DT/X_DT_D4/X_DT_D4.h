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
                        if (x[17] <= 52.5) {
                            if (x[27] <= 4095.5) {
                                if (x[3] <= 0.5) {
                                    if (x[13] <= 40.5) {
                                        return 1;
                                    }

                                    else {
                                        return 0;
                                    }
                                }

                                else {
                                    if (x[1] <= 999.5) {
                                        return 1;
                                    }

                                    else {
                                        return 0;
                                    }
                                }
                            }

                            else {
                                if (x[27] <= 4107.5) {
                                    if (x[3] <= 0.5) {
                                        return 1;
                                    }

                                    else {
                                        return 0;
                                    }
                                }

                                else {
                                    if (x[0] <= 32769.0) {
                                        return 0;
                                    }

                                    else {
                                        return 4;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[13] <= 60.5) {
                                if (x[27] <= 29181.0) {
                                    if (x[0] <= 445.5) {
                                        return 0;
                                    }

                                    else {
                                        return 5;
                                    }
                                }

                                else {
                                    if (x[3] <= 90.0) {
                                        return 3;
                                    }

                                    else {
                                        return 3;
                                    }
                                }
                            }

                            else {
                                if (x[24] <= 0.5) {
                                    if (x[6] <= 2101.5) {
                                        return 2;
                                    }

                                    else {
                                        return 4;
                                    }
                                }

                                else {
                                    if (x[22] <= 3516000.0) {
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
