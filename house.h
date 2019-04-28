#ifndef HOUSE_H_INCLUDED
#define HOUSE_H_INCLUDED
#include <iostream>
#include "People.h"
#define first(L) L.first
#define last(L) L.last
#define prev(P) P->prev
#define next(P) P->next
#define info(P) P->info

using namespace std;

typedef int infotypeHouse;
typedef struct elmHouse *adrHouse;

struct elmHouse{
    infotypeHouse info;
    adrHouse next;
    adrHouse prev;
    listPpl lpeople;
};

struct listHouse{
    adrHouse first;
    adrHouse last;
};

void createListHouse(listHouse &L);
void createNewElmHouse(infotypeHouse X, adrHouse &P);
bool isEmptyH(listHouse L);

void insertFirstH(listHouse &L, adrHouse P);
void insertAfterH(listHouse &L, adrHouse Prec, adrHouse P);
void insertLastH(listHouse &L, adrHouse P);

void deleteFirstH(listHouse &L, adrHouse &P);
void deleteAfterH(listHouse &L, adrHouse Prec, adrHouse &P);
void deleteLastH(listHouse &L, adrHouse &P);

adrHouse searchAddressH(listHouse L, infotypeHouse X);
void printInfoH(listHouse L);

#endif // HOUSE_H_INCLUDED
