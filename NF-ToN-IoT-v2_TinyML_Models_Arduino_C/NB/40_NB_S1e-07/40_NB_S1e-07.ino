#include "40_NB_S1e-07.h"

Eloquent::ML::Port::GaussianNB clf;

float Input1[5][28]={{ 1.2586783 ,  2.10222856,  1.22817558,  1.43894656,  1.17535253, 2.56122665,  0.30280669, -0.21898712,  1.36834717,  3.0584768 , 0 ,  0 ,  0 ,  0 ,  1 , 0 ,  0 ,  0 ,  0 ,  1 , 0 ,  0 ,  0 ,  0 ,  0 , 0 ,  1 ,  0 },
 { 0.54988744,  2.1023312 , -0.26040787,  0.18423392,  1.17535253,-0.43810428,  0.76373518, -0.13645276,  1.36834717,  1.03013394, 0 ,  0 ,  0 ,  0 ,  0 , 1 ,  0 ,  0 ,  0 ,  1 , 0 ,  0 ,  0 ,  0 ,  0 , 0 ,  1 ,  0 },
 {-0.95629315, -0.47568569, -0.26040787, -0.27802863, -0.69937616,-0.4630987 , -1.23362164, -0.18447275, -0.48416051, -0.57590322, 0 ,  1 ,  0 ,  0 ,  0 , 0 ,  0 ,  0 ,  0 ,  0 , 1 ,  0 ,  0 ,  0 ,  0 , 0 ,  1 ,  0 },
 { 1.2586783 , -0.47568569, -0.26040787, -0.27802863,  1.17535253, 2.56122665,  0.76373518,  2.86029498,  1.36834717,  0.91295312, 0 ,  0 ,  0 ,  0 ,  1 , 0 ,  0 ,  0 ,  0 ,  1 , 0 ,  0 ,  0 ,  0 ,  0 , 0 ,  1 ,  0 },
 {-0.95629315, -0.47568569, -0.26040787, -0.27802863, -0.69937616,-0.47143018, -1.23362164, -0.187474  , -0.71085361, -0.57590322, 0 ,  1 ,  0 ,  0 ,  0 , 0 ,  0 ,  0 ,  0 ,  0 , 1 ,  0 ,  0 ,  0 ,  0 , 0 ,  1 ,  0 }};

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
