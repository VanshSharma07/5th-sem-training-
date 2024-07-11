#include<iostream>
using namespace std;

int main()
{
    int a[5] = {1, 3, 5, 7, 9};
    cout << "Fully initialized int array A: " << endl;
    for(int x : a)  // for each loop
    {
        cout << x << endl;
    }
    cout << endl;

    int b[6] = {1, 3, 5}; // Partially initialized array
    cout << "Partially initialized int array B: " << endl;
    for(int y : b) // for each loop will work according to the size of array
    {
        cout << y << endl; // uninitialized elements will be 0
    }
    cout << endl;

    float c[6] = {1.2, 2.4, 3.6, 48.54, 99.48, 54.88};
    cout << "Fully initialized float array C: " << endl;
    for(float z : c) // for each loop
    {
        cout << z << endl;
    }

    return 0;
}
