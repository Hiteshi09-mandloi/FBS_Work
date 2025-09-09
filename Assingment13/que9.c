#include <stdio.h>

// Define structure
typedef struct Complex {
    float real;
    float imag;
} Complex;

#define MAX 5
Complex compArr[MAX];   // global array
int count = 0;

// 1?? Pass by Value
void storeByValue(Complex c) {
    printf("Enter Complex Number (real imag): ");
    scanf("%f %f", &c.real, &c.imag);

    if (count < MAX) {
        compArr[count] = c;   // copy struct into global array
        count++;
    }
}

// 2?? Pass Array (pass by address automatically)
void displayAll(Complex arr[], int size) {
    printf("\n--- All Complex Numbers ---\n");
    int i;
    for (i = 0; i < size; i++) {
        printf("%.2f + %.2fi\n", arr[i].real, arr[i].imag);
    }
}


void main() {
    Complex c;

    // Store one Complex number (pass by value)
    storeByValue(c);

    // Show all Complex numbers (pass array)
    displayAll(compArr, count);

    return;
}

