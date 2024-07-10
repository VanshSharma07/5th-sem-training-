#include <iostream>
using namespace std;

int main() {
    int classes_held, classes_attended;

    cout << "Enter the number of classes held: ";
    cin >> classes_held;

    cout << "Enter the number of classes attended: ";
    cin >> classes_attended;

    int attendance_percentage = (classes_attended * 100) / classes_held;

    if (attendance_percentage < 75) {
        cout << "The student has failed due to low attendance." << endl;
    } else {
        cout << "The student has passed based on attendance." << endl;
    }

    return 0;
}
