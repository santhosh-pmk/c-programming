/* HRA --> 35% of basic
   DA  --> 45% of basic  */
#include<stdio.h>
int main(){
	float basic,hra,da;
	printf("enter the basic pay:");
	scanf("%f",&basic);
	hra=0.35*basic;
	da=0.45*basic;
	printf("total salary of the employee is %f", basic+hra+da);
	return 0;
}
