#include<stdio.h>
int main(){
	int a,b,c;
	printf("\nenter three values:");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b &&a>c){
		printf("%d is greater point values",a);
	}else if(b>c){
		printf("%d is greater point values",b);
	}else{
		printf("%d is greater point values",c);
	}
	return 0;
}
