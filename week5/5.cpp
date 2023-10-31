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
	for(int i=0,j=n-1;i<n/2;i++,j--){
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
	printf("\nthe reversed array:");
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	return 0;
}
