#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node *nextNode;
};

int main()
{
    Node *firstNode, *currentNode, *newNode;

    newNode = new Node;
    newNode->data = 5;
    firstNode = newNode;
    currentNode = firstNode;

    newNode = new Node;
    newNode->data = 10;
    currentNode->nextNode = newNode;
    currentNode = newNode;

    newNode = new Node;
    newNode->data = 15;
    currentNode->nextNode = newNode;
    currentNode = newNode;

    newNode = new Node;
    newNode->data = 20;
    newNode->nextNode = nullptr;
    currentNode->nextNode = newNode;

    currentNode = firstNode;
    while(currentNode != nullptr)
    {
        cout<<currentNode->data<<" ";
        currentNode = currentNode->nextNode;
    }
    return 0;
}

