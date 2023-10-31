#include<stdio.h>
int main(){
	int n,temp,k;
	printf("enter the number of elements:");
	scanf("%d",&n);
	int a[n];
	printf("enter the elements of array:");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("enter the value for k:");
	scanf("%d",&k);
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i;j++){
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("%dth smallest is %d and %dth largest is %d",k,a[k-1],k,a[n-k]);
	
	return 0;
}
