#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of the array : "<<endl;
    cin>>n;

    int arr[n];
    cout<<"Input the array: "<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    cout<<"Elements are : "<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int highest = arr[0];
    int lowest = arr[0];

    for(int i=1; i<n; i++)
    {
        if(arr[i] > highest)
        {
            highest = arr[i];
        }

        if(arr[i] < lowest)
        {
            lowest = arr[i];
        }
    }

    cout<<"The Highest value is : "<<highest<<endl;
    cout<<"The Lowest value is : "<<lowest<<endl;
    cout<<"In reverse order : "<<endl;
    for(int i=n-1; i>=0; i--)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
