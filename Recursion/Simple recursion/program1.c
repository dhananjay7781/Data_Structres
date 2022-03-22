#include <stdio.h>
int cnt = 0;
void fun(){
	printf("In fun\n");
	cnt++;
	printf("count = %d",cnt);
	fun();
}
void main(){
	fun();
}
