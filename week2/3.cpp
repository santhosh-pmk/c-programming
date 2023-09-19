/* electricity bill
	0-100 units --> Rs.2
	101-200 units --> Rs.3
	201-300 units --> Rs.4
	301-400 units --> Rs.5
	>400 units --> Rs.6		*/
#include<stdio.h>
int main(){
	int units;
	printf("\nenter the number of units:");
	scanf("%d",&units);
	if(units>=0 && units<=100){
		printf("\ntotal bill is Rs.%d",units*2);
	}else if(units>100 && units<=200){
		printf("\ntotal bill is Rs.%d",100*2+(units-100)*3);
	}else if(units>200 && units<=300){
		printf("\ntotal bill is Rs.%d",100*2+100*3+(units-200)*4);
	}else if(units>300 && units<=400){
		printf("\ntotal bill is Rs.%d",100*2+100*3+100*4+(units-300)*5);
	}else{
		printf("\ntotal bill is Rs.%d",100*2+100*3+100*4+100*5+(units-400)*6);
	}
	return 0;
}
