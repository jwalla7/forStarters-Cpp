/**
 * rvalues are temporary values that do not persist beyond the expression in which they are used.
 * 
 * rvalues cannot be assigned to or modified directly. Non-const rvalue references allow you to modify the rvalues.
 * 
 * rvalues are often used in the context of move semantics.Move semantics allow efficient transfer of resources (e.g., memory ownership) from one object to another,
 * 
 * which is particularly useful for optimizing performance when dealing with large objects or dynamic memory.
 * 
 * The && means "rvalue reference" and is a reference to which we can bind an rvalue.
 * 
 * https://www.learncpp.com/cpp-tutorial/rvalue-references/
 */

#include <iostream>

using namespace std;

int&& rvalueInt = 7;

int main() {
    cout << "rvalue: " << rvalueInt << "\n";

    return 0;
}