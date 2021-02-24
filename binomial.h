#ifndef binomial_h
#define binomial_h
#include <iostream>
#include <string>
using namespace std;
#include <stdio.h>

// A Binomial class definition must be placed in the file binomial.h


class Binomial {

private:
  float coef[3] {1.0, 1.0, 1.0};
  int power[3] {1, 1, 1};

public:
  Binomial();
  Binomial(float a);
  Binomial(float a, int c);
  Binomial(float a, int c, float b);
  Binomial(float a, int c, float b, int d);
  int GetPower(int e);
  float GetCoefficient(int k);
  int SetPower(int f, int g);
  int Add(Binomial x);
  void Multiply(float x);
  void Multiply(float x, int y);

};


#endif /* Binomial_hpp */