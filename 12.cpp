#include<iostream>
using namespace std;

int main()
{
    int array[5] = {10, 20, 30, 40, 50};
    int user_input;
    int counter = 0;

    cout << "Enter a number to search for: ";
    cin >> user_input;

    for(auto x : array)
    {
        if(x == user_input)
        {
            cout << "Number " << user_input << " is found at the location: " << counter << endl;
            exit(0);  // Exit the program if the number is found
        }
        counter++;
    }
    
    // If the program reaches here, the number was not found
    cout << "Number " << user_input << " is not found in the array." << endl;

    return 0;
}
