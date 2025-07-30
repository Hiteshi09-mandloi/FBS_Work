#include<stdio.h>
void main(){
<<<<<<< HEAD
		
	char ch='a';
	if(ch=='a'||ch=='e' || ch=='i'|| ch=='o' || ch=='u') 
	  printf("char is vowel.");
	else
		printf("char is consonant.");
=======
	int n, flag=0;
	printf("Enter number:");
	scanf("%d",&n);
	if(n<=1){
			printf("Not prime number");
			return;
	}
	int i=2;

	while(i<=n){
	 	
		if(n%i!=0){	
		  printf("prime no.");
		  break;				
		}
		else{
			printf("not prime no.");
			break;
		}
		i++;
	}
	
>>>>>>> c5e31f9 (Assignment 3 add)
	
}
