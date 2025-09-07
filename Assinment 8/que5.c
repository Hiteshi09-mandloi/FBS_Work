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
    printf("alternative numbers: ");
	for(i = 0; i < n; i++) {
        printf("%d ",arr[i]);
        i++;
    }
  
   
}

