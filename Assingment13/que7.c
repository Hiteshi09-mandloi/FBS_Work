#include <stdio.h>

// Define structure
typedef struct Time {
    int hour;
    int min;
    int sec;
} Time;

#define MAX 5
Time timeArr[MAX];   // global array
int count = 0;

// 1?? Pass by Value
void storeByValue(Time t) {
    printf("Enter Time (hh mm ss): ");
    scanf("%d %d %d", &t.hour, &t.min, &t.sec);

    if (count < MAX) {
        timeArr[count] = t;   // copy into global array
        count++;
    }
}

// 2?? Pass Array (pass by address automatically)
void displayAll(Time arr[], int size) {
    printf("\n--- All Times ---\n");
    int i;
    for (i = 0; i < size; i++) {
        printf("%02d:%02d:%02d\n", arr[i].hour, arr[i].min, arr[i].sec);
    }
}



void main() {
    Time t;

    // Store one Time (pass by value)
    storeByValue(t);

    // Show all Times (pass array)
    displayAll(timeArr, count);

    return;
}

