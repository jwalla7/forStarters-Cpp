/*
Write a program that reads and prints text file "/text/music-playlist.txt" in reverse order.
*/

#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

const string path = "text/music-playlist.txt";
vector<string> file_contents;

void readTextInReverseOrder() {
    try {
        ifstream file;
        string read;
        file.open(path);
        if (!file) {
            throw runtime_error("Failed to open file.");
        }
        while (getline(file, read)) {
            stringstream ss(read);
            while (getline(ss, read)) {
                file_contents.push_back(read);
            }
        }
        file.close();
    } catch (exception& e) {
        cerr << e.what() << endl;
    }
}

void printText() {
    for (int i = file_contents.size() - 1; i >= 0; i--) {
        cout << file_contents.at(i) << "\n";
    }
}

int main() {
    readTextInReverseOrder();
    printText();
    return 0;
}