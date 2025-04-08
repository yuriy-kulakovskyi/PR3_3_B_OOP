#include "./classes/Fraction.h"
#include <iostream>
using namespace std;

int main() {

    long whole1, whole2;
    unsigned short frac1, frac2;

    cout << "Enter first fraction (whole part and fractional part): ";
    cin >> whole1 >> frac1;
    Fraction f1(whole1, frac1);

    cout << "Enter second fraction (whole part and fractional part): ";
    cin >> whole2 >> frac2;
    Fraction f2(whole2, frac2);

    Fraction sum = f1 + f2;
    cout << "Result of addition: " << string(sum) << endl;

    Fraction product = f1 * f2;
    cout << "Result of multiplication: " << string(product) << endl;

    cout << "Incrementing first fraction: " << string(++f1) << endl;
    cout << "Decrementing second fraction: " << string(--f2) << endl;

    return 0;
}
