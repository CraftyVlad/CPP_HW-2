#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Reservoir {
private:
    string type;
    double width;
    double length;
    double maxDepth;

public:
    explicit Reservoir(const string& n = "", double w = 0.0, double l = 0.0, double d = 0.0)
        : type(n), width(w), length(l), maxDepth(d) {}

    double approximateVolume() const {
        return width * length * maxDepth;
    }

    double surfaceArea() const {
        return width * length;
    }

    bool sameType(const Reservoir& other) const {
        return type == other.type;
    }

    Reservoir copy() const {
        return Reservoir(type, width, length, maxDepth);
    }

    const string& getType() const {
        return type;
    }

    void setType(const string& n) {
        type = n;
    }

    void displayInfo() const {
        cout << "Reservoir: " << type << endl;
        cout << "Width: " << width << endl;
        cout << "Length: " << length << endl;
        cout << "Max Depth: " << maxDepth << endl;
        cout << "Approximate Volume: " << approximateVolume() << endl;
        cout << "Surface Area: " << surfaceArea() << endl;
    }
};

int main() {
    vector<Reservoir> reservoirs;

    reservoirs.push_back(Reservoir("Lake", 100.0, 50.0, 10.0));
    reservoirs.push_back(Reservoir("Lake", 20.0, 10.0, 5.0)); // ось тут можна змінити назву

    for (const Reservoir& r : reservoirs) {
        r.displayInfo();
        cout << endl;
    }

    if (reservoirs[0].sameType(reservoirs[1])) {
        cout << "The reservoirs are of the same type." << endl;
    }
    else {
        cout << "The reservoirs are of different types." << endl;
    }

    return 0;
}
