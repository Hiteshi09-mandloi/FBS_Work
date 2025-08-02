#include<stdio.h>

void main(){
	int n;
	printf("Enter ther value of n: ");
	scanf("%d",&n);
	int i;
	for(i=1;i<=n;i++){
		int j;
		for(j=1;j<=n;j++){
			if(i==1||i==n ||j==1)
				printf("* ");
			else if(i==n-1 && i>n/2 && j==n)
					printf("* ");	
			else{
				if( i==n/2+1  && j>=n/2+1)
					printf("* ");
			else
					printf("  ");
				
			}
				
		}
		
		printf("\n");
}
	printf("~~~~~~~~~~~~~~~~\n");
	for(i=1;i<=n;i++){
		int j;
		for(j=1;j<=n;j++){
			if(j==1 || j==n || i==n/2+1)
			 printf("* ");
			else
			printf("  ");
			
		}
		printf("\n");	
	}

}
