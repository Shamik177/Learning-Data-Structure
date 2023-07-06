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
    void bubble( student stu[],int n){
        for(int i= 0; i<n; i++){
            for(int j = 0; j<(n-i-1);j++){
                if(stu [j].cgpa>stu[j+1].cgpa){
                    swap(stu[j],stu[j+1]);
                }
            }
        }
        cout<<"Bibble short"<<endl <<endl;
        for(int i=0; i<n; i++);


}
 void selection(student stu[],int n){
     for(int i= 0; i<n; i++){
            for(int j = i+1; j<n; j++){
                if(stu [i].cgpa>stu[j].cgpa){
                    swap(stu[i],stu[j]);
                }

            cout<<"Selection short"<<endl <<endl;
            for(int i = 0; i<n; i++){
                cout<< stu[i].cgpa<<", ";
            }
        }
     }
 }
  void insertion (student stu[],int n){
      for(int i=1; i<n;i++){
            for(int j = i-1; j>=0;j--){
                if(stu[i].cgpa<stu[j].cgpa){
                    swap(stu[i],stu[j]);
                }
            }

      }
       cout<<"Insertion short"<<endl <<endl;
       for(int i = 0; i<n; i++){
                cout<< stu[i].cgpa<<", ";
            }

  }
  void binary (student stu[],int n){
      int k =0;
      float s;
      cout<<"The number to search:";
      cin>>s;
      for(int i= 0; i<=(n-2);i++){
        if(stu[i].cgpa< stu[i+1].cgpa){
            k++;
        }
        else break;
      }
      if (k==n-1){
        int first = 0;
        int last = n-1;
        int mid;
        mid = (first+last)/2;
        while(first<=last){
            if(k== stu[mid].cgpa){
                break;
            }
            if (k> stu[mid].cgpa){
                first=mid+1;
            }
            else{
                last=mid-1;
            }
        }
        cout<<"Element not found";
      }
      else{
        cout<< "Not shorted--";
      }

  }




};

int main()
{
    int s1;
    cout<< "How many student";
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

