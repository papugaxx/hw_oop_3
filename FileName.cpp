#include "droby.h"
#include <iostream>
using namespace std;

int main() {
    droby d1, d2, result;
    int num1, denom1, num2, denom2;

    cout << "num and denom for d1";
    cin >> num1 >> denom1;
    d1.setValues(num1, denom1);

    cout << "num and denom for d2";
    cin >> num2 >> denom2;
    d2.setValues(num2, denom2);

    cout << "d1 ";
    d1.print();
    cout << "\nd2 ";
    d2.print();

    result = d1.add(d2);
    cout << "\nsum ";
    result.print();

    result = d1.subtract(d2);
    cout << "\ndifference ";
    result.print();

    result = d1.multiply(d2);
    cout << "\nproduct ";
    result.print();

    result = d1.divide(d2);
    cout << "\nfraction ";
    result.print();

    return 0;
}
