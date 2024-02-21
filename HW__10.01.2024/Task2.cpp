//#include <iostream>
//using namespace std;
//
//class Pet {
//protected:
//    string name;
//
//public:
//    Pet(string name) : name(name) {}
//
//    virtual void displayInfo() = 0;
//};
//
//class Dog : public Pet {
//private:
//    string breed;
//
//public:
//    Dog(string name, string breed) : Pet(name), breed(breed) {}
//
//    void displayInfo() override {
//        cout << "Dog Name: " << name << endl;
//        cout << "Breed: " << breed << endl;
//    }
//};
//
//class Cat : public Pet {
//private:
//    string color;
//
//public:
//    Cat(string name, string color) : Pet(name), color(color) {}
//
//    void displayInfo() override {
//        cout << "Cat Name: " << name << endl;
//        cout << "Color: " << color << endl;
//    }
//};
//
//class Parrot : public Pet {
//private:
//    string species;
//
//public:
//    Parrot(string name, string species) : Pet(name), species(species) {}
//
//    void displayInfo() override {
//        cout << "Parrot Name: " << name << endl;
//        cout << "Species: " << species << endl;
//    }
//};
//
//int main() {
//    Dog dog("Doug", "Pug");
//    Cat cat("Tom", "Black and white");
//    Parrot parrot("Davey", "Cockatiel");
//
//    dog.displayInfo();
//    cout << endl;
//
//    cat.displayInfo();
//    cout << endl;
//
//    parrot.displayInfo();
//
//    return 0;
//}
