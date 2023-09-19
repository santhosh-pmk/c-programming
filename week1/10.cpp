#include<stdio.h>
#include<math.h>
int main(){
	float a;
	printf("enter a number to find the cube:");
	scanf("%f",&a);
	printf("the cube of the given number is: %f",pow(a,3));
	return 0;
}
