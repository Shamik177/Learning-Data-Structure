#include<iostream>
using namespace std;

int main()
{
    cout<<"Find Sum and Average"<<endl;

int i, n, sum, average;
    cout<<"Enter the number of integers in array : " ; cin>>n;
int arr[n];
    cout<<"Enter integers into an array:"<<endl;
for(i=0; i<n; i++)
{
cout<<"Enter arr["<<i<<"]:"; cin>>arr[i];
}
cout<<"The elements of array:"<<endl;

for(i=0; i<n; i++)
{
cout<<"arr["<<i<<"] = "<<arr[i]<<endl;
    sum+=arr[i];
}

   average = sum/n;

cout<<"SUM: "<<sum<<endl;
cout<<"AVERAGE: "<<average<<endl;


return 0;
}
