#ifndef CHOOSE_H
#define CHOOSE_H

#include "inputing.h"

struct Item {
    int sno;
    char itemdet[50];
    float price;
};

float enterItems(struct Item items[], int quantities[], int *numItems);

#endif
