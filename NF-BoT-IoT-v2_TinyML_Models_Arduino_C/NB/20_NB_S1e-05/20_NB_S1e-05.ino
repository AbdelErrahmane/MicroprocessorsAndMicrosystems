#include "20_NB_S1e-05.h"

Eloquent::ML::Port::GaussianNB clf;

float Input1[5][10]={{-0.06485999, -0.1147425 , -0.01917095, -0.01958071,  0.02412118,  0 ,  1 ,  0 ,  1 ,  0 },
{-0.06485999, -0.11811466, -0.01917095, -0.01958071, -0.20137449,  0 ,  0 ,  1 ,  1 ,  0 },
{-0.06485999, -0.1147425 , -0.01917095, -0.01958071,  0.02412118,  0 ,  1 ,  0 ,  1 ,  0 },
{-0.06485999,  3.32342674, -0.01917095, -0.01958071,  0.02412118,  0 ,  1 ,  0 ,  1 ,  0 },
{-0.06485999, -0.11811466, -0.01917095, -0.01958071, -0.20137449,  0 ,  0 ,  1 ,  1 ,  0 }};
int a;
float m;
float m2;

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
    a= clf.predict(Input1[i]);
    m2=micros()-m;
    a++;
    //Serial.println(a);
    Serial.println(m2);
    i++;
   
    
    
    
    }
Serial.println("*************************");
    delay (50000);
}
