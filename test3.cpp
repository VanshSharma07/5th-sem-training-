#include <iostream>
#include <vector>
using namespace std;
int divisibleBy3(const vector<int>& arr, int size) {
    if (size < 0) {
        return -1;
    }

    int count = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] < 0) {
            return -1;
        }
        if (arr[i] % 3 == 0) {
            ++count;
        }
    }
    return count;
}

int main() {
    int n;
    cin >> n;

    if (n < 0 || n > 20) {
        cout << "Invalid Input" << endl;
        return 0;
    }

    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        if (arr[i] < 0) {
            cout << "Invalid Input" << endl;
            return 0;
        }
    }

    int result = divisibleBy3(arr, n);
    if (result == -1) {
        cout << "Invalid Input" << endl;
    } else {
        cout << result << endl;
    }

    return 0;
}
