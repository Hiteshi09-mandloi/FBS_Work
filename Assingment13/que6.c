#include <stdio.h>

// Define structure
typedef struct Date {
    int date;
    int month;
    int year;
} Date;

#define MAX 5
Date dateArr[MAX];   // global array
int count = 0;

// 1?? Pass by Value
void storeByValue(Date d) {
    printf("Enter Date (dd mm yyyy): ");
    scanf("%d %d %d", &d.date, &d.month, &d.year);

    if (count < MAX) {
        dateArr[count] = d;   // copy into global array
        count++;
    }
}

// 2?? Pass Array (pass by address automatically)
void displayAll(Date arr[], int size) {
    printf("\n--- All Dates ---\n");
    int i;
    for (i = 0; i < size; i++) {
        printf("%02d-%02d-%04d\n", arr[i].date, arr[i].month, arr[i].year);
    }
}

int main() {
    Date d;

    // Store one Date (pass by value)
    storeByValue(d);

    // Show all dates (pass array)
    displayAll(dateArr, count);

    return 0;
}

