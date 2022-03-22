#include <stdio.h>


int sumnum(int x) {
	static int sum = 0;
	static int rem = 0;
	if(x == 0){
		return 0;
	}
	return x%10 + sumnum(x/10);
}
void main() {
	int num;
	printf("Enter a number : ");
	scanf("%d",&num);
	int out = sumnum(num);
	printf("%d\n",out);
}
