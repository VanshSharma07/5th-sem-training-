#include <iostream>
#include <vector>

using namespace std;

// Calculator operations
double add(double a, double b) { return a + b; }
double subtract(double a, double b) { return a - b; }
double multiply(double a, double b) { return a * b; }
double divide(double a, double b) { return a / b; }

int main()
{
    vector<double> numbers(2); 
    char op;

    cout << "Enter first number: ";
    cin >> numbers[0];
    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> numbers[1];

    double result;

    switch (op)
    {
    case '+':
        result = add(numbers[0], numbers[1]);
        break;
    case '-':
        result = subtract(numbers[0], numbers[1]);
        break;
    case '*':
        result = multiply(numbers[0], numbers[1]);
        break;
    case '/':
        if (numbers[1] != 0)
        {
            result = divide(numbers[0], numbers[1]);
        }
        else
        {
            cout << "Error: Division by zero is undefined." << endl;
            return 1;
        }
        break;
    default:
        cout << "Invalid operator." << endl;
        return 1;
    }

    cout << "Result: " << numbers[0] << " " << op << " " << numbers[1] << " = " << result << endl;

    return 0;
}
