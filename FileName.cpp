#include "Fractions.h"
#include <iostream>
using namespace std;

int main() {
    Fractions f1, f2, result;
    int num1, denom1, num2, denom2;

    cout << "Enter num and denom for f1: ";
    cin >> num1 >> denom1;
    f1.setValues(num1, denom1);

    cout << "Enter num and denom for f2: ";
    cin >> num2 >> denom2;
    f2.setValues(num2, denom2);

    cout << "f1: ";
    f1.print();
    cout << "\nf2: ";
    f2.print();

    result = f1 + f2;
    cout << "\nSum: ";
    result.print();

    result = f1 - f2;
    cout << "\nDifference: ";
    result.print();

    result = f1 * f2;
    cout << "\nProduct: ";
    result.print();

    result = f1 / f2;
    cout << "\nQuotient: ";
    result.print();

    return 0;
}
