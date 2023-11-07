#include<stdio.h>
int main(){
	char str1[30],str2[30];
	printf("enter the string:");
	scanf("%s",&str1);
	for(int i=0;i<30;i++){
		str2[i]=str1[i];
	}
	printf("copied string: %s",str2);
	return 0;
}
