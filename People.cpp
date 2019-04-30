#include "People.h"

void createListPeople(listPpl &L){
    first(L) = NULL;
    last(L) = NULL;
}
void createNewElmPeople(infotypePpl X, adrPpl &P){
    P = new elmPpl;
    info(P) = X;
    prev(P) = NULL;
    next(P) = NULL;

}
bool isEmptyP(listPpl L){
    if(first(L) == NULL){
        return true;
    } else  return false;
}

void insertFirstP(listPpl &L, adrPpl P){
    if(isEmptyP(L)){
        first(L) = P;
        last(L) = P;
    }
    else {
        next(P) = first(L);
        prev(first(L)) = P;
        first(L) = P;
    }
}
void insertAfterP(listPpl &L, adrPpl Prec, adrPpl P){
    if(first(L) == NULL){
        insertFirstP(L,P);
    }
    else if(Prec == last(L)){
        insertLastP(L,P);
    }
    else{
        next(P) = next(Prec);
        prev(P) = Prec;//cout<< "pler";
        prev(next(Prec)) = P;
        next(Prec) = P;
    }
}
void insertLastP(listPpl &L, adrPpl P){
    if(isEmptyP(L)){
        insertFirstP(L,P);
    }
    else{
        prev(P) = last(L);
        next(last(L)) = P;
        last(L) = P;
    }
}

void deleteFirstP(listPpl &L, adrPpl &P){
    P = first(L);
    if(isEmptyP(L)){
        cout<< "List Kosong";
    }
    else if(first(L)==last(L)){
        first(L) = NULL;
        last(L) = NULL;
        delete P;
    }
    else{
        first(L) = next(P);
        next(P) = NULL;
        prev(first(L)) = NULL;
        delete P;

    }

}
void deleteAfterP(listPpl &L, adrPpl Prec, adrPpl &P){
    if(first(L) == NULL){
        cout<< "List Kosong";
    }
    else if(Prec == NULL){
        deleteFirstP(L,P);
    }
    else if(next(Prec) == last(L)){
        deleteLastP(L,P);
    }
    else{
        next(Prec) = next(P);
        prev(next(Prec)) = Prec;
        next(P) = NULL;
        prev(P) = NULL;
        delete P;
    }
}
void deleteLastP(listPpl &L, adrPpl &P){
    P = last(L);
    if(isEmptyP(L) || first(L)==last(L)){
        deleteFirstP(L,P);
    }
    else{
        last(L) = prev(P);
        next(last(L)) = NULL;
        prev(P) = NULL;
        delete P;
    }
}

adrPpl searchAddressP(listPpl L, infotypePpl X){
    adrPpl P = first(L);
    while(P != NULL){
        if(info(P).nama_ppl == X.nama_ppl){
            return P;
        }
        P = next(P);
    }
    return NULL;
}

void printInfoP(listPpl L){
    if(isEmptyP(L))
    {
        cout<<"List Kosong";
    }else
    {
        adrPpl P = first(L);
        while(P != NULL)
        {
            cout<<"Nama : "<<info(P).nama_ppl<<endl;
            cout<<"Umur : "<<info(P).umur_ppl<<endl;
            cout<<"Kelamin : "<<info(P).kelamin_ppl<<endl;
            cout<<"Pekerjaan : "<<info(P).pekerjaan_ppl<<endl;
            P = next(P);
            cout<<"====================="<<endl;
        }
        cout<<endl;
    }
}
