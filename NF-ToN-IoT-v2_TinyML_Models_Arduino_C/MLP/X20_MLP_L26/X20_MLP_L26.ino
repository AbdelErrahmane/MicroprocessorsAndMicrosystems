#include "X20_MLP_L26.h"


int a;
float m;
float m2;
float Input1[5][14]={{ 1.17535253,  2.56122665,  0.30280669,  1.36834717,  3.0584768 , 0. ,  0. ,  0. ,  0. ,  1. , 0. ,  0. ,  0. ,  0. },
 { 1.17535253, -0.43810428,  0.76373518,  1.36834717,  1.03013394, 0. ,  0. ,  0. ,  0. ,  0. , 1. ,  0. ,  0. ,  0. },
 {-0.69937616, -0.4630987 , -1.23362164, -0.48416051, -0.57590322, 0. ,  1. ,  0. ,  0. ,  0. , 0. ,  0. ,  0. ,  0. },
 { 1.17535253,  2.56122665,  0.76373518,  1.36834717,  0.91295312, 0. ,  0. ,  0. ,  0. ,  1. , 0. ,  0. ,  0. ,  0. },
 {-0.69937616, -0.47143018, -1.23362164, -0.71085361, -0.57590322, 0. ,  1. ,  0. ,  0. ,  0. , 0. ,  0. ,  0. ,  0. }};

// Assuming lib is of type `eml_net` based on the function name eml_net_predict
EmlNet lib;


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);

}


void loop() {
//    put your main code here, to run repeatedly:
    int i = 0;

//Serial.println("*************************");
    while (i<=5){
    
      
    m=micros();
    a=eml_net_predict(&lib, Input1[i],4);
    m2=micros()-m;
    a++;
    //Serial.println(a);
    Serial.println(m2);
    i++;
   
    
    
    
    }
Serial.println("*************************");
    delay (50000);
}
