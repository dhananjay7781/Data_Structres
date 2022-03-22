#include <stdio.h>

#define n 5 
int arrstack[n];
int top = -1;
int push(){
	if(top == n-1){
		printf("Stack overflow\n");
		return -1;
	}
	else{
		int x;
		printf("Enter data:\n");
		scanf("%d",&x);
		top++;
		arrstack[top] = x;
	}
}

void pop(){
	int num;
	if(top == -1){
		printf("Stack Underflow\n");
	}

	top--;

}

void printStack(){
	for(int i=top;i>=0;i--){
		printf("|%d|",arrstack[i]);
	}
}
void main() {
	int x;
	char ch;
	do {
		printf("1.Push 2.pop 3.printStack\n");
		printf("Enter choice:\n");
		scanf("%d",&x);

		switch(x){
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				printStack();
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
