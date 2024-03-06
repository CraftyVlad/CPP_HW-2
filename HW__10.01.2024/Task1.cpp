#include <iostream>
#include <exception>
using namespace std;

class MemoryException : public exception {
public:
    const char* what() const noexcept override {
        return "Memory allocation failed!";
    }
};

class Node {
public:
    int data;
    Node* prev;
    Node* next;
    Node(int value) : data(value), prev(nullptr), next(nullptr) {}
};

class DoublyLinkedList {
private:
    Node* head;
    Node* tail;
public:
    DoublyLinkedList() : head(nullptr), tail(nullptr) {}

    void insert(int value) {
        try {
            Node* newNode = new Node(value);
            if (head == nullptr) {
                head = tail = newNode;
            }
            else {
                tail->next = newNode;
                newNode->prev = tail;
                tail = newNode;
            }
        }
        catch (bad_alloc& e) {
            throw MemoryException();
        }
    }

    void display() {
        Node* current = head;
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }

    void removeLast() {
        if (tail == nullptr) {
            throw out_of_range("List is empty.");
        }

        Node* temp = tail;
        tail = tail->prev;
        if (tail != nullptr) {
            tail->next = nullptr;
        }
        else {
            head = nullptr;
        }
        delete temp;
    }
};

int main() {
    DoublyLinkedList list;

    try {
        list.insert(10);
        list.insert(20);
        list.insert(30);

        list.display();

        list.removeLast();
        list.removeLast();
        list.removeLast();
        list.removeLast();
    }
    catch (exception& e) {
        cerr << "Exception caught: " << e.what() << endl;
    }

    return 0;
}
