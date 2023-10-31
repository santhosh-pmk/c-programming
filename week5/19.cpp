#include<stdio.h>
int main(){
	int n,k,temp;
	printf("enter the number of elements:");
	scanf("%d",&n);
	int a[n+1];
	printf("enter the elements of array:");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("input the value to be inserted:");
	scanf("%d",&k);
	a[n]=k;
	for(int i=0;i<n+1;i++){
		for(int j=0;j<n-i;j++){
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	
	printf("\nthe inserted and sorted array:");
	for(int i=0;i<n+1;i++){
		printf("%d ",a[i]);
	}
	
	return 0;
}
