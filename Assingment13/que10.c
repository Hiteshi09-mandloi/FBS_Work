#include <stdio.h>

// Define structure
typedef struct Product {
    int id;
    char name[20];
    int quantity;
    float price;
} Product;

int max = 5, min = 0;
Product productArr[5];   // Global array

// 1?? Pass by Value
void storeByValue(Product p) {
    printf("Enter Product Id: ");
    scanf("%d", &p.id);
    printf("Enter Product Name: ");
    scanf("%s", p.name);
    printf("Enter Quantity: ");
    scanf("%d", &p.quantity);
    printf("Enter Price: ");
    scanf("%f", &p.price);

    if (min < max) {
        productArr[min] = p; // copy into global array
        min++;
    }
}

// 2?? Pass array (pass by address automatically)
void displayAll(Product arr[], int size) {
    printf("\n--- Product Records ---\n");
    int i;
    for (i = 0; i < size; i++) {
        printf("ID: %d\n", arr[i].id);
        printf("Name: %s\n", arr[i].name);
        printf("Quantity: %d\n", arr[i].quantity);
        printf("Price: %.2f\n\n", arr[i].price);
    }
}

// 3?? Pass one structure by address
void displayOne(Product *p) {
    printf("\n--- Single Product ---\n");
    printf("ID: %d\n", p->id);
    printf("Name: %s\n", p->name);
    printf("Quantity: %d\n", p->quantity);
    printf("Price: %.2f\n\n", p->price);
}

int main() {
    Product p; // local variable

    // Pass by value
    storeByValue(p);

    // Pass array (global array of products)
    displayAll(productArr, min);

    // Pass one structure variable by address
    displayOne(&productArr[0]);

    return 0;
}

