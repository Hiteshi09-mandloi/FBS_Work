#include <stdio.h>
#include <math.h>

int isPrime(int n) {
    if (n <= 1) return 0; // Not prime
    int i;
    for (i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0; // Not prime
    }
    return 1; // Prime
}

int main() {
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    int i;
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Prime numbers in the array: ");
    for (i = 0; i < n; i++) {
        if (isPrime(arr[i])) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");

    return 0;
}

