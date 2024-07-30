#include <iostream>
#include <string>
using namespace std;

// Function to reverse a string in place
void reverseString(string& str) {
    int left = 0;
    int right = str.size() - 1;
    while (left < right) {
        swap(str[left], str[right]);
        left++;
        right--;
    }
}

int main() {
    string str;
    cin >> str;
    reverseString(str);
    cout << str << endl;
    return 0;
}
