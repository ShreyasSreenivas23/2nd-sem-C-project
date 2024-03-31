#include <stdio.h>
#include "choose.h"

float enterItems(struct Item items[], int quantities[], int *numItems) {
    float total = 0;
    printf("Enter no of items: ");
    scanf("%d", numItems);
    for (int i = 0; i < *numItems; i++) {
        printf("Enter which item number you want%d: ", i+1);
        int id;
        scanf("%d", &id);
        switch (id) {
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
            case 10:
                printf("Enter quantity%d: ", i+1);
                scanf("%d", &quantities[i]);
                total += items[id-1].price * quantities[i];
                break;
            default:
                printf("Invalid");
                break;
        }
    }
    return total;
}

