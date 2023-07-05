#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int n;
cout<<"Enter your array size : ";
cin>>n;

int array[n];
cout<<"Enter the array elements :"<<"\n";


for(int i=0; i<n; i++)
{
  cout<<"array["<<i<<"]=";
  cin>>array[i];
}
cout<<"\n";

cout<<"Array elements are : ";
for(int i=0; i<n; i++)
{
 cout<<array[i]<<"   ";
}
cout<<"\n"<<"\n";
cout<<"Reverse array elements are : ";

for(int i=n-1; i>=0; i--)
{
 cout<<array[i]<<"   ";
}

getch();
}

