#include<iostream>
using namespace std;
int main()
{
    int a[6] = {1,4,6,4,1,5};
    int value = 10;
    int count =0;
    for(int i =0; i<5; i++)
    {
        for(int j = i+1; j<5; j++)
        {
            for(int k=j+1; k<5; k++)
            {
            if(a[i]+a[j]+a[k]==value)
            {
                count = count+1;
            }
            }
        }
    }
    cout<<"The count of pairs "<<value<<" is "<<count<<endl;
    return 0;
}