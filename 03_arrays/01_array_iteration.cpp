#include <iostream>
#include <algorithm>

using namespace std;
// Print to console helper function
void printToConsole(const int &i) {
    cout << i << " ";
}

// Copying an array
void copyArray() {
    int arrayA[10] = {1 ,2 ,3, 4, 5, 6, 7, 8, 9, 10};
    int arrayB[10] = {20, 21, 22, 23, 24, 25, 26, 27, 28, 29};
    int arrayC[10];

    for (auto a : arrayA) {
        cout << a << " "; // prints the values of elements in arrayA
    }
    cout << "\n";
    
    for (auto b : arrayB) {
        cout << b << " "; // prints the values of elements in arrayB;
    }
    cout << "\n";

    cout << "arrayA: ";
    for_each(begin(arrayA), end(arrayA), printToConsole);
    cout << "\n";
    
    cout << "arrayB: ";
    for_each(begin(arrayB), end(arrayB), printToConsole);
    cout << "\n";

    for (auto i = 0; i!=10; ++i) {
        arrayB[i] = arrayA[i];
    }
    cout << "arrayB after copying arrayA: ";
    for_each(begin(arrayB), end(arrayB), printToConsole);
    cout << "\n";
}

// Searching for a specific element in the array
void specificArrayElement() {
    string trucks[] = {"Mack", "Autocar", "Freightliner"};
    string Mack = "Macks are sold out.";
    cout << Mack << "\n";

    for (string truck : trucks) {
        if (truck == "Mack") {
            Mack = "Macks are available.";
        }
    }
}
// Finding min element value in array
void minArrayValue() {
    int points[] = {34, 39, 58, 23, 10, 94, 49};
    int firstIndexValue = points[0]; // assign firstIndexValue variable to point[0] value {34}

    // Min value
    for (int point : points) {
        if (point < firstIndexValue) { // during iteration of array indices. If an index value point[n] is less than the index value of firstIndexValue {34}
            firstIndexValue = point; // assign firstIndexValue to value of the element with a value less than firstIndexValue (firstIndexValue = 23)
            cout << "finding smallest value in array: " << firstIndexValue << "\n";
        }
    }
    cout << "smallest value in array: " << firstIndexValue << "\n";
}
// Finding the max element value in array
void maxArrayValue() {
    int scores[] = {2, 4, 6, 8};
    int firstIndexValue = scores[0];

    for (int score : scores ) {
        if (score > firstIndexValue) {
            firstIndexValue = score;
            cout << "finding largest value in array: " << firstIndexValue << "\n";
        }
    }
    cout << "largest value in array: " << firstIndexValue << "\n";
}
// Printing elements in reverse order
void printArrayInReverseOrder() {
    string letters[] = {"A", "B", "C", "D"};
    int elements = sizeof(letters) / sizeof(letters[0]); // number of element in array

    for (int i = elements - 1; i >= 0; i--) {
        cout << letters[i] << "\n";
    }
}

int main() {
    copyArray();
    specificArrayElement();
    minArrayValue();
    maxArrayValue();
    printArrayInReverseOrder();
    return 0;
}
