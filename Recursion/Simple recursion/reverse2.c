#include <stdio.h>


int reverse (int x) {
	static int rev,r = 0;
	if(x == 0){
		return rev;
	}
	r = x%10;
	rev = rev*10 + r;
	return reverse(x/10);
}
void main() {
	int num;
	printf("Enter a number : ");
	scanf("%d",&num);
	int out = reverse(num);
	printf("%d\n",out);
}
