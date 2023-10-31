#include<stdio.h>
int main(){
	int n,temp,k=1;
	printf("enter the number of elements:");
	scanf("%d",&n);
	int a[n-1];
	printf("enter the elements of array:");
	for(int i=0;i<n-1;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0; i<n-1;i++){
		for(int j=0;j<n-i;j++){
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for(int i=0;i<n-1;i++){
		if(k!=a[i]){
			printf("missing element is %d",k);
			break;
		}
		k++;
	}
	return 0;
}
