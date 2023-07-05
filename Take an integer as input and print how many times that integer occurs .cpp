#include<iostream>
using namespace std;
int main()
{
int array[10];

cout<<"Enter array elements:";
for(int i=0; i<10; i++)
{
 cin>>array[i];
}
int a;
cout<<"Input a number search:";
cin>>a;
int count=0;
int i;
for(int i=0; i<10; i++)
{
   if(a==array[i])
    {
     count++;
   }
}
cout<<"This number occurs"<<"   "<< count<<"   "<<"times in the array";

return 0;
}

