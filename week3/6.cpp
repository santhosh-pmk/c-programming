#include<stdio.h>
int main(){
	int n,m=1;
	printf("enter a number:");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		m=m*i;
	}
	printf("factorial is %d",m);
	return 0;
}
