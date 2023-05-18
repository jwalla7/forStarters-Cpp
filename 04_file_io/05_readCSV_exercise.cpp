/*
Write a program that reads "csv/numbers.csv", and returns the average of each column [4][3].
*/

#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>

using namespace std;

const string path = "csv/numbers.csv";
vector<string> numbers_data;

void readCSV() {
    try {
        ifstream file;
        string read;
        file.open(path);
        
        if (!file) {
            throw runtime_error("Failed to open csv file");
        } 
        while (getline(file, read, ',')) {
            stringstream ss(read);
            while (getline(ss, read, ',')) {
                numbers_data.push_back(read);
            }
        }
        file.close();
        cout << "numbers_data: ";
        for(int i = 0; i < numbers_data.size(); i++) {
            cout << stoi(numbers_data.at(i)) << " ";
        }
    } catch (exception& e) {
        cerr << e.what() << "\n";
    }
}

void columnAverages() {
    int col_1 = 0;
    int col_2 = 0;
    int col_3 = 0;
    int col_4 = 0;

    for (int i = 0; i < numbers_data.size(); i++) {
        if (i == 0 || i == 4 || i == 8) {
            col_1 += stoi(numbers_data.at(i));
        }
        if (i == 1 || i == 5 || i == 9) {
            col_2 += stoi(numbers_data.at(i));
        }
        if (i == 2 || i == 6 || i == 10) {
            col_3 += stoi(numbers_data.at(i));
        }
        if (i == 3 || i == 7 || i == 11) {
            col_4 += stoi(numbers_data.at(i));
        }
    }
    cout << "\n";
    cout << "column averages: ";
    cout << col_1 / 3 << " ";
    cout << col_2 / 3 << " ";
    cout << col_3 / 3 << " ";
    cout << col_4 / 3 << "\n";
}



int main() {
    readCSV();
    columnAverages();
    return 0;
}