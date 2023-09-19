#include<stdio.h>
int main(){
	int d,m,y,error=0;
	printf("enter date month year ");
	scanf("%d%d%d",&d,&m,&y);
	if (d<=0 || d>31 || m<=0 || m>12 || y<=0){
		error=1;
	}else{
	if((m==1||m==3||m==5||m==7||m==8||m==10||m==12)){
		if(d>31){
			error=1;
		}else if(d==31){
			d=1;
			if(m!=12){
				m+=1;
			}else{
				m=1;
				y+=1;
			}			
		}else{
			d+=1;
		}

	}else if((m==4||m==6||m==9||m==11)){
		if(d>30){
			error=1;
		}else if(d==30){
			d=1;
			m+=1;
		}else{
			d+=1;
		}
		
	}else if(m==2){
		if(y%4==0 && (y%100!=0 || y%400==0)){
			if(d>29){
				error=1;
			}else if(d==29){
				d=1;
				m+=1;
			}else{
				d+=1;
			}
		}else{
			if(d>28){
				error=1;
			}else if(d==28){
				d=1;
				m+=1;
			}else{
				d+=1;
			}
		}
	}
}
	if(error==1){
		printf("invalid input");
	}else{
		printf("the next date is %d %d %d",d,m,y);
	}
	return 0;
}
