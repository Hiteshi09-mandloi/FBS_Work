#include<stdio.h>
void main(){
	int num;
	printf("Enter the no.");
	scanf("%d",&num);
	int fact=1,d ,team=num,sum=0;
	while(team!=0){
	   d=team%10;
		while(d!=0){
			fact*=d;
			d--;
	}
	team/=10;
	printf("factorial: %d\n",fact);
	sum+=fact;
	fact=1;
}
if(num==sum)
	printf("number is Strong number.");
else
	printf("Number is Not Strong Number.");


}
