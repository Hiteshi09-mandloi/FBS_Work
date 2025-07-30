#include<stdio.h>
void main(){
	int n;
	printf("Enter the no.");
	scanf("%d",&n);
	int f;
	f=n%10;
	while(n>=10){
	    n/=10;
	}
	printf("factorial: %d\n",n);
	printf("factorial: %d",f);
}
