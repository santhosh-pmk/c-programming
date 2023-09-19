#include<stdio.h>
int main(){
	int s1,s2,s3,s4,s5;
	float total;
	printf("\nenter subject1 mark:");
	scanf("%d",&s1);
	printf("\nenter subject2 mark:");
	scanf("%d",&s2);
	printf("\nenter subject3 mark:");
	scanf("%d",&s3);
	printf("\nenter subject4 mark:");
	scanf("%d",&s4);
	printf("\nenter subject5 mark:");
	scanf("%d",&s5);
	total=s1+s2+s3+s4+s5;
	printf("percentage of your total marks is %f",(total/500)*100);
	return 0;
}
