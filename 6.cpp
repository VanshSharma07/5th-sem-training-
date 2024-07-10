#include<iostream>
using namespace std;
int main()
{
    bool red_light {false};
    bool green_light {true};
    if(red_light == true)
    {
        cout<<" Stop!"<<endl;
    }
    else{
        cout<<" Go through!"<<endl;
    }
    if (green_light){
        cout<<"The light is green!"<<endl;
    }
    else
    {
            cout<<" The light is not green!"<<endl;
    }
    
}