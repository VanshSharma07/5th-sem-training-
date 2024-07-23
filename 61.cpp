#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string accountHolderName;
    double balance;

public:
    BankAccount(const string& name, double initialBalance) {
        accountHolderName = name;
        balance = initialBalance;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: RS" << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: RS" << amount << endl;
        } else {
            cout << "Invalid withdrawal amount or insufficient funds!" << endl;
        }
    }

    // Function to display account information
    void displayAccountInfo() const {
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Balance: RS" << balance << endl;
    }
};

int main() {
    BankAccount account("Vansh Bargotra", 1000.0);
    account.displayAccountInfo();
    account.deposit(500.0);
    account.withdraw(200.0);
    account.displayAccountInfo();

    return 0;
}