#include<stdio.h>
int main(){
	int year,month,days;
	printf("enter the year and month numbers: ");
	scanf("%d %d",&year,&month);
	switch(month){
		case 1:
			days=31;
			break;
		case 2:
			if(year%4==0 && (year%100!=0 || year%400==0)){
				days=29;
			}else{
				days=28;
			}
			break;
		case 3:
			days=31;
			break;
		case 4:
			days=30;
			break;
		case 5:
			days=31;
			break;
		case 6:
			days=30;
			break;
		case 7:
			days=31;
			break;
		case 8:
			days=31;
			break;
		case 9:
			days=30;
			break;
		case 10:
			days=31;
			break;
		case 11:
			days=30;
			break;
		case 12:
			days=31;
			break;
		default:
			days=-1;
			printf("invalid input given");
	}
	printf("the number of days in the given month and year is %d",days);
	return 0;
}
