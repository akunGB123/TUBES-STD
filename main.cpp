#include "house.h"
using namespace std;

int main()
{
    adrHouse PH;
    adrPpl PP;
    listHouse LH;
    listPpl LP;
    int x;
    createListHouse(LH);
    createListPeople(LP);
    createNewElmHouse(10,PH);
    insertLastH(LH,PH);
    printInfoH(LH);
    createNewElmPeople(1,PP);
    insertLastP(LP,PP);
    printInfoP(LP);
    /*adrHouse P;
    listHouse LH;
    listPpl LP;
    createListHouse(LH);
    createNewElmHouse(2,P);
    insertFirstH(LH,P);


    createNewElmHouse(3,P);
    insertLastH(LH,P);

    createNewElmHouse(5,P);
    insertLastH(LH,P);

    createNewElmHouse(4,P);
    adrHouse Prec = next(first(LH));
    insertAfterH(LH,Prec,P);

    createNewElmHouse(6,P);
    insertLastH(LH,P);
    printInfoH(LH);

    Prec = searchAddressH(LH,1);
   // cout<< (Prec);
    deleteAfterH(LH,Prec,P);


    printInfoH(LH);

    adrHouse Q = first(LH);
    while(next(Q) != NULL){
        Q = next(Q);
    }
    while(Q != NULL){
        cout<< info(Q) << " ";
        Q = prev(Q);
    }*/
    //cout<<info(next(next(first(LH))));
    return 0;
}
