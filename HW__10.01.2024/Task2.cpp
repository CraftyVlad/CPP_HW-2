//#include <iostream>
//using namespace std;
//
//template <class T>
//class Node {
//public:
//    T data;
//    Node* next;
//
//    Node(T data) {
//        this->data = data;
//        this->next = nullptr;
//    }
//};
//
//template <class T>
//class LinkedList {
//private:
//    Node<T>* head;
//    int size;
//
//public:
//    LinkedList() {
//        head = nullptr;
//        size = 0;
//    }
//
//    void push(T data) {
//        Node<T>* newNode = new Node<T>(data);
//        newNode->next = head;
//        head = newNode;
//        size++;
//    }
//
//    LinkedList<T>* clone() {
//        LinkedList<T>* clonedList = new LinkedList<T>();
//        Node<T>* current = head;
//        while (current != nullptr) {
//            clonedList->push(current->data);
//            current = current->next;
//        }
//        return clonedList;
//    }
//
//    LinkedList<T>* operator+(const LinkedList<T>& otherList) {
//        LinkedList<T>* newList = new LinkedList<T>();
//        Node<T>* current = head;
//        while (current != nullptr) {
//            newList->push(current->data);
//            current = current->next;
//        }
//        current = otherList.head;
//        while (current != nullptr) {
//            newList->push(current->data);
//            current = current->next;
//        }
//        return newList;
//    }
//
//    LinkedList<T>* operator*(const LinkedList<T>& otherList) {
//        LinkedList<T>* newList = new LinkedList<T>();
//        Node<T>* current = head;
//        while (current != nullptr) {
//            if (otherList.contains(current->data)) {
//                newList->push(current->data);
//            }
//            current = current->next;
//        }
//        return newList;
//    }
//
//    bool contains(T data) {
//        Node<T>* current = head;
//        while (current != nullptr) {
//            if (current->data == data) {
//                return true;
//            }
//            current = current->next;
//        }
//        return false;
//    }
//};
//
//int main() {
//    LinkedList<int> list1;
//    list1.push(1);
//    list1.push(2);
//
//    LinkedList<int> list2;
//    list2.push(2);
//    list2.push(3);
//
//    LinkedList<int>* concatenatedList = list1 + list2;
//    LinkedList<int>* intersectionList = list1 * list2;
//
//    return 0;
//}
