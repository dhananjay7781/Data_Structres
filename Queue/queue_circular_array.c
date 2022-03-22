#include <stdio.h>

#define n 5
int qarr[n];
int front = -1;
int rear = -1;

void enqueue(int x){
	if((rear+1)%n == front){
		printf("Queue is full\n");
		return;
	}
	else if(front == -1){
		front  = rear = 0;
		qarr[rear] = x;
	}
	else {
		rear = (rear + 1)%n;
		qarr[rear] = x;
	}
}

void dequeue(){
	if(front==-1){
		printf("Queue is empty\n");
		return;
	}
	else if(front == rear){
		printf("Deleted element is: %d\n",qarr[front]);
		front = rear = -1;
	}
	else{
		printf("Deleted element is: %d\n",qarr[front]);
		front = (front+1)%n;
	}
}

void display() {
	if(front==-1){
		printf("Queue is empty\n");
		return;
	}
	else{
		printf("Queue is: \n ");
		int i = front;
		while(i!=rear){
			printf("%d---->",qarr[i]);
			i = (i+1)%n;
		}
		printf("%d",qarr[i]);  //he last chya elements sthi ahe arrrow print hou naye mhnun
		printf("\n");
	}
}

void main() {
	int x;
	char ch;
	do{
		printf("1.Enqueue 2.Dequeue 3.Display\n");
		printf("Enter choice: ");
		scanf("%d",&x);

		switch(x) {
			case 1: {
				int x;
				printf("Enter data: ");
				scanf("%d",&x);
				enqueue(x);
				break;
				}
			case 2:
				dequeue();
				break;
			case 3:
				display();
				break;  
			default:
				printf("Wrong choice\n");
				break;
		}
		printf("Do you want to continue?\n");
		getchar();
		scanf("%c",&ch);
	}while(ch == 'y' || ch == 'Y');
}
