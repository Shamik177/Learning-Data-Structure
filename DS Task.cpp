#include <iostream>
using namespace std;





struct student
{
    string name;
    string id;
    float cgpa;
}stu;
class sort{
    public:
        void bubble(student stu[],int n){
        for(int i=0;i<n;i++){
            for(int j=0;j<(n-i-1);j++){
                if(stu [j].cgpa>stu[j+1].cgpa){
                    swap(stu[j],stu[j+1]);
                }
            }
        }
        cout<<"Bubble Short"<<endl <<endl;
        for(int i=0;i<n;i++){
            cout<<stu[i].cgpa<<" ";
        }


        }
        void selection(student stu[],int n){
            for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(stu [i].cgpa>stu[j].cgpa){
                    swap(stu[i],stu[j]);
                }
            }
            cout<<"Selection Short"<<endl <<endl;
            for(int i=0;i<n;i++){
                cout<<stu[i].cgpa<<" ";
        }
        }
}
void insertion(student stu[],int n){
     for(int i=1;i<n;i--){
         for(int j=i-1;j>=0;j--){
             if(stu[i].cgpa<stu[j].cgpa){
                 swap(stu[i],stu[j]);
             }
         }
         cout<<"Insertion Short"<<endl <<endl;
         for(int i=0;i<n;i++){
                cout<<stu[i].cgpa<<" ";
     }
}
}
};



int main()
{
    int s1;
    cout<< "How many student :";
    cin >> s1;





    student* stu = new student[s1];





    for(int i =0;i<s1;i++){
    cout << "Enter student  name: ";
    cin >> stu[i].name;
    cout << "Enter  student roll number: ";
    cin >> stu[i].id;
    cout << "Enter student CGPA: ";
    cin >> stu[i].cgpa;





    }



sort st;
st.bubble(stu,s1);
st.selection(stu,s1);
st.insertion(stu,s1);



    return 0;
}
