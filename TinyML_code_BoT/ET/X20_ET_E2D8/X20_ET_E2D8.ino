#include "X20_ET_E2D8.h"


int a;
float m;
float m2;

 int16_t Input1[5][10]={{-0.06485999, -0.1147425 , -0.01917095, -0.01958071,  0.02412118,  0 ,  1 ,  0 ,  1 ,  0 },
{-0.06485999, -0.11811466, -0.01917095, -0.01958071, -0.20137449,  0 ,  0 ,  1 ,  1 ,  0 },
{-0.06485999, -0.1147425 , -0.01917095, -0.01958071,  0.02412118,  0 ,  1 ,  0 ,  1 ,  0 },
{-0.06485999,  3.32342674, -0.01917095, -0.01958071,  0.02412118,  0 ,  1 ,  0 ,  1 ,  0 },
{-0.06485999, -0.11811466, -0.01917095, -0.01958071, -0.20137449,  0 ,  0 ,  1 ,  1 ,  0 }};

// Assuming lib is of type `eml_net` based on the function name eml_net_predict
EmlTrees lib;


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
    a=eml_trees_predict(&lib, Input1[i],4);
    m2=micros()-m;
    a++;
    //Serial.println(a);
    Serial.println(m2);
    i++;
   
    
    
    
    }
Serial.println("*************************");
    delay (50000);
}
