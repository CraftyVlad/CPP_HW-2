#include <iostream>
using namespace std;

class Point {
private:
    int x;
    int y;

public:
    Point(int x = 0, int y = 0) : x(x), y(y) {}

    Point operator+(const Point& other) {
        return Point(this->x + other.x, this->y + other.y);
    }

    Point operator-(const Point& other) {
        return Point(this->x - other.x, this->y - other.y);
    }

    bool operator<(const Point& other) {
        return (this->x < other.x) && (this->y < other.y);
    }

    bool operator>(const Point& other) {
        return (this->x > other.x) && (this->y > other.y);
    }

    bool operator<=(const Point& other) {
        return (this->x <= other.x) && (this->y <= other.y);
    }

    bool operator>=(const Point& other) {
        return (this->x >= other.x) && (this->y >= other.y);
    }

    bool operator==(const Point& other) {
        return (this->x == other.x) && (this->y == other.y);
    }

    bool operator!=(const Point& other) {
        return !(*this == other);
    }

    friend ostream& operator<<(ostream& os, const Point& point) {
        os << "(" << point.x << ", " << point.y << ")";
        return os;
    }

    friend istream& operator>>(istream& is, Point& point) {
        is >> point.x >> point.y;
        return is;
    }

    Point& operator++() {
        ++x;
        ++y;
        return *this;
    }

    Point operator++(int) {
        Point temp = *this;
        ++(*this);
        return temp;
    }

    Point& operator--() {
        --x;
        --y;
        return *this;
    }

    Point operator--(int) {
        Point temp = *this;
        --(*this);
        return temp;
    }
};

int main() {
    Point p1(2, 3);
    Point p2(4, 5);

    cout << "p1: " << p1 << endl;
    cout << "p2: " << p2 << endl;

    Point p3 = p1 + p2;
    cout << "p1 + p2: " << p3 << endl;

    cout << "p1 < p2: " << (p1 < p2) << endl;
    cout << "p1 == p2: " << (p1 == p2) << endl;

    cout << "Enter a point (x y): ";
    Point inputPoint;
    cin >> inputPoint;
    cout << "You entered: " << inputPoint << endl;

    ++p1;
    cout << "p1 after increment: " << p1 << endl;

    return 0;
}
