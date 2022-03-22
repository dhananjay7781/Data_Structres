#include <stdio.h>
#include <stdlib.h>

struct Node{
	int data;
	struct Node* next;
};

void printList(struct Node** head) {
	struct Node* temp = *head;
	while(temp != NULL){
		if(temp->next != NULL){
			printf("|%d|->",temp->data);
		}else{
			printf("|%d|",temp->data);
		}
		temp = temp->next;
	}
}

void addNode(struct Node **head) {
	int data ;
	struct Node* add = (struct Node*)malloc(sizeof(struct Node));
	if(*head == NULL)
	{
		*head = add ;
	         printf("Enter data to add in node\n");
		 scanf("%d",&data); 
	
		 add->data = data;
		 add->next = NULL; 
	}
	else{
		struct Node *temp = *head;
		while(temp->next != NULL){
			temp = temp ->next;
		}
	
		printf("Enter data to add in node\n");
		scanf("%d",&data); 
	
		add->data = data;
		add->next = NULL; 
	
		temp->next = add;
		
	} 
}
void insertAtPosition(struct Node** head,int pos){
	struct Node *temp = *head;
	int data;
	printf("Enter data\n");
	scanf("%d",&data);

	struct Node *node = malloc(sizeof(struct Node));
	node->data= data;
	node->next=NULL;

	while(pos-2){
		temp = temp->next;
		pos--;
	}
	node->next = temp->next;
	temp->next = node;
}
void main(){
	struct Node* head = NULL;
	char ch;
	int x;

//	addNode(&head);
	do{
		printf("1.insertAtPosition 2.printList 3.addnode\n");
		printf("Enter your choice:\n");
		scanf("%d",&x);

		switch(x){
			case 1:{
				int pos;
				printf("Enter position\n");
				scanf("%d",&pos);
				insertAtPosition(&head,pos);
				break;
			       }
			case 2:
				printList(&head);
				break;
			case 3:
				addNode(&head);
				printf("\n");
				break;
			default:
				printf("Wrong choice \n");
				break;
		}
		printf("\nDo you want to continue?\n");
		printf("Enter Y/y for continue\n");
		getchar();
		scanf("%c",&ch);
	}while(ch == 'y' || ch == 'Y');
}
