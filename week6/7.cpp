#include<stdio.h>
int main(){
	char str1[30],str2[30];
	printf("enter string1:");
	scanf("%s",str1);
	printf("enter string2:");
	scanf("%s",str2);
	int flag=0;
	int a;
	for(a=0;a<30;a++){
		if(str1[a]=='\0'){
			break;
		}
	}
	int b;
	for(b=0;b<30;b++){
		if(str2[b]=='\0'){
			break;
		}
	}
	if(a==b){
	
	for(int i=0;i<30;i++){
		if(str1[i]==str2[i]){
			flag=0;
		}else{
			flag=1;
			break;
		}
		if(str1[i]=='\0'&& str2[i]=='\0'){
			break;
		}
	}
}else{
	flag=1;
}
if(flag==0){
	printf("equal");
}else{
	printf("not equal");
}
	return 0;
}
