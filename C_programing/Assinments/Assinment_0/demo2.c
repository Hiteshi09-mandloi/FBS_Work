#include <stdio.h>

int main() {
    int arr[3] = {10, 20, 30};
    int *p1 = arr;           // pointer to first element
    int (*p2)[3] = &arr;     // pointer to the whole array

    printf("%d ", *(p1 + 2));
    printf("%d ", *(*p2 + 1));
    printf("%d\n", (*p2)[0]);

    return 0;
}

