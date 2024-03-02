#include <iostream>
#include <vector>
using namespace std;

class List {
public:
    virtual void insert(int value) = 0;
    virtual int remove() = 0;
};

class Stack : public List {
private:
    vector<int> data;

public:
    void insert(int value) override {
        data.push_back(value);
    }

    int remove() override {
        if (data.empty()) {
            cout << "Stack is empty." << endl;
            return -1;
        }
        else {
            int value = data.back();
            data.pop_back();
            return value;
        }
    }
};

class Queue : public List {
private:
    vector<int> data;

public:
    void insert(int value) override {
        data.push_back(value);
    }

    int remove() override {
        if (data.empty()) {
            cout << "Queue is empty." << endl;
            return -1;
        }
        else {
            int value = data.front();
            data.erase(data.begin());
            return value;
        }
    }
};

int main() {
    Stack stack;
    stack.insert(10);
    stack.insert(20);
    stack.insert(30);

    cout << "Stack elements: ";
    while (true) {
        int value = stack.remove();
        if (value == -1) break;
        cout << value << " ";
    }
    cout << endl;

    Queue queue;
    queue.insert(100);
    queue.insert(200);
    queue.insert(300);

    cout << "Queue elements: ";
    while (true) {
        int value = queue.remove();
        if (value == -1) break;
        cout << value << " ";
    }
    cout << endl;

    return 0;
}
