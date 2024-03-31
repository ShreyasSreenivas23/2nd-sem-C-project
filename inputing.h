#ifndef INPUTING_H
#define INPUTING_H

struct Custdetail {
    char id[15];
    char name[50];
    char contact[20];
};

void details(struct Custdetail *customer);

#endif
