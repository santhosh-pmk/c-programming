#include<stdio.h>
int main(){
	int n;
	printf("enter a number:");
	scanf("%d",&n);
	for(int i=1;i<=n;i+=2){
		printf("\n%d",i);
	}
	return 0;
}
