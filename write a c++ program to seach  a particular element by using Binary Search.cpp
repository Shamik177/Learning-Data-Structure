
#include<iostream>
using namespace std;

int binary(int array[],int n,int data)
{
int first=0;
int last=n-1;
while(first<=last)
    {
     int mid=(first+last/2);

       if(array[mid] == data)
         {
            return mid;
         }
            else if(array[mid] < data)
                {
                   first=mid + 1;
                }
                    else
                        {
                           last = mid - 1;
                        }

    }

return -1;

}


int main(){
int n;
cout<<"Enter number of elements:";
cin>>n;

int array[n];
cout<<"Enter array elements in ascending order : "<<"\n\n";
for(int i=0; i<n; i++)
{
   cout<<"array["<<i<<"]=";
   cin>>array[i];
}

cout<<"\nArray elements are :";
for(int i=0; i<n; i++)
{
   cout<<array[i]<<"   ";
}

int data;
cout<<"\n\nWhich element you want to search:";
cin>>data;

int result= binary(array, n, data);
if(result == -1)
{
  cout<<"\nData is not found"<<"\n";
}
else
   {
      cout<<data<<" "<<"is found";
   }
return 0;
}
