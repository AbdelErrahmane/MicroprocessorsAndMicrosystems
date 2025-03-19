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
                        if (x[2] <= -0.6414494216442108) {
                            if (x[5] <= 0.5) {
                                if (x[1] <= 0.27210505306720734) {
                                    if (x[1] <= 0.27156397700309753) {
                                        return 1;
                                    }

                                    else {
                                        return 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 0.2723875492811203) {
                                        return 1;
                                    }

                                    else {
                                        return 1;
                                    }
                                }
                            }

                            else {
                                if (x[1] <= -1.7040356546640396) {
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
                            if (x[6] <= 0.5) {
                                if (x[2] <= -0.5005644410848618) {
                                    if (x[1] <= 0.2724703699350357) {
                                        return 0;
                                    }

                                    else {
                                        return 3;
                                    }
                                }

                                else {
                                    if (x[3] <= -0.23273586481809616) {
                                        return 3;
                                    }

                                    else {
                                        return 0;
                                    }
                                }
                            }

                            else {
                                if (x[4] <= -0.11126010492444038) {
                                    if (x[2] <= -0.41838154196739197) {
                                        return 0;
                                    }

                                    else {
                                        return 2;
                                    }
                                }

                                else {
                                    if (x[4] <= 0.4726913985796273) {
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
