#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <iomanip>

using namespace std;

const string path = "csv/music-playlist.csv";
vector<string> data_input;

void readCSV() {
    try {
        ifstream file;
        string read;
        file.open(path);

        if (!file) {
            throw runtime_error("Failed to open csv file");
        }
        while (getline(file, read, ',')) {
            cout << read + " ";
        }
        file.close();
    } catch (exception& e) {
        cerr << e.what() << endl;
    }
}
void readCSVFormatted() {
    try {
        ifstream file;
        string read;
        file.open(path);
        if (!file) {
            throw runtime_error("Failed to open csv file");
        }
        while (getline(file, read, ',')) { // must use character delimiter '', not ""
            stringstream ss(read); // stringstream provides a buffer to hold data (read)
            while (getline(ss, read, ',')) {
                data_input.push_back(read);
            }
        }
        file.close();
        for (int i = 0; i < data_input.size(); i++) {
            if (i % 3 == 0) {
                cout << setw(20) << left << data_input.at(i);
            } else if (i % 3 == 1) {
                cout << setw(15) << left << data_input.at(i);
            } else {
                cout << data_input.at(i) << endl;
            }
        }
    } catch (exception& e) {
        cerr << e.what() << endl;
    }
}


int main() {
    readCSV();
    return 0;
}