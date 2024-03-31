#ifndef BILLING_H
#define BILLING_H

#include "inputing.h"
#include "choose.h"

void printBill(struct Custdetail customer, struct Item items[], int quantities[], int numItems, float total);

#endif
