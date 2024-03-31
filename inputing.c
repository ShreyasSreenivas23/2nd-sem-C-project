#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "customer.h"

void storeCustomer(struct Custdetail *customer) {
    char customername[50];
    printf("Enter your name: ");
    gets(customername);
    char num[10];
    printf("Enter phone number: ");
    gets(num);
    char custid[15];
    printf("Enter customer id: ");
    gets(custid);
    strcpy(customer->name, customername);
    strcpy(customer->contact, num);
    strcpy(customer->id, custid);
}
