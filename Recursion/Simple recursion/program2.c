#include <stdio.h>

int xyz(int x) {
	if(x==40)
		return x;
	int a  = 10;
	a = a + x;
}

void main(){
	printf("%d\n",xyz(50));
}
