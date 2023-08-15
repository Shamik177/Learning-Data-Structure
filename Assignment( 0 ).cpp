#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node *nextNode;
};

class LinkedListImplementation
{
public:
    Node *firstNode = NULL;
    Node *newNode, *currentNode;

    void Insertion(int data)
    {
        newNode = new Node;
        newNode->data = data;
        newNode->nextNode = NULL;

        if(firstNode == NULL)
        {
            firstNode = newNode;
            currentNode = firstNode;
        }

        else
        {
            currentNode->nextNode = newNode;
            currentNode = newNode;
        }
    }

    void Deletion(int data)
    {
        if(firstNode == NULL)
        {
            return;
        }

        if(firstNode->data == data)
        {
            Node *temp = firstNode;
            firstNode = firstNode->nextNode;
            delete temp;
            return;
        }

        currentNode = firstNode;
        while(currentNode->nextNode != NULL)
        {
            if(currentNode->nextNode->data == data)
            {
                Node *temp = currentNode->nextNode;
                currentNode->nextNode = currentNode->nextNode->nextNode;
                delete temp;
                return;
            }
            currentNode = currentNode->nextNode;
        }
    }

    void Searching(int data)
    {
        bool found = false;
        currentNode = firstNode;
        while(currentNode != NULL)
        {
            if(currentNode->data == data)
            {
                cout<<data<<" found "<<endl<<endl;
                found = true;
                return;
            }
            currentNode = currentNode->nextNode;
        }

        if(!found)
        {
            cout<<data<<" not found"<<endl<<endl;
        }
    }

    void Traversal()
    {
        cout<<"Successfully traversed the existing Nodes --------->>>>"<<endl;
        currentNode = firstNode;
        while(currentNode != NULL)
        {
            cout<<currentNode->data<<"\t";
            currentNode = currentNode->nextNode;
        }
    }
};

int main()
{
    LinkedListImplementation ob;

    int total;
    cout<<"Enter total Number of data to store : ";
    cin>>total;
    cout<<endl;

    int data;
    for(int i=0; i<total; i++)
    {
        cout<<"Data "<<i+1<<" : ";
        cin>>data;
        ob.Insertion(data);
    }

    cout<<"\n"<<"The data to be deleted : ";
    cin>>data;
    ob.Deletion(data);

    cout<<"\n"<<"The data to be searched : ";
    cin>>data;
    ob.Searching(data);

    ob.Traversal();

    return 0;
}
