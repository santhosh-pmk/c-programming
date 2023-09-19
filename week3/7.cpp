#include<stdio.h>
int main(){
	int n;
	printf("enter a number:");
	scanf("%d",&n);
	for(int i=1;i<=10;i++){
		printf("\n%d*%d=%d",i,n,i*n);
	}
	return 0;
}
