#include <iostream>

#include "Fraction.h"

using namespace std;

int main() {
  Fraction fraction;
  fraction.setNumerator(3);
  fraction.setDenominator(4);

  Fraction fraction2 = fraction; // calls copy constructor
  cout << "number of fractions: " << fraction.numOfFractions() << endl;

  fraction.setNumerator(5);
  fraction.setDenominator(6);

  cout << fraction.toString() << endl;
  cout << fraction2.toString() << endl;

  cout << "number of fractions: " << fraction.numOfFractions() << endl;

  cout << (fraction - fraction2).toString() << endl;
  Fraction frac3 = fraction * fraction2;
  cout << (frac3).toString() << endl;
  frac3.simplify();
  cout << (frac3).toString() << endl;

  cout << "number of fractions: " << fraction.numOfFractions() << endl;

  return 0;
}