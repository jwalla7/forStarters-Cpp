/*
Using std::endl can be a bit inefficient. It moves the cursor to the next line of the console,
and it flushes the buffer. When writing text to the console, we typically don’t need to flush the buffer at the end of each line.
It’s more efficient to let the system flush itself periodically (which it has been designed to do efficiently).

https://www.learncpp.com/cpp-tutorial/introduction-to-iostream-cout-cin-and-endl/

Because of this, use of the ‘\n’ character is typically preferred instead. 
The ‘\n’ character moves the cursor to the next line of the console, but doesn’t request a flush, so it will often perform better. 
The ‘\n’ character also tends to be easier to read since it’s both shorter and can be embedded into existing text.

endl appends "\n" to the stream then calls flush() on the stream.
    for example: cout << "hello" << endl;
        is equivalent to:   cout << "hello" << "\n";
                            cout.flush()
*/

#include <iostream>
using namespace std;

int main() {
    cout << "int size: " << sizeof(int) << "\n"; // standalone newline implementation
    cout << "See you on the other side!\n";     // embedded newline implementation
    
    cout << "short size: " << sizeof(short) << endl; // endline implementation
    cout << "long size: " << sizeof(long) << endl;
    cout << "float size: " << sizeof(float) << endl;
    cout << "double size: " << sizeof(double) << endl;
    cout << "bool size: " << sizeof(bool) << endl;
    cout << "char size: " << sizeof(char) << endl;
    cout << "string size: " << sizeof(string) << endl;
    return 0;
}