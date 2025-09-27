#include<stdio.h>
int main(){
	int digit,num,original ;
		int sum=0;
		int count = 0;
	int cube;
	
	printf("enter a number:");
	scanf("%d",&num);
	
	original=num;
	
	
	while(num != 0){
		digit = num%10;
		 cube = pow(digit,count);
		sum = sum+cube;
		num = num/10;
		count++;
	
	}
	if(original == sum){
		printf("num is Armstrong");
	}else{
		printf("num is not Armstrong");
	}
	
}