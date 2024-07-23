#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {1, 5, 3, 6, 8, 7, 9};
    sort(arr.begin(), arr.end());
    for (int num : arr)
    {
        cout << num << " ";
    }
    return 0;
}

