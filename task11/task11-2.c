#include <stdio.h>

struct Item {
    char name[10];
    float price;
    int quantity;
};

struct Item update(struct Item item, float priceIncrement, int quantityIncrement) {

    printf("Update values of item\n");

    printf("Name: ");
    scanf("%s", item.name);

    printf("Price: ");
    scanf("%f", &item.price);


    item.price += priceIncrement;

    printf("Quantity: ");
    scanf("%d", &item.quantity);

    item.quantity += quantityIncrement;

    return item;
}

int main() {
    struct Item product;
    float priceIncrement;
    int quantityIncrement;

    printf("Input increment values:\n");
    printf("Price increment and quantity increment:\n");
    scanf("%f %d", &priceIncrement, &quantityIncrement);

    printf("\nProduct details:\n");
    printf("Name: ");
    scanf("%s", product.name);
    printf("Price: ");
    scanf("%f", &product.price);
    printf("Quantity: ");
    scanf("%d", &product.quantity);


    printf("\nTotal result: %.6f\n", product.price * product.quantity);

    printf("\nUpdating the product...\n");
    product = update(product, priceIncrement, quantityIncrement);

    printf("\nUpdated product details:\n");


    printf("Name: %s\n", product.name);
    printf("Price: %.6f\n", product.price);
    printf("Quantity: %d\n", product.quantity);
    printf("Total result: %.6f\n", product.price * product.quantity);

    return 0;
}
