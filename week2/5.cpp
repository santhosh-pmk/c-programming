#include<stdio.h>
int main(){
	float a,b,c;
	printf("\nenter three numbers:");
	scanf("%f%f%f",&a,&b,&c);
	if (a==b &&a==c){
		printf("Equal");
	}else{
		printf("Not Equal");
	}
	return 0;
}
