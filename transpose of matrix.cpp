#include<iostream>
using namespace std;
int main()
{
int m,n;
cout<<"Enter the size of rows in your matrix:";
cin>>m;
cout<<"Enter the size of colums in your matrix:";
cin>>n;

int A[m][n];
for(int i=0; i<m; i++)
{
 for(int j=0; j<n; j++)
 {
  cout<<"A["<<i<<"]["<<j<<"]=";
 cin>>A[i][j];
 }
}
cout<<"\n";
for(int i=0; i<m; i++)
{
   for(int j=0; j<n; j++)
   {
    cout<<A[i][j]<<"   ";
   }
   cout<<"\n";
}
cout<<"\n";


for(int i=0;i<n; i++)
{
 for(int j=0; j<m; j++)
 {
   cout<<A[j][i]<<"   ";
 }
 cout<<"\n";
}

return 0;
}

