#include <stdio.h>
#include <stdlib.h>

struct Node{
	int data;
	struct Node* next;	
};

struct Node* top = NULL;

void push(int x){
	struct Node* newnode = malloc(sizeof(struct Node));
	newnode->data = x;
	//newnode->next = NULL;

	newnode->next = top;

	top = newnode;
}

void pop(){
	struct Node* temp = top;
	if(top == NULL){
		printf("Stack is empty\n");
	}
	else{
		printf("Popped element is: %d\n",temp->data);
		top = temp->next;
		free(temp);
	}
}

void display(){
	struct Node* temp = top;
	if(top == NULL){
		printf("There is nothin to display here\n");
	}
	else{
		while(temp!=NULL){
			if(temp->next == NULL){
				printf("%d",temp->data);
			}
			else{
				printf("%d----->",temp->data);
			}
			temp = temp->next;
		}
	}
}

//struct Node *top = NULL;

void main() {
	int x;
	char ch;
	do {
		printf("1.Push 2.pop 3.printStack\n");
		printf("Enter choice:\n");
		scanf("%d",&x);

		switch(x){
			case 1:
				{
				int x;
				printf("Enter The data: ");
				scanf("%d",&x);
				push(x);
				break;
				}
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
			default:
				printf("Wrong choice: ");
				break;
		}
		printf("\nDo you want to continue?\n");
		getchar();
		scanf("%c",&ch);
	}while(ch == 'y'|| ch =='Y');	
}
