#include<stdio.h>
int main(){
	float a,b;
	float float_rep;
	int int_rep;
	printf("enter two numbers to multiply:");
	scanf("%f%f",&a,&b);
	float_rep=a*b;
	int_rep=a*b;
	printf("\nmultiplication of two numbers in floating point representation: %f",float_rep);
	printf("\nmultiplication of two numbers in integer representation: %d",int_rep);
	return 0;
}
