#include "Fractions.h"
#include <iostream>
using namespace std;

void Fractions::setValues(int num, int denom) {
    numerator = num;
    denominator = denom;
}

void Fractions::print() {
    cout << numerator << "/" << denominator;
}

Fractions Fractions::operator+(const Fractions& other) {
    Fractions result;
    result.numerator = numerator * other.denominator + other.numerator * denominator;
    result.denominator = denominator * other.denominator;
    return result;
}

Fractions Fractions::operator-(const Fractions& other) {
    Fractions result;
    result.numerator = numerator * other.denominator - other.numerator * denominator;
    result.denominator = denominator * other.denominator;
    return result;
}

Fractions Fractions::operator*(const Fractions& other) {
    Fractions result;
    result.numerator = numerator * other.numerator;
    result.denominator = denominator * other.denominator;
    return result;
}

Fractions Fractions::operator/(const Fractions& other) {
    Fractions result;
    result.numerator = numerator * other.denominator;
    result.denominator = denominator * other.numerator;
    return result;
}
