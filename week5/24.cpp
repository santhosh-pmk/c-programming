#include<stdio.h>
int main(){
	int n,m;
	printf("enter the number of rows and cols:");
	scanf("%d%d",&n,&m);
	int a[n][m],b[m][n];
	printf("enter the elements of array:\n");
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			b[j][i]=a[i][j];
		}
	}
	printf("the transposed array is:\n");
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	return 0;
}


