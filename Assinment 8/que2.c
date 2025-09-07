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

    int k;
    printf("Enter the value to search: ");
    scanf("%d", &k);

    int found = 0;  // flag
    for(i = 0; i < n; i++) {
        if(arr[i] == k) {
            printf("Number found at position %d\n", i);
            found = 1;
            break; // stop after finding
        }
    }

    if(!found) {
        printf("Number not found in array\n");
    }

}

