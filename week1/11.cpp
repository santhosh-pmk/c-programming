#include<stdio.h>
#include<math.h>
int main(){
	float p,r,t,n,si,ci;
	printf("\nenter the principal amount:");
	scanf("%f",&p);
	printf("\nenter the rate of interest:");
	scanf("%f",&r);
	printf("\nenter the time period:");
	scanf("%f",&t);
	printf("\nenter the number of times compounded per year:");
	scanf("%f",&n);
	si=p*r*t;
	ci=p*pow(1+(r/n),n*t);
	printf("\nsimple interest is: %f",si);
	printf("\ncompound interest is %f",ci);
	return 0;
}
