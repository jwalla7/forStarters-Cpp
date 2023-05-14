/*
A constant is a value that may not be changed.C++ will accept declaring a const before or after the type. Declaring after the type is call "east const".
Const variables must be initialized, Note that const variables can be initialized from other variables (including non-const ones)

https://www.learncpp.com/cpp-tutorial/const-variables-and-symbolic-constants/
*/

// Compile time const values are know at compile-time
// Runtime const initialization values aren't known until runtime
// constexpr can only be a compile-time, will otherwise throw an error.

#include <iostream>
using namespace std;

int getUsersAge() {
    cout << "Enter your age: ";
    
    int usersAgeInput;
    cin >> usersAgeInput;

    return usersAgeInput;
}

int main() {
    constexpr int addOneYear = 1; // compile-time const
    const int usersCurrentAge = getUsersAge(); // runtime const
    const int usersAgeNextYear = usersCurrentAge + 1; // usersCurrentAge + 1 is runtime expression
    cout << "Wow, next year you will be " << usersAgeNextYear << " years old! \n"; // runtime expression
    
    return 0; 
}