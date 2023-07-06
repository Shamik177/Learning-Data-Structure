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
cout<<"Enter elements for A matrix:"<<"\n";


for(int i=0; i<m; i++)
{
for(int j=0; j<n; j++)
{
cout<<"A["<<i<<"]["<<j<<"]=";
cin>>A[i][j];
}
}
cout<<"\n";

int B[m][n];
cout<<"Enter elements for B matrix:"<<"\n";


for(int i=0; i<m; i++)
{
for(int j=0; j<n; j++)
{
cout<<"B["<<i<<"]["<<j<<"]=";
cin>>B[i][j];
}
}
cout<<"\n";
//output A matrix
for(int i=0;i<m; i++)
{
for(int j=0; j<n; j++)
{
cout<<A[i][j]<<"   ";
}
cout<<"\n";
}
cout<<"\n";

for(int i=0;i<m; i++)
{
for(int j=0; j<n; j++)
{
cout<<B[i][j]<<"   ";
}
cout<<"\n";
}

cout<<"\n";

int C[m][n];

for(int i=0; i<m; i++)
{
for(int j=0; j<n; j++)
{
C[i][j]=A[i][j]+B[i][j];
}
}
cout<<"\n";

for(int i=0; i<m; i++)
{
for(int j=0; j<n; j++)
{
cout<<C[i][j]<<"   ";
}
cout<<"\n";
}

return 0;
}
