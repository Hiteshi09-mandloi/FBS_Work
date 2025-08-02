#include<stdio.h>

void main(){
	int n;
	printf("Enter the only odd numbers value of n: ");
	scanf("%d",&n);
	int i;
	for(i=1;i<=n;i++){
		int j;
		//pringting G
		//for(j=1;j<=n;j++){
		//	if(i==1||i==n ||j==1 || j==n && i>=n/2+1)
		//		printf("* ");
				
		//	else{
		//		if( i==n/2+1  && j>=n/2+1)
		//			printf("* ");
		//	else
		//			printf("  ");
				
		//	}
				
	//	}
	//	printf(" | ");
			// printing H
	//	for(j=1;j<=n;j++){
	//		if(j==1 || j==n || i==n/2+1)
	//		 printf("* ");
	//		else
	//		printf("  ");
			
	//	}
		printf(" | ");
		//printing M
	for(j=1;j<=n;j++){
	if(j==1 || j==n ||i==j && i<=n/2+1 || j==n-i+1 && j>=n/2+1)
			 printf("* ");
		else
			printf("  ");
			
		}
		printf(" | ");
		//printing M
		for(j=1;j<=n;j++){
		if(j==1 || j==n ||i==j && i<=n/2+1 || j==n-i+1 && j>=n/2+1)
			 printf("* ");
		else
			printf("  ");
			
		}
		//printing S
		printf(" | ");
		for(j=1;j<=n;j++){ 
		if(i==1 || i==n || i==n/2+1 ||j==1 && i<=n/2+1|| j==n && i>=n/2+1 )
			 printf("* ");
		else
			printf("  ");			
		}
			
		printf(" | ");
		        for (j = 1; j <= n; j++) {

            // Skip specific stars
            if ((i == 1 && j == n) || (i == n/2+1 && j == n) || (i == n && j == n)) {
                printf("  "); // Space instead of star
            }

            // Print border or middle row stars
            else if (i == 1 || i == n || j == 1 || j == n || i == n / 2 + 1) {
                printf("* ");
            }

            // Default inside space
            else {
                printf("  ");
            }
        }
        printf(" | ");
		// printing R
		for(j=1;j<=n;j++)
		{
		if(i==1  || j==1||i==n/2+1 ||j==n && i<=n/2+1)
			 printf("* ");
			 

		else if(i==j && i>n/2)
				printf("* ");
		else
			printf("  ");
		}
		printf(" | ");
		for(j=1;j<=n;j++){
			if(i==1|| j==1|| j==n ||i==n)
				printf("* ");
			else {
			if((i==1 && j==n) || (i==n&& j==n) || (i==1 & j==1))
			     printf("  ");
			else
				printf("  ");
		}
		}
	
		printf("\n");
}


	
	// printing R
	//	for(j=1;j<=n;j++){
	//	if(i==1 || j==1||i==n/2+1 ||j==n && i<=n/2+1)
			 //printf("* ");
	////	else{
		////	if(i==4 && j==2)
			///	printf("* ");
		//	if(i==5 && j==3)
		//		printf("* ");
		////	else
			//	printf("  ");
	////	}		
		
		
		
	
	

}
