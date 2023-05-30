/*
Write a program that reads csv/numbers.csv and returns
    the average of each column.
*/
#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>

using namespace std;

const string path = "./csv/numbers.csv";
vector<string> data_buffer;
/*
Vector "std::vector"
    Unlike a built-in array, which only remembers it's length.
    Vector "std::vector", remembers it's length and capacity.
    Length is how many elements are being used in the array, for example: int* numbers{new int[10]};
    Capacity is how many elements are allocated in memory, for example: int* numbers{ new int[10]{0, 1, 2, 3, 4, 5}}
*/

double column_1 = 0;
double column_2 = 0;
double column_3 = 0;
double column_4 = 0;

void readCSVNumbers() {
    try {
        ifstream file;
        string read;
        file.open(path);
        
        if (!file) {
            throw runtime_error("Failed to open file.");
        }

        while (getline(file, read)) { // read each line/row
            stringstream ss(read); // tokenize into standalone strings
            while (getline(ss, read, ',')) {
                data_buffer.push_back(read);
            }
        }
        file.close();
    } catch (exception& e) {
        cerr << e.what() << "\n";
    }
}

/* Structure of Cities csv file.
----------       Columns     ----------
        col1    col2    col3    col4
        ----------------------------
Index    i[0]    i[1]    i[2]    i[3]
Value    1,      5,      10,     30
        ----------------------------
Index    i[4]    i[5]    i[6]    i[7]
Value    19,     15,     10,     15
        ----------------------------
Index    i[8]    i[9]    i[10]    i[11]
Value    10,     4,      -2,     15
----------        End        ----------
*/
void calculateColumnAverages() {
    for (int i = 0; i < data_buffer.size(); ++i) {
        if (i == 0 || i == 4 || i == 8 ) { // Implement if indices are (0,4,8)/Column 1.
            column_1 += stod(data_buffer.at(i)); // add the sum of the current index value of data_buffer and the current value of column_1.
        }
        if (i == 1 || i == 5 || i == 9) {
            column_2 += stod(data_buffer.at(i));
        }
        if (i == 2 || i == 6) {
            column_3 += stod(data_buffer.at(i));
        } else if (i == 10) { // due to i[10] being a negative number.
            column_3 -= stod(data_buffer.at(i)) * -1;
        }
        if (i == 3 || i == 7 || i == 11) {
            column_4 += stod(data_buffer.at(i));
        }
    }
}

void printColumnResult() {
    cout << "Numbers: ";
    for (auto number : data_buffer) {
        cout << " " << number;
    }
    cout << "\n";
    cout << "Column 1 Average: " << column_1 / 3 << "\n";
    cout << "Column 2 Average: " << column_2 / 3 << "\n";
    cout << "Column 3 Average: " << column_3 / 3 << "\n";
    cout << "Column 4 Average: " << column_4 / 3 << "\n";
}


int main() {
    readCSVNumbers();
    calculateColumnAverages();
    printColumnResult();

    return 0;
}