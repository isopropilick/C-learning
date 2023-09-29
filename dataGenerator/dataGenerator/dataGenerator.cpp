#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

int main() {
    std::string filename = "example.csv"; // Replace with your CSV file name

    std::vector<CSVRow> data = readCSV(filename);

    // Now, you can work with the data as needed
    for (const CSVRow &row : data) {
        std::cout << "Column 1: " << row.column1 << ", Column 2: " << row.column2 << std::endl;
    }

    return 0;
}

