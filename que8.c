#include<stdio.h>
void main(){
	int num;
	printf("Enter the no.");
	scanf("%d",&num);
	int rev=0,n=num,d;
	while(n!=0)
	{
		d=n%10;
		n/=10;
		rev*=10;
		rev+=d;
	}
	printf("reverse Number: %d\n",rev);
	if(num==rev)
		printf("number is Palindrome number");
	else
		printf("number is Not Palindrome number");
}
