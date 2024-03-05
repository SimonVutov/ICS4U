#include <iostream>
#include <sstream>

#include "Fraction.h"

using namespace std;

int Fraction::count = 0;

Fraction::Fraction() {
  numerator = 0;
  denominator = 1;
  id = ++count;
}

Fraction::Fraction(int newNum, int newDenom) {
  this->numerator = newNum;
  this->denominator = newDenom;
  id = ++count;
}

Fraction::Fraction(const Fraction &other) { // duplicate
  cout << "Copy constructor called" << endl;
  this->numerator = other.numerator;
  this->denominator = other.denominator;
  id = ++count;
}

Fraction::~Fraction() { count--; }

void Fraction::setDenominator(int denominator) {
  if (denominator == 0) {
    cout << "Denominator cannot be 0, set to 1 instead" << endl;
    this->denominator = 1;
  } else {
    this->denominator = denominator;
  }
}

Fraction Fraction::operator+(const Fraction &rhs) {
  Fraction result;
  result.setNumerator(this->numerator * rhs.denominator +
                      rhs.numerator * this->denominator);
  result.setDenominator(this->denominator * rhs.denominator);
  return result;
}

Fraction Fraction::operator-(const Fraction &rhs) {
  Fraction result;
  result.setNumerator(this->numerator * rhs.denominator -
                      rhs.numerator * this->denominator);
  result.setDenominator(this->denominator * rhs.denominator);
  return result;
}

Fraction Fraction::operator*(const Fraction &rhs) {
  Fraction result;
  result.setNumerator(this->numerator * rhs.numerator);
  result.setDenominator(this->denominator * rhs.denominator);
  return result;
}

Fraction Fraction::operator/(const Fraction &rhs) {
  Fraction result;
  result.setNumerator(this->numerator * rhs.denominator);
  result.setDenominator(this->denominator * rhs.numerator);
  return result;
}

string Fraction::toString() {
  stringstream ss;
  ss << numerator << "/" << denominator;
  return ss.str();
}

double Fraction::toDouble() {
  return static_cast<double>(numerator) / denominator;
}

void Fraction::simplify() {
  int a = abs(numerator), b = abs(denominator);
  int at = min(a, b);
  while (at > 1) {
    if (a % at == 0 && b % at == 0) {
      numerator /= at;
      denominator /= at;
      return;
    }
    at--;
  }
}