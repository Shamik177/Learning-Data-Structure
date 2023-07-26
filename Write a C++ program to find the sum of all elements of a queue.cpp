#include<iostream>
#define n 5
using namespace std;

class Queue
{
public:

int queue[n];
int front = -1;
int rear = -1;

void enqueue(int x)
{
    if(rear==n-1)
        {
          cout<<"Queue is full "<<"\n";
        }
    else if(front == -1 && rear == -1)
        {
           front = rear = 0;
           queue[rear]=x;
        }
        else
            {
               rear++;
               queue[rear]=x;
            }

}
void dequeue()
{
    if(front == -1 && rear == -1)
        {
           cout<<"Queue is empty "<<"\n";
        }
    else if(front == rear)
        {
          front = rear = -1;
        }
    else
        {
          cout<<"Dequeued element is :"<<queue[front]<<"\n";
          front++;
        }

}
void peek()
{
    if(front == -1 && rear == -1)
        {
           cout<<"Queue is empty "<<"\n";
        }
    else
        {
           cout<<"Front element is :"<<queue[front]<<"\n";
        }

}
void display()
{
   if(front == -1 && rear == -1)
        {
           cout<<"Queue is empty "<<"\n";
        }
        else
            {
                cout<<"Queue elements are :"<<"\n";
              for(int i=front; i<=rear; i++)
                {
                   cout<<queue[i]<<"\n";
                }
            }

}
int summation()
{
  int sum = 0;
  for(int i=0; i<=rear; i++)
    {
      sum = sum+queue[i];
    }
    cout<<"Summation is :"<<sum<<"\n";
}


};
int main()
{
   Queue q;

  q.enqueue(12);
  q.enqueue(8);
  q.enqueue(11);
  q.enqueue(7);
  q.enqueue(17);
  q.display();
  q.summation();

  return 0;
}

