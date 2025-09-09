#include <stdio.h>

typedef struct SalesManager {
    int id;
    char name[15];
    float salary;
    float incentive;
    float target;
} salesManager;

int max = 5;
int min = 0;
salesManager salesManagerArr[5];  // global array of employees

void store(salesManager *e) {
    printf("Enter the id: ");
    scanf("%d", &e->id);

    printf("Enter the name: ");
    scanf("%s", e->name);

    printf("Enter the Salary: ");
    scanf("%f", &e->salary);

    printf("Enter the incentive: ");
    scanf("%f", &e->incentive);

    printf("Enter the target: ");
    scanf("%f", &e->target);

    if (min < max) {
        salesManagerArr[min] = *e;  // copy struct by value
        min++;
    }
}

void display() {
    printf("\n--- Employee Records ---\n");
    int i;
    for (i = 0; i < min; i++) {
        printf("Id: %d\n", salesManagerArr[i].id);
        printf("Name: %s\n", salesManagerArr[i].name);
        printf("Salary: %.2f\n", salesManagerArr[i].salary);
        printf("Target: %.2f\n", salesManagerArr[i].target);
        printf("Incentive: %.2f\n\n", salesManagerArr[i].incentive);
    }
}

int main() {
    salesManager e;
    store(&e);   // pass by address
    display();
    return 0;
}

