#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
struct node *head=NULL,*temp;

void insert(int n)
{
    struct node *newNode=new node;
    newNode -> data = n;
    newNode -> next = head;
    head = newNode;
}
void display()
{
    temp = head;
    while(temp != NULL)
        {
           cout<<temp -> data<<"   ";
           temp = temp -> next;
        }
        cout<<"\n";
}
int main()
{
    insert(12);
    insert(22);
    insert(15);
    insert(20);
    insert(18);
    display();

return 0;
}



