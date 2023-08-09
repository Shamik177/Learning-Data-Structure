#include <iostream>
using namespace std;

int arr[10];
orderedDisplay(){
    for(int i=0;i<=9;i++){
        cout<<arr[i]<<" ";
    }
}
reverseOrderDisplay(){
    for(int i=9;i>=0;i--){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int options;
    cout<<"Take 10 input:"<<endl;

    for(int j=0;j<=9;j++){
       cin>>arr[j];
    }

    cout<<"Select options"<<endl;
    cout<<"1.Same ordered output"<<endl;
    cout<<"2.Reverse ordered output"<<endl;
    cin>>options;

    switch(options){
    case 1:
        orderedDisplay();
        break;
    case 2:
        reverseOrderDisplay();
        break;
    default:
        cout<<"Select correct option";
    }

return 0;
}
