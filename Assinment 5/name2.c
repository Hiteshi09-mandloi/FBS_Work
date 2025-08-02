#include<stdio.h>

void main(){
	int n;
	printf("Enter ther value of n: ");
	scanf("%d",&n);
	int i;
	for(i=1;i<=n;i++){
		int j;
		for(j=1;j<=n;j++){
			if(i==1||i==n ||j==1||j==n || i==n/2+1)
				printf("* ");
			else if(j==5 && i==3)
				printf("o ");
			else
				
				printf("  ");
		}
		printf("\n");
	}
}
