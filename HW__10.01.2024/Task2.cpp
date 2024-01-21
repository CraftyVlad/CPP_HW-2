//#include <iostream>
//#include <string>
//using namespace std;
//
//struct WashingMachine {
//    string brand;
//    string color;
//    float width;
//    float length;
//    float height;
//    int power;
//    int spin_speed;
//    int temperature;
//
//    void print() {
//        cout << "Brand: " << brand << endl;
//        cout << "Color: " << color << endl;
//        cout << "Dimensions (W x L x H): " << width << " x " << length << " x " << height << endl;
//        cout << "Power: " << power << " W" << endl;
//        cout << "Spin speed: " << spin_speed << " RPM" << endl;
//        cout << "Temperature: " << temperature << " C" << endl;
//    }
//
//    void set_brand(string new_brand) {
//        brand = new_brand;
//    }
//
//    void set_color(string new_color) {
//        color = new_color;
//    }
//
//    void set_dimensions(float new_width, float new_length, float new_height) {
//        width = new_width;
//        length = new_length;
//        height = new_height;
//    }
//
//    void set_power(int new_power) {
//        power = new_power;
//    }
//
//    void set_spin_speed(int new_spin_speed) {
//        spin_speed = new_spin_speed;
//    }
//
//    void set_temperature(int new_temperature) {
//        temperature = new_temperature;
//    }
//};
//
//int main() {
//    WashingMachine WM;
//
//    WM.set_brand("Samsung");
//    WM.set_color("White");
//    WM.set_dimensions(60.0, 60.0, 85.0);
//    WM.set_power(2000);
//    WM.set_spin_speed(1200);
//    WM.set_temperature(40);
//
//    cout << "Washing machine parameters:" << endl;
//    WM.print();
//
//    return 0;
//}