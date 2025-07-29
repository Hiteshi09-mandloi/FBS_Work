#include<stdio.h>
//Write a program to check given 3 digit number is pallindrome or not.
void main(){
		
		int n=121;
		
		if(n%10==n%100)
			printf("no. is pallindrome");
		else
			printf("no. is not pallindrome");	
	
}

