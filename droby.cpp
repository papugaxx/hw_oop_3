#include "droby.h"
#include <iostream>
using namespace std;

void droby::setValues(int num, int denom) {
    numerator = num;  
    denominator = denom;  
}

void droby::print() {
    std::cout << numerator << "/" << denominator;
}

droby droby::add(droby other) {
    droby result;
    result.numerator = numerator * other.denominator + other.numerator * denominator;
    result.denominator = denominator * other.denominator;
    return result;
}

droby droby::subtract(droby other) {
    droby result;
    result.numerator = numerator * other.denominator - other.numerator * denominator;
    result.denominator = denominator * other.denominator;
    return result;
}

droby droby::multiply(droby other) {
    droby result;
    result.numerator = numerator * other.numerator;
    result.denominator = denominator * other.denominator;
    return result;
}

droby droby::divide(droby other) {
    droby result;
    result.numerator = numerator * other.denominator;
    result.denominator = denominator * other.numerator;
    return result;
}
