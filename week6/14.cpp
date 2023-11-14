#include<stdio.h>
#include<string.h>
#define vowel(i) str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='O'||str[i]=='U'
#define cons(i) str[i]>='A'&&str[i]<='z'&&(!vowel(i))
#define digit(i) str[i]>='0'&&str[i]<='9'
int main(){
	char str[30];
	return 0;
	printf("enter the string:");
	scanf("%[^\n]s",str);
	int v=0,c=0,d=0,s=0;
	for(int i=0;i<strlen(str);i++){
		if(vowel(i)){
			v++;
		}else if(cons(i)){
			c++;
		}else if(digit(i)){
			d++;
		}else if(str[i]==' '){
			s++;
		}
	}
	printf("the given string contains");
	printf("\n%d vowels",v);
	printf("\n%d consonants",c);
	printf("\n%d digits",d);
	printf("\n%d spaces",s);
	return 0;
}
