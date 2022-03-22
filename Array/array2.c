#include <stdio.h> 

void main() {
	int x;
	int arr[5];
	int flag = 0;
	printf("Enter a number : \n");
	for(int i=0;i<5;i++) {
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<5;i++) {
		printf("%d\n",arr[i]);
	}
	printf("Enter an element to search : \n");
	scanf("%d",&x);
	for(int i=0; i<5;i++) {
		if(arr[i]==x) {
			printf("Element is present\n");
			flag = 1;                                           //flag ka tr loop mdhe ahe so firel saglikde                      
			break;
		}
	}
		if(flag ==0) {
			printf("Element is not present\n");
		}

}
