#include<stdio.h>
int main(){
	char str[30];
	printf("enter string:");
	scanf("%s",str);
	int i;
	for(i=0;i<30;i++){
		if(str[i]=='\0'){
			break;
		}
	}
	int temp;
	for(int j=0;j<i/2;j++){
		temp=str[j];
		str[j]=str[i-j-1];
		str[i-j-1]=temp;
	}
	printf("%s is the reversed string",str);
}
