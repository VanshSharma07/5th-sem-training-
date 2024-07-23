#include <iostream>
#include <vector>
using namespace std;
void rotateArray(vector<int>& arr) {
    if (arr.empty()) return;
    int n= arr.size()-1;
    int lastElement = arr[n];
    for (int i = n; i > 0; --i) {
        arr[i] = arr[i - 1];
    }
    arr[0] = lastElement;
}

void displayArray(const vector<int>& arr) {
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};

    cout << "Original array: ";
    displayArray(arr);

    int rotations = arr.size();
    for (int i = 0; i < rotations; ++i) {
        rotateArray(arr);
        cout << "Array after " << i + 1 << " rotations: ";
        displayArray(arr);
    }

    return 0;
}