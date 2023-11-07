#include<stdio.h>
int main(){
	char str[30];
	scanf("%s",&str);
	int i=0;
	for(i=0;i<30;i++){
		if(str[i]=='\0'){
			break;
		}
	}
	printf("%d is the length of the given string",i);
	return 0;
}
