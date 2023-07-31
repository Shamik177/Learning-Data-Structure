#include <iostream>
using namespace std;

const static int capacity = 6;
int STACK[capacity];
int top = -2;

void push(int x)
{
    if (top < capacity-2  )
    {
        top=top+2;
        STACK[top] = x;
        cout << "Successfully added item: " << x << endl;
    }
    else
    {
        cout << "Exception! Stack is full." << endl;
    }
}

int pop()
{
    if (top >= 0)
    {
        int poppedItem = STACK[top];
        top=top-2;
        cout << "Successfully removed item: " << poppedItem << endl;
    }
    else
    {
        cout << "Exception! Stack is empty." << endl;
    }
}

int peek()
{
    if (top >= 0)
    {
        cout << "Top item: " << STACK[top] << endl;
    }
    else
    {
        cout << "Exception! Stack is empty." << endl;
    }
}

int main()
{
    cout << "Implementing my stack in C++" << endl;
    push(5);
    push(10);
    push(15);
    push(20);
    push(25);
    pop();
    peek();
    pop();
    peek();
    push(30);
    peek();
    pop();
    pop();
    pop();
    peek();

    return 0;
}
