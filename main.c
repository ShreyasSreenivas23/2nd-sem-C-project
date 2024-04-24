#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "disp.h"
#include "print.h"
struct Product {
    char name[50];
    float price;
};

int main() {
    struct Product *products = malloc(10 * sizeof(struct Product));
    if (products == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    strcpy(products[0].name, "MAAZA");
    products[0].price = 10.00;
    strcpy(products[1].name, "LAYS");
    products[1].price = 20.00;
    strcpy(products[2].name, "GONEMAD ");
    products[2].price = 5.00;
    strcpy(products[3].name, "BUN SAMOSA");
    products[3].price = 15.00;
    strcpy(products[4].name, "ICE CREAM SANDWICH");
    products[4].price = 30.00;
    strcpy(products[5].name, "BOILED EGG");
    products[5].price = 25.00;
    strcpy(products[6].name, "STING ");
    products[6].price = 20.00;
    strcpy(products[7].name, "BHEL PURI");
    products[7].price = 35.00;
    strcpy(products[8].name, "COFFEE ");
    products[8].price = 10.00;
    strcpy(products[9].name, "PANEER ROLL");
    products[9].price = 60.00;

    char name[50];
    char id[11];
    char mobile[11];
    float totalAmount = 0.0;
    char option;
    int *boughtProducts = calloc(10, sizeof(int));
    if (boughtProducts == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    printf("Enter your user ID (alphanumeric, max 10 characters): ");
    scanf("%10s", id);
    fflush(stdin);
    printf("Enter your mobile number: ");
    scanf("%10s", mobile);

    do {
        displayMenu();
        int choice;
        printf("Enter your choice (1-10): ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 10) {
            int quantity;
            printf("Enter quantity: ");
            scanf("%d", &quantity);
            totalAmount += (products[choice - 1].price * quantity);
            boughtProducts[choice - 1] = quantity;
        } else {
            printf("Invalid choice. Please try again.\n");
            continue;
        }

        printf("Is that it? (y/n): ");
        scanf(" %c", &option);
    } while (option != 'y' && option != 'Y');

    print(name, id, mobile);
    print2(boughtProducts, totalAmount);

    return 0;
}
