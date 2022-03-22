#include <stdio.h>
#include <stdlib.h>

struct Node{
	int data;
	struct Node* next;
};

void printList(struct Node** head){
	struct Node * temp = *head;
		while(temp != NULL){
			if(temp->next != NULL){
				printf("|%d|->",temp->data);
			}else{
				printf("|%d|",temp->data);
			}		
			temp = temp->next;
	}
}

int SearchFirstocc(struct Node* head,int no) {
	int cnt=0;
	if(head == NULL){
		printf("No items to search\n");
		exit(0);
	}
	struct Node* temp = head;
	while(temp != NULL){
		if(temp->data == no){
			return (cnt+1);
		} 
		cnt++;
		temp = temp->next;
	}
	return 0;
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
void main(){
	struct Node* head = NULL;
	char ch;
	int x;
	do{
		printf("1.addnode 2.Search 3.printList\n");
		printf("Enter your choice:\n");
		scanf("%d",&x);

		switch(x){
			case 1:{
				addNode(&head);
				printf("\n");
				break;
			       }
			case 2:{
				int data;
				int pos ;
				printf("Enter element which you want to search\n");
				scanf("%d",&data);
				if(pos=SearchFirstocc(head,data))
				{
					printf("The position of element is :%d\n",pos);
				}else{
					printf("Not Found\n");
				}
				break;
			       }
			case 3:
			        printList(&head);
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
