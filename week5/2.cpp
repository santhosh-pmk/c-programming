#include<stdio.h>
int main(){
	int n,temp;
	printf("enter the number of elements:");
	scanf("%d",&n);
	int a[n];
	printf("enter the array elements:");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("\nthe given array:");
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i;j++){
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("\nthe sorted array:");
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	return 0;
}
problem
