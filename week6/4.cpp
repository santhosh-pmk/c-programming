#include<stdio.h>
int main(){
	char str1[30];
	printf("enter string:");
	scanf("%s",str1);
	for(int i=0;i<30;i++){
		if(str1[i]=='\0'){
			break;
		}
		if(str1[i]>='A' && str1[i]<='Z'){
			str1[i]=str1[i]+32;
		}
	}
	printf("%s",str1);
	return 0;
}
