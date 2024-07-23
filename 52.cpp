#include<iostream>
using namespace std;
void example()
{
    //auto x=10
    // registerd storage class
    static int counter =0 ;
    for(static int i = 0; i<10; ++i)
    {
        counter +=i;
    }
    cout<<counter;
}


int main()
{
    example();
    return 0;
}