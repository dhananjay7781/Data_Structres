#include <stdio.h>

void main() {
	//printf("Enter 9 elements : \n");
	int arr [3][3];
	for(int i=0;i<3;i++) {
		for(int j=0;j<3;j++) {
			if(i == j) {
				printf(" 1 ");
			}else {
				printf(" 0 ");
			}
			}
		printf("\n");
	}
}
