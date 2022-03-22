#include <stdio.h>

int fibo(int x){
	if(x == 1){
		return 1;    
	}
	else if(x <= 0)     
		return 0;
	
	else {
		return fibo(x-1) + fibo(x-2); 
	}
}

void main(){
	int n;
	printf("Enter the number of element in fibonacci series: ");
	scanf("%d",&n); 

	for(int i=0;i<=n-1;i++){
		printf("%d,",fibo(i));
	}
}
