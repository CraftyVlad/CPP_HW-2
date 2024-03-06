#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Directory {
private:
    string fileName;

public:
    Directory(const string& file) : fileName(file) {}

    void addEntry(const string& name, const string& owner, const string& phone, const string& address) {
        ofstream file(fileName, ios_base::app);
        if (file.is_open()) {
            file << name << "," << owner << "," << phone << "," << address << "\n";
            file.close();
            cout << "Entry added successfully.\n";
        }
        else {
            cerr << "Error opening file for writing.\n";
        }
    }

    void searchByName(const string& name) {
        ifstream file(fileName);
        if (file.is_open()) {
            string line;
            bool found = false;
            while (getline(file, line)) {
                size_t pos = line.find(name);
                if (pos != string::npos) {
                    cout << line << "\n";
                    found = true;
                }
            }
            if (!found) {
                cout << "Entry with name '" << name << "' not found.\n";
            }
            file.close();
        }
        else {
            cerr << "Error opening file for reading.\n";
        }
    }

    void searchByOwner(const string& owner) {
        ifstream file(fileName);
        if (file.is_open()) {
            string line;
            bool found = false;
            while (getline(file, line)) {
                size_t pos = line.find(owner);
                if (pos != string::npos) {
                    cout << line << "\n";
                    found = true;
                }
            }
            if (!found) {
                cout << "Entry with owner '" << owner << "' not found.\n";
            }
            file.close();
        }
        else {
            cerr << "Error opening file for reading.\n";
        }
    }

    void displayAllEntries() {
        ifstream file(fileName);
        if (file.is_open()) {
            string line;
            while (getline(file, line)) {
                cout << line << "\n";
            }
            file.close();
        }
        else {
            cerr << "Error opening file for reading.\n";
        }
    }
};

int main() {
    Directory myDirectory("directory.txt");

    myDirectory.addEntry("Company A", "John Doe", "1234567890", "123 Main St");
    myDirectory.addEntry("Company B", "Jane Smith", "9876543210", "456 Elm St");

    myDirectory.displayAllEntries();

    myDirectory.searchByName("Company A");
    myDirectory.searchByOwner("Jane Smith");

    return 0;
}