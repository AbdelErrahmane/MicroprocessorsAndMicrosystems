
#include <eml_net.h>
static const float X40_MLP_L6_layer_0_biases[6] = { 2.282907f, -0.361380f, -1.673099f, 2.986014f, -1.282072f, -3.235008f };
static const float X40_MLP_L6_layer_0_weights[126] = { 2.807220f, -2.075360f, -3.245249f, -0.005253f, -1.263601f, -0.928184f, -2.788800f, 6.065685f, 5.566734f, 0.003690f, -1.661184f, 1.997797f, -1.367575f, -6.237025f, -1.770023f, 0.649246f, -4.884959f, -1.845184f, 0.133497f, -0.191769f, 0.875396f, 0.408678f, -4.357884f, 6.259586f, 1.815834f, -0.729372f, -3.341117f, -0.047575f, 1.742187f, -3.223962f, 5.876101f, 7.139171f, -2.022897f, 0.108088f, -3.512524f, -0.640284f, 4.890804f, 1.837756f, -0.611167f, -0.331089f, -4.587094f, -1.166945f, 0.180748f, 3.731071f, -2.977757f, 0.111213f, -5.958817f, 0.655503f, 1.313944f, 3.167902f, -7.910117f, -1.940984f, 3.003373f, -10.650381f, 0.899609f, 1.033358f, 1.854709f, -6.497213f, 1.014097f, -0.649837f, 2.184751f, -0.554272f, 0.976745f, 2.022048f, -0.397373f, -2.573831f, 0.532572f, -0.367228f, -2.334851f, 0.439955f, -0.832819f, -0.747340f, 3.906009f, 0.326247f, -7.538897f, -7.071600f, 3.518996f, -2.777761f, 1.522072f, -2.531432f, 6.022727f, 16.491065f, -5.572937f, 1.431370f, -2.371782f, 1.549073f, -0.232051f, -7.133663f, 0.116510f, -1.593332f, 0.186178f, 2.808409f, -3.106824f, -1.026209f, 1.549598f, -0.946687f, 4.449017f, -5.762525f, 1.453952f, 1.744845f, -2.979045f, -4.041877f, -1.766181f, 2.918473f, -0.443898f, 2.230114f, 0.092005f, 1.345734f, -0.261628f, 0.429338f, -0.051087f, 0.370555f, 0.188051f, -0.163405f, -0.646299f, -1.372693f, 1.139021f, 0.565311f, -1.431393f, -3.963003f, 3.890735f, 1.102063f, -2.173827f, 2.830998f, 0.326169f, 1.076983f };
static const float X40_MLP_L6_layer_1_biases[5] = { -6.160354f, 4.795715f, 9.038370f, -1.760365f, -4.537484f };
static const float X40_MLP_L6_layer_1_weights[30] = { 5.832036f, -7.507675f, -6.603305f, 7.828561f, -0.038656f, 5.380574f, -1.243385f, -2.668031f, -3.271329f, 2.541946f, -4.594268f, 1.210867f, 2.285619f, 2.657833f, -0.912938f, 9.816259f, 4.073492f, -3.461934f, -6.147444f, -2.581498f, 9.110676f, -2.201057f, -7.302278f, -0.282584f, 0.759732f, 4.882749f, 0.318329f, -1.547996f, -2.158882f, -1.942613f };
static float X40_MLP_L6_buf1[21];
static float X40_MLP_L6_buf2[21];
static const EmlNetLayer X40_MLP_L6_layers[2] = { 
{ 6, 21, X40_MLP_L6_layer_0_weights, X40_MLP_L6_layer_0_biases, EmlNetActivationTanh }, 
{ 5, 6, X40_MLP_L6_layer_1_weights, X40_MLP_L6_layer_1_biases, EmlNetActivationSoftmax } };
static EmlNet X40_MLP_L6 = { 2, X40_MLP_L6_layers, X40_MLP_L6_buf1, X40_MLP_L6_buf2, 21 };

    int32_t
    X40_MLP_L6_predict(const float *features, int32_t n_features)
    {
        return eml_net_predict(&X40_MLP_L6, features, n_features);
    }
    

    int32_t
    X40_MLP_L6_regress(const float *features, int32_t n_features, float *out, int32_t out_length)
    {
        return eml_net_regress(&X40_MLP_L6, features, n_features, out, out_length);
    }
    

    float
    X40_MLP_L6_regress1(const float *features, int32_t n_features)
    {
        return eml_net_regress1(&X40_MLP_L6, features, n_features);
    }
    