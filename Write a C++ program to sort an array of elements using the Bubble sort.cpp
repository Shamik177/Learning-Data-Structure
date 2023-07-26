
#include<iostream>
using namespace std;

void bubbleSort(int array[], int n)
{
 for(int i=0; i<n-1; i++)
    {
      for(int j=0; j<n-1-i; j++)
          {
             if(array[j] > array[j+1])
                 {
                    swap(array[j],array[j+1]);
                 }
          }
    }
}

void showdetails(int array[], int n)
{
 cout<<"\nAfter bubble sort : "<<"\n";
 cout<<"Sorted array is : ";
 for(int i=0; i<n; i++)
    {
       cout<<array[i]<<"  ";
    }
}
int main(){
int n;
cout<<"Enter number of element : ";
cin>>n;

int array[n];
cout<<"Enter array elements : "<<"\n";
for(int i=0; i<n; i++)
{
   cout<<"array["<<i<<"]=";
   cin>>array[i];
}
cout<<"\nArray elements are : ";
for(int i=0; i<n; i++)
{
  cout<<array[i]<<"  ";
}
bubbleSort(array, n);
showdetails(array, n);

return 0;
}

