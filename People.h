#ifndef PEOPLE_H_INCLUDED
#define PEOPLE_H_INCLUDED

#include <iostream>

#define first(L) L.first
#define prev(P) P->prev
#define next(P) P->next
#define info(P) P->info

using namespace std;

typedef int infotypePpl;
typedef struct elmPpl adrPpl;

struct elmPpl{
    infotypePpl info;
    adrHouse next;
    adrHouse prev;

};

struct listPpl{
    adrPpl first;
};

#endif // PEOPLE_H_INCLUDED
