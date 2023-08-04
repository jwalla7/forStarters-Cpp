/**
References enable you to read or modify the object being referenced. They are an alias for an existing object. There are two types of references: lvalue and rvalue
The lvalue is an expression that refers to an object (identity to a specific location in memory) and can refer to a constant. A lvalue that is not declared const is often called a `modifiable lvalue`.
To declare an lvalue reference type, use an ampersand in the type declaration.

Declarations of reference variables require initialization.

lvalue: Lvalues are commonly used in assignments, modifying the state of objects, and as targets for references and pointers.

https://www.learncpp.com/cpp-tutorial/lvalue-references/
*/
#include <iostream>

using namespace std;

int x = 3;
double y = 5;
char A = 'A';

int& integerRef = x; // (&integer) variable is a lvalue to an object
double& doubleRef = y; // (&decimal) variable is a lvalue to a double object
char& charRef = A; // (&character) variable is a lvalue to a character object

int lvalue() {
    // xAlias = y doesn't change xAlias to now reference 6. It evaluates as if written x = y
    int x { 5 };
    int y { 6 };
    int& xAlias { x };
    xAlias = y;

    cout << "xAlias = " << xAlias << "\n";

    return 0;
}


int main() {
    lvalue();
    cout << "x : " << x << " integerRef: " << integerRef <<"\n";
    cout << "x + integerRef = " << x + integerRef <<"\n";
    cout << "integerRef + x + integerRef = " << integerRef + x + integerRef <<"\n";
    
    cout << "y: " << y << " doubleRef: " <<  doubleRef << "\n";
    cout << "y + doubleRef = " << y + doubleRef <<"\n";
    
    cout << "char: " << A << " charRef: " << charRef << "\n";
    cout << "charchar = " << A << charRef << "\n";
    
    return 0;
}