#include <stdio.h>
#include <stdlib.h>
#pragma pack(1)
#define N 20

int Queue[N];
int front=-1 , rear=-1;

void enqueue(int);
void dequeue();
void display();

void main(){
    enqueue(4);
    enqueue(5);
    enqueue(8);
    enqueue(3);
    dequeue();
    dequeue();
    display();
}

void enqueue(int x)
{
    if(rear==N-1)
    {
        printf("Overflow Condition\n");
    }
    else if(front==-1 && rear==-1)
    {
        front=rear=0;
        Queue[rear]=x ;
    }
    else
    {
        rear++;
        Queue[rear]=x;
    }
}
void dequeue()
{
    if(front==-1 && rear==-1)
    {
        printf("Queue is Empty\n");
    }
    else if(front==rear)
    {
        front=rear=-1;
    }
    else 
    {
        printf("Deleted element in Queue:%d\n",Queue[front]);
        front++;
    }
}
void display(){
    if(front==-1 && rear==-1)
    {
        printf("Queue is Empty\n");  
    }
    else
    {
        for(int i=front;i<=rear;i++)
        {
            printf("%d-->",Queue[i]);
        }
    }
    printf("\n");
}
