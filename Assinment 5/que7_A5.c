#include<stdio.h>

void main(){
	int n;
	printf("Enter ther value of n: ");
	scanf("%d",&n);
	int c=1;
	int i;
	for(i=1;i<=n;i++){
		int j;
		for(j=1;j<=i;j++){
			printf("%d ",c++);
		}
		printf("\n");
	}
}
