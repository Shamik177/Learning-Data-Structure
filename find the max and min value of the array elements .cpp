#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"Enter you array size:";
cin>>n;

int array[n];
cout<<"Enter elements of the array:"<<"\n";


for(int i=0; i<n; i++)
{
 cout<<"array["<<i<<"]=";
 cin>>array[i];
}
cout<<"\n";

for(int i=0;i<n; i++)
{
  cout<<array[i]<<"   ";
}

cout<<"\n";

int max=array[0];
for(int i=1; i<5; i++)
{
 if(max<array[i])
 {
  max=array[i];
 }
}
cout<<"\n";

int min=array[0];
for(int i=1; i<5; i++)
{
 if(min>array[i])
 {
  min=array[i];
 }
}
cout<<"Maximum array elements is :"<<max<<"\n";
cout<<"Minimum array elements is :"<<min<<"\n";

return 0;
}
