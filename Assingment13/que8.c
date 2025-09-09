#include <stdio.h>

// Define structure
typedef struct Distance {
    int feet;
    int inch;
} Distance;

#define MAX 5
Distance distArr[MAX];   // global array
int count = 0;

// 1?? Pass by Value
void storeByValue(Distance d) {
    printf("Enter Distance (feet inch): ");
    scanf("%d %d", &d.feet, &d.inch);

    if (count < MAX) {
        distArr[count] = d;   // copy struct into global array
        count++;
    }
}

// 2?? Pass Array (pass by address automatically)
void displayAll(Distance arr[], int size) {
    printf("\n--- All Distances ---\n");
    int i;
    for (i = 0; i < size; i++) {
        printf("%d feet %d inch\n", arr[i].feet, arr[i].inch);
    }
}

void main() {
    Distance d;

    // Store one Distance (pass by value)
    storeByValue(d);

    // Show all Distances (pass array)
    displayAll(distArr, count);


    return;
}

