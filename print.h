#ifndef PRINT_H
#define PRINT_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char products[10][50] = {
        "MAAZA", "LAYS", "GONEMAD ", "BUN SAMOSA", "ICE CREAM SANDWICH",
        "BOILED EGG", "STING ", "BHEL PURI", "COFFEE ", "PANEER ROLL"
    };
float prices[10] = {
        10.00, 20.00, 5.00, 15.00, 30.00, 25,00, 20.00, 35.00, 10.00, 60.00
    };
void print(char name[],char id[] ,char mobile[]) {

    printf("\n--- Bill Details ---\n");
    printf("User Details:\nName: %sUser ID: %s\nMobile: %s\n\n", name, id, mobile);


}
void print2(int boughtProducts[10], float totalAmount){
    printf("Products Purchased:\n");
    for (int i = 0; i < 10; i++) {
        if (boughtProducts[i] > 0) {
            printf("%s - $%.2f x %d\n",products[i], prices[i], boughtProducts[i]);
        }
    }
    printf("\nTotal Amount: $%.2f\n", totalAmount);

    printf("\n--- Have A Good Day ---\n");
}
#endif
