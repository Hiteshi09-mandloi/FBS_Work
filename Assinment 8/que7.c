#include <stdio.h>
void main() {
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];
    int brr[n];
    printf("Enter elements of first array :\n");
	int i;
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter elements of second array :\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &brr[i]);
    }
    int sum[n];
    for(i = 0; i < n; i++) {
        sum[i]=arr[i]+brr[i];   
    }
    printf("arrys sum : ");
    for(i = 0; i < n; i++) {
        printf("%d ", sum[i]);
    }
   
}

