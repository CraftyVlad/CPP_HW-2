#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    char ch;
    cout << "Enter a character to search for: ";
    cin >> ch;

    string filename = "file1.txt";
    ifstream file(filename);

    if (!file.is_open())
    {
        cout << "Could not open file: " << filename << endl;
        return 0;
    }

    int count = 0;
    string word;
    while (file >> word)
    {
        if (word[0] == ch)
        {
            count++;
        }
    }

    cout << "Number of words starting with '" << ch << "': " << count << endl;

    file.close();

    return 0;
}
