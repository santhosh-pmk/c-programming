#include<stdio.h>
int main(){
	int s1,s2,s3,s4,s5;
	float percent;
	printf("\nenter the five subject marks physics chemistry maths biology computer:");
	scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
	percent=(s1+s2+s3+s4+s5)/5;
	if(percent>=90){
		printf("A Grade with %f",percent);		
	}else if(percent>=80){
		printf("B Grade with %f",percent);
	}else if(percent>=70){
		printf("C Grade with %f",percent);
	}else if(percent>=60){
		printf("D Grade with %f",percent);
	}else if(percent>=40){
		printf("E Grade with %f",percent);
	}else{
		printf("F Grade with %f",percent);
	}
	return 0;
}
