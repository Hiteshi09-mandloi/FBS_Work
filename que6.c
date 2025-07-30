<<<<<<< HEAD
#include <stdio.h>

void main() {
    char ch='s';
  
    if ((ch >= 'A' && ch <= 'Z')) {
        printf("%c is Uppercase\n", ch);
    } 
    else if (ch >= 'a' && ch <= 'z') {
        printf("%c is Lowercase\n", ch);
    } 
    else {
        printf("%c is not an alphabet character\n", ch);
    }

   
=======
#include<stdio.h>
void main(){
	int n;
	printf("Enter the no.");
	scanf("%d",&n);
	int fact=1;
	while(n!=0){
		fact*=n;
		n--;
	}
	printf("factorial: %d",fact);
>>>>>>> c5e31f9 (Assignment 3 add)
}
