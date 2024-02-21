#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;
    string school;

public:
    Student(string name, int age, string school)
        : name(name), age(age), school(school) {}

    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "School: " << school << endl;
    }
};

class Aspirant : public Student {
private:
    string researchTopic;

public:
    Aspirant(string name, int age, string school, string researchTopic)
        : Student(name, age, school), researchTopic(researchTopic) {}

    void displayInfo() {
        Student::displayInfo();
        cout << "Research Topic: " << researchTopic << endl;
    }
};

int main() {
    Student student("John Doe", 20, "School A");
    Aspirant aspirant("Jane Smith", 25, "School B", "Machine Learning");

    cout << "Student Information:" << endl;
    student.displayInfo();

    cout << "\nAspirant Information:" << endl;
    aspirant.displayInfo();

    return 0;
}
