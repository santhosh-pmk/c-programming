#include<stdio.h>
int main(){
	int n,num,r;
	printf("enter a number:");
	scanf("%d",&n);
	num=n;
	while(n!=0){
		r=r*10+n%10;
		n=n/10;
	}
	if(num==r){
		printf("the given number is a palindrome");
	}else{
		printf("the given number is not a palindrome");
	}
	return 0;
}
