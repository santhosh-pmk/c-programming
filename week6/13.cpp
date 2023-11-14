#include<stdio.h>
#include<string.h>
int main(){
	char str[100];
	printf("enter the string:");
	scanf("%[^\n]s",str);
	int count=0;
	for(int i=0;i<strlen(str);i++){
	if(str[i]=='t'&&str[i+1]=='h'&& str[i+2]=='e'){
		count++;
	}}
	printf("the word \"the\" repeated %d times in the given string.",count);
	return 0;
}
