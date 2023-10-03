#include<stdio.h>
int main(){
	int n=5;
	for(int i=0;i<n;i++){
		for(int s=0;s<n-i-1;s++){
			printf(" ");
		}
		for(int j=0;j<i+1;j++){
			if(i%2==0){
				printf("*");
			}else{
				printf("-");
			}
		}
		printf("\n");
	}
	for(int i=1;i<n;i++){
		for(int s=0;s<i;s++){
			printf(" ");
		}
		for(int j=0;j<n-i;j++){
			if(i%2==0){
				printf("*");
			}else{
				printf("-");
			}
		}
		printf("\n");
	}
	return 0;
}
