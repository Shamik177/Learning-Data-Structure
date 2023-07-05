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

int fst,sec;
for(int i=0; i<n; i++)
{
   if(array[i]>fst)
   {
     sec=fst;
     fst=array[i];
   }
       else if(array[i]>sec && array[i]!=fst)
       {
         sec=array[i];
       }
}
 cout<<"Second largest element is :"<<sec<<"\n";
return 0;
}
