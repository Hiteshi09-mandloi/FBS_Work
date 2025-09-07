#include <stdio.h>
void main() {
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements:\n");
	int i;
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int sum= 0;  // flag
    for(i = 0; i < n; i++) {
    	sum+=arr[i];   
    }
    printf("sum: %d",sum);

   
}

