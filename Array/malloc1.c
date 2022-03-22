#include <stdio.h>
#include <stdlib.h>

int x = 10;
void fun() {
	int z = 30;
	int *iptr2 = NULL;
	iptr2 = (int*)malloc(sizeof(int));
}
void main() {
	int  y =20;
	int *iptr3 = NULL;
	iptr3 = (int*)malloc(sizeof(int));
	fun();
}
