//10. Sort the array.
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

      
     for (i = 0; i < n - 1; i++) {
     	int j;
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    
    printf("sorted array: ");
    for(i=0;i<n;i++){
    	printf("%d ",arr[i]);
	}

  
   
}

