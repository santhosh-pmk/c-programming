#include<stdio.h>
int main(){
	float days;
	float years;
	printf("\nenter the total days:");
	scanf("%f",&days);
	years=days/365;
	printf("\nequivalent number of years is: %f",years);
	return 0;
}
