#include<stdio.h>
void main(){
<<<<<<< HEAD
	int age=22;
	if(age>=18)
	printf("is Eligible for vote ");
	else
	printf("is not Eligible for vote");
=======
	int n;
	printf("Enter the no.");
	scanf("%d",&n);
	int team=n,count=0;
	while(team!=0){
		team/=10;   
		count++;
	}/*
	we use squire function 
	*/
	team=n;
	printf("Number od digit: %d\n",count);
	
	int d,sum=0,flag=1,finalcount=count;
	while(team!=0){
	 d=team%10;
	 while(count!=0){
	 	flag*=d;
	 	count--;
	 }
	 printf(" flag: %d\n",flag);
	 team/=10;
	 sum+=flag;	
	 flag=1;
	 count=finalcount;
	}
	printf("Sum: %d\n",sum);
	if(n==sum)
		printf("No.is amstrong");
	else
		printf("not");
>>>>>>> c5e31f9 (Assignment 3 add)
}
