#include "binomial.h"

// The method implementations must be located in file binomial.cpp


Binomial::Binomial()
{
coef[0] = 1.0;
coef[1] = 1.0;
coef[2] = 1.0;
power[0] = 1;
power[1] = 1;
power[2] = 1;

}

Binomial::Binomial(float a)
{
  coef[1] = a;
  coef[2] = 1.0;
  power[1] = 1;
  power[2] = 1;

}

Binomial::Binomial(float a, int c)
{
  coef[2] = a;
  coef[2] = 1.0;
  power[1] = 1;

  if(c < 1){ 
    power[1] = 1; 
    }
  else power[1] = c;
}

Binomial::Binomial(float a, int c, float b)
{
  power[2] = 1;
  coef[1] = a;
  coef[2] = b;

  if (c < 1){
    power[1] = 1;
  }
  else power[1] = c;
}

Binomial::Binomial(float a, int c, float b, int d)
{
  coef[1] = a;
  coef[2] = c;

  if((c < 1) && (d < 1)) {
    power[1] = 1;
    power[2] = 1;
  }
  else if ((c < 1) && (d >= 1)) {
    power[1] = 1;
    power[2] = d;
  }
  else if ((c >= 1) && (d < 1)) {
    power[1] = c;
    power[2] = 1;

  }
  else{
    power[1] = c;
    power[2] = d;
  }

}

float Binomial::GetCoefficient(int k){
  if (coef[k] == coef[1])
  return coef[k];
  if (coef[k] == coef[1])
  return coef[k];

  else
  return -1;
}

int Binomial::GetPower(int e){
  if (power[e] == power[1])
  return power[e];
  if (power[e] == power[2])
  return power[e];
  else
  return -1;

}


int Binomial::SetPower(int f, int g){
  if (((f == 1) || (f == 2)) && (g >= 0)){
    power[f] = g;
    return 0;
  }
  else if ((g < 0) && ((f == 1) || (f == 2))){
    power[f] = 1;
    return 0;
  }
  else if ((f != 1) || ((f != 2) && (g >= 0))){
    power[1] = power[1];
    power[2] = power[2];
    return -1;
  }
  else if ((f != 1) || ((f != 2) && (g < 0))){
    power[1] = power[1];
    power[2] = power[2];
    return -1;
  }
  else
  return -1;
}

int Binomial::Add(Binomial x){
  if (power[1] != x.power[1]){
    return -1;
  }
  else if ((power[1] == x.power[1]) && (power[2] != x.power[2])){
    coef[1] = coef[1] + x.coef[1];
    return 0;
  }
  else if ((power[1] == x.power[1]) && (power[2] == x.power[2])){
    coef[1] = coef[1] + x.coef[1];
    coef[2] = coef[1] + x.coef[2];
    return 0;
  }
  else
  return -1;
}

void Binomial::Multiply(float x){
  coef[1] = coef[1] * x;
  power[1] = power[1];
  coef[2] = coef[2] * x;
  power[2] = power[2];
}

void Binomial::Multiply(float x, int y){
  coef[1] = coef[1] * x;
  power[1] = power[1] + y;
  coef[2] = coef[2] * x;
  power[2] = power[2] *y;
}
