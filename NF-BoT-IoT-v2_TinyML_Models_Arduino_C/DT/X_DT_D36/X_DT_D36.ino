#include "X_DT_D36.h"

Eloquent::ML::Port::DecisionTree clf;

float Input1[5][47]={{-0.00682422, -0.00168016, -0.00488712, -0.20880541,  0.27195406,  0.33585381, -0.06485999,  0.29337553,  0.69953377,  1.23586228, -0.1147425 ,  0.00691317, -0.00676035, -0.01917095, -0.01958071,  0.20840956, -0.01814135, -0.05577871,  0.3359465 ,  0.02412118, -0.18492501,  0 ,  1 ,  0 ,  0 ,  1 ,  0 ,  1 ,  0 ,  1 ,  0 ,  1 ,  0 ,  1 ,  0 ,  0 ,  1 ,  0 ,  0 ,  1 ,  0 ,  0 ,  0 ,  1 ,  0 ,  1 ,  0 },
{-0.00682422, -0.00168016, -0.00488712, -0.49212495,  0.27255719, -0.8128662 , -0.06485999,  0.29337553, -0.68984809, -0.84620797, -0.11811466,  0.00691317, -0.00676035, -0.01917095, -0.01958071, -0.14287709, -0.01814135,  0.02222888, -0.3230575 , -0.20137449, -0.18492501,  0 ,  0 ,  1 ,  0 ,  0 ,  1 ,  1 ,  0 ,  1 ,  0 ,  1 ,  0 ,  1 ,  0 ,  0 ,  1 ,  0 ,  0 ,  1 ,  0 ,  0 ,  0 ,  1 ,  0 ,  1 ,  0 },
{-0.00682422, -0.00168016, -0.00488712, -0.20880541,  0.27153666,  1.13085211, -0.06485999,  0.29337553,  0.69953377,  1.23586228, -0.1147425 ,  0.00691317, -0.00676035, -0.01917095, -0.01958071,  0.20840956, -0.01814135, -0.05577871,  0.3359465 ,  0.02412118, -0.18492501,  0 ,  1 ,  0 ,  0 ,  1 ,  0 ,  1 ,  0 ,  1 ,  0 ,  1 ,  0 ,  1 ,  0 ,  0 ,  0 ,  1 ,  0 ,  1 ,  0 ,  0 ,  0 ,  1 ,  0 ,  1 ,  0 },
{ 0.00384936, -0.00168016, -0.00488712, -0.20880541,  0.2717095 ,  0.80164577, -0.06485999,  0.29337553,  0.69953377,  1.23586228,  3.32342674,  0.00691317, -0.00676035, -0.01917095, -0.01958071,  0.20840956, -0.01814135, -0.05577871,  0.6654485 ,  0.02412118, -0.18492501,  0 ,  1 ,  0 ,  0 ,  1 ,  0 ,  1 ,  0 ,  1 ,  0 ,  1 ,  0 ,  1 ,  0 ,  0 ,  0 ,  1 ,  0 ,  1 ,  0 ,  0 ,  0 ,  1 ,  0 ,  1 ,  0 },
{-0.00682422, -0.00168016, -0.00488712, -0.49212495,  0.27239905, -0.51167742, -0.06485999,  0.29337553, -0.68984809, -0.84620797, -0.11811466,  0.00691317, -0.00676035, -0.01917095, -0.01958071, -0.14287709, -0.01814135,  0.02222888, -0.3230575 , -0.20137449, -0.18492501,  0 ,  0 ,  1 ,  0 ,  0 ,  1 ,  1 ,  0 ,  1 ,  0 ,  1 ,  0 ,  1 ,  0 ,  0 ,  1 ,  0 ,  0 ,  1 ,  0 ,  0 ,  0 ,  1 ,  0 ,  1 ,  0 }};
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
