#include <iostream>
using namespace std;

// Function prototype
int rsum(int n);

int main() {
    int num, sum;
    cout << "Enter a number: ";
    cin >> num;
    sum = rsum(num);
    cout << "Sum of digits: " << sum << endl;
    return 0;
}

int rsum(int n) {
    int d;
    int s = 0; // Initialize s to 0
    if (n != 0) {
        d = n % 10;
        n = n / 10;
        s = d + rsum(n);
    } else {
        return 0;
    }
    return s;
}
