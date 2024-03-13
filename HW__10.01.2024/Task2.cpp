//#include <iostream>
//#include <fstream>
//#include <map>
//#include <string>
//using namespace std;
//
//class Dictionary {
//private:
//    map<string, string> words;
//
//public:
//    void addWord(const string& word, const string& definition) {
//        words[word] = definition;
//    }
//
//    void removeWord(const string& word) {
//        words.erase(word);
//    }
//
//    void editWord(const string& word, const string& newDefinition) {
//        if (words.find(word) != words.end()) {
//            words[word] = newDefinition;
//        }
//        else {
//            cout << "Word not found in the dictionary." << endl;
//        }
//    }
//
//    string findWord(const string& word) {
//        if (words.find(word) != words.end()) {
//            return words[word];
//        }
//        else {
//            return "Word not found in the dictionary.";
//        }
//    }
//
//    void saveToFile(const string& filename) {
//        ofstream file(filename);
//        if (file.is_open()) {
//            for (const auto& pair : words) {
//                file << pair.first << " : " << pair.second << endl;
//            }
//            file.close();
//            cout << "Dictionary saved to file: " << filename << endl;
//        }
//        else {
//            cout << "Unable to open file for writing." << endl;
//        }
//    }
//
//    void loadFromFile(const string& filename) {
//        ifstream file(filename);
//        if (file.is_open()) {
//            string line;
//            while (getline(file, line)) {
//                size_t pos = line.find(" : ");
//                if (pos != string::npos) {
//                    string word = line.substr(0, pos);
//                    string definition = line.substr(pos + 3);
//                    words[word] = definition;
//                }
//            }
//            file.close();
//            cout << "Dictionary loaded from file: " << filename << endl;
//        }
//        else {
//            cout << "Unable to open file for reading." << endl;
//        }
//    }
//};
//
//int main() {
//    Dictionary dictionary;
//
//    dictionary.addWord("apple", "a fruit that grows on trees");
//    dictionary.addWord("computer", "an electronic device for processing data");
//
//    cout << "Definition of 'apple': " << dictionary.findWord("apple") << endl;
//
//    dictionary.editWord("apple", "a fruit that is red or green and grows on trees");
//    cout << "Updated definition of 'apple': " << dictionary.findWord("apple") << endl;
//
//    dictionary.saveToFile("dictionary.txt");
//
//    Dictionary newDictionary;
//    newDictionary.loadFromFile("dictionary.txt");
//
//    cout << "Definition of 'computer' in loaded dictionary: " << newDictionary.findWord("computer") << endl;
//
//    return 0;
//}
