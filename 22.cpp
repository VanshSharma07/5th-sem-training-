#include <iostream>
using namespace std;
void display()
{
    cout << "1. Park Car\n2. Park Bike\n3. Park Rikshaw\n4. Exit\n5. Do you want to perform again\n";
}
int main()
{
    int bikeCount = 0;
    int carCount = 0;
    int rikshawCount = 0;
    int c;
start:
    display();
    cin >> c;
    switch (c)
    {
    case 1:
        cout << "Car Parked" << endl;
        carCount++;
        goto start;
    case 2:
        cout << "Bike Parked" << endl;
        bikeCount++;
        goto start;
    case 3:
        cout << "Rikshaw Parked" << endl;
        rikshawCount++;
        goto start;
    case 4:
        cout << "No. of Cars Parked: " << carCount << endl;
        cout << "No. of Bikes Parked: " << bikeCount << endl;
        cout << "No. of Rikshaws Parked: " << rikshawCount << endl;
        break;
    case 5:
        goto start;
    default:
        cout << "Invalid input" << endl;
        goto start;
    }
    return 0;
}
