#include<stdio.h>
int main(){
	int n,m;
	printf("enter the number of rows and cols of elements of array:");
	scanf("%d %d",&n,&m);
	int a[n][m],b[n][m];
	printf("enter the elements of first array:\n");
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter the elements of second array:\n");
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&b[i][j]);
		}
	}
	
	printf("the addition array is:\n");
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("%d\t",a[i][j]+b[i][j]);
		}
		printf("\n");
	}
		printf("the subtraction array is:\n");
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("%d\t",a[i][j]-b[i][j]);
		}
		printf("\n");
	}
	return 0;
}
