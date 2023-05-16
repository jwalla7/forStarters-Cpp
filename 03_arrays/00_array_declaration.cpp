/*
When declaring an array,  [ ] means "array of". The size of an array must be a constant expression.

All arrays have 0 as their lower bound.
    for example: const int numbers[7];
        numbers has 7 elements, numbers[0] to numbers[6];

If an array has no data assigned/initalized to element(s), printing that element will cause the system to output "random memory data".
*/

#include <iostream>
using namespace std;


// Declaring an array and initializing it's elements directly.
const double mensShoeSizesUSA[] = {9, 9.5, 10, 10.5, 11, 11.5, 12, 12.5, 13, 13.5, 14, 14.5};

int main() {
    cout << "I wear a shoe size of: " << mensShoeSizesUSA[6] << "\n";
    return 0;
}
