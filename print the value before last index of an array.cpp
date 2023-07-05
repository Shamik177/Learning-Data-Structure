#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"Enter the size of array : ";
cin>>n;

int array[n];
cout<<"Enter array elements : "<<"\n";
 for(int i=0; i<n; i++)
{
 cout<<"array["<<i<<"]=";
 cin>>array[i];
}
cout<<"\n";
cout<<"Array elements are :";
for(int i=0; i<n; i++)
{
  cout<<array[i]<<"   ";
}
cout<<"\n";

for(int i=n-2; i>n-3; i--)
{
  cout<<"Value is before the last index :"<<array[i]<<"\n";
}

return 0;
}


