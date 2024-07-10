#include<iostream>
using namespace std;
int add(int a, int b)
{
   cout<<"sum is "<<a+b<<endl;
   return 0;
}
int sub(int a, int b)
{
   cout<<"sub is "<<a-b<<endl;
   return 0;
}
int mul(int a, int b)
{
   cout<<"multiplication is "<<a*b<<endl;
   return 0;
}
int Div(int a, int b)
{
   cout<<"Division is "<<a/b<<endl;
   return 0;
}

int rem(int a, int b)
{
   cout<<"Remainder is "<<a%b<<endl;
   return 0;
}
int add(int a,int b,int c)
{
    cout<<"Sum of 3 no. is "<<a+b+c<<endl;
    return 0;
}

int main()
{
   add(1,6);
   sub(1,6);
   mul(1,6);
   rem(1,6);
   Div(4,2);
   add(1,3,5);

   return 0;
}
