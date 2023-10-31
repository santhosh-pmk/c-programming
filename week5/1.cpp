#include<stdio.h>
int main(){
	int n;
	printf("enter the number of elements:");
	scanf("%d",&n);
	int a[n];
	printf("enter the elements:");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int min=a[1],max=a[1];
	float s=0;
	float avg;
	for(int i=0;i<n;i++){
		if(min>a[i]){
			min=a[i];
		}
		if(max<a[i]){
			max=a[i];
		}
		s=s+a[i];
	}
	avg=s/n;
	printf("\naverage is %f\nmaximum is %d\nminimum is %d",avg,max,min);
	return 0;
}
