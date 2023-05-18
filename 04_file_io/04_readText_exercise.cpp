/*
Write a program that reads text/music-playlist.txt and returns
    the number of lines, and total number of characters in the file.
*/
#include <iostream>
#include <fstream>

using namespace std;


const string path = "text/music-playlist.txt";

void textLineAndCharacterCount() {
    try {
        ifstream file;
        string read;
        int lines = 0;
        int characters = 0;
        file.open(path);

        if (!file) {
            throw runtime_error("Failed to open file");
        }
        while(getline(file, read)) {
            lines++;
            characters += read.length();
        }
        file.close();
        cout << lines << " line(s)" << "\n";
        cout << characters << " character(s)" << "\n";
        
    } catch (exception& e) {
        cerr << e.what() << "\n";
    }
}


int main() {
    textLineAndCharacterCount();
    return 0;
}