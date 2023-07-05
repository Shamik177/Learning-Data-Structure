#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"Enter your array size:";
cin>>n;

int array[n];
cout<<"Enter the array elements:"<<endl;
for(int i=0; i<n; i++)
{
    cout<<"array["<<i<<"]=";
    cin>>array[i];
}
cout<<"\n";


cout<<"Array elements are: ";
for(int i=0; i<n; i++)
{
  cout<<array[i]<<"    ";
}

cout<<"\n";

int array_size=sizeof(array);
cout<<"Array size is :"<<array_size<<"\n";
return 0;

}

