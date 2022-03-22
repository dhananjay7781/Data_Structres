#include <stdio.h>

int x;                       // -------------> data section mdhe jaga milali tyattlya non-bss mdhe
int x = 20;                       // -------------> data section mdhe jaga milali tyattlya non-bss mdhe
void main() {
	int y = 30;               //---------------> stack frame mdhe jaga milali
	static int z = 30;	          //data section mdhe jaga milali but te local variable sarkh treat krnar
	int *iptr1 = &x;
	int *iptr2 = &y;
	int *iptr3 = &z;

	printf("%d\n",*iptr1);
	printf("%d\n",*iptr2);
	printf("%d\n",*iptr3);
}
