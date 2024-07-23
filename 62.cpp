#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    vector<int> arr = {10, 7, 8, 9, 1, 5};
    
    sort(arr.begin(), arr.end());
    
    reverse(arr.begin(), arr.end());
    
    cout << "Sorted array in descending order: ";
    for(int num : arr) {
        cout << num << " ";
    }
    
    return 0;
}