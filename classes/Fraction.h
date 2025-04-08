#pragma once
#include "Pair.h"
#include <string>
#include <iostream>

class Fraction : public Pair {
public:
  Fraction();
  Fraction(long wholePart, unsigned short fractionalPart);
  Fraction(const Fraction& other);

  long getWhole() const { return first; }
  unsigned short getFractional() const { return static_cast<unsigned short>(second); }

  bool setWhole(long value);
  bool setFractional(unsigned short value);

  operator double() const { return first + second / 100000.0; }
  operator std::string() const;

  Fraction& operator=(const Fraction& other);

  Fraction& operator++();
  Fraction operator++(int);
  Fraction& operator--();
  Fraction operator--(int);

  static Fraction toFraction(double x);

  friend Fraction operator+(const Fraction& f1, const Fraction& f2);
  friend Fraction operator*(const Fraction& f1, const Fraction& f2);
};

Fraction makeFraction(long wholePart, unsigned short fractionalPart);
