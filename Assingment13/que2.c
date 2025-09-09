#include <stdio.h>

typedef struct employee {
    int id;
    char name[15];
    float salary;
} emp;

int max = 5;
int min = 0;
emp empArr[5];  // global array of employees

void display() {
    emp e;  // declare a local employee variable

    printf("Enter the id: ");
    scanf("%d", &e.id);

    printf("Enter the name: ");
    scanf("%s", e.name);

    printf("Enter the Salary: ");
    scanf("%f", &e.salary);

    if (min < max) {
        empArr[min] = e;  // store employee in array
        min++;
    }

    printf("\n--- Employee Records ---\n");
    int i;
    for (i = 0; i < min; i++) {
        printf("Id: %d\n", empArr[i].id);
        printf("Name: %s\n", empArr[i].name);
        printf("Salary: %.2f\n\n", empArr[i].salary);
    }
}

int main() {
    display();   // call function
    display();   // call again to add another employee
    return 0;
}

