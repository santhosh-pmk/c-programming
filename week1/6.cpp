#include<stdio.h>
int main(){
	int a,b;
	printf("enter two numbers");
	scanf("%d%d",&a,&b);
	printf("\nbefore swapping:");
	printf("\nvalue of a: %d",a);
	printf("\nvalue of b: %d",b);
	printf("\nafter swapping:");
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\nvalue of a: %d",a);
	printf("\nvalue of b: %d",b);
	return 0;
}
