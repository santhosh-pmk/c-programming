#include<stdio.h>
#include<string.h>
int main(){
	char str[30];
	printf("enter the string:");
	scanf("%[^\n]s",str);
	str[0]=str[0]-32;
	for(int i=0;i<strlen(str);i++){
		if(str[i]==' '){
			str[i+1]=str[i+1]-32;
		}
	}
	printf("%s",str);
	return 0;
}
