#include <stdio.h>

void main() {
	int arr[2][3][3] = {{1,2,3,4,5,6,7,8,9},{1,2,30,40,50,60,70,80,90}};
	int i,j,k;
	for(i=0;i<2; ) {
		for(j=0;j<3;j++){
			for(k=0;k<3; k++ ) {
				printf("%d ",arr[i][j][k]);
			}
			printf("\n");
		}			
	i++;
	}
}

