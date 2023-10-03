#include<stdio.h>
int main(){
	int n=4;
	for(int i=0;i<n;i++){
		for(int j=0;j<i+1;j++){
			printf("%d",i+1);
			if(j==i){
				continue;
			}
			printf("*");
		}
		printf("\n");
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i;j++){
			printf("%d",n-i);
			if(j==n-i-1){
				continue;
			}
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
