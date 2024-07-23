// project1.cpp
#include "header.h"
#include <iostream>
using namespace std;

int main() {
    vector<int> arr = {5, 2, 4, 6, 1, 3};
    int choice;
    start:
        cout << "Enter\n 1 for Bubble Sort\n 2 for Selection Sort\n 3 for Insertion Sort\n 4 for Merge Sort\n 5 to Exit: ";
        cin >> choice;
        switch(choice)
        {
            case 1:
                bubbleSort(arr);
                printArray(arr);
                goto start;
                break;
            case 2: 
                selectionSort(arr);
                printArray(arr);
                goto start;
                break;
            case 3:
                insertionSort(arr);
                printArray(arr);
                goto start;
                break;
            case 4:
                mergeSort(arr);
                printArray(arr);
                goto start;
                break;
            default:
                cout << "Invalid choice, enter again\n";
                goto start;
                break;
            case 5: 
                cout << "Exiting...\n";
                break;
        }
    return 0;
}
