#include <iostream>
/**
 * Using namespace std tells the compiler to assume we are using the standard library.
 *
 * A namespace is an abstract environment that holds logical groupings of unique entities (for example, functions).
 *
 * Therefore, we no longer need to declare std
 */
using namespace std;

int main() {
    cout << "We no longer need std::" << endl;
    /**
     * If there is no return statement inside of the `main()` function, the compiler will assume that `return 0` has been implicitly used.
     */
    return 0;
}