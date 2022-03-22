#include <stdio.h>


void revarr(int arr[],int n){
	static int i = 0;
	if(i == n/2){
		return;
	}
	int temp = arr[i];
	arr[i] = arr[n-i-1];
	arr[n-i-1] = temp;
	revarr(arr,n-1);
}
void printarr(int arr[], int n){
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
        }
}

void main(){
	int arr[] = {10,20,30,40,50};
	int n = sizeof(arr)/sizeof(int);
	revarr(arr,n);
	printarr(arr,n);
}
