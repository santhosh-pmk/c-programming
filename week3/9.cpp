#include<stdio.h>
int main(){
	int a=0,b=1,s=0,n;
	printf("enter a number to find the nth term of fibonacci:");
	scanf("%d",&n);
	if(n==1){
		s=0;
	}else if(n==2){
		s=1;
	}else{
		for(int i=2;i<=n;i++){
		a=b;
		b=s;
		s=a+b;
	}
	}
	
	printf("the fibonacci term is %d",s);
	return 0;
}
