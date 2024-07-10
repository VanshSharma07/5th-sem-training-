#include <iostream>
using namespace std;

const float RUPEE_TO_POUND = 0.010;
const float POUND_TO_RUPEE = 1 ;
const float RUPEE_TO_DOLLAR = 0.012;
const float DOLLAR_TO_RUPEE = 1 ;
const float RUPEE_TO_YUAN = 0.086;
const float YUAN_TO_RUPEE = 1 ;

float convertRupeesToPounds(float rupees) {
    return rupees * RUPEE_TO_POUND;
}

float convertPoundsToRupees(float pounds) {
    return pounds * POUND_TO_RUPEE;
}

float convertRupeesToDollars(float rupees) {
    return rupees * RUPEE_TO_DOLLAR;
}

float convertDollarsToRupees(float dollars) {
    return dollars * DOLLAR_TO_RUPEE;
}

float convertRupeesToYuan(float rupees) {
    return rupees * RUPEE_TO_YUAN;
}

float convertYuanToRupees(float yuan) {
    return yuan * YUAN_TO_RUPEE;
}

int main() {
    int choice;
    float amount;

    cout << "Currency Conversion Menu" << endl;
    cout << "1. Convert Rupees to Pounds" << endl;
    cout << "2. Convert Pounds to Rupees" << endl;
    cout << "3. Convert Rupees to Dollars" << endl;
    cout << "4. Convert Dollars to Rupees" << endl;
    cout << "5. Convert Rupees to Yuan" << endl;
    cout << "6. Convert Yuan to Rupees" << endl;
    cout << "Enter your choice (1-6): ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Enter amount in Rupees: ";
            cin >> amount;
            cout << amount << " Rupees = " << convertRupeesToPounds(amount) << " Pounds" << endl;
            break;
        case 2:
            cout << "Enter amount in Pounds: ";
            cin >> amount;
            cout << amount << " Pounds = " << convertPoundsToRupees(amount) << " Rupees" << endl;
            break;
        case 3:
            cout << "Enter amount in Rupees: ";
            cin >> amount;
            cout << amount << " Rupees = " << convertRupeesToDollars(amount) << " Dollars" << endl;
            break;
        case 4:
            cout << "Enter amount in Dollars: ";
            cin >> amount;
            cout << amount << " Dollars = " << convertDollarsToRupees(amount) << " Rupees" << endl;
            break;
        case 5:
            cout << "Enter amount in Rupees: ";
            cin >> amount;
            cout << amount << " Rupees = " << convertRupeesToYuan(amount) << " Yuan" << endl;
            break;
        case 6:
            cout << "Enter amount in Yuan: ";
            cin >> amount;
            cout << amount << " Yuan = " << convertYuanToRupees(amount) << " Rupees" << endl;
            break;
        default:
            cout << "Invalid choice. Please enter a number between 1 and 6." << endl;
    }

    return 0;
}
