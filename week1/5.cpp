#include<stdio.h>
int main(){
	int a,b,temp;
	printf("enter two numbers");
	scanf("%d%d",&a,&b);
	printf("\nbefore swapping:");
	printf("\nvalue of a: %d",a);
	printf("\nvalue of b: %d",b);
	printf("\nafter swapping:");
	temp=a;
	a=b;
	b=temp;
	printf("\nvalue of a: %d",a);
	printf("\nvalue of b: %d",b);
	return 0;
}
