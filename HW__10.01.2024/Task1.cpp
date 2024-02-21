#include <iostream>
using namespace std;

template <class T>
class Node {
public:
    T data;
    Node* next;

    Node(T data) {
        this->data = data;
        this->next = nullptr;
    }
};

template <class T>
class Stack {
private:
    Node<T>* top;
    int size;

public:
    Stack() {
        top = nullptr;
        size = 0;
    }

    void push(T data) {
        Node<T>* newNode = new Node<T>(data);
        newNode->next = top;
        top = newNode;
        size++;
    }

    void pop() {
        if (top == nullptr) {
            cout << "Stack is empty." << endl;
            return;
        }
        Node<T>* temp = top;
        top = top->next;
        delete temp;
        size--;
    }

    T peek() {
        if (top == nullptr) {
            cout << "Stack is empty." << endl;
            return T();
        }
        return top->data;
    }

    bool isEmpty() {
        return size == 0;
    }
};

int main() {
    Stack<int> stack;

    stack.push(1);


    cout << "Top element: " << stack.peek() << endl;

    stack.pop();
    cout << "Top element after pop: " << stack.peek() << endl;

    stack.push(2);
    cout << "Top element after push: " << stack.peek() << endl;

    return 0;
}