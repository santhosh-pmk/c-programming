#include<stdio.h>
int main(){
	int a,b,c;
	printf("enter three sides of a triangle:");
	scanf("%d%d%d",&a,&b,&c);
	if (a==b && a==c){
		printf("it is an equilateral triangle");
	}else if(a==b || b==c || c==a){
		printf("it is an isosceles triangle");
	}else{
		printf("it is a scalene triangle");
	}
	return 0;
}
