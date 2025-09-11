#include<stdio.h>
#include<math.h>
#include<string.h>
 
int fun1(int n){
    if(n==0)
     return 0;
    static int result=0;
    int rem=n%10;
    result=result*10;
    result+=rem;
    fun1(n/10);
    return result;
}

void main(){
    int n;
    printf("Enter number: ");
	scanf("%d",&n);
	printf("%d",fun1(n));

		
}
