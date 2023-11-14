#include<stdio.h>
#include<string.h>
int main(){
	char str[30];
	printf("enter the string:");
	scanf("%s",str);
	char revstr[30];
	strcpy(revstr,str);
	strrev(revstr);
	if(!strcmp(str,revstr)){
		printf("\nit is a palindrome");
	}else{
		printf("\nit is not a palindrome");
	}
	return 0;
}
