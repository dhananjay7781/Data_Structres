#include <stdio.h>

int cnt = 0;
int fun(int x){
	cnt++;
	if(x<=0){
		return 1;
	}
	return fun(x-1)+fun(x-2);
}

void main(){
	int val = fun(3);
	printf("%d\n",val); //output
	printf("%d\n",cnt); //kiti stackframe push zalya except main 
}
