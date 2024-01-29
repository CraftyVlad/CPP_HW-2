#include <iostream>
#include <string>

using namespace std;

class Contact {
private:
    string name;
    string homePhone;
    string workPhone;
    string mobilePhone;
    string additionalInfo;
public:

    Contact(string n, string h, string w, string m, string a) {
        name = n;
        homePhone = h;
        workPhone = w;
        mobilePhone = m;
        additionalInfo = a;
    }

    void setName(string n) {
        name = n;
    }

    void setHomePhone(string h) {
        homePhone = h;
    }

    void setWorkPhone(string w) {
        workPhone = w;
    }

    void setMobilePhone(string m) {
        mobilePhone = m;
    }

    void setAdditionalInfo(string a) {
        additionalInfo = a;
    }

    string getName() const {
        return name;
    }

    string getHomePhone() const {
        return homePhone;
    }

    string getWorkPhone() const {
        return workPhone;
    }

    string getMobilePhone() const {
        return mobilePhone;
    }

    string getAdditionalInfo() const {
        return additionalInfo;
    }

    void print() const {
        cout << "Name: " << name << endl;
        cout << "Home Phone: " << homePhone << endl;
        cout << "Work Phone: " << workPhone << endl;
        cout << "Mobile Phone: " << mobilePhone << endl;
        cout << "Additional Info: " << additionalInfo << endl << endl;
    }

    Contact() {
        cout << "Contact " << name << " deleted" << endl << endl;
    }
};


    int main() {
        Contact c1("John Doe", "123-456-7890", "098-765-4321", "121-212-1212", "Friend");
        c1.print();

        Contact c2;
        c2.setName("Jane Smith");
        c2.setMobilePhone("888-888-8888");
        c2.setAdditionalInfo("Colleague");
        c2.print();

        return 0;

    }