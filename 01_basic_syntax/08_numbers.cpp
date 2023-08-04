/**
 * Most modern computers use two types for numbers, intergers and floating-point number.
 * 
 * There are three additional conventions, representations in octal, hexidecimal, and binary
 */

#include <iostream>
using namespace std;

int main() {
    /**
     * octal representation consist of an integer preceded by a zero. Octal is base 8, the only digits available are ranges (0 - 7)
     */
    double octal = 0123;
    double hexadecimal = 0x123;
    int integer = 123;

    cout << "octal: " << octal << "\n";
    cout << "hexadecimal: " << hexadecimal << "\n";
    cout << "integer: " << integer << "\n";

    return 0;
}
