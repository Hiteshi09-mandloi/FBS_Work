#include <stdio.h>

typedef struct hr{
    int id;
    char name[15];
    float salary;
    float commission;
}hr;

int max = 5;
int min = 0;
hr hrArr[5];  // global array of employees
void store(hr *e){//pass by value
	
    printf("Enter the id: ");
    scanf("%d", &e->id);

    printf("Enter the name: ");
    scanf("%s", e->name);

    printf("Enter the commission: ");
    scanf("%f", &e->commission);
    
    
    printf("Enter the Salary: ");
    scanf("%f", &e->salary);

    if (min < max) {
        hrArr[min] = &e;  // store employee in array
        min++;
    }

}
void display() {
    //admin e;  // declare a local employee variable

    printf("\n--- Employee Records ---\n");
    int i;
    for (i = 0; i < min; i++) {
        printf("Id: %d\n", hrArr[i].id);
        printf("Name: %s\n", hrArr[i].name);
        printf("Salary: %.2f\n\n", hrArr[i].salary);
        printf("commission: %.2f\n\n", hrArr[i].commission);
    }
}

void main() {
	hr e;
    store(e);  // call function
    display();   // call again to add another employee
    return;
}

