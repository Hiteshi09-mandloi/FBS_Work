#include<stdio.h>

void main(){
	int n;
	printf("Enter ther value of n: ");
	scanf("%d",&n);
	int i;
	for(i=1;i<=(n/2)+1;i++){
		int j;
		for(j=1;j<=i;j++){
			printf("* ");
		}
		printf("\n");
	}
	for(i=(n/2)+2;i>=1;i--){
	
	
		int j;
		for(j=1;j<=i;j++){
			printf("* ");
		}
		printf("\n");
	}
}
