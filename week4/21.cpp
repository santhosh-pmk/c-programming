#include<stdio.h>
int main(){
	int n,st;
	printf("enter the starting integer:");
	scanf("%d",&st);
	printf("enter the number of rows:");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(int j=0;j<i+1;j++){
			printf("%d ",i+st);
		}
		printf("\n");
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i;j++){
			printf("%d ",(st+n-1)-i);
		}
		printf("\n");
	}
	return 0;
}
