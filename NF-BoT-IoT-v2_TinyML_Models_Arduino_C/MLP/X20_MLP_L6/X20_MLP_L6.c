
#include <eml_net.h>
static const float X20_MLP_L6_layer_0_biases[6] = { -0.949027f, 0.159043f, 0.518209f, -3.005741f, -3.615690f, 1.749893f };
static const float X20_MLP_L6_layer_0_weights[72] = { -0.483572f, 2.967819f, 1.169679f, 2.871878f, 1.999819f, 1.594667f, -1.118974f, -0.522559f, 0.634341f, 0.088322f, 0.925603f, -0.561323f, 4.217026f, 1.336901f, -2.047310f, -1.677166f, -1.153479f, 2.138144f, 1.859049f, 1.353441f, 0.657575f, -0.200294f, -2.341438f, 2.564477f, 2.219406f, 0.815196f, -1.058552f, 10.506002f, -0.981608f, -2.040476f, -0.035888f, 2.271236f, -4.346988f, 2.345168f, -5.600959f, 1.306547f, -0.935756f, -1.686988f, 4.982374f, -3.290677f, 3.329097f, 1.840633f, -0.442126f, -0.602396f, 0.260874f, -1.042126f, -2.145335f, -1.324082f, -0.187204f, -0.062956f, -0.509850f, -0.239052f, 0.689554f, -1.266367f, 1.103175f, -2.188533f, 0.135502f, 1.075401f, -3.007397f, 3.133019f, -3.355559f, 1.289795f, 1.054428f, -4.082022f, -0.872534f, -0.584318f, 0.367623f, -0.463914f, 0.390440f, -0.467914f, 0.550316f, -0.036294f };
static const float X20_MLP_L6_layer_1_biases[5] = { 0.948545f, 1.582773f, 2.186847f, 1.365250f, -5.095467f };
static const float X20_MLP_L6_layer_1_weights[30] = { -2.519715f, -0.066544f, 4.183400f, -1.598529f, -1.902204f, 0.727324f, -0.812687f, 2.018873f, -2.511844f, 0.049019f, -3.041360f, 4.238687f, 4.940508f, -1.745995f, -4.210127f, 3.109151f, -4.684894f, -7.102377f, 5.736675f, 1.900897f, -0.275998f, 2.650836f, 3.524243f, -5.849433f, -0.025048f, 4.474390f, -4.130664f, -3.151918f, 4.420777f, -0.945833f };
static float X20_MLP_L6_buf1[12];
static float X20_MLP_L6_buf2[12];
static const EmlNetLayer X20_MLP_L6_layers[2] = { 
{ 6, 12, X20_MLP_L6_layer_0_weights, X20_MLP_L6_layer_0_biases, EmlNetActivationTanh }, 
{ 5, 6, X20_MLP_L6_layer_1_weights, X20_MLP_L6_layer_1_biases, EmlNetActivationSoftmax } };
static EmlNet X20_MLP_L6 = { 2, X20_MLP_L6_layers, X20_MLP_L6_buf1, X20_MLP_L6_buf2, 12 };

    int32_t
    X20_MLP_L6_predict(const float *features, int32_t n_features)
    {
        return eml_net_predict(&X20_MLP_L6, features, n_features);
    }
    

    int32_t
    X20_MLP_L6_regress(const float *features, int32_t n_features, float *out, int32_t out_length)
    {
        return eml_net_regress(&X20_MLP_L6, features, n_features, out, out_length);
    }
    

    float
    X20_MLP_L6_regress1(const float *features, int32_t n_features)
    {
        return eml_net_regress1(&X20_MLP_L6, features, n_features);
    }
    