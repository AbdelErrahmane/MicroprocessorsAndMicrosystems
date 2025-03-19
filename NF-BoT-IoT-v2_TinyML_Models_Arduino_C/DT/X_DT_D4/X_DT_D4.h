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
                        if (x[12] <= 29.0) {
                            if (x[1] <= 96.0) {
                                if (x[21] <= 3.5) {
                                    if (x[4] <= 2.5) {
                                        return 1;
                                    }

                                    else {
                                        return 1;
                                    }
                                }

                                else {
                                    if (x[8] <= 4293606.5) {
                                        return 1;
                                    }

                                    else {
                                        return 1;
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 159.5) {
                                    return 0;
                                }

                                else {
                                    if (x[3] <= 166.5) {
                                        return 3;
                                    }

                                    else {
                                        return 0;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[21] <= 1.5) {
                                if (x[14] <= 137.5) {
                                    if (x[0] <= 33107.0) {
                                        return 0;
                                    }

                                    else {
                                        return 3;
                                    }
                                }

                                else {
                                    if (x[8] <= 4294952.5) {
                                        return 2;
                                    }

                                    else {
                                        return 1;
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 32767.5) {
                                    if (x[1] <= 80.5) {
                                        return 2;
                                    }

                                    else {
                                        return 0;
                                    }
                                }

                                else {
                                    if (x[15] <= 1285.5) {
                                        return 3;
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
