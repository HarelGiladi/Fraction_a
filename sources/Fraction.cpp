#include <iostream>
#include <limits>
#include <cmath>
#include "Fraction.hpp"

using namespace std;


void check_overflow(long a, long b){
    if(a > numeric_limits<int>::max() || b > numeric_limits<int>::max())
    {throw overflow_error("numerator or denominator are too high!");}

    if(a < numeric_limits<int>::min() || b < numeric_limits<int>::min())
    {throw overflow_error("numerator or denominator are too low!");}
}

namespace ariel
{
    Fraction::Fraction() : numerator(0), denominator(1) {}

    Fraction::Fraction(int n, int m)
    {
        this->numerator = n;
        this->denominator = m;
    }

    Fraction::Fraction(float f)
    {
        this->numerator = 0;
        this->denominator = 1;
    }

    
    Fraction operator+(const Fraction &a, const Fraction &b){return Fraction(0, 1); }

    Fraction operator-(const Fraction &a, const Fraction &b){return Fraction(0, 1);}

    Fraction operator*(const Fraction &a, const Fraction &b) {   return Fraction(0, 1);}

    Fraction operator/(const Fraction &a, const Fraction &b) {return Fraction(0, 1); }


    int Fraction::getNumerator(){return this->numerator;    }

    int Fraction::getDenominator(){return this->denominator;}


    Fraction Fraction::operator++(int num){ return Fraction(0, 1); }

    Fraction Fraction::operator++() {return Fraction(0, 1); }

    Fraction Fraction::operator--(int num){return Fraction(0, 1);}

    Fraction Fraction::operator--() {  return Fraction(0, 1);}



    ostream &operator<<(ostream &os, const Fraction &frac) {return os;}

    istream &operator>>(istream &is, Fraction &frac){return is;}



    bool operator>(const Fraction &a, const Fraction &b){return false;}

    bool operator>=(const Fraction &a, const Fraction &b){return false;}

    bool operator<(const Fraction &a, const Fraction &b){return false;}

    bool operator<=(const Fraction &a, const Fraction &b){return false;}

    bool operator==(const Fraction &a, const Fraction &b){return false;}

    bool operator!=(const Fraction &a, const Fraction &b){return false;}
}