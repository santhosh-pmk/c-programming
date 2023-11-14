#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
	char str[30];
	printf("enter the string:");
	scanf("%s",str);
	char c;
	int n;
	
	printf("enter the character:");
	fflush(stdin);
	scanf("%c",&c);
	printf("enter the position:");
	scanf("%d",&n);
	n=n-1;
	for(int i=strlen(str);i>=n;i--){
		str[i+1]=str[i];
	}
	str[n]=c;
	printf("new string: %s",str);
	return 0;
}
