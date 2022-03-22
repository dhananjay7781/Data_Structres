#include <stdio.h>
#include <stdlib.h>

int front = -1;
int rear = -1;

struct Node* top = NULL;

void enqueue(int x){
	
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
