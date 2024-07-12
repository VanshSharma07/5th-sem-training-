#include<iostream>
using namespace std;

void sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    cout << "The Sorted Array is: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void search(int arr[],int n,int target)
{
   
    for(int i =0; i<n; i++)
    {
        if(arr[i]==target)
        {
            cout<<"No. found at index at "<<i<<endl;
        }
    }
}


int main()
{
int arr[]= {1,4,3,6,5,7,5};
int n= sizeof(arr)/sizeof(arr[0]);
int target = 6;
sort(arr, n);
search(arr,n,target);
}