#include <stdio.h>
#include "billing.h"

void printBill(struct Custdetail customer, struct Item items[], int quantities[], int numItems, float total) {
    printf("\nCustomer Information:\n");
    printf("ID: %d\n", customer.id);
    printf("Name: %s\n", customer.name);
    printf("Contact: %s\n", customer.contact);
    printf("\nTotal Bill: Rs%.2f\n", total);
}
