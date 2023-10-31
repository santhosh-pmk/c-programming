#include<stdio.h>
int main(){
	int n,temp;
	printf("enter the number of elements:");
	scanf("%d",&n);
	int a[n];
	printf("enter the elements of array:");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n-1;i+=2){
		temp=a[i];
		a[i]=a[i+1];
		a[i+1]=temp;
	}
	printf("\ninterchanged array:");
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	return 0;
}
