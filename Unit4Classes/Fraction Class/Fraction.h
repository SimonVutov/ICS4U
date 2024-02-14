#include <iostream>
#include <string>

#ifndef FRACTION_H_
#define FRACTION_H_

using namespace std;

class Fraction {

private:
  static int count;
  // static means it is shared by all objects of the class
  int id;
  int numerator;
  int denominator;

public:
  //  ---- in assignment ----
  Fraction(const Fraction &other); // Copy constructor
  Fraction();
  Fraction(int numerator, int denominator);
  ~Fraction(); // Destructor, called when the object is destroyed
  const int getNumerator() { return numerator; }
  const int getDenominator() { return denominator; }
  void setNumerator(int numerator) { this->numerator = numerator; }
  void setDenominator(int denominator) { this->denominator = denominator; }
  string toString();
  void add(const Fraction &f) { *this = *this + f; }
  void subtract(const Fraction &f) { *this = *this - f; }
  void muliply(const Fraction &f) { *this = *this * f; }
  void divide(const Fraction &f) { *this = *this / f; }
  static Fraction add(Fraction f, Fraction g) { return (f + g); };
  static Fraction subtract(Fraction f, Fraction g) { return (f - g); }
  static Fraction multiply(Fraction f, Fraction g) { return (f * g); }
  static Fraction divide(Fraction f, Fraction g) { return (f / g); }

  int numOfFractions() { return count; }

  // ---- extra useful things ----
  void simplify(); // reduce the fraction to lowest terms
  int getID() { return id; }
  double toDouble();
  Fraction operator+(const Fraction &rhs);
  Fraction operator-(const Fraction &rhs);
  Fraction operator*(const Fraction &rhs);
  Fraction operator/(const Fraction &rhs);
};

#endif /* FRACTION_H_ */