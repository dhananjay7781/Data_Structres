#include <stdio.h>
#include <string.h>
#include <stdbool.h>

_Bool pelistr(char str[],int len){
	static int i = 0;
	if(i> len/2)
		return true;
	if(str[i] != str[len-1-i])
		return false;
	i++;
	pelistr(str,len);
}

void main(){
	char str[] = "raceeeecar";
	int len = strlen(str);
	_Bool retvalue =  pelistr(str,len);
	
	if(retvalue == true){
		printf("Palindrome");
	}
	else{
		printf("Not PAlindrome");
	}
}
