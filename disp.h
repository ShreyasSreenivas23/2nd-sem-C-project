#ifndef DISP_H
#define DISP_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void displayMenu() {
    char products[10][50] = {
        "MAAZA", "LAYS", "GONEMAD ", "BUN SAMOSA", "ICE CREAM SANDWICH",
        "BOILED EGG", "STING ", "BHEL PURI", "COFFEE ", "PANEER ROLL"
    };
    float prices[10] = {
        10.00, 20.00, 5.00, 15.00, 30.00, 25,00, 20.00, 35.00, 10.00, 60.00
    };
    printf("Product Menu:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d. %s - RS.%.2f\n", i + 1, products[i], prices[i]);
    }
    printf("\n");
    printf("\n");
}
#endif
