#include <stdio.h>

void main() {
    float basic, da, ta, hra, total;
    basic=8000;
    if (basic <= 5000) {
        da = basic * 0.10;  
        ta = basic * 0.20;  
        hra = basic * 0.25; 
    } else {
        da = basic * 0.15;  
        ta = basic * 0.25;
        hra = basic * 0.30; 
    }
    total = basic + da + ta + hra;
    printf("Total Salary = %.2f\n", total);
}

