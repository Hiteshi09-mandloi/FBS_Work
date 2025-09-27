#include<stdio.h>
int main(){
	int n,digit,original;
	int reverse=0;
	
	printf("Enter a number:");
	scanf("%d",&n);
	
	original = n;
	
	while(n != 0){
		digit = n%10;
		reverse = reverse * 10 + digit;
		n = n/10;
	}
	
	if(original==reverse){
		printf("num is pelindrom");
	}else{
		printf("num is not pelindrome");
	}
}