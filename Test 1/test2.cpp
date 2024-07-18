//2)write a progam to find the  max element from the list
#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> numbers = {7, 2, 8, 4, 5, 10, 1};

    if (!numbers.empty()) {
        int maxElement = numbers[0]; 

        for (int i = 1; i < numbers.size(); i++) {
            if (numbers[i] > maxElement) {
                maxElement = numbers[i];
            }
        }

        cout << "The maximum element is: " << maxElement << endl;
    } else {
        cout << "The list is empty." << endl;
    }

    return 0;
}

