#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED
#include <iostream>

#define first(L) L.first
#define prev(P) P->prev
#define next(P) P->next
#define info(P) P->info

using namespace std;
//house
typedef int infotype;
typedef struct elmHouse *adrHouse;

struct elmHouse{
    infotype info;
    address prev;
    address next;
};

struct List{
    address first;
};

bool isEmpty(List L);

void createList(List &L);
void createNewElm(infotype X, address &P);

void

#endif // LIST_H_INCLUDED
