#include<stdio.h>
int main(){
	int n,r=0;
	printf("enter a number:");
	scanf("%d",&n);
	while(n!=0){
		r=r*10+n%10;
		n=n/10;
	}
	printf("the reversed number is %d",r);
	return 0;
}
