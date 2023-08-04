// #include "iostream"
/**
 * The `#`(hash) at the beginning indicates the line is a preprocessor directive.
 *
 * The `pre` suggests that operations are performed before the `processor` (compilation) takes place.
 *
 * The example above showcases the `include` directive.
 *
 * When the header is in " " the preprocessor will first look in your local directory before going to the standard library.
 *
 * When the header is in < > the preprocessor will look where all standard libraries are stored.
 * 
 * When the preprocessor meets the directive, it replaces the directive with the content of the file name listed in the directive.
 */
#include <iostream>

// The main function must return an int
int main() {
// cout is in the standard library so we use std:: before we use cout
std::cout << "hello world" << std::endl;
    return 0;
}