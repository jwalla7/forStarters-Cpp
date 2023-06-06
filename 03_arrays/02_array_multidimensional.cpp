/*
Multidimensional arrays (also know as, 2D arrays) are represented as arrays of arrays.
*/

#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

/*
A 7-element array of 4-element arrays

[0][0]   [0][1]   [0][2]   [0][3]
[1][0]   [1][1]   [1][2]   [1][3]
[2][0]   [2][1]   [2][2]   [2][3]
[3][0]   [3][1]   [3][2]   [3][3]
[4][0]   [4][1]   [4][2]   [4][3]
[5][0]   [5][1]   [5][2]   [5][3]
[6][0]   [6][1]   [6][2]   [6][3]

*/
int multidimensional7by4[7][4]; // A 7-by-4 array is declared as 7 arrays with 4 ints each.

void initIntMultiDimensionalArray7by4() {
    cout << "-- 7 by 4 Ints --" << "\n";
    for (int i = 0; i != 7; i++) {
        for (int j = 0; j != 4; j++) {
            multidimensional7by4[i][j] = 10 * i + j;
            cout << multidimensional7by4[i][j] << "\t";
        }
        cout << "\n";
    }
}


int coordinates[5][2] = { // A 5-by-2 array is declared as 5 arrays with 2 ints each.
    {-4, 3},
    {2, 1},
    {0, -8},
    {-11, 9},
    {-5, -7}
};

int row = sizeof(coordinates) / sizeof(coordinates[0]);
int col = sizeof(coordinates[0]) / sizeof(int);

void initIntCoordinatesArray5by2() {
    cout << "-- Coordinates, 5 by 2 Ints --" << "\n";
    for (int i =0; i != 5; i++) {
        for (int j = 0; j != 2; j++) {
            if (j == 1) {
                cout << coordinates[i][j] << endl;
            } else {
                cout << coordinates[i][j] << " ";
            }
        }
    }
}


int main() {
    initIntMultiDimensionalArray7by4();
    initIntCoordinatesArray5by2();

    return 0;
}