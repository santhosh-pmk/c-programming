#include<stdio.h>
int main(){
	int n=5;
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i;j++){
			printf("%c",char(65+i));
		}
		printf("\n");
	}
	return 0;
}
