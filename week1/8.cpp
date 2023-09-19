#include<stdio.h>
#include<math.h>
int main(){
	float km,m,cm,mm;
	printf("enter the value of kilometers:");
	scanf("%f",&km);
	m=km*pow(10,3);
	cm=m*pow(10,2);
	mm=m*pow(10,3);
	printf("\nin meters: %f",m);
	printf("\nin centimeters: %f",cm);
	printf("\nin millimeters: %f",mm);
	return 0;
}
