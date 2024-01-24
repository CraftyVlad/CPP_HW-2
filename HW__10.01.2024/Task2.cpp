//#include <iostream>
//#include <fstream>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//    string filename1 = "file1.txt";
//    string filename2 = "file2.txt";
//    ifstream file1(filename1);
//    ifstream file2(filename2);
//
//    if (!file1.is_open())
//    {
//        cout << "Could not open file: " << filename1 << endl;
//        return 0;
//    }
//
//    if (!file2.is_open())
//    {
//        cout << "Could not open file: " << filename2 << endl;
//        return 0;
//    }
//
//    string line1, line2;
//    int line_number = 0;
//    bool files_match = true;
//
//    while (getline(file1, line1) && getline(file2, line2))
//    {
//        line_number++;
//
//        if (line1 != line2)
//        {
//            files_match = false;
//            cout << "Line " << line_number << ":" << endl;
//            cout << filename1 << ": " << line1 << endl;
//            cout << filename2 << ": " << line2 << endl;
//        }
//    }
//
//    if (getline(file1, line1))
//    {
//        files_match = false;
//        cout << "File " << filename1 << " has more lines than " << filename2 << endl;
//        cout << "Extra line: " << line1 << endl;
//    }
//
//    if (getline(file2, line2))
//    {
//        files_match = false;
//        cout << "File " << filename2 << " has more lines than " << filename1 << endl;
//        cout << "Extra line: " << line2 << endl;
//    }
//
//    if (files_match)
//    {
//        cout << "Files match!" << endl;
//    }
//
//    file1.close();
//    file2.close();
//
//    return 0;
//}
