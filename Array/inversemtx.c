#include <stdio.h>

void main() {
	printf("Enter 9 elements : \n");
	int arr [3][3];
	int ele;
	for(int i=0;i<3;i++) {
		for(int j=0;j<3;j++) {
			scanf("%d",&arr[i][j]);
		}
	}
	for(int i=0;i<3;i++) {
		for(int j=0;j<3;j++) {
			if(i == j) {
				int temp;
				temp = i;
				i = j;
				j = temp;

				printf(" %d ",temp);
			}else {
				printf(" %d ",- (arr[i][j]));
			}
			}
		printf("\n");
	}
}
