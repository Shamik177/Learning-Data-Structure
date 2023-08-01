#include <iostream>
using namespace std;

struct Node{
    int value = 0;
    Node *next;

};

class LinkedList{

public:
    Node *head;
    Node *current;

    void NewNode(int value){
        Node *temp = new Node();

        temp->value = value;
        temp->next = NULL;

        if(head == NULL){
            head = temp;
            current = temp;
        }
        else{
            current->next = temp;
            current = temp;
        }
    }

    void print(){
        cout << "Elements are: ";
        while(head->value != NULL){
            cout << head->value << " ";
            head = head->next;
        }
    }
};

int main(){
    int e;
    int n;
    LinkedList *l = new LinkedList();

    cout << "Enter the stored size: ";
    cin >> n;
    for(int i=0; i<n; i++){
            cout << "In index [" << i <<"] store value: ";
            cin >> e;
            l->NewNode(e);
    }
    cout << endl;
    l->print();

return 0;
}


