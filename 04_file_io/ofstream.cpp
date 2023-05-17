#include <iostream>
#include <fstream>

using namespace std;

const string path = "text/music-playlist.txt";
// Write and append to the end of file (music-playlist.txt)
void writeTextAtEnd() {
    ofstream file;
    file.open(path, ios::app); // append to end of file
    if (!file) {
        // cerr << "File failed to open. \n"; // not buffered, immediate display, program continues
        throw runtime_error("File failed to open");
    }
    string title_heading = "Title: ";
    string artist_heading = ", Artist: ";
    string title_content = "Piano Concerto in G Major";
    string artist_content = "Ravel";
    file << "\n" + title_heading + title_content + artist_heading + artist_content + ";";
    file.close();
}
// Write and only overwrite  starting at the beginning of file (music-playlist.txt) with new written strings.
void writeTextAtBeginning() {
    ofstream file;
    file.open(path, ios::in); // only overwrites each string value from beginning with new string value
    if (!file) {
        throw runtime_error("File failed to open");
    }
    file << "TITLE:";
    file.close();
}

int main() {
    writeTextAtEnd();
    writeTextAtBeginning();
    return 0;
}