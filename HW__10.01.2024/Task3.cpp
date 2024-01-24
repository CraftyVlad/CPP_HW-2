//#include <iostream>
//#include <fstream>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//    string input_filename = "file1.txt";
//    ifstream input_file(input_filename);
//
//    if (!input_file.is_open())
//    {
//        cout << "Could not open file: " << input_filename << endl;
//        return 0;
//    }
//
//    string output_filename = "file1_stats.txt";
//    ofstream output_file(output_filename);
//
//    if (!output_file.is_open())
//    {
//        cout << "Could not create file: " << output_filename << endl;
//        return 0;
//    }
//
//    int char_count = 0;
//    int line_count = 0;
//    string line;
//
//    while (getline(input_file, line))
//    {
//        char_count += line.length() + 1;
//        line_count++;
//    }
//
//    output_file << "Character count: " << char_count << endl;
//    output_file << "Line count: " << line_count << endl;
//
//    input_file.close();
//    output_file.close();
//
//    return 0;
//}
