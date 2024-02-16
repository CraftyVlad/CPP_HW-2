//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
////  максимуму
//template <typename T>
//T findMax(const vector<T>& arr) {
//    return *max_element(arr.begin(), arr.end());
//}
//
//// пошук мінімуму
//template <typename T>
//T findMin(const vector<T>& arr) {
//    return *min_element(arr.begin(), arr.end());
//}
//
//// сортування масиву
//template <typename T>
//void sortArray(vector<T>& arr) {
//    sort(arr.begin(), arr.end());
//}
//
//// двійкий пошук в масиві
//template <typename T>
//int binarySearch(const vector<T>& arr, T key) {
//    return binary_search(arr.begin(), arr.end(), key);
//}
//
//// функція для заміни елемента масиву на передане значення
//template <typename T>
//void replaceElement(vector<T>& arr, T oldValue, T newValue) {
//    replace(arr.begin(), arr.end(), oldValue, newValue);
//}
//
//int main() {
//    vector<int> arr = { 5, 2, 8, 1, 9, 4 };
//
//    cout << "Max: " << findMax(arr) << endl;
//    cout << "Min: " << findMin(arr) << endl;
//
//    sortArray(arr);
//    cout << "Sorted array: ";
//    for (const auto& elem : arr) {
//        cout << elem << " ";
//    }
//    cout << endl;
//
//    int key = 5;
//    if (binarySearch(arr, key)) {
//        cout << key << " found in array" << endl;
//    }
//    else {
//        cout << key << " not found in array" << endl;
//    }
//
//    int oldValue = 4;
//    int newValue = 10;
//    replaceElement(arr, oldValue, newValue);
//    cout << "Array after changes: ";
//    for (const auto& elem : arr) {
//        cout << elem << " ";
//    }
//    cout << endl;
//
//    return 0;
//}
