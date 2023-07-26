#include<iostream>
using namespace std;

void selectionSort(int array[], int n)
{

for(int i=0; i<n-1; i++)
    {
       int min = i;

          for(int j=i+1; j<n; j++)
              {
                 if(array[j] < array[min])
                    {
                      min = j;
                    }
              }

              if(min != array[i])
                  {
                    swap(array[min],array[i]);
                  }


    }

}

void showdetails(int array[], int n)
{
 cout<<"\nAfter selection sort : "<<"\n";
 cout<<"Sorted array is : ";
 for(int i=0; i<n; i++)
    {
       cout<<array[i]<<"  ";
    }

}
int main()
{
int n;
cout<<"Enter number of elements : ";
cin>>n;

int array[n];
cout<<"\nEnter array elements : "<<"\n";

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
selectionSort( array, n);
showdetails(array, n);
return 0;
}
