#include <stdio.h>

typedef struct admin{
    int id;
    char name[15];
    float salary;
    float allowance;
} admin;

int max = 5;
int min = 0;
admin adminArr[5];  // global array of employees
void store(admin e){//pass by value
	
    printf("Enter the id: ");
    scanf("%d", &e.id);

    printf("Enter the name: ");
    scanf("%s", e.name);

    printf("Enter the allowance: ");
    scanf("%f", &e.allowance);
    
    
    printf("Enter the Salary: ");
    scanf("%f", &e.salary);

    if (min < max) {
        adminArr[min] = e;  // store employee in array
        min++;
    }

}
void display() {
    //admin e;  // declare a local employee variable

    printf("\n--- Employee Records ---\n");
    int i;
    for (i = 0; i < min; i++) {
        printf("Id: %d\n", adminArr[i].id);
        printf("Name: %s\n", adminArr[i].name);
        printf("Salary: %.2f\n\n", adminArr[i].salary);
        printf("allowance: %.2f\n\n", adminArr[i].allowance);
    }
}

int main() {
	admin e;
    store(e);  // call function
    display();   // call again to add another employee
    return 0;
}

