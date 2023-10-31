#include<stdio.h>
int main(){
	int n,k,count;
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
		if(a[i]==k){
			count++;
		}
	}
	printf("%d found %d times in the given array",k,count);
	return 0;
}
