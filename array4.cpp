#include<iostream>
using namespace std;
int main()
{
    int n=5;
    int c[n];
    int large=0, slarge=0;
    for(int i=0; i<n; i++)
    {
        cin>>c[i]; }

    for(int i=0; i<n ; i++)
    {
        if(c[0]>c[i])
        {
            large=c[i];
        }
    }
    for(int i=0; i<n; i++)
    {
        if(c[0]>c[i])

    {
       if(c[i]!= large)

    {
      slarge=c[i];
    }

    }

}
cout<<"Largest number= "<<large<<endl;
cout<<"Second largest number= "<<slarge<<endl;

return 0;
}
