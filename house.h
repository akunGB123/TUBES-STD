#ifndef HOUSE_H_INCLUDED
#define HOUSE_H_INCLUDED
#include <iostream>
#include "People.h"
#define first(L) L.first
#define prev(P) P->prev
#define next(P) P->next
#define info(P) P->info

using namespace std;

typedef int infotypeHouse;
typedef struct elmHouse adrHouse;

struct elmHouse{
    infotypeHouse info;
    adrHouse next;
    adrHouse prev;
    listPpl lpeople;
};

struct listHouse{
    adrHouse first;
};


#endif // HOUSE_H_INCLUDED
