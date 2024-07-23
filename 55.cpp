#include<iostream>
using namespace std;

class Example {
    mutable int value;
    public:
    Example(int val): value(val){};
    void modify()const
    {
        value++;
        cout<<value<<endl;
    }

};

int main()
{
    Example ob(5);
    ob.modify();
    
}