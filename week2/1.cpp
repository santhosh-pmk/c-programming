#include<stdio.h>
int main(){
	int a,b,c;
	printf("\nenter three numbers:");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b &&a>c){
		printf("%d is greater",a);
	}else if(b>c){
		printf("%d is greater",b);
	}else{
		printf("%d is greater",c);
	}
	return 0;
}
