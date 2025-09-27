#include<stdio.h>
#include <math.h>

int countDigits(int n) {
    int count = 0;
    while (n!=0) {
        count++;
        n /= 10;
    }
    return count;
}


int sumof1(int n) {
    if (n == 0)
        return 0;
    static int count = 0;
    if (count == 0)  // initialize only once
        count = countDigits(n);

    int rem = n % 10;

    return (int)pow(rem, temp) + sumof1(n / 10);
}

void main() {
    int num = 153;
    int result = sumof1(num);

    printf("Result = %d\n", result);
    return;
}
