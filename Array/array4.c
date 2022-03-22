#include <stdio.h>

void main() {
	int arr[5] = {10,20,30,10,40};

	for(int i=0;i<5;i++) {
		printf("%d\n",arr[i]);
		if(arr[i] == arr[i]){
			printf("Double\n");
		}else {
		printf("Not double\n");
		}

	}
}
