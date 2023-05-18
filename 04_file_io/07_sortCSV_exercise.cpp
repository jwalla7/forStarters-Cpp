#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>

using namespace std;

const string path = "csv/cities.csv";
string read;
string SouthernHemisphereCities;
vector<string> data_content;

void readCSV() {
    try {
        ifstream file;
        file.open(path);
        if (!file) {
            throw runtime_error("Failed to open file");
        }
        // iterate through the file twice to tokenize the file into standalone strings
        while (getline(file, read)) {
            stringstream ss(read);
            while (getline(ss, read, ',')) {
                data_content.push_back(read);
            }
        }
        file.close();
    } catch (exception& e) {
        cerr << e.what() << endl;
    }
}

/* Structure of Cities csv file.
City,Country,Latitude,Longitude
    Beijing, China, 39, 116 
    Perth, Australia, -57, 115
    Port Moresby, Papua New Guinea, -25, 147
    Tokyo, Japan, 35, 139
*/

void findSouthernHemisphereCities() {
    cout << "The following cities are in the Southern Hemisphere: ";
    // We only need the latitude values to create the solution. Skip to index 6 (the first latitude value), then skip 3 indicies to reach each next latitude value.
    for (int i = 6; i < data_content.size(); i+=4) {
        // because the csv file is type string, we convert the iterated/read/touched index vaules to type int
        //  we then check to see if the value is a negative number
        if(stoi(data_content.at(i)) < 0) {
            SouthernHemisphereCities += (data_content.at(i - 2) + ", ");
        }
    }
// Remove the last 2 characters(, and a space) with pop_back(), then append a "." and newline "\n" at the end.
                                    // City, City, %
SouthernHemisphereCities.pop_back(); // City, City,%
SouthernHemisphereCities.pop_back(); // City, City%
SouthernHemisphereCities += ". \n"; // City, City.
}

void printSouthernHemisphereCities() {
    cout << SouthernHemisphereCities;
}

int main() {
    readCSV();
    findSouthernHemisphereCities();
    printSouthernHemisphereCities();
    return 0;
}
