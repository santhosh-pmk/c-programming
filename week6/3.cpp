#include<stdio.h>
int main(){
	int n=30;
	char str1[n],str2[n],str3[n];
	printf("enter string1:");
	scanf("%s",str1);
	printf("enter string2:");
	scanf("%s",str2);
	int i;
	for(i=0;i<n;i++){
		str3[i]=str1[i];
		if(str1[i]=='\0'){
		break;	
		}
	}
		for(int j=i;j<n;j++){
		str3[j]=str2[j-i];
		if(str2[j-i]=='\0'){
			break;
		}
	}
	printf("%s is the concatenated string",str3);
	return 0;
}
