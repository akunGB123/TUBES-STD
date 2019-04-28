#include "house.h"
using namespace std;

int main()
{
    adrHouse P;
    listHouse LH;
    listPpl LP;
    createListHouse(LH);
    createNewElmHouse(2,P);
    insertFirstH(LH,P);


    createNewElmHouse(3,P);
    insertLastH(LH,P);

    createNewElmHouse(3,P);
    insertLastH(LH,P);

    createNewElmHouse(99,P);
    adrHouse Prec = next(first(LH));
    insertAfterH(LH,Prec,P);

    createNewElmHouse(5,P);
    insertLastH(LH,P);

    deleteAfterH(LH,Prec,P);

    printInfoH(LH);

   /* adrHouse Q = first(LH);
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
