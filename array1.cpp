#include<iostream>


using namespace std;
int main (){
int N;
cout<<"Enter number of integers:"<<endl;
cin>>N;
int array[N];
cout<<"Enter integers:"<<endl;
for(int i=0; i<N; i++){
    cin>>array[i];
}
for(int i=N-1; i>=0; i--){
    cout<<array[i];
}

return 0;
}
