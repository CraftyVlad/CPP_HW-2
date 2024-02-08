//#include <iostream>
//#include <vector>
//using namespace std;
//
//class DynamicArray {
//private:
//    vector<int> array;
//
//public:
//    int& operator[](size_t index) {
//        return array[index];
//    }
//
//    const int& operator[](size_t index) const {
//        return array[index];
//    }
//
//    DynamicArray& operator=(const DynamicArray& other) {
//        if (this != &other) {
//            array = other.array;
//        }
//        return *this;
//    }
//
//    void push_back(int value) {
//        array.push_back(value);
//    }
//
//    size_t size() const {
//        return array.size();
//    }
//};
//
//int main() {
//    DynamicArray vec;
//    vec.push_back(3);
//    vec.push_back(7);
//
//    cout << "Vector elements: ";
//    for (size_t i = 0; i < vec.size(); ++i) {
//        cout << vec[i] << " ";
//    }
//    cout << endl;
//
//    vec[1] = 10; // Changing element at index 1
//
//    cout << "Modified vector elements: ";
//    for (size_t i = 0; i < vec.size(); ++i) {
//        cout << vec[i] << " ";
//    }
//    cout << endl;
//
//    return 0;
//}
