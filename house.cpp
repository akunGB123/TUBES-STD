#include "house.h"

void createListHouse(listHouse &L){
    first(L) = NULL;
    last(L) = NULL;
}
void createNewElmHouse(infotypeHouse X, adrHouse &P){
    P = new elmHouse;
    info(P) = X;
    prev(P) = NULL;
    next(P) = NULL;
}

bool isEmptyH(listHouse L){
    if(first(L) == NULL){
        return true;
    } else  return false;
}

void insertFirstH(listHouse &L, adrHouse P){
    if(isEmptyH(L)){
        first(L) = P;
        last(L) = P;
    }
    else {
        next(P) = first(L);
        prev(first(L)) = P;
        first(L) = P;
    }
}
void insertAfterH(listHouse &L, adrHouse Prec, adrHouse P){
    /*adrHouse Q = first(L);
    while(next(Q) != NULL){
        Q = next(Q);
    }
    prev(P) = Prec;
    next(P) = next(Prec);
    next(Prec) = P;cout<< "pler";
    prev(next(P)) = P;cout<< "pler";
*/
    if(first(L) == NULL){
        insertFirstH(L,P);
    }
    else if(Prec == last(L)){
        insertLastH(L,P);
    }
    else{
        next(P) = next(Prec);
        prev(P) = Prec;//cout<< "pler";
        prev(next(Prec)) = P;
        next(Prec) = P;
    }
}
void insertLastH(listHouse &L, adrHouse P){
    if(isEmptyH(L)){
        insertFirstH(L,P);
    }
    else{
        prev(P) = last(L);
        next(last(L)) = P;
        last(L) = P;
    }
}


void deleteFirstH(listHouse &L, adrHouse &P){
    P = first(L);
    if(isEmptyH(L)){
        cout<< "List Kosong";
    }
    else if(first(L)==last(L)){
        first(L) = NULL;
        last(L) = NULL;;
        delete P;

    }
    else{
        first(L) = next(P);
        next(P) = NULL;
        prev(first(L)) = NULL;
        delete P;

    }

}
void deleteAfterH(listHouse &L, adrHouse Prec, adrHouse &P){
    //P = next(Prec);
    if(first(L) == NULL){
        cout<< "List Kosong";
    }
    else if(Prec == NULL){
    }
    else if(next(Prec) == last(L)){
        deleteLastH(L,P);
    }
    else{
        next(Prec) = next(P);
        prev(next(Prec)) = Prec;
        next(P) = NULL;
        prev(P) = NULL;
        delete P;
    }

}
void deleteLastH(listHouse &L, adrHouse &P){
    P = last(L);
    if(isEmptyH(L) || first(L)==last(L)){
        deleteFirstH(L,P);
    }
    else{
        last(L) = prev(P);
        next(last(L)) = NULL;
        prev(P) = NULL;
        delete P;

    }
}

adrHouse searchAddressH(listHouse L, infotypeHouse X){
    adrHouse P = first(L);
    while(P != NULL && info(P) != X){
        P = next(P);
    }
    return P;

}
void printInfoH(listHouse L){
    if(isEmptyH(L))
    {
        cout<<"List Kosong";
    }else
    {
        adrHouse P = first(L);
        while(P != NULL)
        {
            cout<<info(P)<<" ";
            P = next(P);
        }
        cout<<endl;
    }
}
