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
void DeleteFirst(struct Node **head){
	struct Node* temp = *head;
	if(*head == NULL){
		printf("Create at least One Node\n");
		exit(0);
	}
	//presidence priority mule bracket takly
	*head = (*head)->next;
	free(temp);
}
void main(){
	struct Node* head = NULL;
	char ch;
	int x;
	do{
		printf("1.DeleteFirst 2.printList 3.addnode\n");
		printf("Enter your choice:\n");
		scanf("%d",&x);

		switch(x){
			case 1:
				DeleteFirst(&head);
				break;
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
