
#include "eml_net.h"

static const float X20_MLP_L6_layer_0_biases[6] = { -2.196025f, -1.329225f, 2.940779f, -2.561007f, -2.219489f, 3.093915f };
static const float X20_MLP_L6_layer_0_weights[96] = { -3.374904f, -0.369481f, 4.202836f, -2.224890f, -1.473543f, 7.437636f, -6.131902f, 3.026442f, 0.687956f, 1.465449f, -1.114779f, -10.478599f, -2.106342f, 0.201702f, -0.160583f, -0.105624f, -1.913865f, 0.219039f, 8.218544f, 4.279529f, 0.480001f, -2.329242f, 3.555493f, 10.270000f, -3.332829f, -2.090424f, -0.888377f, 1.048986f, -0.644056f, 0.015580f, -0.240218f, 0.244042f, -0.013407f, -0.065771f, -0.476148f, -0.195192f, 0.117025f, 0.122236f, 0.463484f, 0.189582f, -0.146594f, -0.066835f, 0.206389f, -0.459328f, 0.174473f, 0.177879f, -0.302562f, -0.388152f, 0.858540f, 0.017394f, 1.250236f, 1.095260f, -3.751790f, 2.611067f, -3.647382f, -1.299207f, 1.547523f, -3.322828f, 1.794942f, 0.360180f, -0.308341f, -0.404451f, 0.223470f, -1.282890f, -0.411380f, -1.547824f, 0.346359f, -0.420884f, 0.522242f, -0.429412f, 0.492760f, -0.035786f, 0.219206f, 1.171125f, 3.956446f, -0.270515f, 1.598359f, 0.913831f, -2.282985f, -2.282646f, -1.577931f, -1.418921f, -4.583011f, 3.646879f, 0.069564f, -0.245053f, 0.024285f, -0.424121f, 0.079327f, 0.448380f, -0.186016f, 0.167245f, -0.335547f, 0.213392f, -0.223250f, -0.339373f };
static const float X20_MLP_L6_layer_1_biases[10] = { 2.487243f, 1.738990f, 2.320422f, 1.311957f, 0.615080f, -3.508344f, 2.579407f, -2.867772f, -2.171253f, -2.176948f };
static const float X20_MLP_L6_layer_1_weights[60] = { 1.743448f, 1.827450f, -4.232912f, 2.071898f, -0.080819f, -0.342787f, 0.624454f, -0.066041f, -0.336475f, 0.207528f, -0.559668f, -0.897536f, 2.108122f, 1.860658f, 1.002412f, -3.357974f, 2.399916f, -1.290318f, -0.695942f, 1.231248f, 2.084049f, 1.929845f, -3.445735f, -0.690481f, 3.004463f, -2.517512f, -0.766778f, 1.147332f, -0.687719f, -0.120996f, -4.230391f, 6.372569f, -1.650740f, -2.379591f, 3.222541f, -0.733701f, -1.513743f, -0.003045f, 0.408119f, 0.715882f, 0.180866f, -1.885853f, 3.280634f, -1.725912f, 0.796438f, 0.256500f, -0.364127f, 0.799147f, 0.075907f, 0.531592f, -4.848909f, 2.283760f, -0.031301f, -1.893010f, 2.648845f, 3.211269f, -2.392081f, 0.480526f, -0.078099f, 0.317251f };
static float X20_MLP_L6_buf1[16];
static float X20_MLP_L6_buf2[16];
static const EmlNetLayer X20_MLP_L6_layers[2] = { 
{ 6, 16, X20_MLP_L6_layer_0_weights, X20_MLP_L6_layer_0_biases, EmlNetActivationTanh }, 
{ 10, 6, X20_MLP_L6_layer_1_weights, X20_MLP_L6_layer_1_biases, EmlNetActivationSoftmax } };
static EmlNet X20_MLP_L6 = { 2, X20_MLP_L6_layers, X20_MLP_L6_buf1, X20_MLP_L6_buf2, 16 };

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
    