#include <stdio.h>
int temp = 0;
int present(int arr[],int size,int val) {
	int cnt = 0;
	for(int i=0;i<size;i++) {
		if(arr[i] == val) {
			cnt++;
			temp = i;
		}
	}
	return cnt;
}

void main() {
	
	int arr[50];
	printf("Enter the size of an aray : \n");
	int size;
	scanf("%d",&size);
	printf("Enter the Elements of an aray : \n");
	for(int i=0;i<size;i++) {
		scanf("%d",&arr[i]);
	}
	int ele;
	printf("Enter the element do you want to find \n");
	scanf("%d",&ele);
	int cnt = present(arr,size,ele);
	if (cnt == 0) {
		printf("Element is not present in an array\n");
	}else {
		printf("element %d is at last index %d\n",ele,temp);
		printf("element is present in an array\n");
		printf("element %d is %d times present in array\n",ele,cnt);
	}
}
