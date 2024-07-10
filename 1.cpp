#include<iostream>
using namespace std;

class Swap
{
public:

void swapNo(int a, int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"swaping of a and b is "<<a<<" "<<b<<endl;
}
};

int main()
{
    Swap ob;
    int a,b;
    cout<<"Enter value of a and b"<<endl;
    cin>>a>>b;
    ob.swapNo(a,b);
    return 0;
}