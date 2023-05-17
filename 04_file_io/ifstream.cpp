#include <iostream>
#include <fstream>

using namespace std;

const string path = "text/music-playlist.txt";

void readTextFile() {
    try {
        ifstream file;
        string read; // create string to store what is read

        file.open(path);
        if (!file) {
            throw runtime_error("File failed to open.");
        }
        while (getline(file, read)) {
            cout << read << "\n";
        }
        file.close();
        cerr << "File was successfully opened and closed." << endl;
    } catch (exception &e) {
        cerr << e.what() << endl;
    }
}

int main() {
    readTextFile();
    return 0;
}