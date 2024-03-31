#include <stdio.h>
#include <stdlib.h>
#include "inputing.h"
#include "choose.h"
#include "billing.h"
struct Item items[10]= {
        {1, "MAAZA",10.00},
        {2, "LAYS",20.00},
        {3, "GONEMAD",5.00},
        {4, "BUN SAMOSA",15.00},
        {5, "ICE CREAM SANDWICH",30.00},
        {6, "BOILED EGG",25.00},
        {7, "STING",18.75},
        {8, "BHEL PURI",35.00},
        {9, "COFFEE",10.00},
        {10,"PANEER ROLL",60.00}
    };
int main() {
    struct Custdetail customer;
    struct Item items[10] ;
    int quantities[10];
    int numItems;

    storeCustomer(&customer);

    float total = enterItems(items, quantities, &numItems);

    printBill(customer, items, quantities, numItems, total);

    return 0;
}
