#include<stdio.h>
int main(){
	int n,f,l;
	printf("enter a number:");
	scanf("%d",&n);
	l=n%10;
	do{
		f=n%10;
		n=n/10;
	}while(n!=0);
	printf("the sum of first and last digit is %d",f+l);
	return 0;
}
