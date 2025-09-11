#include <stdio.h>
#include <string.h>

// define struct globally
struct product {
    int id;
    char name[20];
    float price;
} p;  
float calculateTotalPrice() {
    float dis, totalprice, gst, finalprice;

    if (p.price >= 500) {
        dis = p.price * 0.20;  // 20% discount
    } else {
        dis = p.price * 0.05;  // 5% discount
    }

    printf("Discount: %.2f\n", dis);

    totalprice = p.price - dis;
    printf("Price after discount: %.2f\n", totalprice);

    gst = totalprice * 0.18;
    printf("GST: %f\n", gst);

    finalprice = totalprice + gst;
    return finalprice;
}

void display() {
    printf("Id: %d\n", p.id);
    printf("Name: %s\n", p.name);
    printf("Final Price: %f\n", calculateTotalPrice());
}

int main() {
    printf("Enter Id: ");
    scanf("%d", &p.id);

    printf("Enter name: ");
    scanf("%s", p.name);

    printf("Enter price: ");
    scanf("%f", &p.price);  
    display();

    return 0;
}

