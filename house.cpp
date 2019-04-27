#include "house.h"

void createListHouse(listHouse &L){
    first(L) = NULL;
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
    }*/
    prev(P) = Prec;
    next(P) = next(Prec);
    next(Prec) = P;cout<< "pler";
    prev(next(P)) = P;cout<< "pler";

}
void insertLastH(listHouse &L, adrHouse P){
    adrHouse Q = first(L);
    if(isEmptyH(L)){
        insertFirstH(L,P);
    }
    else{
        while(next(Q) != NULL){
            Q = next(Q);
        }
        prev(P) = Q;
        next(Q) = P;
    }
}


void deleteFirstH(listHouse &L, adrHouse &P){
    P = first(L);
    /*if(next(first(L)) == NULL){
       first(L) = NULL;
    }
    else{*/
        first(L) = next(P);
        next(P) = NULL;
        prev(first(L)) = NULL;
    //}

}
void deleteAfterH(listHouse &L, adrHouse Prec, adrHouse &P);
void deleteLastH(listHouse &L, adrHouse &P){

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
