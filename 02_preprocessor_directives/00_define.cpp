#include <iostream>
using namespace std;

#define WORLD_STRING "World"
/** 
 * #define {identifier} {substitution_text}
 * 
 * The example above showcases the `define` directive.
 *
 * When the preprocessor meets the directive, it replaces the directive with the content of the file name listed in the directive.
 */


int main() {
    cout <<"Hello " << WORLD_STRING << "\n"; // Hello World
    return 0;
}

