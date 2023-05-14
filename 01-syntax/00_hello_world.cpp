// #include "iostream"
// when in " " the processor will first look in your local directory before going to the standard library.
// when in < > the processor will look where all standard libraries are stored.
#include <iostream>

// The main function must return an int
int main() {
// cout is in the standard library so we use std:: before we use cout
std::cout << "hello world" << std::endl;
    return 0;
}