#include<stdio.h>
#include<string.h>
int main(){
	char str[30];
	printf("enter the string:");
	scanf("%s",str);
	for(int i=0;i<strlen(str);i++){
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
			printf("%c",str[i]);
		}
	}
	return 0;
}
