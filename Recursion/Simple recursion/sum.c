#include <stdio.h>


int sumnum(int x) {
	static int sum = 0;
	static int rem = 0;
	int i= x;
	if(i == 0){
		return 0;
	}
	rem = i%10;
	sum = sum + rem;
	i = i/10;
	sumnum(i);
	return sum;
}
void main() {
	int num;
	printf("Enter a number : ");
	scanf("%d",&num);
	int out = sumnum(num);
	printf("%d\n",out);
}
