#include<stdio.h>
int main(){
	int n=5;
	for(int i=0;i<n;i++){
		for(int s=0;s<i;s++){
			printf(" ");
		}
		printf("*");
		for(int j=0;j<2*n-2*i-3;j++){
			printf("-");
	}
		if(i==n-1){
			break;
		}
	
		printf("*\n");
	}
	return 0;
}
