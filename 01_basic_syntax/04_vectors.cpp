/**
 * Vectors provide a dynamic array functionality that handles it's own memory management.
 * This enables resizing (adding or removing elements) at runtime without having to explicitly allocate/deallocate memory use the "new", and "delete" operators.
 * (The new operator allocates memory from the "free store", also known as "dynamic memory and heap")
 * 
 * https://www.learncpp.com/cpp-tutorial/an-introduction-to-stdvector/
 * 
 */

#include <iostream>
#include <vector>

using namespace std;

vector<int> numbersVector(0);

void addElementToEndOfNumbersVector(int number) {
// The push_back() function adds element to the back of the numbers vector, and does not replace elements.
    numbersVector.push_back(number);
    cout << "You added number: " << number << " to the end of numbersVector" << "\n";
}

void addElementToSpecificIndexOfNumbersVector (int enter_number, int select_index) {
// Function inserts new element and shifts the following (elements with index positions after new element) indexed elements;
    // Basic input validation
    if (enter_number < 0 ) {
        throw runtime_error("Invalid, please input a positive integer.");
    }
    if (select_index < 0 || select_index > numbersVector.size()) {
        throw runtime_error("Invalid index selected.");
    }
    
    numbersVector.insert(numbersVector.begin()+select_index, enter_number);
    cout << "You added number: " << enter_number << " to index[" << select_index << "] \n";
}

void removeElementAtEndOfNumbersVector () {
    numbersVector.pop_back();
    cout << "You removed number: " << numbersVector[numbersVector.size()] << " from the end of numbersVector \n";
}

void removeElementAtSpecificIndexOfNumbersVector (int select_index) {
    // Basic input validation
    if (select_index < 0 || select_index > numbersVector.size()) {
        throw runtime_error("Invalid index selected.");
    }

    numbersVector.erase(numbersVector.begin() + select_index);
    cout << "You removed number: " << numbersVector[select_index] << " from index: " << select_index << "\n";
}

void printSizeOfNumbersVector () {
    cout << "Size of numbersVector: " << numbersVector.size() << "\n";
}

void printIndexValueOfNumbersVector (int number) {
    cout << "Index Value of index[" << number << "]: " << numbersVector.at(number) << "\n";
}

void printAllValuesOfNumbersVector () {
    cout << "All values of numbersVector: ";
    for (int number : numbersVector) {
        cout << number << " ";
    }
    cout << "\n";
}

int main() {
    cout << "Size of numbersVector: " << numbersVector.size() << "\n";
    addElementToEndOfNumbersVector(7);
    addElementToSpecificIndexOfNumbersVector(1, 0);
    printIndexValueOfNumbersVector(0);
    printAllValuesOfNumbersVector();
    cout << "\n";
    printSizeOfNumbersVector();
    removeElementAtEndOfNumbersVector();
    printAllValuesOfNumbersVector();
    cout << "\n";
    printSizeOfNumbersVector();
    removeElementAtSpecificIndexOfNumbersVector(0);
    cout << "\n";
    printSizeOfNumbersVector();

    return 0;
}