#include<iostream>
using namespace std;
int main(){
    const char * message {"Hello World"};
    cout << "message : " << message << endl; //Hello World!
    //*message = "B"; // Compiler error
    cout << "message : " << *message << endl; //H
    //Allow users to modify the string
    char message1[] {"Hello world"};
    message1[0] = 'B';
    cout << "message1 : " << message1 << endl; //Bello World
    return 0;
}
