#include<stdio.h>
<<<<<<< HEAD
//Write a program to check given 3 digit number is pallindrome or not.
void main(){
		
		int n=121;
		
		if(n%10==n%100)
			printf("no. is pallindrome");
		else
			printf("no. is not pallindrome");	
	
}

=======
void main(){
	int rang;
	scanf("%d",&rang);
	int sum=0;
	while(rang>=0){
		sum+=rang;
		rang--;
	}
	printf("Sum: %d",sum);
}
>>>>>>> c5e31f9 (Assignment 3 add)
