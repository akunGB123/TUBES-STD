#ifndef PEOPLE_H_INCLUDED
#define PEOPLE_H_INCLUDED
#include <iostream>

#define first(L) L.first
#define last(L) L.last
#define prev(P) P->prev
#define next(P) P->next
#define info(P) P->info

using namespace std;

struct infotypePpl{
    string nama_ppl;
    int umur_ppl;
    string kelamin_ppl;
    string pekerjaan_ppl;

};
typedef struct elmPpl *adrPpl;

struct elmPpl{
    infotypePpl info;
    adrPpl next;
    adrPpl prev;
};

struct listPpl{
    adrPpl first;
    adrPpl last;
};

void createListPeople(listPpl &L);
void createNewElmPeople(infotypePpl X, adrPpl &P);
bool isEmptyP(listPpl L);

void insertFirstP(listPpl &L, adrPpl P);
void insertAfterP(listPpl &L, adrPpl Prec, adrPpl P);
void insertLastP(listPpl &L, adrPpl P);

void deleteFirstP(listPpl &L, adrPpl &P);
void deleteAfterP(listPpl &L, adrPpl Prec, adrPpl &P);
void deleteLastP(listPpl &L, adrPpl &P);

adrPpl searchAddressP(listPpl L, infotypePpl X);
void printInfoP(listPpl L);
#endif // PEOPLE_H_INCLUDED
