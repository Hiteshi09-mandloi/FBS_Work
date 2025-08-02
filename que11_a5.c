#include<stdio.h>

void main(){
	int n;
	printf("Enter ther value of n: ");
	scanf("%d",&n);
	int i;
	for(i=1;i<=n;i++){
		int j;
		for(j=1;j<=n;j++){
			if(i==1||i==n && i>=n/2 ||j==1||j==n )
				printf("* ");
			else
				printf("  ");
		}
		printf("\n");
	}
}
