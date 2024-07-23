#include <iostream>
using namespace std;

class Functions {
    string name;
    int age;
public:
    Functions(string n, int a) {
        name = n;
        age = a;
    }

    void updateDetails(string n, int a) {
        name = n;
        age = a;
    }

    void displayDetails() const {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    Functions ob("Vansh", 20);
    ob.displayDetails();
    ob.updateDetails("Riya", 22); // Passing new values to updateDetails
    ob.displayDetails();
    return 0;
}
