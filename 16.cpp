#include <iostream>
#include <cmath>
using namespace std;

void findNumbers(int sum, int product) {
    // Calculate the discriminant
    double discriminant = sqrt(sum * sum - 4 * product);
    
    // Calculate the two roots
    double x = (sum + discriminant) / 2;
    double y = (sum - discriminant) / 2;
    
    // Print the numbers in ascending order
    if (x > y) {
        cout << static_cast<int>(y) << " " << static_cast<int>(x) << endl;
    } else {
        cout << static_cast<int>(x) << " " << static_cast<int>(y) << endl;
    }
}

int main() {
    int sum, product;
    // Read input
    cin >> sum >> product;
    
    // Find and print the numbers
    findNumbers(sum, product);
    
    return 0;
}
