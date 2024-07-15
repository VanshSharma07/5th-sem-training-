#include <iostream>
#include <vector>
using namespace std;

int main() {
    // STL vector
    vector<int> v = {3, 4, 7, 2, 7};
    
    // Output the initial capacity of the vector
    cout << "Capacity of vector v is " << v.capacity() << endl;
    
    // Add an element to the end of the vector
    v.push_back(8);
    
    // Output the updated vector
    cout << "Updated vector is: ";
    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
