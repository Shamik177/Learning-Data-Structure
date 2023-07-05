#include<iostream>
#include<conio.h>
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

cout<<"\n\nRepeating elements are : ";
for(int i=0; i<n; i++)
{
   for(int j=i+1; j<n; j++)
    {

         if(array[i] == array[j])
            {
               cout<<array[i]<<"   ";
            }

     }
}

getch();
}
